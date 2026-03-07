__int64 __fastcall ACPIDispatchPowerIrpBlockedOnDep(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741666;
  IofCompleteRequest(a2, 0);
  return 3221225630LL;
}
