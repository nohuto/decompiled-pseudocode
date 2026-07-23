/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800E90F8
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180064940 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180065F80 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800660A0 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x18009D800 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlCaptureContext @ 0x1800A1640 (RtlCaptureContext.c)
 *     RtlReportExceptionHelper @ 0x1800DCED0 (RtlReportExceptionHelper.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

void __fastcall RtlpPossibleDeadlock(unsigned __int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  int v4; // eax
  __int64 v5; // rdi
  LONG (__cdecl *v6)(PEXCEPTION_POINTERS); // rcx
  int v7; // edi
  signed __int32 v8; // ecx
  int v9; // eax
  _QWORD *v10; // r9
  int ProcessInformation; // [rsp+30h] [rbp-5E8h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-5E0h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-5C8h] BYREF
  int v14; // [rsp+70h] [rbp-5A8h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+90h] [rbp-588h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+130h] [rbp-4E8h] BYREF

  v2 = RtlpUnhandledExceptionFilter;
  v3 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v3 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v5 = __ROR8__(v2, 64 - (v3 & 0x3F));
  v6 = (LONG (__cdecl *)(PEXCEPTION_POINTERS))(v5 ^ v3);
  if ( v3 == v5 )
    v6 = RtlUnhandledExceptionFilter;
  v12[1] = v6;
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  v7 = 1;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  v8 = _InterlockedIncrement(&PossibleDeadlockReportCounter);
  if ( PossibleDeadlockReportThreshold && v8 == PossibleDeadlockReportThreshold )
  {
    v9 = 0;
    if ( ((5 * PossibleDeadlockReportThreshold) & 0x40000000) == 0 )
      v9 = 10 * PossibleDeadlockReportThreshold;
    PossibleDeadlockReportThreshold = v9;
    RtlCaptureContext(&ContextRecord);
    v12[0] = 0LL;
    if ( !LdrpIsSecureProcess )
    {
      if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageInformation, v13, 0x40u, 0LL) >= 0
        && v14 == 1 )
      {
        v12[0] = -300000000LL;
      }
      else
      {
        v7 = 0;
      }
      v10 = v12;
      if ( !v7 )
        v10 = 0LL;
      RtlReportExceptionHelper((__int64)&ExceptionRecord, &ContextRecord, 15LL, (__int64)v10);
    }
  }
  if ( RtlpRaiseExceptionOnPossibleDeadlock )
    RtlRaiseException(&ExceptionRecord);
}
