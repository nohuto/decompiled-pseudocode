__int64 __fastcall ACPIDispatchIrpBlockedOnDep(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073740954;
  IofCompleteRequest(a2, 0);
  return 3221226342LL;
}
