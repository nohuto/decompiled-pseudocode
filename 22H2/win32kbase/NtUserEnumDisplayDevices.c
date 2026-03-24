/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C001F1D0
 * Callers:
 *     <none>
 * Callees:
 *     UpdateGraphicsDeviceList @ 0x1C001F2D8 (UpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C0028990 (DrvEnumDisplayDevices.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0037134 (EtwTraceReleaseUserCrit.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0087EE0 (UserSessionSwitchEnterCrit.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // eax
  int v18; // [rsp+30h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+38h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+58h] [rbp-60h] BYREF

  v18 = 0;
  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(&v18);
    if ( v18 )
    {
      if ( qword_1C0256C48 )
        qword_1C0256C48();
      if ( (_DWORD)gdwInAtomicOperation )
      {
        v18 = 0x20000;
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
        v11 = CurrentThreadWin32Thread;
        if ( CurrentThreadWin32Thread )
        {
          v12 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
          if ( (*(_DWORD *)(v11 + 44) || *(_DWORD *)(v11 + 48) || v12 > 0)
            && (unsigned int)dword_1C024AA90 > 6
            && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v9, v10) )
          {
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F61, v11 + 28, 0, 2u, &v19);
          }
          *(_DWORD *)(v11 + 44) = 0;
          *(_OWORD *)(v11 + 28) = 0LL;
        }
      }
      EtwTraceReleaseUserCrit();
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit();
    }
    v6 = DrvEnumDisplayDevices(a1, a4, 1);
  }
  else
  {
    v6 = -1073741823;
  }
  if ( qword_1C0256C48 )
    qword_1C0256C48();
  if ( (_DWORD)gdwInAtomicOperation )
  {
    v18 = 0x20000;
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
    v13 = PsGetCurrentThreadWin32Thread();
    v16 = v13;
    if ( v13 )
    {
      v17 = *(_DWORD *)(v13 + 24);
      if ( (*(_DWORD *)(v16 + 44) || *(_DWORD *)(v16 + 48) || v17 > 0)
        && (unsigned int)dword_1C024AA90 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v14, v15) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F61, v16 + 28, 0, 2u, &v20);
      }
      *(_DWORD *)(v16 + 44) = 0;
      *(_OWORD *)(v16 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v6;
}
