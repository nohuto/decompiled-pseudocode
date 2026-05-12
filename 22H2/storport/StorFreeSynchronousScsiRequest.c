/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C001CD08
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001CB34 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001EBB4 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C00485F8 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0048B50 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C004A4E0 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitResetTarget @ 0x1C004B408 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004B6C0 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004B9DC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  IoFreeIrp(Irp);
}
