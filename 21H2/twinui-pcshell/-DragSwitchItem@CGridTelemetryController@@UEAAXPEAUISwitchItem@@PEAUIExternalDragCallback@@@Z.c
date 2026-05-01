/*
 * XREFs of ?DragSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180428E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGridTelemetryController::DragSwitchItem(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        struct IExternalDragCallback *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64, struct ISwitchItem *, struct IExternalDragCallback *))(*(_QWORD *)v3 + 96LL))(
      v3,
      a2,
      a3);
}
