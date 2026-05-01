/*
 * XREFs of ?Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180089F04
 * Callers:
 *     ??$TrayFlyoutLaunchedByWindow@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@SingleViewExperienceTelemetry@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1800BA780 (--$TrayFlyoutLaunchedByWindow@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Interna.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1800BBD78 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 *     ?OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BCA70 (-OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BCC40 (-OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BCFD0 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BD190 (-OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x1800BDE78 (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z.c)
 *     ??$SetForegroundFailed@AEAJPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4PendingViewAction@2@AEAW4PendingViewActionShowFlags@2@@SingleViewExperienceTelemetry@@SAXAEAJ$$QEAPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4PendingViewAction@2@AEAW4PendingViewActionShowFlags@2@@Z @ 0x18014EA04 (--$SetForegroundFailed@AEAJPEBGAEAW4ExperienceViewState@CSingleViewShellExperience@@AEAW4Pending.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

const struct _tlgProvider_t *SingleViewExperienceLogging::Provider(void)
{
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v1);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
