/*
 * XREFs of MiImagePagable @ 0x14070111C
 * Callers:
 *     MmResetDriverPaging @ 0x1407036E0 (MmResetDriverPaging.c)
 *     MiEnablePagingTheExecutive @ 0x140B627F8 (MiEnablePagingTheExecutive.c)
 *     MiLockPagableSections @ 0x140B62918 (MiLockPagableSections.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136C0 (MiLookupDataTableEntry.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
 */

_QWORD *__fastcall MiImagePagable(_QWORD *a1, unsigned __int64 a2)
{
  if ( (dword_140D1D1C4 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  return a1;
}
