/*
 * XREFs of ?OnViewShown@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18025FD80
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ?RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x1802600B4 (-RegisterWithLightDismiss@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnViewShown(
        CInsightsExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  WINBOOL v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v8 = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  v5 = (_DWORD *)v8[1];
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_18057D0CB, 0LL, 0LL, 2u, &v9);
  if ( *((_BYTE *)this + 240) )
    CInsightsExperienceManager::RegisterWithLightDismiss((CInsightsExperienceManager *)((char *)this - 56), a2);
  return 0LL;
}
