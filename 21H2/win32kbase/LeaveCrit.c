/*
 * XREFs of LeaveCrit @ 0x1C0035630
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0035CC4 (EtwTraceReleaseUserCrit.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void LeaveCrit()
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  int v4; // eax
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-30h] BYREF

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
    v3 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v4 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v3 + 44) || *(_DWORD *)(v3 + 48) || v4 > 0)
        && (unsigned int)dword_1C024BA90 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 0x2000LL, v1, v2) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218F81, v3 + 28, 0, 2u, &v5);
      }
      *(_DWORD *)(v3 + 44) = 0;
      *(_OWORD *)(v3 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
}
