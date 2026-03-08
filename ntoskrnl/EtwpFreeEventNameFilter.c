/*
 * XREFs of EtwpFreeEventNameFilter @ 0x1409F2488
 * Callers:
 *     EtwpFreeFilterInfo @ 0x14068F950 (EtwpFreeFilterInfo.c)
 *     EtwpUpdateGuidFilterData @ 0x14068FCB8 (EtwpUpdateGuidFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x1409F179C (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
