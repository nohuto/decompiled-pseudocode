__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetFloatProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  float v6; // xmm0_4
  signed int v7; // r8d
  __int64 v8; // rcx
  int v9; // eax
  float *v10; // r9
  float v11; // xmm1_4
  bool v12; // cl
  unsigned int v13; // edx
  unsigned int v14; // edx

  v6 = 0.0;
  v7 = *((_BYTE *)this + 145) != 0 ? 0xC000000D : 0;
  if ( a2 > 0xA )
  {
    switch ( a2 )
    {
      case 0xBu:
        v8 = 124LL;
        goto LABEL_15;
      case 0xCu:
        v8 = 128LL;
        goto LABEL_15;
      case 0xDu:
        v8 = 132LL;
        goto LABEL_15;
      case 0xEu:
        v8 = 136LL;
        goto LABEL_15;
      case 0xFu:
        v8 = 140LL;
        goto LABEL_15;
    }
    return (unsigned int)DirectComposition::CGeometryMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  switch ( a2 )
  {
    case 0xAu:
      v8 = 120LL;
      goto LABEL_15;
    case 4u:
      v6 = FLOAT_N2097152_0;
      v9 = -4097;
      v8 = 96LL;
      goto LABEL_16;
    case 5u:
      v6 = FLOAT_N2097152_0;
      v9 = -8193;
      v8 = 100LL;
      goto LABEL_16;
    case 6u:
      v6 = FLOAT_N2097152_0;
      v9 = -16385;
      v8 = 104LL;
      goto LABEL_16;
    case 7u:
      v6 = FLOAT_N2097152_0;
      v9 = -32769;
      v8 = 108LL;
      goto LABEL_16;
  }
  if ( a2 != 8 )
  {
    if ( a2 == 9 )
    {
      v8 = 116LL;
      goto LABEL_15;
    }
    return (unsigned int)DirectComposition::CGeometryMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v8 = 112LL;
LABEL_15:
  v9 = -2049;
LABEL_16:
  v10 = (float *)((char *)this + v8);
  if ( (DirectComposition::CRectangleClipMarshaler *)((char *)this + v8) && v7 >= 0 )
  {
    v11 = FLOAT_2097152_0;
    if ( a3 <= 2097152.0 )
      v11 = fmaxf(a3, v6);
    if ( *v10 == v11 )
    {
      v12 = 0;
    }
    else
    {
      *v10 = v11;
      v12 = 1;
    }
    *a4 = v12;
    v13 = a2 - 4;
    if ( !v13 || (v14 = v13 - 1) == 0 || v14 - 1 < 2 )
    {
      *a4 = 1;
      goto LABEL_26;
    }
    if ( v12 )
LABEL_26:
      *((_DWORD *)this + 4) &= v9;
  }
  return (unsigned int)v7;
}
