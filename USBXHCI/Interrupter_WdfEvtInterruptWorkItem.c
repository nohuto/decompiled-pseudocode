/*
 * XREFs of Interrupter_WdfEvtInterruptWorkItem @ 0x1C003E340
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Interrupter_WdfEvtInterruptWorkItem(__int64 a1, char a2)
{
  char v4; // di
  __int64 *v5; // rbx

  v4 = 0;
  v5 = (__int64 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0063310)
                 + 8);
  if ( KeGetCurrentIrql() != 2 )
    v4 = Controller_RaiseAndTrackIrql(*v5);
  Interrupter_DeferredWorkProcessor(a1, a2, 1);
  if ( v4 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql((_QWORD *)*v5);
  }
}
