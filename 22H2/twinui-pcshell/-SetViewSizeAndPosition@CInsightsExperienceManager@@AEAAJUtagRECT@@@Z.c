/*
 * XREFs of ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x1802603BC
 * Callers:
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x18026050C (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18001DF20 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1802303CC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall CInsightsExperienceManager::SetViewSizeAndPosition(
        CInsightsExperienceManager *this,
        struct tagRECT *a2)
{
  __int64 v4; // r9
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  WINBOOL fPending; // [rsp+40h] [rbp-20h] BYREF
  LONG bottom; // [rsp+44h] [rbp-1Ch] BYREF
  LONG right; // [rsp+48h] [rbp-18h] BYREF
  LONG top; // [rsp+4Ch] [rbp-14h] BYREF
  int left; // [rsp+50h] [rbp-10h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v5);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v6 > 5u )
  {
    bottom = a2->bottom;
    right = a2->right;
    top = a2->top;
    left = a2->left;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v6,
      byte_18057CF59,
      0LL,
      v4,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom);
  }
  if ( !*((_QWORD *)this + 11) )
  {
    v7 = -2147418113;
    v8 = 428LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CSingleViewShellExperience::SetPosition((CInsightsExperienceManager *)((char *)this + 64), a2);
  if ( v7 < 0 )
  {
    v8 = 429LL;
    goto LABEL_8;
  }
  return 0LL;
}
