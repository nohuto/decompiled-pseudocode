/*
 * XREFs of ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180011F00
 * Callers:
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x18009C8D4 (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ??$SearchAppExperienceManager_AllowSearchSuspension@AEA_NAEA_K@CortanaProactiveTelemetry@@SAXAEA_NAEA_K@Z @ 0x18009D9EC (--$SearchAppExperienceManager_AllowSearchSuspension@AEA_NAEA_K@CortanaProactiveTelemetry@@SAXAEA.c)
 *     ??$SearchAppExperienceManager_SkipInstallDefaultWebProviderApp@W4SkipInstallDefaultWebProviderAppReason@@@CortanaProactiveTelemetry@@SAX$$QEAW4SkipInstallDefaultWebProviderAppReason@@@Z @ 0x18009DAC8 (--$SearchAppExperienceManager_SkipInstallDefaultWebProviderApp@W4SkipInstallDefaultWebProviderAp.c)
 *     ??$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18009DB38 (--$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ?StartActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800A9CAC (-StartActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTe.c)
 *     ?Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAX_N000@Z @ 0x1800AA0B8 (-Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@.c)
 *     ?StopActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800AA3E0 (-StopActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTel.c)
 *     ??$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1800BEA7C (--$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAE.c)
 *     ??$SearchAppDesktopExperienceView_SearchInputTestStarted@PEBG@CortanaProactiveTelemetry@@SAX$$QEAPEBG@Z @ 0x1800BECBC (--$SearchAppDesktopExperienceView_SearchInputTestStarted@PEBG@CortanaProactiveTelemetry@@SAX$$QE.c)
 *     ??$SearchInputTest_KeyDownReceived@AEAI@CortanaProactiveTelemetry@@SAXAEAI@Z @ 0x1800BED2C (--$SearchInputTest_KeyDownReceived@AEAI@CortanaProactiveTelemetry@@SAXAEAI@Z.c)
 *     ??$SearchInputTest_KeyUpReceived@AEAI@CortanaProactiveTelemetry@@SAXAEAI@Z @ 0x1800BED84 (--$SearchInputTest_KeyUpReceived@AEAI@CortanaProactiveTelemetry@@SAXAEAI@Z.c)
 *     ?HookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800C0098 (-HookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?SearchAppDesktopExperienceView_LowLevelKeyboardHookProc@CortanaProactiveTelemetry@@SAXXZ @ 0x1800C0684 (-SearchAppDesktopExperienceView_LowLevelKeyboardHookProc@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?UnhookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800C0BEC (-UnhookKeyboard@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

const struct _tlgProvider_t *CortanaProactiveLogging::Provider(void)
{
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1806506B8;
    qword_1806506B8[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506D0 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806506B8, qword_1806506D0, v1);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1806506B8);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
