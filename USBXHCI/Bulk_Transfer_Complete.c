/*
 * XREFs of Bulk_Transfer_Complete @ 0x1C000E8D8
 * Callers:
 *     Bulk_CompleteTransfers @ 0x1C000E608 (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x1C0011FDC (Bulk_RetrieveNextStage.c)
 * Callees:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0011B14 (Bulk_Transfer_PrepareForCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Bulk_Transfer_Complete(__int64 a1, __int64 a2)
{
  KIRQL v3; // bl

  Bulk_Transfer_PrepareForCompletion();
  v3 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    *(unsigned int *)(a2 + 72));
  KeLowerIrql(v3);
}
