/*
 * XREFs of MiMappingHasIoReferences @ 0x140335AA0
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14027CE40 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x140335858 (MiMapContiguousMemory.c)
 *     MmProtectMdlSystemAddress @ 0x14061EE40 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x14062F110 (MmMapMdl.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
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
