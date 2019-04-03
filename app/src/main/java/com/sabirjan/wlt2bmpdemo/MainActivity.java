package com.sabirjan.wlt2bmpdemo;

import android.app.Activity;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.Toast;

import com.sabirjan.reader.tools.Tool;

/**
 * @author Administrator
 * wlt的图片解码库不支持64位的手机，如果放到64位手机上，解出来的图片可能是黑乎乎的
 */
public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}
