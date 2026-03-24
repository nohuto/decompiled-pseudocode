/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140329EE8
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x14032AEFC (MiFindPageFileWriteCluster.c)
 *     MiGatherPagefilePages @ 0x1403318B4 (MiGatherPagefilePages.c)
 *     MiFindFreePageFileSpace @ 0x140333724 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
