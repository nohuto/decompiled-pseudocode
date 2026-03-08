/*
 * XREFs of ?vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02E6640
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

ULONG __fastcall vConvertAndSaveBGRATo32Bitfields(__int64 a1, __int64 a2, ULONG a3, int a4, XLATEOBJ *pxlo)
{
  ULONG *v5; // rbx
  ULONG result; // eax
  ULONG *v7; // rsi
  __int64 v8; // rdi

  v5 = (ULONG *)(a1 + 4LL * a4);
  result = a3;
  v7 = &v5[a3];
  if ( v5 != v7 )
  {
    v8 = a2 - (_QWORD)v5;
    do
    {
      result = XLATEOBJ_iXlate(pxlo, *(ULONG *)((char *)v5 + v8));
      *v5++ = result;
    }
    while ( v5 != v7 );
  }
  return result;
}
