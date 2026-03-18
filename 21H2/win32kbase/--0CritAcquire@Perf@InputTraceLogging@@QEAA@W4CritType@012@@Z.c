/*
 * XREFs of ??0CritAcquire@Perf@InputTraceLogging@@QEAA@W4CritType@012@@Z @ 0x1C002A404
 * Callers:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     NtUserReleaseDC @ 0x1C0029480 (NtUserReleaseDC.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall InputTraceLogging::Perf::CritAcquire::CritAcquire(__int64 a1, int a2)
{
  __int64 CurrentThreadWin32Thread; // rax
  BOOL v6; // eax
  BOOL v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  BOOL *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  else
    CurrentThreadWin32Thread = 0LL;
  *(_QWORD *)a1 = CurrentThreadWin32Thread;
  *(_DWORD *)(a1 + 8) = a2;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(*(_QWORD *)a1 + 48LL)) )
  {
    EtwActivityIdControl(3u, (LPGUID)(a1 + 12));
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v10 = 4;
      v6 = *(_DWORD *)(a1 + 8) == 1;
      v11 = 0;
      v7 = v6;
      v9 = &v7;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD79, a1 + 12, 0, 3u, &v8);
    }
  }
  return a1;
}
