/*
 * XREFs of MiCreateInitialSystemWsles @ 0x140B3A6E8
 * Callers:
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiInitializeLargePfnList @ 0x14035059C (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rax
  __int64 v1; // rsi
  __int32 v2; // edx
  volatile LONG *SharedVm; // rbx
  KIRQL v4; // al
  __m128i v6[11]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v7[46]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v6, 0, sizeof(v6));
  memset(v7, 0, 0x168uLL);
  MiInitializeLargePfnList(v7);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6[2].m128i_i64[1] = -1LL;
  v1 = (__int64)AnyMultiplexedVm;
  v6[1].m128i_i64[1] = (__int64)AnyMultiplexedVm;
  v6[10].m128i_i64[1] = (__int64)v7;
  v6[0].m128i_i32[0] = v2;
  v6[9].m128i_i64[1] = (__int64)MiCreatePteWsle;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)AnyMultiplexedVm);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v6[0].m128i_i8[7] = v4;
  LODWORD(SharedVm) = MiWalkPageTables(v6);
  MiUnlockWorkingSetExclusive(v1, v6[0].m128i_u8[7]);
  return (_DWORD)SharedVm != 5;
}
