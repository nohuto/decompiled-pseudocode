__int64 __fastcall ColorConversion::GetConversionShader(
        enum DXGI_COLOR_SPACE_TYPE a1,
        char a2,
        int a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct ColorConversion::Shader *a5,
        bool *a6)
{
  enum DXGI_COLOR_SPACE_TYPE v7; // r11d
  unsigned int v8; // r10d
  bool v9; // bl
  int v10; // ecx
  __int32 v11; // r11d
  __int32 v12; // r11d
  __int32 v13; // r11d
  int v14; // r11d
  int v15; // r11d
  int v16; // r11d
  int v17; // r11d
  unsigned int v18; // eax
  int v19; // r9d
  int v20; // r9d
  int v21; // r9d
  bool v22; // zf
  int v23; // r9d
  __int64 v24; // rcx

  v7 = a1;
  v8 = -2003292288;
  if ( a6 )
  {
    v9 = 1;
    if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 || ColorConversion::IsHDRColorSpace(a1) )
      v9 = 0;
    *a6 = v9;
  }
  v10 = 0;
  if ( v7 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v8 = 0;
      v18 = 0;
      goto LABEL_74;
    }
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    {
      v10 = 6;
      goto LABEL_23;
    }
    goto LABEL_70;
  }
  v11 = v7 - 1;
  if ( !v11 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v10 = 2;
      goto LABEL_67;
    }
    v23 = a4 - 1;
    if ( !v23 )
    {
      v10 = 46;
      goto LABEL_23;
    }
    if ( v23 == 11 )
    {
      v10 = 4;
      goto LABEL_23;
    }
    goto LABEL_70;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a4 )
    {
      if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        goto LABEL_70;
      if ( a3 == 8 )
      {
        v10 = 22;
        goto LABEL_23;
      }
      v22 = a3 == 10;
      goto LABEL_55;
    }
    if ( a3 == 8 )
    {
      v10 = 20;
      goto LABEL_23;
    }
    if ( a3 != 10 )
      goto LABEL_70;
LABEL_60:
    v10 = 28;
    goto LABEL_67;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a4 )
    {
      v22 = a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
LABEL_55:
      if ( v22 )
      {
        v10 = 30;
        goto LABEL_23;
      }
      goto LABEL_70;
    }
    goto LABEL_60;
  }
  v14 = v13 - 9;
  if ( !v14 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v10 = 16;
      goto LABEL_67;
    }
    v21 = a4 - 1;
    if ( !v21 )
    {
      v10 = 18;
      goto LABEL_23;
    }
    if ( v21 == 11 )
      goto LABEL_23;
    goto LABEL_70;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v10 = 40;
      goto LABEL_67;
    }
    v20 = a4 - 1;
    if ( !v20 )
    {
      v10 = 42;
      goto LABEL_23;
    }
    if ( v20 == 11 )
    {
      v10 = 44;
      goto LABEL_23;
    }
    goto LABEL_70;
  }
  v16 = v15 - 3;
  if ( !v16 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v10 = 12;
      goto LABEL_67;
    }
    v19 = a4 - 1;
    if ( !v19 )
    {
      v18 = 10;
      v8 = 0;
      v10 = 10;
      goto LABEL_74;
    }
    if ( v19 == 11 )
      return v8;
    goto LABEL_70;
  }
  v17 = v16 - 3;
  if ( !v17 )
  {
    if ( a4 )
    {
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
      {
        if ( a3 == 8 )
        {
          v10 = 26;
          goto LABEL_23;
        }
        if ( a3 == 10 )
        {
          v10 = 34;
          goto LABEL_23;
        }
      }
    }
    else
    {
      if ( a3 == 8 )
      {
        v10 = 24;
        goto LABEL_23;
      }
      if ( a3 == 10 )
      {
        v10 = 32;
        goto LABEL_67;
      }
    }
LABEL_70:
    v18 = v10;
    if ( (v8 & 0x80000000) != 0 )
      return v8;
    goto LABEL_74;
  }
  if ( v17 != 1 )
    goto LABEL_70;
  if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
  {
    v10 = 36;
LABEL_67:
    v8 = 0;
    goto LABEL_70;
  }
  if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    goto LABEL_70;
  v10 = 38;
LABEL_23:
  v8 = 0;
  v18 = v10;
LABEL_74:
  v24 = (unsigned int)(v10 + 1);
  if ( !a2 )
    v24 = v18;
  *(_OWORD *)a5 = *((_OWORD *)&ColorConversion::g_rgShaders + v24);
  return v8;
}
