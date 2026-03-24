/*
 * XREFs of EtwpFreeEventNameFilter @ 0x140940B90
 * Callers:
 *     EtwpFreeFilterInfo @ 0x1407164EC (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140716B70 (EtwpUpdateFilterData.c)
 *     EtwpAllocateEventNameFilter @ 0x140940108 (EtwpAllocateEventNameFilter.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeEventNameFilter(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
