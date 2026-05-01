/*
 * XREFs of ?GetScreenClippingBrokerAsIInspectable@CScreenClippingExperienceManager@@EEAAJPEAPEAUIInspectable@@@Z @ 0x180257A00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1802574FC (-EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::GetScreenClippingBrokerAsIInspectable(
        CScreenClippingExperienceManager *this,
        struct IInspectable **a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-40h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v5, (unsigned __int8 *)dword_18057CAA7, 0LL, 0LL, 2u, &v13);
  v6 = CScreenClippingExperienceManager::EnsureScreenClippingBroker(this);
  if ( v6 < 0 )
  {
    v7 = 291LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInspectable **))this + 37))(
         *((_QWORD *)this + 37),
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         a2);
  if ( v6 < 0 )
  {
    v7 = 292LL;
    goto LABEL_8;
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v9);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  v10 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v10 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_18057CA46, 0LL, 0LL, 2u, &v13);
  return 0LL;
}
