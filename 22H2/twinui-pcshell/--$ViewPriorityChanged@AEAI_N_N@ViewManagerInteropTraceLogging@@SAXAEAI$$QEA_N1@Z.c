/*
 * XREFs of ??$ViewPriorityChanged@AEAI_N_N@ViewManagerInteropTraceLogging@@SAXAEAI$$QEA_N1@Z @ 0x18033C1E0
 * Callers:
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x18033DD00 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x180342240 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18033C720 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

LPVOID __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int &,bool,bool>(
        int *a1,
        _BYTE *a2,
        char *a3)
{
  int v6; // r8d
  int v7; // r9d
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID result; // rax
  _DWORD *v10; // rcx
  _BYTE v11[4]; // [rsp+40h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-1Ch] BYREF
  int v13; // [rsp+48h] [rbp-18h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-10h] BYREF
  char v15; // [rsp+98h] [rbp+38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180650D60;
    qword_180650D60[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650D78 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650D60, qword_180650D78, v8);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180650D60);
  }
  result = Context;
  v10 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v10 > 5u )
  {
    v15 = *a3;
    v11[0] = *a2;
    v13 = *a1;
    return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                     (_DWORD)v10,
                     (unsigned int)&unk_18058CE86,
                     v6,
                     v7,
                     (__int64)&v13,
                     (__int64)v11,
                     (__int64)&v15);
  }
  return result;
}
