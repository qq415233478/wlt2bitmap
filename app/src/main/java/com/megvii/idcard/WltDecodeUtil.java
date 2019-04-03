package com.megvii.idcard;

public class WltDecodeUtil {

	public native int Wlt2Bmp(byte[] wlt,byte[] bmp);
	static{
		System.loadLibrary("Wlt2Bmp");
	}
}
