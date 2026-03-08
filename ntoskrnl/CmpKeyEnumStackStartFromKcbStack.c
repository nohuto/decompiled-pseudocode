/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x140A2163C
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407836E4 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A1D69C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140A216EC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int started; // ebx
  char v10[80]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v10);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v10, a2, 0LL);
  if ( started >= 0 )
  {
    if ( a3 )
      *(_WORD *)(a1 + 2) = *(_WORD *)(a3 + 4);
    started = CmpKeyEnumStackStartFromKeyNodeStack(a1, v10, a4);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v10);
  return (unsigned int)started;
}
