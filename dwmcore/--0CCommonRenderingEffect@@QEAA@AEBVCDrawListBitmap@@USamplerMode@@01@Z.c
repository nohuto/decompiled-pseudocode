__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  char v5; // bl
  CDrawListBitmap *v8; // rsi
  __int64 v9; // rbp
  __int64 v11; // r14
  SamplerMode *v12; // rsi
  char v13; // al
  char v14; // cl
  char v15; // dl
  char v16; // al
  __int64 result; // rax

  v5 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  v8 = (CDrawListBitmap *)(a1 + 16);
  v9 = 2LL;
  v11 = 2LL;
  do
  {
    CDrawListBitmap::CDrawListBitmap(v8);
    v8 = (CDrawListBitmap *)((char *)v8 + 24);
    --v11;
  }
  while ( v11 );
  v12 = (SamplerMode *)(a1 + 64);
  do
  {
    SamplerMode::SamplerMode(v12);
    v12 = (SamplerMode *)((char *)v12 + 3);
    --v9;
  }
  while ( v9 );
  CDrawListBitmap::operator=(a1 + 16, a2);
  CDrawListBitmap::operator=(a1 + 40, a4);
  *(_WORD *)(a1 + 64) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 66) = *(_BYTE *)(a3 + 2);
  *(_WORD *)(a1 + 67) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 69) = *(_BYTE *)(a5 + 2);
  if ( !*(_QWORD *)(a2 + 8) || (v13 = IsWhitePixelOptimizationCandidate(a2, 0LL), v14 = 0, v13) )
    v14 = 1;
  *(_BYTE *)(a1 + 70) = v14;
  if ( !a4[1] )
    goto LABEL_12;
  v15 = v14;
  if ( CCommonRegistryData::EnableCommonSuperSets )
  {
    if ( !*a4 )
    {
LABEL_13:
      v15 = v14;
      goto LABEL_14;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 24LL))(*a4);
    v14 = *(_BYTE *)(a1 + 70);
    v15 = v14;
    if ( v16 )
    {
LABEL_12:
      v5 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  result = a1;
  *(_BYTE *)(a1 + 70) = v5 & v15;
  return result;
}
