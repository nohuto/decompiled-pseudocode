/*
 * XREFs of MmAllocateSecurePoolMemory @ 0x14063F4FC
 * Callers:
 *     PspIumAllocateSecurePool @ 0x1405A3804 (PspIumAllocateSecurePool.c)
 * Callees:
 *     MiReservePoolMemory @ 0x1402EE008 (MiReservePoolMemory.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 *     MiInitializePoolCommitPacket @ 0x140330760 (MiInitializePoolCommitPacket.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiIsSystemVaAllocated @ 0x140634AE4 (MiIsSystemVaAllocated.c)
 *     MmFreeSecurePoolMemory @ 0x14063F668 (MmFreeSecurePoolMemory.c)
 */

__int64 __fastcall MmAllocateSecurePoolMemory(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        __int64 a4)
{
  ULONG_PTR v8; // rsi
  int v9; // ebx
  int SystemRegionType; // eax
  _QWORD v12[10]; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR v13; // [rsp+B0h] [rbp+8h] BYREF
  ULONG_PTR v14; // [rsp+B8h] [rbp+10h] BYREF

  v14 = BugCheckParameter3;
  v13 = BugCheckParameter2;
  memset(v12, 0, sizeof(v12));
  v8 = 0LL;
  if ( (a3 & 0x2000) == 0 || (v8 = MiReservePoolMemory(BugCheckParameter2, 15, BugCheckParameter3, 0)) != 0 )
  {
    if ( (a3 & 0x1000) == 0 )
      return 0;
    SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
    if ( SystemRegionType != 15 )
      KeBugCheckEx(0x1Au, 0x5400uLL, BugCheckParameter2, BugCheckParameter3, SystemRegionType);
    if ( !(unsigned int)MiIsSystemVaAllocated() )
      KeBugCheckEx(0x1Au, 0x5401uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    MiInitializePoolCommitPacket((__int64 *)&v13, (__int64)&v14, a3, 2u, 0, 0, a4, (__int64)v12);
    v9 = MiCommitPoolMemory(v12);
    if ( v9 < 0 )
    {
      if ( v8 )
        MmFreeSecurePoolMemory(v8, BugCheckParameter3);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
