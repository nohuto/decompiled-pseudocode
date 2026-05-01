/*
 * XREFs of ?CloseSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x180428D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$SwitchItemClosed@AEA_K@MultitaskingViewTelemetry@@SAXAEA_K@Z @ 0x180428AEC (--$SwitchItemClosed@AEA_K@MultitaskingViewTelemetry@@SAXAEA_K@Z.c)
 *     ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x180429130 (-_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z.c)
 */

void __fastcall CGridTelemetryController::CloseSwitchItem(CGridTelemetryController *this, struct ISwitchItem *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( CGridTelemetryController::_GetIndexOfItem(this, a2, &v5) >= 0 )
    MultitaskingViewTelemetry::SwitchItemClosed<unsigned __int64 &>((int *)&v5);
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64, struct ISwitchItem *))(*(_QWORD *)v4 + 64LL))(v4, a2);
}
