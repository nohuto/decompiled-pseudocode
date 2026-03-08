/*
 * XREFs of KiSendSoftwareInterrupt @ 0x1402B7A00
 * Callers:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KiRequestTimer2Expiration @ 0x1402B78B8 (KiRequestTimer2Expiration.c)
 *     KeUpdateThreadTag @ 0x1402FB2F0 (KeUpdateThreadTag.c)
 *     KiSignalThreadForApc @ 0x140353F08 (KiSignalThreadForApc.c)
 * Callees:
 *     HalSendSoftwareInterrupt @ 0x140230250 (HalSendSoftwareInterrupt.c)
 */

__int64 __fastcall KiSendSoftwareInterrupt(int a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  return HalSendSoftwareInterrupt(a1, a2);
}
