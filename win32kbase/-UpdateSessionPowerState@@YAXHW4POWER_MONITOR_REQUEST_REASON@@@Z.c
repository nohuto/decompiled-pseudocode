void __fastcall UpdateSessionPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // r9
  PVOID Reserved; // rdx
  unsigned __int64 v57; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v59; // rax
  struct tagTHREADINFO **v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdi
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v67; // rbx
  int v68; // r8d
  bool v69; // zf
  struct tagTHREADINFO *v70; // rbx
  __int64 v71; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v73; // rax
  __int64 *v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 OutputBufferLength; // [rsp+20h] [rbp-78h]
  __int64 InputBuffer; // [rsp+38h] [rbp-60h] BYREF
  int v86; // [rsp+40h] [rbp-58h]
  char v87; // [rsp+44h] [rbp-54h]
  bool v88; // [rsp+45h] [rbp-53h]
  __int16 v89; // [rsp+46h] [rbp-52h]
  int v90; // [rsp+48h] [rbp-50h]

  v4 = a2;
  v89 = 0;
  v5 = a1;
  v6 = *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  *(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 3016) = v6;
  v15 = *(_DWORD *)(SGDGetUserSessionState(v12, v11, v13, v14) + 3080);
  *(_DWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 3076) = v15;
  *(_DWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 3080) = v5 != 0;
  v24 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v25 = (v24 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v28 = v25 - *(_QWORD *)(SGDGetUserSessionState(v24, v25, v26, v27) + 3032);
  *(_QWORD *)(SGDGetUserSessionState(v30, v29, v31, v32) + 3024) = v28;
  v33 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v34 = (v33 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_QWORD *)(SGDGetUserSessionState(v33, v34, v35, v36) + 3032) = v34;
  if ( gProtocolType )
    *(_WORD *)(SGDGetUserSessionState(v38, v37, v39, v40) + 3084) = 0;
  else
    *(_WORD *)(SGDGetUserSessionState(v38, v37, v39, v40) + 3084) = 1;
  *(_DWORD *)(SGDGetUserSessionState(v42, v41, v43, v44) + 2952) = v5;
  UpdateAdaptiveSessionState();
  UserSessionSwitchLeaveCrit(v46, v45, v47, v48);
  InputBuffer = 19LL;
  v53 = *(_DWORD *)SGDGetUserSessionState(v50, v49, v51, v52);
  v88 = gProtocolType == 0;
  v86 = v53;
  v87 = v5;
  v90 = v4;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v57 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x200000010000000LL) != 0
    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(
                                                  v54,
                                                  Reserved,
                                                  v57,
                                                  v55,
                                                  OutputBufferLength);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v59 = SGDGetUserSessionState(v54, Reserved, v57, v55);
  v60 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v59 + 8));
  if ( !v60 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_18:
    gptiCurrent = 0LL;
    goto LABEL_49;
  }
  if ( IsEtwUserCritEnabled() )
  {
    v65 = PsGetCurrentThreadWin32Thread(v62, v61, v63, v64, OutputBufferLength);
    if ( v65 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v67 = PerformanceCounter.QuadPart - *(_QWORD *)(v65 + 8);
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
      UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v67, 0);
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
      v69 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
      *(LARGE_INTEGER *)(v65 + 8) = PerformanceCounter;
      if ( !v69
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v68,
          v67,
          1000000 * v67 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v67 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v68,
            v67,
            1000 * v67 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v65 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v70 = *v60;
  if ( IsThreadCrossSessionAttached() )
    goto LABEL_18;
  gptiCurrent = v70;
  if ( v70 )
  {
    *((_DWORD *)v70 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v71);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v74 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v73 = *v74;
          v74[2] = 0LL;
          if ( !*(_DWORD *)(v73 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
          HMUnlockObject(*v74);
        }
      }
    }
  }
LABEL_49:
  EtwTraceDisplayChange();
  SGDGetUserSessionState(v76, v75, v77, v78);
  v83 = SGDGetUserSessionState(v80, v79, v81, v82);
  CitDisplayPowerChange(v83 + 3016);
}
