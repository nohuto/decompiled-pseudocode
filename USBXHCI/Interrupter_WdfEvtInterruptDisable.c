/*
 * XREFs of Interrupter_WdfEvtInterruptDisable @ 0x1C000F750
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_InterruptDisable @ 0x1C000F7DC (Interrupter_InterruptDisable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptDisable(__int64 a1)
{
  char v1; // si
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 v5; // rcx

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063310);
  v3 = (__int64 *)(v2 + 8);
  if ( KeGetCurrentIrql() < 2u )
    v1 = Controller_RaiseAndTrackIrql(*v3);
  Interrupter_InterruptDisable(v2);
  if ( *(_DWORD *)(*v3 + 636) == 1 )
  {
    v5 = *(_QWORD *)(*v3 + 128);
    if ( *(_QWORD *)(v5 + 40) == v2 )
      Interrupter_InterruptDisable(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * *(unsigned int *)(v5 + 64)));
  }
  if ( v1 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql((_QWORD *)*v3);
  return 0LL;
}
