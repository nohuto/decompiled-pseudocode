void __fastcall ProcessKeyboardInputWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int16 v19; // ax
  unsigned __int8 v20; // r14
  __int64 v21; // r8
  PVOID Reserved; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v26; // rax
  struct tagTHREADINFO **v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v34; // rbx
  __int64 v35; // r8
  struct tagTHREADINFO *v36; // rbx
  __int64 v37; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // rax
  __int64 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int16 v45; // ax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int8 v50; // si
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int16 v60; // bx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int16 ActiveHKL; // ax
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // dl
  __int16 v77; // dx
  __int64 v78; // [rsp+20h] [rbp-40h]
  __int64 v79; // [rsp+20h] [rbp-40h]
  unsigned __int8 v80[4]; // [rsp+30h] [rbp-30h] BYREF
  int v81; // [rsp+34h] [rbp-2Ch]
  _DWORD v82[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v83; // [rsp+40h] [rbp-20h]
  __int128 v84; // [rsp+48h] [rbp-18h]

  v4 = 0;
  v82[0] = 0;
  v7 = *(unsigned __int16 *)(a1 + 4);
  v9 = (unsigned __int16)v7;
  v81 = 0;
  v8 = a3;
  v84 = 0LL;
  LOWORD(v9) = v7 & 0x10;
  if ( (v7 & 0x10) != 0 || a2 && (*(_DWORD *)(a2 + 184) & 0x2000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v81 = 1;
  if ( a2 )
    v83 = *(_QWORD *)a2;
  else
    v83 = 0LL;
  v10 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)&v84 = *(_QWORD *)a1;
  DWORD2(v84) = v10;
  v82[1] = 0;
  if ( (v7 & 0x28) == 0 )
  {
    if ( (*(_DWORD *)(SGDGetUserSessionState(v7, v9, a3, a4) + 12668) & 0x8000) != 0 )
    {
      v15 = SGDGetUserSessionState(v12, v11, v13, v14);
      RemoteSyncToggleKeys(*(unsigned int *)(v15 + 12668), v16, v17, v18);
    }
    v19 = *(_WORD *)(a1 + 4);
    if ( (v19 & 2) != 0 )
      v20 = -32;
    else
      v20 = (v19 & 4) != 0 ? 0xE1 : 0;
    v80[0] = v20;
    if ( *(_WORD *)(a1 + 2) == 255 )
    {
      UserSessionSwitchLeaveCrit(2LL, v11, v13, v14);
      ApiSetEditionUserBeep();
      v21 = 0x200000010000000LL;
      if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
        || (Reserved = WPP_MAIN_CB.Reserved,
            v24 = 0x8000002010000000uLL,
            v23 = 2LL,
            ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
        && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
        || ((__int64)WPP_MAIN_CB.Reserved & v21) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (v21 & qword_1C02C4050) != 0
        && (v21 & qword_1C02C4058) == qword_1C02C4058 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v23, Reserved, v21, v24, v78);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      }
      v26 = SGDGetUserSessionState(v23, Reserved, v21, v24);
      v27 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v26 + 8));
      if ( v27 )
      {
        if ( IsEtwUserCritEnabled() )
        {
          v32 = PsGetCurrentThreadWin32Thread(v29, v28, v30, v31, v78);
          if ( v32 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v34 = PerformanceCounter.QuadPart - *(_QWORD *)(v32 + 8);
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
            UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v34, 0);
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
            *(LARGE_INTEGER *)(v32 + 8) = PerformanceCounter;
            if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x200000010000000LL) != 0
              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              LODWORD(v79) = 1000000 * v34 / gliQpcFreq.QuadPart;
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                &AcquiredExclusiveUserCritEvent,
                v35,
                v34,
                v79,
                gullUserCritAcquireToken);
            }
            if ( v34 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
              && (signed __int64)(PerformanceCounter.QuadPart
                                - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              {
                LODWORD(v79) = 1000 * v34 / gliQpcFreq.QuadPart;
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  &AcquiredExclusiveUserCritTelemetryEvent,
                  v35,
                  v34,
                  v79,
                  gullUserCritAcquireToken);
              }
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
            }
            *(_QWORD *)(v32 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
        }
        v36 = *v27;
        if ( !IsThreadCrossSessionAttached() )
        {
          gptiCurrent = v36;
          if ( v36 )
          {
            *((_DWORD *)v36 + 387) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process
                && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v40 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                               + 2);
                  v39 = *v40;
                  v40[2] = 0LL;
                  if ( !*(_DWORD *)(v39 + 8) )
                  {
                    v81 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                  }
                  HMUnlockObject(*v40);
                }
              }
            }
          }
          goto LABEL_61;
        }
      }
      else
      {
        EtwTraceAcquiredExclusiveUserCrit();
      }
      gptiCurrent = 0LL;
LABEL_61:
      InputTraceLogging::Keyboard::DropInput();
      return;
    }
    if ( isChildPartition() && (*(_BYTE *)(a1 + 4) & 0x40) != 0 )
    {
      v45 = *(_WORD *)(a1 + 2);
      HIWORD(v82[0]) = v45;
    }
    else
    {
      LOBYTE(v82[0]) = *(_BYTE *)(a1 + 2) & 0x7F;
      if ( v8
        && (*(_QWORD *)(SGDGetUserSessionState(v42, v41, v43, v44) + 12640)
         || *(_QWORD *)(SGDGetUserSessionState(v47, v46, v48, v49) + 12648)) )
      {
        HIWORD(v82[0]) = 0;
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
          HIWORD(v82[0]) = 0x8000;
        if ( !(unsigned int)MapScancode((struct tagKE *)v82, v80, (struct DEVICEINFO *)a2, v49) )
          goto LABEL_61;
        v20 = v80[0];
      }
      LOBYTE(v41) = v20;
      LOBYTE(v45) = VKFromVSC(v82, v41);
    }
    v50 = v45;
    *(_BYTE *)(SGDGetUserSessionState(v42, v41, v43, v44) + 13776) = v45;
    if ( v50 )
    {
      if ( (unsigned __int8)(v50 - 91) <= 1u && (*(_BYTE *)(a1 + 4) & 1) == 0 )
      {
        if ( gptiForeground && (v69 = *((_QWORD *)gptiForeground + 55)) != 0 )
          v70 = *(_QWORD *)(*(_QWORD *)(v69 + 48) + 32LL);
        else
          v70 = *(_QWORD *)(SGDGetUserSessionState(v52, v51, v53, v54) + 13840);
        v71 = SGDGetUserSessionState(v52, v51, v53, v54);
        v57 = 0LL;
        if ( *(_WORD *)(v71 + 12664) )
          goto LABEL_86;
        v60 = InternalMapVirtualKeyEx(0x4Cu, 0, v70);
LABEL_85:
        *(_WORD *)(SGDGetUserSessionState(v57, v65, v66, v67) + 12664) = v60;
LABEL_86:
        if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
        {
          ActiveHKL = GetActiveHKL();
          LOBYTE(v57) = LOBYTE(v82[0]) + 15;
          if ( (unsigned __int8)(LOBYTE(v82[0]) + 15) > 1u )
            goto LABEL_102;
          v57 = 1023LL;
          if ( (unsigned __int16)((ActiveHKL & 0x3FF) - 17) > 1u )
            goto LABEL_102;
          if ( ((v50 - 22) & 0xFB) != 0 )
          {
            if ( v20 == 0xE1 )
              return;
            goto LABEL_102;
          }
          if ( v20 == 0xE1 )
LABEL_102:
            HIWORD(v82[0]) |= 0x8000u;
        }
        if ( qword_1C02D7438
          && (unsigned int)qword_1C02D7438(v57)
          && (unsigned __int8)(BYTE2(v82[0]) - 91) <= 1u
          && !*(_DWORD *)(SGDGetUserSessionState(v73, v72, v74, v75) + 13820) )
        {
          goto LABEL_61;
        }
        if ( v50 == 91 )
        {
          v76 = 64;
        }
        else
        {
          if ( v50 != 92 )
          {
            if ( v50 != 160 && v50 != 161 && v50 != 162 && v50 != 163 && (unsigned int)v50 - 164 >= 2 )
            {
              gCurrentModifierBit = 0;
              goto LABEL_123;
            }
            v76 = 1 << (v50 & 0xF);
            gCurrentModifierBit = v76;
            if ( !v76 )
            {
LABEL_123:
              if ( v50 == 13 && (*(_BYTE *)(a1 + 4) & 1) == 0 )
                PoLatencySensitivityHint(1LL);
              if ( (gdwPUDFlags & 0x100) != 0 )
              {
                AccessTimeOut();
                if ( (unsigned int)AccessProceduresStream((struct tagKE *)v82, *(_DWORD *)(a1 + 8), 0) )
                  xxxProcessKeyEvent(
                    (unsigned __int8 *)v82,
                    *(unsigned int *)(a1 + 8),
                    (*(_BYTE *)(a1 + 4) & 0x10) != 0,
                    v4,
                    a2,
                    0LL);
              }
              else
              {
                xxxProcessKeyEvent((unsigned __int8 *)v82, *(unsigned int *)(a1 + 8), v81, v4 != 0, a2, 0LL);
              }
              return;
            }
LABEL_120:
            if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
              gPhysModifierState &= ~v76;
            else
              gPhysModifierState |= v76;
            goto LABEL_123;
          }
          v76 = 0x80;
        }
        gCurrentModifierBit = v76;
        goto LABEL_120;
      }
    }
    else
    {
      if ( gpqForeground )
        v55 = PtiKbdFromQ(gpqForeground);
      else
        v55 = 0LL;
      if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v55) )
        goto LABEL_61;
      v4 = 1;
    }
    v60 = 0;
    if ( !*(_WORD *)(SGDGetUserSessionState(v52, v51, v53, v54) + 12664) )
      goto LABEL_86;
    v62 = *(unsigned __int16 *)(SGDGetUserSessionState(v57, v56, v58, v59) + 12664);
    if ( *(_WORD *)(a1 + 2) == (_WORD)v62 )
    {
      v50 = 76;
      *(_BYTE *)(SGDGetUserSessionState(v62, v61, v63, v64) + 13776) = 76;
      HIWORD(v82[0]) = 76;
      v60 = 0;
    }
    v57 = *(unsigned int *)(SGDGetUserSessionState(v62, v61, v63, v64) + 13796);
    if ( (v57 & 8) != 0 && ((*(_BYTE *)(a1 + 4) & 1) == 0 || (unsigned __int8)(v50 - 91) > 1u) )
      goto LABEL_86;
    goto LABEL_85;
  }
  if ( (v7 & 8) != 0 )
  {
    if ( (v7 & 0x10) != 0 )
      *(_DWORD *)(a1 + 8) |= 0x4000u;
    RemoteSyncToggleKeys(*(unsigned int *)(a1 + 8), v9, a3, a4);
  }
  v77 = *(_WORD *)(a1 + 4);
  if ( (v77 & 0x20) != 0 )
  {
    LOWORD(v82[0]) = *(_WORD *)(a1 + 2);
    HIWORD(v82[0]) = (v77 << 15) | 0x10E7;
    xxxProcessKeyEvent((unsigned __int8 *)v82, 0LL, (v77 & 0x10) != 0, 0, a2, 0LL);
  }
}
