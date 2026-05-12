/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C001CD78
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001CBA4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001EC78 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C0048618 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0048B70 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C004A500 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitResetTarget @ 0x1C004B428 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004B6E0 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004B9FC (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
