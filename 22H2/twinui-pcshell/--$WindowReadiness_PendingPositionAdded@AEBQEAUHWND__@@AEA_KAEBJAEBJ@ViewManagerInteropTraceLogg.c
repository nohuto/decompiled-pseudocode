/*
 * XREFs of ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x18006D358
 * Callers:
 *     _lambda_e4dce5b548ec2ba2e171320f5984322f_::operator() @ 0x180025228 (_lambda_e4dce5b548ec2ba2e171320f5984322f_--operator().c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180025A1C (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     atexit @ 0x180090164 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4)
{
  ULONG result; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned __int16 *v11; // rax
  REGHANDLE v12; // rcx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  int v15; // [rsp+3Ch] [rbp-65h] BYREF
  int v16; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+44h] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-51h]
  __int64 v20; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  void *v23; // [rsp+88h] [rbp-19h]
  int v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+94h] [rbp-Dh]
  __int64 *v26; // [rsp+98h] [rbp-9h]
  int v27; // [rsp+A0h] [rbp-1h]
  int v28; // [rsp+A4h] [rbp+3h]
  int *v29; // [rsp+A8h] [rbp+7h]
  int v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B4h] [rbp+13h]
  int *v32; // [rsp+B8h] [rbp+17h]
  int v33; // [rsp+C0h] [rbp+1Fh]
  int v34; // [rsp+C4h] [rbp+23h]
  int *v35; // [rsp+C8h] [rbp+27h]
  int v36; // [rsp+D0h] [rbp+2Fh]
  int v37; // [rsp+D4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180650D60;
    qword_180650D60[0] = &ShellScreenClippingLogging::`vftable';
    qword_180650D78 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650D60, qword_180650D78, v13);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180650D60);
  }
  result = (unsigned int)Context;
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a4;
    v37 = 0;
    v34 = 0;
    v31 = 0;
    v28 = 0;
    EventDescriptor.Keyword = 0LL;
    v15 = v10;
    v16 = *a3;
    v17 = *a2;
    v20 = *a1;
    v35 = &v15;
    v32 = &v16;
    v29 = &v17;
    v26 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v11 = *(unsigned __int16 **)(v9 + 8);
    v12 = *(_QWORD *)(v9 + 32);
    UserData.Ptr = (ULONGLONG)v11;
    v36 = 4;
    v33 = 4;
    v30 = 4;
    v27 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v11;
    v23 = &unk_18058DBBE;
    UserData.Reserved = 2;
    v24 = 85;
    v25 = 1;
    v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v12, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
