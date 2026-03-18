/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x1C0029830
 * Callers:
 *     NtUserReleaseDC @ 0x1C0029480 (NtUserReleaseDC.c)
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     EnterSharedCrit @ 0x1C002A270 (EnterSharedCrit.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0151B44 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

char EtwTraceAcquiredSharedUserCrit()
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v1; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v3; // r8d
  LONGLONG v4; // rbx
  __int64 QuadPart; // rsi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  bool v10; // zf
  __int64 v12; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-A0h]
  __int64 v14; // [rsp+40h] [rbp-98h]
  __int64 v15; // [rsp+48h] [rbp-90h]
  __int64 v16; // [rsp+50h] [rbp-88h]
  __int64 v17; // [rsp+58h] [rbp-80h]
  __int64 v18; // [rsp+60h] [rbp-78h]
  __int64 v19; // [rsp+68h] [rbp-70h]
  __int64 v20; // [rsp+70h] [rbp-68h]
  __int64 v21; // [rsp+78h] [rbp-60h]
  __int64 v22; // [rsp+80h] [rbp-58h]
  __int64 v23; // [rsp+88h] [rbp-50h]
  __int64 v24; // [rsp+90h] [rbp-48h]
  __int64 v25; // [rsp+98h] [rbp-40h]
  __int64 v26; // [rsp+A0h] [rbp-38h]

  if ( dword_1C028D6F0 && (unsigned __int8)tlgKeywordOn(&dword_1C028D6F0, 0x400000000000LL)
    || (LOBYTE(CurrentThreadWin32Thread) = W32kEtwEnabledKeyword, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (LOBYTE(CurrentThreadWin32Thread) = byte_1C028DB38 - 1, (unsigned __int8)(byte_1C028DB38 - 1) > 2u)
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (LOBYTE(CurrentThreadWin32Thread) = 0, (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28) )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v1 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v4 = PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 8);
      QuadPart = PerformanceCounter.QuadPart;
      if ( (dword_1C0296CC0 & 1) == 0 )
      {
        dword_1C0296CC0 |= 1u;
        memset(qword_1C0296CD0, 0, 0x198uLL);
        qword_1C0296E68 = 0LL;
        qword_1C0296E70 = 0LL;
      }
      v6 = 1000000 * v4;
      v12 = 10LL;
      v13 = 25LL;
      v14 = 50LL;
      v15 = 100LL;
      v16 = 250LL;
      v17 = 500LL;
      v18 = 1000LL;
      v19 = 2500LL;
      v20 = 5000LL;
      v21 = 10000LL;
      v22 = 25000LL;
      v23 = 50000LL;
      v24 = 100000LL;
      v25 = 200000LL;
      v26 = -1LL;
      if ( gliQpcFreq.QuadPart == 10000000 )
        v7 = v6 / 0x989680;
      else
        v7 = v6 / gliQpcFreq.QuadPart;
      v8 = 0LL;
      v9 = &v12;
      while ( v7 > *v9 )
      {
        v8 = (unsigned int)(v8 + 1);
        ++v9;
        if ( (unsigned int)v8 >= 0xF )
          goto LABEL_14;
      }
      _InterlockedIncrement64(&qword_1C0296CD0[v8 + 15]);
LABEL_14:
      _InterlockedExchangeAdd64((_QWORD *)&xmmword_1C0296E38 + 1, v7);
      _InterlockedIncrement64((volatile signed __int64 *)&xmmword_1C0296E58);
      v10 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
      *(_QWORD *)(v1 + 8) = QuadPart;
      if ( !v10
        && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
        && (qword_1C028DB20 & 0x200000010000000LL) != 0
        && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          v8,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v3,
          v4,
          0,
          gullUserCritAcquireToken,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      if ( v4 >= W32kEtwUserCritAcquireDelayTimeoutQPC
        && QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v3,
            v4,
            (__int64)v6 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, QuadPart);
      }
      CurrentThreadWin32Thread = _InterlockedIncrement64(&gullUserCritAcquireToken);
      *(_QWORD *)(v1 + 16) = CurrentThreadWin32Thread;
    }
  }
  return CurrentThreadWin32Thread;
}
