/*
 * XREFs of MiMappingHasIoTracker @ 0x14029B344
 * Callers:
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 */

unsigned __int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v1) >> 9) & 1;
}
