/*
 * XREFs of ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803C5C78
 * Callers:
 *     wil::details::ScopeExitFn__lambda_ed17f40ea53b7d735a78e21ded7e7afa___::_ScopeExitFn__lambda_ed17f40ea53b7d735a78e21ded7e7afa___ @ 0x1800CEAEC (wil--details--ScopeExitFn__lambda_ed17f40ea53b7d735a78e21ded7e7afa___--_ScopeExitFn__lambda_ed17.c)
 *     _lambda_536d29ca497f1a4a88268fb5f9ff4d76_::operator() @ 0x1800CF4A0 (_lambda_536d29ca497f1a4a88268fb5f9ff4d76_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1803C6530 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      a1,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180592A07, 0LL, 0LL, 3u, &v4);
    }
  }
}
