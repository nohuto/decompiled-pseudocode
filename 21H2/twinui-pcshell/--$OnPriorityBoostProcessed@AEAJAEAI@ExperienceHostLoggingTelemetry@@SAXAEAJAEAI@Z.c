/*
 * XREFs of ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x180076E4C
 * Callers:
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x180076CC0 (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180077700 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

_QWORD *__fastcall ExperienceHostLoggingTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(int *a1, int *a2)
{
  int v4; // r9d
  _QWORD *result; // rax
  _DWORD *v6; // rcx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v8; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-10h] BYREF
  WINBOOL v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, &v10, (LPVOID *)&v9) && v10 )
  {
    v9 = qword_180650BD8;
    qword_180650BD8[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650BF0 = (struct _tlgProvider_t *)&`ExperienceHostLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_85ce8dc69fb31a5df73cef2b402bbb84_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650BD8, qword_180650BF0, v7);
    InitOnceComplete(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, qword_180650BD8);
  }
  result = v9;
  v6 = (_DWORD *)v9[1];
  if ( *v6 > 5u )
  {
    v11 = *a2;
    v8 = *a1;
    return (_QWORD *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (_DWORD)v6,
                       (unsigned int)&unk_18057E790,
                       0,
                       v4,
                       (__int64)&v8,
                       (__int64)&v11);
  }
  return result;
}
