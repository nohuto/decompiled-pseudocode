void __fastcall VerifyIrqlExit(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int8 PrevIrql)
{
  unsigned int v2; // ebx
  KIRQL CurrentIrql; // al

  v2 = PrevIrql;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)v2 != CurrentIrql )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_VERIFIER_IRQL_MISMATCH, v2, CurrentIrql);
}
