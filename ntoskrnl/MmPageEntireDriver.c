/*
 * XREFs of MmPageEntireDriver @ 0x140729DE0
 * Callers:
 *     DifMmPageEntireDriverWrapper @ 0x1405E5380 (DifMmPageEntireDriverWrapper.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     KeFlushQueuedDpcs @ 0x1402AF200 (KeFlushQueuedDpcs.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     MiCancelPhase0Locking @ 0x140729E84 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  void *v4; // rbp
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 v6; // rbx

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  v4 = (void *)v2[6];
  if ( (dword_140D1D1C4 & 1) == 0 && (unsigned int)MiGetSystemRegionType((unsigned __int64)AddressWithinSection) != 1 )
  {
    KeFlushQueuedDpcs();
    PteAddress = MiGetPteAddress((unsigned __int64)v4);
    v6 = PteAddress + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 64) >> 12);
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, v6 - 8);
  }
  return v4;
}
