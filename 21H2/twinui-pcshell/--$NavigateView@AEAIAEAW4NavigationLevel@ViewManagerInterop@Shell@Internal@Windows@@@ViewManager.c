/*
 * XREFs of ??$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180025ED0
 * Callers:
 *     _lambda_946ff4b2cd2342ecd6351b66005f8fb8_::operator() @ 0x180025C58 (_lambda_946ff4b2cd2342ecd6351b66005f8fb8_--operator().c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18032F430 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?ResumeAndNavigateView@ViewManagerBridge@@UEAAXIIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180331780 (-ResumeAndNavigateView@ViewManagerBridge@@UEAAXIIW4NavigationLevel@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     atexit @ 0x180090184 (atexit.c)
 */

int __fastcall ViewManagerInteropTelemetry::NavigateView<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
        int *a1,
        int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int16 *v7; // rax
  REGHANDLE v8; // rcx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-11h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  int *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  int *v24; // [rsp+98h] [rbp+37h]
  int v25; // [rsp+A0h] [rbp+3Fh]
  int v26; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180650D68;
    qword_180650D68 = &ShellScreenClippingLogging::`vftable';
    qword_180650D80 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180650D68, qword_180650D80, v9);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_180650D68);
  }
  LODWORD(v4) = (_DWORD)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0 )
  {
    v4 = *(_QWORD *)(v5 + 24) & 0x200000000000LL;
    if ( v4 == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a2;
      v26 = 0;
      v23 = 0;
      v12 = v6;
      v13 = *a1;
      v24 = &v12;
      v21 = &v13;
      *(_DWORD *)&EventDescriptor.Level = 5;
      v7 = *(unsigned __int16 **)(v5 + 8);
      v8 = *(_QWORD *)(v5 + 32);
      UserData.Ptr = (ULONGLONG)v7;
      EventDescriptor.Keyword = 0x200000000000LL;
      v25 = 4;
      v22 = 4;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *v7;
      v18 = &unk_18058A380;
      UserData.Reserved = 2;
      v19 = 49;
      v20 = 1;
      v15 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v4) = EventWriteTransfer(v8, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
  return v4;
}
