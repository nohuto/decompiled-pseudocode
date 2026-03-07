const char *__fastcall GetHlslNameAndSemantic(unsigned __int16 a1, const char **a2, const char **a3)
{
  unsigned int v3; // r9d
  const char *v4; // rcx
  unsigned int v5; // r9d
  const char *result; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d
  unsigned int v13; // r9d
  unsigned int v14; // r9d

  v3 = a1;
  v4 = 0LL;
  if ( v3 > 6 )
  {
    v7 = v3 - 7;
    if ( !v7 )
    {
      v4 = "CLIPPLANES1";
      result = "ClipPlanesW";
      goto LABEL_6;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v4 = "CLIPPLANES2";
      result = "RejectDistance0";
      goto LABEL_6;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v4 = "CLIPPLANES3";
      result = "PositionW";
      goto LABEL_6;
    }
    v10 = v9 - 247;
    if ( !v10 )
    {
      v4 = "TEXCOORD0";
      result = "uv0";
      goto LABEL_6;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v4 = "TEXCOORD1";
      result = "uv1";
      goto LABEL_6;
    }
    if ( v11 == 1 )
    {
      v4 = "TEXCOORD2";
      result = "uv2";
      goto LABEL_6;
    }
LABEL_25:
    result = 0LL;
    goto LABEL_6;
  }
  if ( v3 == 6 )
  {
    v4 = "CLIPPLANES0";
    result = "XYDot";
    goto LABEL_6;
  }
  if ( !v3 )
  {
    v4 = "SV_POSITION";
    result = "position";
    goto LABEL_6;
  }
  v5 = v3 - 1;
  if ( v5 )
  {
    v12 = v5 - 1;
    if ( !v12 )
    {
      v4 = "LIGHTINGDATA0";
      result = "XYZ_Light0Space";
      goto LABEL_6;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v4 = "LIGHTINGDATA1";
      result = "NormalXYZ_Light0Space";
      goto LABEL_6;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v4 = "LIGHTINGDATA2";
      result = "XYZ_Light1Space";
      goto LABEL_6;
    }
    if ( v14 == 1 )
    {
      v4 = "LIGHTINGDATA3";
      result = "NormalXYZ_Light1Space";
      goto LABEL_6;
    }
    goto LABEL_25;
  }
  v4 = "COLOR0";
  result = "color";
LABEL_6:
  *a2 = result;
  *a3 = v4;
  return result;
}
