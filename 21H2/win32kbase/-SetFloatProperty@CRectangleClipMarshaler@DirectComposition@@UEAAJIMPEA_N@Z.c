/*
 * XREFs of ?SetFloatProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C009CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z @ 0x1C021F190 (-SetFloatProperty@CGeometryMarshaler@DirectComposition@@MEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetFloatProperty(
        DirectComposition::CRectangleClipMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  char v4; // bl
  float v7; // xmm0_4
  int v8; // eax
  __int64 v9; // rcx
  float *v10; // rdx
  unsigned int v11; // ecx
  float v12; // xmm1_4
  bool v13; // dl

  v4 = *((_BYTE *)this + 153);
  v7 = 0.0;
  if ( a2 > 0xA )
  {
    switch ( a2 )
    {
      case 0xBu:
        v9 = 132LL;
        goto LABEL_32;
      case 0xCu:
        v9 = 136LL;
        goto LABEL_32;
      case 0xDu:
        v9 = 140LL;
        goto LABEL_32;
      case 0xEu:
        v9 = 144LL;
LABEL_32:
        v8 = -2049;
        goto LABEL_8;
      case 0xFu:
        v9 = 148LL;
        goto LABEL_32;
    }
    return (unsigned int)DirectComposition::CGeometryMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  switch ( a2 )
  {
    case 0xAu:
      v9 = 128LL;
      goto LABEL_32;
    case 4u:
      v7 = FLOAT_N2097152_0;
      v8 = -4097;
      v9 = 104LL;
      goto LABEL_8;
    case 5u:
      v7 = FLOAT_N2097152_0;
      v8 = -8193;
      v9 = 108LL;
      goto LABEL_8;
    case 6u:
      v7 = FLOAT_N2097152_0;
      v8 = -16385;
      v9 = 112LL;
      goto LABEL_8;
  }
  if ( a2 != 7 )
  {
    if ( a2 == 8 )
    {
      v9 = 120LL;
      goto LABEL_32;
    }
    if ( a2 == 9 )
    {
      v9 = 124LL;
      goto LABEL_32;
    }
    return (unsigned int)DirectComposition::CGeometryMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v7 = FLOAT_N2097152_0;
  v8 = -32769;
  v9 = 116LL;
LABEL_8:
  v10 = (float *)((char *)this + v9);
  v11 = v4 != 0 ? 0xC000000D : 0;
  if ( v10 && !v4 )
  {
    v12 = FLOAT_2097152_0;
    if ( a3 <= 2097152.0 )
      v12 = fmaxf(a3, v7);
    if ( *v10 == v12 )
    {
      v13 = 0;
    }
    else
    {
      *v10 = v12;
      v13 = 1;
    }
    *a4 = v13;
    if ( a2 <= 7 && a2 >= 4 )
    {
      *a4 = 1;
LABEL_18:
      *((_DWORD *)this + 4) &= v8;
      return v4 != 0 ? 0xC000000D : 0;
    }
    if ( v13 )
      goto LABEL_18;
  }
  return v11;
}
