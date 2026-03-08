/*
 * XREFs of MiMappingHasIoReferences @ 0x14029B1A0
 * Callers:
 *     MiMapContiguousMemory @ 0x14029AF58 (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x14062CC90 (MmMapMdl.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = MI_READ_PTE_LOCK_FREE(v1);
  do
  {
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    v4 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, result | 0x200, result);
  }
  while ( v4 != result );
  return result;
}
