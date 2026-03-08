/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5610
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     MouseMove @ 0x1C0218170 (MouseMove.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r9
  PVOID Reserved; // rdx
  unsigned __int64 v9; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  struct tagTHREADINFO **v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v19; // rbx
  __int64 v20; // r8
  bool v21; // zf
  struct tagTHREADINFO *v22; // rbx
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+20h] [rbp-48h]

  if ( (dword_1C02D1574 & 0x40) != 0 )
  {
    v4 = gLockBits | gLatchBits | gPhysModifierState;
    if ( (v4 & 3) != 0 )
    {
      v5 = 1;
      goto LABEL_7;
    }
    if ( (v4 & 0xC) != 0 )
    {
      v5 = 4 * (unsigned __int8)byte_1C02D14B2[0];
      goto LABEL_7;
    }
  }
  a1 = (unsigned __int8)byte_1C02D14B1;
  a2 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C02D14B1;
  v5 = (unsigned __int8)byte_1C02D14B2[a2];
  giMouseMoveTable = a2 + 1;
  if ( !v5 )
    return;
LABEL_7:
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  MouseMove(gMKDeltaX * v5, gMKDeltaY * v5);
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v9 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, Reserved, v9, v7, v27);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v11 = SGDGetUserSessionState(v6, Reserved, v9, v7);
  v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v11 + 8));
  if ( !v12 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_21:
    gptiCurrent = 0LL;
    return;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v17 = PsGetCurrentThreadWin32Thread(v14, v13, v15, v16, v27);
    if ( v17 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v19 = PerformanceCounter.QuadPart - *(_QWORD *)(v17 + 8);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v19, 0);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
      v21 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v17 + 8) = PerformanceCounter;
      if ( !v21
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(v28) = 1000000 * v19 / gliQpcFreq.QuadPart;
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritEvent,
          v20,
          v19,
          v28,
          gullUserCritAcquireToken);
      }
      if ( v19 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        {
          LODWORD(v28) = 1000 * v19 / gliQpcFreq.QuadPart;
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritTelemetryEvent,
            v20,
            v19,
            v28,
            gullUserCritAcquireToken);
        }
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v17 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v22 = *v12;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_21;
  gptiCurrent = v22;
  if ( v22 )
  {
    *((_DWORD *)v22 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v26 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v25 = *v26;
          v26[2] = 0LL;
          if ( !*(_DWORD *)(v25 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v26);
        }
      }
    }
  }
}
