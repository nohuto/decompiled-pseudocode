/*
 * XREFs of MiUnlinkNodeLargePages @ 0x14034EB80
 * Callers:
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 *     MiGetHugePageToZero @ 0x1402E41D8 (MiGetHugePageToZero.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x14034DF94 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiDemoteLocalLargePage @ 0x14034E760 (MiDemoteLocalLargePage.c)
 * Callees:
 *     MiInitializeLargePageAllocationPacket @ 0x14034F2E0 (MiInitializeLargePageAllocationPacket.c)
 *     MiLockFreeLargePageLists @ 0x14034F4A0 (MiLockFreeLargePageLists.c)
 *     MiReleaseLargePageAllocationLocks @ 0x14034F6B0 (MiReleaseLargePageAllocationLocks.c)
 *     MiGetFreeLargePagesSearchTypes @ 0x14034F8C0 (MiGetFreeLargePagesSearchTypes.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiUnlinkNodeLargePages(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  _QWORD v14[24]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v14, 0, 0xB8uLL);
  if ( !(unsigned int)MiInitializeLargePageAllocationPacket((unsigned int)v14, a1, a2, a3, a4, a5, a6, a7, a8, a9) )
    return 0LL;
  do
  {
    if ( !(unsigned int)MiLockFreeLargePageLists(v14) )
      break;
    MiGetFreeLargePagesSearchTypes(v14);
    MiReleaseLargePageAllocationLocks(v14);
  }
  while ( !LOBYTE(v14[7]) );
  return v14[14];
}
