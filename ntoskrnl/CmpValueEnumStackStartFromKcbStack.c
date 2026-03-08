/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x140A22BAC
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140614374 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1407836E4 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A1D69C (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  __int16 v8[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack((char *)v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v8, a2, a3);
  if ( started >= 0 )
  {
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, v8);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v8);
  return (unsigned int)started;
}
