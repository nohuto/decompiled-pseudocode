/*
 * XREFs of ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000DF54
 * Callers:
 *     ??R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ @ 0x18000E454 (--R_lambda_13a45783cb3309e666fe0ee3fbf2f736_@@QEBAXXZ.c)
 * Callees:
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DE54 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     atexit @ 0x1800CFC04 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

struct TaskbarContentDeliveryPinningTelemetry *TaskbarContentDeliveryPinningTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    qword_18019D4D8 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    Context = &qword_18019D4D8;
    atexit(_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_::_lambda_invoker_cdecl_);
    qword_18019D4E0 = (__int64)TaskbarLogging::Provider();
    byte_18019D4E8 = 0;
    dword_18019D4EC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18019D4D8 + 8))(&qword_18019D4D8);
    InitOnceComplete(&`TaskbarContentDeliveryPinningTelemetry::Instance'::`2'::wrapper, 0, &qword_18019D4D8);
  }
  return (struct TaskbarContentDeliveryPinningTelemetry *)Context;
}
