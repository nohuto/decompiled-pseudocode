__int64 __fastcall CBitmap::HrCheckPixelRect(__int64 a1, int *a2, _DWORD *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // ecx
  int v7; // eax
  signed int v8; // ecx
  int v9; // r8d
  unsigned int v10; // r8d
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v16; // [rsp+20h] [rbp-38h]
  _DWORD v17[3]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 108);
  *a3 = 0;
  a3[1] = 0;
  a3[2] = v3;
  a3[3] = v5;
  if ( !a2 )
    return v4;
  v7 = *a2;
  v18 = 0;
  v8 = a2[1];
  v17[0] = v7;
  v17[1] = v8;
  if ( v7 < 0 )
  {
    v16 = 377;
    goto LABEL_22;
  }
  v9 = a2[2];
  if ( v9 < 0 )
  {
    v16 = 378;
    goto LABEL_22;
  }
  v10 = v7 + v9;
  if ( v10 < v7 )
  {
    v16 = 379;
    goto LABEL_22;
  }
  if ( v10 > 0x7FFFFFFF )
  {
    v16 = 380;
    goto LABEL_22;
  }
  v17[2] = v10;
  if ( v8 < 0 )
  {
    v16 = 382;
    goto LABEL_22;
  }
  v11 = a2[3];
  if ( v11 < 0 )
  {
    v16 = 383;
    goto LABEL_22;
  }
  v12 = v8 + v11;
  if ( v12 < v8 )
  {
    v16 = 384;
    goto LABEL_22;
  }
  if ( v12 > 0x7FFFFFFF )
  {
    v16 = 385;
LABEL_22:
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024362, v16, 0LL);
    return v4;
  }
  v18 = v12;
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a3, v17);
  if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(v17)
    && (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(
                          v17,
                          a3,
                          v13,
                          v14) )
  {
    return v4;
  }
  return 2147942487LL;
}
