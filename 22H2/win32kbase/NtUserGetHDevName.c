/*
 * XREFs of NtUserGetHDevName @ 0x1C004C950
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     DrvGetHdevName @ 0x1C00C4430 (DrvGetHdevName.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall NtUserGetHDevName(__int64 a1, ULONG64 a2)
{
  int v3; // r15d
  BOOL v4; // esi
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rdx
  char *v8; // r13
  __int64 *v9; // r12
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // rax
  int v13; // r10d
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int Count; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _BYTE v23[48]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v24; // [rsp+D0h] [rbp-48h]

  v3 = a1;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v4 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1);
  v6 = 0LL;
  v7 = (unsigned __int16)v3;
  if ( (unsigned __int64)(unsigned __int16)v3 < *((_QWORD *)gpsi + 1) )
  {
    v7 = dword_1C028FE70 * (unsigned int)(unsigned __int16)v3;
    v8 = (char *)qword_1C028FE68 + (unsigned int)v7;
    v9 = (__int64 *)((char *)gpKernelHandleTable + 24 * ((__int64)(unsigned int)v7 >> 5));
    LOWORD(v3) = HIWORD(v3) & 0x7FFF;
    if ( ((HIWORD(v3) & 0x7FFF) == *((_WORD *)v8 + 13)
       || (_WORD)v3 == 0x7FFF
       || !(_WORD)v3 && PsGetCurrentProcessWow64Process())
      && (v8[25] & 1) == 0
      && v8[24] == 12 )
    {
      v6 = *v9;
    }
  }
  if ( v6 )
  {
    v10 = *(_QWORD *)(v6 + 88);
    if ( v10 && (unsigned int)DrvGetHdevName(v10, v23) )
    {
      HIWORD(v24) = 0;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (_BYTE *)a2;
      if ( a2 >= MmUserProbeAddress )
        v11 = (_BYTE *)MmUserProbeAddress;
      *v11 = *v11;
      v11[63] = v11[63];
      v10 = 2147483646LL;
      v7 = (__int64)v23;
      v12 = 32LL;
      v13 = 0;
      v14 = 0LL;
      while ( v12 )
      {
        if ( !v10 )
          goto LABEL_24;
        v5 = *(unsigned __int16 *)v7;
        if ( !(_WORD)v5 )
          goto LABEL_24;
        v7 += 2LL;
        *(_WORD *)a2 = v5;
        a2 += 2LL;
        --v12;
        --v10;
        ++v14;
      }
      a2 -= 2LL;
      v13 = -2147483643;
LABEL_24:
      *(_WORD *)a2 = 0;
      v4 = v13 >= 0;
    }
  }
  else
  {
    UserSetLastError(1461LL);
  }
  v15 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v10, v7, v15, v5) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1170LL);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1178LL);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1184LL);
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
  if ( gptiCurrent && W32GetCurrentThread() )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v21 = SGDGetUserSessionState(v18, v17, v19, v20);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v21 + 8));
  return v4;
}
