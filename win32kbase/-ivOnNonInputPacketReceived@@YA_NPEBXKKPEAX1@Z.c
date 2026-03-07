char __fastcall ivOnNonInputPacketReceived(const void *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  int v5; // r8d
  int v6; // r8d
  unsigned __int64 v7; // rdx
  PVOID v8; // r8
  LARGE_INTEGER *v9; // rbp
  __int64 v10; // rax
  const struct _IVForegroundPacket *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  LARGE_INTEGER v17; // rax
  __int64 v18; // rbp
  struct _LIST_ENTRY *v19; // r12
  __int64 v20; // r8
  bool v21; // zf
  struct tagTHREADINFO *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  PVOID Reserved; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbp
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v44; // rbp
  struct _LIST_ENTRY *QuadPart; // r12
  __int64 v46; // r8
  struct tagTHREADINFO *v47; // rdi
  __int64 v48; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v50; // rax
  __int64 *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v56; // [rsp+20h] [rbp-48h]
  __int64 v57; // [rsp+20h] [rbp-48h]
  __int64 v58; // [rsp+20h] [rbp-48h]
  struct tagTHREADINFO **v59; // [rsp+30h] [rbp-38h]
  struct tagTHREADINFO **v60; // [rsp+30h] [rbp-38h]

  v5 = a3 - 9;
  if ( !v5 )
  {
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved,
          v31 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v31, Reserved, a4, v56);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v34 = SGDGetUserSessionState(a1, v31, Reserved, a4);
    v60 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v34 + 8));
    if ( v60 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v42 = PsGetCurrentThreadWin32Thread(v39, v38, v40, v41, v56);
        if ( v42 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v44 = PerformanceCounter.QuadPart - *(_QWORD *)(v42 + 8);
          QuadPart = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
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
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v44, 0);
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
          *(_QWORD *)(v42 + 8) = QuadPart;
          if ( !v21
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LODWORD(v58) = 1000000 * v44 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritEvent,
              v46,
              v44,
              v58,
              gullUserCritAcquireToken);
          }
          if ( v44 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)QuadPart - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            {
              LODWORD(v58) = 1000 * v44 / gliQpcFreq.QuadPart;
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                &AcquiredExclusiveUserCritTelemetryEvent,
                v46,
                v44,
                v58,
                gullUserCritAcquireToken);
            }
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = QuadPart;
          }
          *(_QWORD *)(v42 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v47 = *v60;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v47;
        if ( v47 )
        {
          *((_DWORD *)v47 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v48);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
              && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
              && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
            {
              while ( 1 )
              {
                v51 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( !gpSharedUserCritDeferredUnlockListHead )
                  break;
                gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                             + 2);
                v50 = *v51;
                v51[2] = 0LL;
                if ( !*(_DWORD *)(v50 + 8) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                HMUnlockObject(*v51);
              }
            }
          }
        }
        goto LABEL_96;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_96:
    UnpackTouchpadSettings(a4, v35, v36, v37);
    UnpackMouseSettings(&a4->left, v52, v53, v54);
    UnpackPenSettings(a4);
    goto LABEL_97;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v8 = WPP_MAIN_CB.Reserved,
          v7 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v9 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v7, v8, a4, v56);
      if ( v9 )
        v9[1] = KeQueryPerformanceCounter(0LL);
    }
    v10 = SGDGetUserSessionState(a1, v7, v8, a4);
    v59 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v10 + 8));
    if ( v59 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v16 = PsGetCurrentThreadWin32Thread(v13, v12, v14, v15, v56);
        if ( v16 )
        {
          v17 = KeQueryPerformanceCounter(0LL);
          v18 = v17.QuadPart - *(_QWORD *)(v16 + 8);
          v19 = (struct _LIST_ENTRY *)v17.QuadPart;
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
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v18, 0);
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
          *(_QWORD *)(v16 + 8) = v19;
          if ( !v21
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LODWORD(v57) = 1000000 * v18 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritEvent,
              v20,
              v18,
              v57,
              gullUserCritAcquireToken);
          }
          if ( v18 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)v19 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            {
              LODWORD(v57) = 1000 * v18 / gliQpcFreq.QuadPart;
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                &AcquiredExclusiveUserCritTelemetryEvent,
                v20,
                v18,
                v57,
                gullUserCritAcquireToken);
            }
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v19;
          }
          *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v22 = *v59;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v22;
        if ( v22 )
        {
          *((_DWORD *)v22 + 387) = 1;
          v24 = PsGetCurrentProcessWin32Process(v23);
          if ( v24 )
          {
            if ( *(_QWORD *)v24
              && (*(_DWORD *)(v24 + 12) & 0x8000) != 0
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
        goto LABEL_50;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
LABEL_50:
    IVForegroundSync::ivReceiveForegroundUpdate((IVForegroundSync *)a4, v11);
LABEL_97:
    UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
    return 1;
  }
  if ( v6 == 1 )
    CContentRects::SetContentRects(a4[4].left, a4);
  return 1;
}
