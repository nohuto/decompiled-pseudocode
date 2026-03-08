/*
 * XREFs of MiImagePagable @ 0x14072A7E0
 * Callers:
 *     MmResetDriverPaging @ 0x14072A050 (MmResetDriverPaging.c)
 *     MiEnablePagingTheExecutive @ 0x140B5F508 (MiEnablePagingTheExecutive.c)
 *     MiLockPagableSections @ 0x140B5F628 (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
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
