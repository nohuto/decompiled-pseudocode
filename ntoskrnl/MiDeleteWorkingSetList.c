/*
 * XREFs of MiDeleteWorkingSetList @ 0x1402A5430
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiDeleteProcessLargePageCache @ 0x1402A547C (MiDeleteProcessLargePageCache.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      MiDeleteProcessLargePageCache(a1 - 1664);
      ExFreePoolWithTag(v1, 0);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
