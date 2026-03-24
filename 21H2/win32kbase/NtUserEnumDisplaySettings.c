/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C001F900
 * Callers:
 *     <none>
 * Callees:
 *     DrvEnumDisplaySettings @ 0x1C001F9E0 (DrvEnumDisplaySettings.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0035CC4 (EtwTraceReleaseUserCrit.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0087230 (UserSessionSwitchEnterCrit.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-50h] BYREF

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
    v8 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), a2, a3, a4);
  else
    v8 = -1073741823;
  if ( qword_1C0257C48 )
    qword_1C0257C48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1359LL);
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v13 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v14 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v13 + 44) || *(_DWORD *)(v13 + 48) || v14 > 0)
        && (unsigned int)dword_1C024BA90 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v11, v12) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218F81, v13 + 28, 0, 2u, &v15);
      }
      *(_DWORD *)(v13 + 44) = 0;
      *(_OWORD *)(v13 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v8;
}
