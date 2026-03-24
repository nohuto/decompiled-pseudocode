/*
 * XREFs of MiDeleteWorkingSetList @ 0x1402E9E60
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140388EEC (MiDeleteSessionAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1406601A4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
