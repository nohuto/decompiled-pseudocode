/*
 * XREFs of ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x18045771C
 * Callers:
 *     ?OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800810B0 (-OnApplicationViewChanged@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIE.c)
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x18044D4AC (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 *     ?CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18044EE4C (-CacheViewToManage@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18044F62C (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180450660 (-HandleRecoveryForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18045079C (-HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x180450C3C (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     atexit @ 0x180090164 (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x1804437D0 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v4,
         (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    qword_180651EE0[0] = &IamTraceLogging::`vftable';
    v5 = qword_180651EE0;
    atexit(a2);
    DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_180651EE0);
    InitOnceComplete(&`VoiceAssistantPositionerTelemetry::Instance'::`2'::wrapper, 0, qword_180651EE0);
  }
  return v5;
}
