/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00A45D8
 * Callers:
 *     ndisQueueDpcWorkItem @ 0x1C0067B30 (ndisQueueDpcWorkItem.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00A40D8 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A44E0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)qword_1C00E50F8 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0.QuadPart = qword_1C00E50E8;
    if ( !qword_1C00E50E8 )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C00E50F0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v0,
      (PKDPC)qword_1C00E50F0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
}
