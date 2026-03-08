/*
 * XREFs of SymCryptSha384Result @ 0x1403F49DC
 * Callers:
 *     HashpHashMemory @ 0x140A7438C (HashpHashMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptSha384Init @ 0x1403F4990 (SymCryptSha384Init.c)
 *     SymCryptSha512Result @ 0x1403F61C8 (SymCryptSha512Result.c)
 */

__int64 __fastcall SymCryptSha384Result(__int64 a1, _OWORD *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v7[3]; // [rsp+20h] [rbp-50h] BYREF

  SymCryptSha512Result(a1, v7);
  v4 = v7[1];
  *a2 = v7[0];
  v5 = v7[2];
  a2[1] = v4;
  a2[2] = v5;
  SymCryptSha384Init(a1);
  return 0LL;
}
