/*
 * XREFs of Interrupter_WdfEvtInterruptEnable @ 0x1C0013980
 * Callers:
 *     <none>
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     Interrupter_InterruptEnable @ 0x1C0018928 (Interrupter_InterruptEnable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_WdfEvtInterruptEnable(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // si
  __int64 *v3; // rbx
  __int64 v5; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063310);
  v2 = 0;
  v3 = (__int64 *)(v1 + 8);
  if ( KeGetCurrentIrql() < 2u )
    v2 = Controller_RaiseAndTrackIrql(*v3);
  Interrupter_InterruptEnable(v1);
  if ( *(_DWORD *)(*v3 + 636) == 1 )
  {
    v5 = *(_QWORD *)(*v3 + 128);
    if ( *(_QWORD *)(v5 + 40) == v1 )
      Interrupter_InterruptEnable(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * *(unsigned int *)(v5 + 64)));
  }
  if ( v2 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql((_QWORD *)*v3);
  return 0LL;
}
