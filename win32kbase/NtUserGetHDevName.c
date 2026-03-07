_BOOL8 __fastcall NtUserGetHDevName(__int64 a1, ULONG64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rbx
  int v5; // r15d
  BOOL v6; // r14d
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  char *v10; // rsi
  __int64 *v11; // r13
  __int64 v12; // rcx
  _BYTE *v13; // rcx
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // r8
  unsigned int Count; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _BYTE v25[48]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-48h]

  v4 = a2;
  v5 = a1;
  memset(v25, 0, sizeof(v25));
  v26 = 0LL;
  v6 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v8 = 0LL;
  v9 = (unsigned __int16)v5;
  if ( (unsigned __int64)(unsigned __int16)v5 < *((_QWORD *)gpsi + 1) )
  {
    v9 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)v5;
    v10 = (char *)qword_1C02D0E08 + (unsigned int)v9;
    v11 = (__int64 *)((char *)gpKernelHandleTable + 24 * ((__int64)(unsigned int)v9 >> 5));
    LOWORD(v5) = HIWORD(v5) & 0x7FFF;
    if ( ((HIWORD(v5) & 0x7FFF) == *((_WORD *)v10 + 13)
       || (_WORD)v5 == 0x7FFF
       || !(_WORD)v5 && PsGetCurrentProcessWow64Process())
      && (v10[25] & 1) == 0
      && v10[24] == 12 )
    {
      v8 = *v11;
    }
  }
  if ( v8 )
  {
    v12 = *(_QWORD *)(v8 + 88);
    if ( v12 && (unsigned int)DrvGetHdevName(v12, v25) )
    {
      HIWORD(v26) = 0;
      v13 = (_BYTE *)v4;
      if ( (v4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v4 >= MmUserProbeAddress )
        v13 = (_BYTE *)MmUserProbeAddress;
      *v13 = *v13;
      v13[63] = v13[63];
      v12 = 2147483646LL;
      v9 = (unsigned __int64)v25;
      v14 = 32LL;
      v15 = 0;
      v16 = 0LL;
      while ( v14 )
      {
        if ( !v12 )
          goto LABEL_17;
        v7 = *(unsigned __int16 *)v9;
        if ( !(_WORD)v7 )
          goto LABEL_17;
        v9 += 2LL;
        *(_WORD *)v4 = v7;
        v4 += 2LL;
        --v14;
        --v12;
        ++v16;
      }
      v4 -= 2LL;
      v15 = -2147483643;
LABEL_17:
      *(_WORD *)v4 = 0;
      v6 = v15 >= 0;
    }
  }
  else
  {
    UserSetLastError(1461);
  }
  v17 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v12, v9, v17, v7);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1206LL);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1214LL);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1220LL);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v23 = SGDGetUserSessionState(v20, v19, v21, v22);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v23 + 8));
  return v6;
}
