/*
 * XREFs of ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x180249A98
 * Callers:
 *     ??$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z @ 0x180245120 (--$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z.c)
 *     ??1?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180245E34 (--1-$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VJu.c)
 *     ?JumpViewCancelledByAnotherInvoke@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x1802478C8 (-JumpViewCancelledByAnotherInvoke@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x18024796C (-JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?JumpViewCancelledDueToLock@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x180247A10 (-JumpViewCancelledDueToLock@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180247AC0 (-NotifyFailure@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1802493A8 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180249524 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StopActivity@ShowJumpViewActivity@JumpViewProvider@@MEAAXXZ @ 0x180249630 (-StopActivity@ShowJumpViewActivity@JumpViewProvider@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<JumpViewProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`JumpViewProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v5, &v6) && (_DWORD)v5 )
  {
    v6 = &qword_180651868;
    qword_180651868 = &ShellScreenClippingLogging::`vftable';
    qword_180651880 = (struct _tlgProvider_t *)&`JumpViewProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180651868, qword_180651880, v3);
    InitOnceComplete(&`JumpViewProvider::Instance'::`2'::wrapper, 0, &qword_180651868);
  }
  return v6;
}
