ULONG __fastcall vConvertAndSaveBGRAToRGB16Bitfields(__int64 a1, ULONG *a2, ULONG a3, int a4, XLATEOBJ *pxlo)
{
  _WORD *v6; // rbx
  ULONG result; // eax
  _WORD *v8; // rsi

  v6 = (_WORD *)(a1 + 2LL * a4);
  result = a3;
  v8 = &v6[a3];
  while ( v6 != v8 )
  {
    result = XLATEOBJ_iXlate(pxlo, *a2);
    *v6 = result;
    ++a2;
    ++v6;
  }
  return result;
}
