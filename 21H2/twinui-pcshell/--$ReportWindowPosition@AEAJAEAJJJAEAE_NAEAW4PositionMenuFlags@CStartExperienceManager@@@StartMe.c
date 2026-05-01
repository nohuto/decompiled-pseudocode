/*
 * XREFs of ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x180080844
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180080434 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x180241E78 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

LPVOID __fastcall StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        int *a8)
{
  LPVOID result; // rax
  _DWORD *v13; // r9
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v15; // r8d
  int v16; // ecx
  int v17; // [rsp+68h] [rbp-9h] BYREF
  int v18; // [rsp+6Ch] [rbp-5h] BYREF
  int v19; // [rsp+70h] [rbp-1h] BYREF
  int v20; // [rsp+74h] [rbp+3h] BYREF
  int v21; // [rsp+78h] [rbp+7h] BYREF
  int v22; // [rsp+7Ch] [rbp+Bh] BYREF
  int v23; // [rsp+80h] [rbp+Fh] BYREF
  LPVOID Context; // [rsp+88h] [rbp+17h] BYREF
  WINBOOL fPending; // [rsp+B8h] [rbp+47h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180651818;
    qword_180651818[0] = &ShellScreenClippingLogging::`vftable';
    qword_180651830 = (struct _tlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180651818, qword_180651830, v14);
    InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, qword_180651818);
  }
  result = Context;
  v13 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v13 > 4u )
  {
    v15 = *(_QWORD *)(a1 + 48) + 8;
    v17 = *a8;
    v18 = *a7;
    v19 = *a6;
    v16 = *a5;
    v21 = *a4;
    v22 = *a3;
    v23 = *a2;
    v20 = v16;
    return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (_DWORD)v13,
                     (unsigned int)&unk_180579DA5,
                     v15,
                     (_DWORD)v13,
                     (__int64)&v23,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17);
  }
  return result;
}
