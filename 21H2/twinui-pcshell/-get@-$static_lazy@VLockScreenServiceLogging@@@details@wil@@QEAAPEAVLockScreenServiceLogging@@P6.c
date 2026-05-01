/*
 * XREFs of ?get@?$static_lazy@VLockScreenServiceLogging@@@details@wil@@QEAAPEAVLockScreenServiceLogging@@P6AXXZ@Z @ 0x1802890FC
 * Callers:
 *     ??1?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18028702C (--1-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?NotifyFailure@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1802877D0 (-NotifyFailure@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?ReportStopActivity@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180287CCC (-ReportStopActivity@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x180288134 (-StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServ.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1802881C8 (-StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSe.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x18028825C (-StartActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockS.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1802882F0 (-StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServ.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028860C (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x1802886F0 (-StopActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServi.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x180288920 (-StopActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSer.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x180288B50 (-StopActivity@LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockSc.c)
 *     ?StopActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@MEAAXXZ @ 0x180288D80 (-StopActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServi.c)
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x180288FA8 (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802894F0 (-zInternalStart@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<LockScreenServiceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`LockScreenServiceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1806519F0;
    qword_1806519F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180651A08 = (struct _tlgProvider_t *)&`LockScreenServiceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1806519F0, qword_180651A08, v3);
    InitOnceComplete(&`LockScreenServiceLogging::Instance'::`2'::wrapper, 0, qword_1806519F0);
  }
  return v6;
}
