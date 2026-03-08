/*
 * XREFs of Control_WdfEvtWorkItemForTransferCompletion @ 0x1C0043460
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Control_ProcessTransferCompletion @ 0x1C0042704 (Control_ProcessTransferCompletion.c)
 */

void __fastcall Control_WdfEvtWorkItemForTransferCompletion(__int64 a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 *v4; // rbx
  __int64 v5; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v3 = 0;
  v4 = (__int64 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     v2,
                     off_1C0063388)
                 + 40);
  if ( KeGetCurrentIrql() != 2 )
    v3 = Controller_RaiseAndTrackIrql(*v4);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  Control_ProcessTransferCompletion(v5);
  if ( v3 )
  {
    if ( KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql((_QWORD *)*v4);
  }
}
