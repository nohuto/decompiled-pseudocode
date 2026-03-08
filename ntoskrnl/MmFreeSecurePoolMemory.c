/*
 * XREFs of MmFreeSecurePoolMemory @ 0x14063F668
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     MmAllocateSecurePoolMemory @ 0x14063F4FC (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiIsSystemVaAllocated @ 0x140634AE4 (MiIsSystemVaAllocated.c)
 */

unsigned __int64 __fastcall MmFreeSecurePoolMemory(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3)
{
  int SystemRegionType; // eax
  unsigned int v7; // esi
  unsigned __int64 result; // rax

  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  if ( SystemRegionType != 15 )
    KeBugCheckEx(0x1Au, 0x5402uLL, BugCheckParameter2, BugCheckParameter3, SystemRegionType);
  if ( !(unsigned int)MiIsSystemVaAllocated() )
    KeBugCheckEx(0x1Au, 0x5403uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v7 = a3 | 0x4000;
  if ( (a3 & 0x8000) == 0 )
    v7 = a3;
  result = MiClearNonPagedPtes(BugCheckParameter2, BugCheckParameter3 >> 12, v7, 3u);
  if ( result )
    result = _InterlockedExchangeAdd64(&qword_140C65110, -(__int64)result);
  if ( (v7 & 0x8000) != 0 )
    return MiReturnSystemVa(BugCheckParameter2, BugCheckParameter2 + BugCheckParameter3, 15, 0LL);
  return result;
}
