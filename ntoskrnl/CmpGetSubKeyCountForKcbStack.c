/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x140A20860
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407836E4 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140783738 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140A1D69C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A20904 (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  char v7[80]; // [rsp+20h] [rbp-68h] BYREF

  memset(v7, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v7);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v7, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpGetSubKeyCountForKeyNodeStack(v7, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v7);
  return (unsigned int)started;
}
