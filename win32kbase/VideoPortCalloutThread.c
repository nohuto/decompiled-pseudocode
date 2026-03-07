LONG __fastcall VideoPortCalloutThread(PRKEVENT *a1)
{
  unsigned int *v1; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r12
  unsigned int inited; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO **v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v21; // rbx
  int v22; // r8d
  struct tagTHREADINFO *v23; // rbx
  struct tagTHREADINFO *v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v26; // rbx
  unsigned __int8 v27; // cl
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v38; // ebx
  int CurrentProcessSessionId; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _MDEV *v45; // rcx
  CInputConfig *v46; // rcx
  void (*v47)(void); // rax
  char v48; // al
  __int64 v49; // [rsp+20h] [rbp-38h]
  _QWORD v50[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v51; // [rsp+A0h] [rbp+48h] BYREF
  char v52; // [rsp+A8h] [rbp+50h]
  char v53; // [rsp+B0h] [rbp+58h]
  __int64 v54; // [rsp+B8h] [rbp+60h] BYREF

  v1 = (unsigned int *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Blink->Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  inited = InitSystemThread(0LL);
  v8 = *v1;
  v1[6] = inited;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v6, &StartVideoPortCalloutThread, v7, v8, inited);
  if ( (v1[6] & 0x80000000) == 0 )
  {
    v9 = 0x200000010000000LL;
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (Reserved = WPP_MAIN_CB.Reserved,
          v11 = 0x8000002010000000uLL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || ((__int64)WPP_MAIN_CB.Reserved & v9) != 0
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (v9 & qword_1C02C4050) != 0
      && (v9 & qword_1C02C4058) == qword_1C02C4058 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, Reserved, v9, v11, v49);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    }
    v13 = SGDGetUserSessionState(v6, Reserved, v9, v11);
    v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v13 + 8));
    if ( v14 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v19 = PsGetCurrentThreadWin32Thread(v16, v15, v17, v18, v49);
        if ( v19 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v21 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 8);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v21, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          *(LARGE_INTEGER *)(v19 + 8) = PerformanceCounter;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v22,
              v21,
              1000000 * v21 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v21 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (signed __int64)(PerformanceCounter.QuadPart
                              - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v22,
                v21,
                1000 * v21 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
          }
          *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v23 = *v14;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v23;
        if ( v23 )
        {
          *((_DWORD *)v23 + 387) = 1;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
          if ( CurrentProcessWin32Process )
          {
            if ( *(_QWORD *)CurrentProcessWin32Process )
            {
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
              {
                v24 = gptiCurrent;
                if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v26 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    v40 = *v26;
                    v26[2] = 0LL;
                    if ( !*(_DWORD *)(v40 + 8) )
                    {
                      LODWORD(v51) = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                    }
                    HMUnlockObject(*v26);
                  }
                }
              }
            }
          }
        }
LABEL_26:
        if ( *v1 == 7 )
          *(_BYTE *)(SGDGetUserGdiSessionState(v24) + 20) = 1;
        if ( ((*v1 - 7) & 0xFFFFFFFC) != 0 || (v27 = 1, *v1 == 9) )
          v27 = 0;
        xxxWaitForVideoPortCalloutReady(v27, *v1 == 7, v4);
        if ( qword_1C02D7438 )
        {
          if ( (unsigned int)qword_1C02D7438(v29) )
          {
            if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
            {
              if ( *v1 > 0xF )
                goto LABEL_51;
              v32 = 33920LL;
              if ( !_bittest((const int *)&v32, *v1) )
                goto LABEL_51;
            }
          }
        }
        if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
        {
          v38 = (unsigned __int16)gProtocolType;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          DrvDxgkLogCodePointPacket(107LL, *v1, CurrentProcessSessionId, v38);
        }
        v32 = *v1;
        if ( (int)v32 <= 12 )
        {
          if ( (_DWORD)v32 != 12 )
          {
            v28 = (unsigned int)(v32 - 4);
            if ( (_DWORD)v32 != 4 )
            {
              if ( (_DWORD)v32 == 7 )
              {
                v1[6] = Win32kPnpNotify((struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)v1, v4);
                goto LABEL_39;
              }
              if ( (_DWORD)v32 == 8 )
              {
                v50[1] = 0LL;
                v50[0] = 0LL;
                if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
                  || (PVOID)PsGetCurrentProcess(v42, v41, v43, v44) != gpepCSRSS
                  || (v32 = (__int64)grpdeskRitInput) != 0
                  && qword_1C02D6BA0
                  && (int)qword_1C02D6BA0(grpdeskRitInput, v50) >= 0 )
                {
                  LOBYTE(v51) = 1;
                  do
                  {
                    v52 = 0;
                    v53 = 0;
                    v45 = (struct _MDEV *)*((_QWORD *)gpDispInfo + 2);
                    LOBYTE(v54) = 0;
                    if ( (int)DrvProcessDxgkDisplayCallout(v45, (__int64)&v54, (__int64)&v51) < 0 )
                    {
                      LOBYTE(v51) = 0;
                    }
                    else
                    {
                      if ( v52 )
                      {
                        GreIncrementDisplaySettingsUniqueness((__int64)v46);
                        xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0, 0LL);
                      }
                      else if ( v53 )
                      {
                        CInputConfig::OnDisplayStateChange(v46);
                      }
                      if ( (_BYTE)v54 )
                        PostWinlogonMessage(1027LL, 0);
                    }
                  }
                  while ( !(_BYTE)v51 );
                  v1[6] = 0;
                  if ( (unsigned int)UserIsWddmConnectedSession() )
                    UpdateExternalMonitorConnectedStatus(0);
                  if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0
                    && (PVOID)PsGetCurrentProcess(v32, v28, v30, v31) == gpepCSRSS
                    && qword_1C02D6BB0 )
                  {
                    qword_1C02D6BB0(v50, 0LL);
                  }
                }
                goto LABEL_39;
              }
              v28 = (unsigned int)(v32 - 10);
              if ( (_DWORD)v32 != 10 )
              {
                if ( (_DWORD)v32 != 11 )
                {
LABEL_51:
                  v1[6] = -1073741823;
                  goto LABEL_39;
                }
                v35 = v1[4];
                v36 = 0;
LABEL_38:
                DCompositionForceRender(0LL, v28, v35, v36);
LABEL_39:
                if ( *v1 == 7 )
                  *(_BYTE *)(SGDGetUserGdiSessionState(v32) + 20) = 0;
                UserSessionSwitchLeaveCrit(v32, v28, v30, v31);
                goto LABEL_42;
              }
            }
            if ( (_DWORD)v32 == 10 || !*((_QWORD *)v1 + 2) )
            {
              if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
                xxxDwmControl(1034LL, 0);
              if ( (unsigned int)UserIsWddmConnectedSession() )
                SafeDisableMDEV(1u);
            }
            if ( *v1 == 10 || *((_QWORD *)v1 + 2) )
            {
              if ( (unsigned int)UserIsWddmConnectedSession() )
                SafeEnableMDEV(1u);
              if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
                xxxDwmControl(1035LL, 0);
              if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 && qword_1C02D6BC0 )
                qword_1C02D6BC0();
              if ( qword_1C02D6BC8 && (int)qword_1C02D6BC8() >= 0 && qword_1C02D6BD0 )
                qword_1C02D6BD0();
              ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL);
            }
LABEL_138:
            v1[6] = 0;
            goto LABEL_39;
          }
          if ( (int)IsxxxUserResetDisplayDeviceSupported() < 0 )
            goto LABEL_138;
          v47 = (void (*)(void))qword_1C02D6BC0;
        }
        else
        {
          v33 = v32 - 13;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( !v34 )
            {
              v35 = 0;
              v36 = 1;
              LODWORD(v28) = 0;
              goto LABEL_38;
            }
            v32 = (unsigned int)(v34 - 1);
            if ( !(_DWORD)v32 )
            {
              DCompositionDDAChange();
              goto LABEL_39;
            }
            if ( (_DWORD)v32 != 1 )
              goto LABEL_51;
            LOBYTE(v30) = *((_QWORD *)v1 + 2);
            v48 = v30 & 1;
            LOBYTE(v30) = (v30 & 2) != 0;
            LOBYTE(v28) = v48;
            xxxDisplayDiagBlackScreenDetected(8, v28, v30, 0, 0LL);
            goto LABEL_138;
          }
          if ( (int)IsSetPointerSupported() < 0 || (int)IszzzUpdateCursorImageSupported() < 0 )
            goto LABEL_138;
          if ( qword_1C02D6B60 )
            qword_1C02D6B60(1LL);
          v47 = (void (*)(void))qword_1C02D7188;
        }
        if ( v47 )
          v47();
        goto LABEL_138;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
    goto LABEL_26;
  }
LABEL_42:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(v49) = v1[6];
    McTemplateK0dq_EtwWriteTransfer((unsigned int)v49, &StopVideoPortCalloutThread, v7, *v1, v49);
  }
  return KeSetEvent(a1[1], 1, 0);
}
