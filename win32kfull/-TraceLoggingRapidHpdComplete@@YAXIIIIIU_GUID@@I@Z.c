void __fastcall TraceLoggingRapidHpdComplete(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        struct _GUID *a6,
        unsigned int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentProcess; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // [rsp+90h] [rbp-11h] BYREF
  unsigned int v20; // [rsp+94h] [rbp-Dh] BYREF
  unsigned int v21; // [rsp+98h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+9Ch] [rbp-5h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp-1h] BYREF
  int v24; // [rsp+A4h] [rbp+3h] BYREF
  int v25; // [rsp+A8h] [rbp+7h] BYREF
  int v26; // [rsp+ACh] [rbp+Bh] BYREF
  __int64 ProcessImageFileName; // [rsp+B0h] [rbp+Fh] BYREF
  struct _GUID *v28; // [rsp+B8h] [rbp+17h] BYREF
  const char *v29; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v30; // [rsp+C8h] [rbp+27h] BYREF
  unsigned int v31; // [rsp+F0h] [rbp+4Fh] BYREF

  if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
  {
    if ( (unsigned int)Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledDeviceUsage() )
    {
      CurrentProcess = PsGetCurrentProcess(v12, v11, v13);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcess = *(_QWORD *)CurrentProcessWin32Process;
    }
    ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
    v24 = a4;
    v31 = (a7 >> 4) & 1;
    v25 = a3;
    v19 = (a7 >> 3) & 1;
    v26 = a2;
    v20 = (a7 >> 2) & 1;
    v22 = a7 & 1;
    v21 = (a7 >> 1) & 1;
    v28 = a6;
    v23 = a5;
    v29 = InputTraceLogging::RapidHpdToString(a1);
    v30 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v16,
      byte_1C031DA2F,
      v17,
      v18,
      (__int64)&v30,
      (void **)&v29,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64 *)&v28,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v31,
      (void **)&ProcessImageFileName);
  }
}
