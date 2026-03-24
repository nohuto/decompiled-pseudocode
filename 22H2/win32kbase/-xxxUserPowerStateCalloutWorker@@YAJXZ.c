/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C1188
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0077FA0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C004B1D0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     xxxUserSetDisplayConfig @ 0x1C00770F0 (xxxUserSetDisplayConfig.c)
 *     PowerOnMonitor @ 0x1C0078C80 (PowerOnMonitor.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C007A0B8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PowerResumeSuspendEvent @ 0x1C00C1EC0 (PowerResumeSuspendEvent.c)
 *     IsxxxSendMessageBSMSupported @ 0x1C00C2164 (IsxxxSendMessageBSMSupported.c)
 *     RIMSetSystemInputMode @ 0x1C00C2190 (RIMSetSystemInputMode.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00C21E0 (EtwTraceWinlogonSleepStartEvent.c)
 *     PowerOffMonitor @ 0x1C00C2200 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C2720 (xxxSendWinlogonPowerMessage.c)
 *     IsPowerOnGdiSupported @ 0x1C00C2A64 (IsPowerOnGdiSupported.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00C2A90 (EtwTraceWinlogonSleepEndEvent.c)
 *     IsPowerOffGdiSupported @ 0x1C00C5324 (IsPowerOffGdiSupported.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C01256BC (McTemplateK0dq_EtwWriteTransfer.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  struct tagTHREADINFO *v3; // r13
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  PVOID *DomainLockRef; // rbx
  __int64 *v12; // r15
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  char v29; // al
  __int64 v30; // rcx
  NTSTATUS v31; // r8d
  __int64 v32; // rcx
  LARGE_INTEGER *v33; // rbx
  struct tagTHREADINFO **v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PVOID v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rax
  struct _KTHREAD *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 *v48; // rax
  __int64 v49; // rax
  __int64 *v50; // r15
  int v51; // eax
  __int64 v52; // rcx
  NTSTATUS v53; // r8d
  __int64 v54; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v56; // r14
  struct tagTHREADINFO **v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PVOID CurrentProcess; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v69; // rbx
  __int64 v70; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v73; // rax
  int v74; // esi
  __int64 v75; // rdx
  __int64 v76; // rax
  unsigned int v77; // r8d
  const GUID *v78; // r9
  __int64 v79; // rax
  PVOID *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rax
  unsigned int v84; // r8d
  __int64 v85; // rax
  PVOID *v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rdx
  int v91; // r8d
  __int64 v92; // rdx
  signed __int32 v93[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v95; // [rsp+30h] [rbp-D8h]
  int v96; // [rsp+58h] [rbp-B0h]
  int v97; // [rsp+5Ch] [rbp-ACh]
  int v98; // [rsp+60h] [rbp-A8h]
  int v99; // [rsp+64h] [rbp-A4h] BYREF
  bool SystemInformation; // [rsp+68h] [rbp-A0h]
  __int128 SystemInformation_8; // [rsp+70h] [rbp-98h] BYREF
  __int128 v102; // [rsp+80h] [rbp-88h]
  int v103; // [rsp+90h] [rbp-78h] BYREF
  int v104; // [rsp+94h] [rbp-74h] BYREF
  int v105; // [rsp+98h] [rbp-70h] BYREF
  int v106; // [rsp+9Ch] [rbp-6Ch] BYREF
  PVOID *v107; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v108[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v109; // [rsp+B0h] [rbp-58h]
  _DWORD v110[10]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 InputBuffer; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v112; // [rsp+F0h] [rbp-18h]
  unsigned __int8 v113; // [rsp+F8h] [rbp-10h]
  GUID v114; // [rsp+FCh] [rbp-Ch] BYREF
  _OWORD v115[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v116; // [rsp+130h] [rbp+28h]
  unsigned __int8 v117; // [rsp+138h] [rbp+30h]
  GUID v118; // [rsp+13Ch] [rbp+34h] BYREF
  _QWORD v119[10]; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v121; // [rsp+1C8h] [rbp+C0h]
  __int64 v122; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v124; // [rsp+1F8h] [rbp+F0h]
  __int64 v125; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+208h] [rbp+100h] BYREF
  int *v127; // [rsp+228h] [rbp+120h]
  __int64 v128; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v129; // [rsp+238h] [rbp+130h] BYREF
  int *v130; // [rsp+258h] [rbp+150h]
  __int64 v131; // [rsp+260h] [rbp+158h]
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+268h] [rbp+160h] BYREF
  int *v133; // [rsp+288h] [rbp+180h]
  __int64 v134; // [rsp+290h] [rbp+188h]
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+298h] [rbp+190h] BYREF
  PVOID **v136; // [rsp+2B8h] [rbp+1B0h]
  __int64 v137; // [rsp+2C0h] [rbp+1B8h]

  memset(v119, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v119[1]);
  v3 = 0LL;
  v4 = dword_1C0251178;
  v119[8] = MEMORY[0xFFFFF78000000014];
  v97 = dword_1C0251178;
  LODWORD(v119[4]) = dword_1C0251178;
  LODWORD(v119[3]) = 17;
  LOBYTE(v119[6]) = -1;
  InputBuffer = 0LL;
  v109 = 0LL;
  SystemInformation_8 = 0LL;
  v102 = 0LL;
  memset(v115, 0, sizeof(v115));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1, &StartPowerStateCalloutWorker, v2, (unsigned int)dword_1C0251178, 0);
  v5 = -1073741637;
  if ( qword_1C0256540 )
    v6 = qword_1C0256540();
  else
    v6 = -1073741637;
  if ( v6 < 0 )
  {
    v73 = MEMORY[0xFFFFF78000000008];
    v1 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 2) = 5;
LABEL_157:
    *((_QWORD *)&gPowerStateLog + v1) = v73;
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 3) = v6;
    goto LABEL_37;
  }
  if ( qword_1C0256548 )
    v6 = qword_1C0256548();
  else
    v6 = -1073741637;
  v96 = v6;
  if ( v6 < 0 )
  {
    v73 = MEMORY[0xFFFFF78000000008];
    v1 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
    *((_DWORD *)&gPowerStateLog + 2 * v1 + 2) = 6;
    goto LABEL_157;
  }
  if ( !gbPowerCalloutsReady )
  {
    v6 = -2143420409;
    goto LABEL_37;
  }
  if ( v4 == 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 92);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    goto LABEL_37;
  }
  if ( v4 == 2 )
  {
    dword_1C0251198 = 1;
    _InterlockedOr(v93, 0);
    if ( !gSystemIsAoAc )
      RIMSetSystemInputMode(2LL);
    if ( !gbTtmEnabled )
      PowerOffMonitor(dword_1C025117C);
    v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C02511B8 = v23;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      v24 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
      *((_QWORD *)&gPowerStateLog + v24) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)&gPowerStateLog + 2 * v24 + 2) = 3;
      *((_DWORD *)&gPowerStateLog + 2 * v24 + 3) = 1;
      LOBYTE(v24) = 1;
      v25 = xxxSendWinlogonPowerMessage(v24, 262LL, &dword_1C0251168);
      v26 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
      *((_QWORD *)&gPowerStateLog + v26) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)&gPowerStateLog + 2 * v26 + 2) = 4;
      *((_DWORD *)&gPowerStateLog + 2 * v26 + 3) = v25;
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v0) = 1;
    LOBYTE(v23) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v23, v0, 0LL) && (int)IsxxxSendMessageBSMSupported(v27) >= 0 )
    {
      dword_1C0251140 = 16;
      dword_1C0251144 = 40;
      if ( qword_1C02564F8 )
      {
        LODWORD(v95) = 1;
        *(_QWORD *)OutputBufferLength = &dword_1C0251140;
        v28 = qword_1C02564F8(0LL, 536LL, 4LL);
      }
      else
      {
        v28 = 0;
      }
      if ( !v28 )
      {
        v87 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v87) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v87 + 2) = 7;
        *((_DWORD *)&gPowerStateLog + 2 * v87 + 3) = 4;
      }
    }
    if ( dword_1C025116C == 5 )
    {
      if ( gProtocolType )
      {
LABEL_87:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        goto LABEL_35;
      }
      if ( (dword_1C0251170 & 8) != 0 )
      {
        if ( qword_1C0250AA8 )
          v29 = qword_1C0250AA8(0LL, 0LL);
        else
          v29 = 0;
        if ( v29 )
        {
          if ( grpdeskRitInput )
          {
            v91 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 0, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)v119);
            if ( v91 < 0 )
            {
              v92 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
              *((_QWORD *)&gPowerStateLog + v92) = MEMORY[0xFFFFF78000000008];
              *((_DWORD *)&gPowerStateLog + 2 * v92 + 2) = 9;
              *((_DWORD *)&gPowerStateLog + 2 * v92 + 3) = v91;
            }
          }
        }
      }
      else
      {
        EtwTraceWinlogonSleepEndEvent(1LL);
        v88 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v88) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v88 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v88 + 3) = 259;
        LOBYTE(v88) = 1;
        v89 = xxxSendWinlogonPowerMessage(v88, 259LL, &dword_1C0251168);
        v90 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v90) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v90 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v90 + 3) = v89;
        EtwTraceWinlogonSleepEndEvent(0LL);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 && qword_1C0256518 )
      qword_1C0256518();
    goto LABEL_87;
  }
  v7 = v4 - 3;
  switch ( v4 )
  {
    case 3u:
      v51 = dword_1C0251168;
      if ( dword_1C025116C == 5 )
        v51 = 3;
      LODWORD(InputBuffer) = v51;
      LOBYTE(v7) = 1;
      if ( (unsigned int)PowerResumeSuspendEvent(v7, 0LL, 0LL) )
        goto LABEL_36;
      *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
      WORD6(InputBuffer) = 256;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      v53 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v53 < 0 )
      {
        v82 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v82) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v82 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v82 + 3) = v53;
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v52);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v118 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v117 = 1;
        v83 = PsGetCurrentThreadWin32Thread(v54);
        v116 = v83;
        if ( v83 && (*(int *)(v83 + 24) > 0 || *(_DWORD *)(v116 + 48)) )
        {
          EtwActivityIdControl(3u, &v118);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v105 = v117;
            v131 = 4LL;
            v130 = &v105;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
              &v118,
              0LL,
              3u,
              &v129);
          }
        }
      }
      else
      {
        v116 = 0LL;
      }
      v56 = 0LL;
      while ( 1 )
      {
        v57 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v57 )
          v56 = *v57;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v59, v58);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v62, v61) == gpepCSRSS && v56 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v56 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v116
        && (*(_DWORD *)(v116 + 48) || *(int *)(v116 + 24) > 0) )
      {
        *(_DWORD *)(v116 + 44) = 1;
        *(GUID *)(v116 + 28) = v118;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v106 = v117;
            v134 = 4LL;
            v133 = &v106;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &v118,
              0LL,
              3u,
              &v132);
            v84 = dword_1C024AA90;
          }
          if ( v84 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            LODWORD(v107) = v117;
            v137 = 4LL;
            v136 = &v107;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
              &v118,
              0LL,
              3u,
              &v135);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v56;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        v65 = PsGetCurrentProcess(v64, v63);
        ProcessSessionId = PsGetProcessSessionIdEx(v65);
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
          goto LABEL_35;
      }
      CurrentThread = KeGetCurrentThread();
      v69 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v69 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v70);
      if ( !v69
        || !CurrentProcessWin32Process
        || (*(_DWORD *)(v69 + 488) & 0x1000000) == 0
        || (v1 = *(unsigned int *)(v69 + 1232), (v1 & 0x80u) != 0LL)
        || (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) == 0 )
      {
LABEL_35:
        v6 = v96;
LABEL_36:
        v4 = v97;
        goto LABEL_37;
      }
      DomainLockRef = (PVOID *)GetDomainLockRef(12);
      if ( DomainLockRef == gDomainDummyLock )
      {
        v99 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v99 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
      while ( 1 )
      {
        v12 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v85 = *v12;
        v12[2] = 0LL;
        if ( !*(_DWORD *)(v85 + 8) )
        {
          v99 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
        }
        v86 = (PVOID *)GetDomainLockRef(12);
        if ( v86 == gDomainDummyLock )
        {
          v98 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
        }
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v86);
        HMUnlockObject(*v12);
        tagDomLock::LockExclusive((PERESOURCE *)v86);
      }
      goto LABEL_34;
    case 5u:
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        6);
      if ( !gSystemIsAoAc )
        RIMSetSystemInputMode(0LL);
      SystemInformation = dword_1C025116C == 5;
      if ( gSessionId )
      {
        if ( dword_1C025116C == 5 )
        {
          memset((char *)v115 + 12, 0, 20);
          *(_QWORD *)&v102 = v115;
          *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
          *((_QWORD *)&v102 + 1) = 32LL;
          *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
          LODWORD(v115[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
          *(_QWORD *)&v115[0] = 0x100000004LL;
          DWORD2(v115[0]) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        v108[1] = 1;
        v14 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v14) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v14 + 2) = 3;
        *((_DWORD *)&gPowerStateLog + 2 * v14 + 3) = 262;
        LOBYTE(v14) = 1;
        v109 = 0LL;
        v108[0] = 0;
        v15 = xxxSendWinlogonPowerMessage(v14, 262LL, v108);
        v16 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v16) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v16 + 2) = 4;
        *((_DWORD *)&gPowerStateLog + 2 * v16 + 3) = v15;
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( SystemInformation )
        {
          v17 = v102;
          *(_DWORD *)(v102 + 16) |= 1u;
          *(_DWORD *)(v17 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported() >= 0 && qword_1C0256528 )
        qword_1C0256528(v119, 1LL, 5LL);
      dword_1C0251198 = 0;
      _InterlockedOr(v93, 0);
      if ( gbPendingSleepInput )
      {
        v18 = gPendingSleepInputReason;
        gPendingMonitorOnReason = gPendingSleepInputReason;
        gbPendingMonitorOn = 1;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        gbPendingSleepInput = 0;
        gPendingSleepInputReason = 0;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
        PoSetUserPresent(v18);
      }
      else
      {
        dword_1C025119C = 1;
      }
      if ( gSqmIsOptedIn )
        _WinSqmDWORDEvent(
          &SQM_INCREMENT_DWORD,
          0LL,
          4013,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C02511B8)
        / 0x3E8);
      *(_QWORD *)&v115[0] = 0x100000004LL;
      memset((char *)v115 + 12, 0, 20);
      *(_QWORD *)&v102 = v115;
      *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
      *((_QWORD *)&v102 + 1) = 32LL;
      LODWORD(v115[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
      *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
      DWORD2(v115[0]) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      LOBYTE(v19) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v19, 0LL) && (int)IsxxxSendMessageBSMSupported(v20) >= 0 )
      {
        v110[0] = 16;
        v110[1] = 0x20000000;
        if ( qword_1C02564F8 )
        {
          LODWORD(v95) = 1;
          *(_QWORD *)OutputBufferLength = v110;
          v21 = qword_1C02564F8(0LL, 536LL, 18LL);
        }
        else
        {
          v21 = 0;
        }
        if ( !v21 )
        {
          v81 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v81) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v81 + 2) = 7;
          *((_DWORD *)&gPowerStateLog + 2 * v81 + 3) = 18;
        }
      }
      v22 = v102;
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(v102 + 16) |= 1u;
      *(_DWORD *)(v22 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      goto LABEL_35;
    case 6u:
      if ( qword_1C0256480 )
        v5 = qword_1C0256480();
      if ( v5 >= 0 && qword_1C0256488 )
        qword_1C0256488();
      if ( (unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
        goto LABEL_37;
      *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
      WORD6(InputBuffer) = 1;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      v31 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v31 < 0 )
      {
        v75 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
        *((_QWORD *)&gPowerStateLog + v75) = MEMORY[0xFFFFF78000000008];
        *((_DWORD *)&gPowerStateLog + 2 * v75 + 2) = 8;
        *((_DWORD *)&gPowerStateLog + 2 * v75 + 3) = v31;
      }
      v33 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v30);
      if ( v33 )
        v33[1] = KeQueryPerformanceCounter(0LL);
      v114 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v113 = 1;
        v76 = PsGetCurrentThreadWin32Thread(v32);
        v112 = v76;
        if ( v76 && (*(int *)(v76 + 24) > 0 || *(_DWORD *)(v112 + 48)) )
        {
          EtwActivityIdControl(3u, &v114);
          if ( (unsigned int)dword_1C024AA90 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v99 = v113;
            v122 = 4LL;
            v121 = &v99;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FD7,
              &v114,
              0LL,
              3u,
              &v120);
          }
        }
      }
      else
      {
        v112 = 0LL;
      }
      while ( 1 )
      {
        v34 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v34 )
          v3 = *v34;
        v37 = (PVOID)PsGetCurrentProcess(v36, v35);
        if ( v37 )
        {
          if ( v37 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v39, v38) == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v3 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v112
        && (*(_DWORD *)(v112 + 48) || *(int *)(v112 + 24) > 0) )
      {
        *(_DWORD *)(v112 + 44) = 1;
        *(GUID *)(v112 + 28) = v114;
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v103 = v113;
            v125 = 4LL;
            v124 = &v103;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217F80,
              &v114,
              v78,
              3u,
              &v123);
            v77 = dword_1C024AA90;
          }
          if ( v77 > 6 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x2000LL) )
          {
            v104 = v113;
            v128 = 4LL;
            v127 = &v104;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024AA90,
              (unsigned __int8 *)dword_1C0217FAD,
              &v114,
              0LL,
              3u,
              &v126);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v3;
      gbValidateHandleForIL = 1;
      if ( (unsigned __int8)KeIsAttachedProcess() )
      {
        v42 = PsGetCurrentProcess(v41, v40);
        v43 = PsGetProcessSessionIdEx(v42);
        v44 = PsGetCurrentThreadProcess();
        if ( v43 != (unsigned int)PsGetProcessSessionIdEx(v44) )
          goto LABEL_35;
      }
      v45 = KeGetCurrentThread();
      v46 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v48 = (__int64 *)PsGetThreadWin32Thread(v45);
        if ( v48 )
          v46 = *v48;
      }
      v49 = PsGetCurrentProcessWin32Process(v47);
      if ( !v46 )
        goto LABEL_35;
      if ( !v49 )
        goto LABEL_35;
      if ( (*(_DWORD *)(v46 + 488) & 0x1000000) == 0 )
        goto LABEL_35;
      v1 = *(unsigned int *)(v46 + 1232);
      if ( (v1 & 0x80u) != 0LL || (*(_DWORD *)(v49 + 12) & 0x8000) == 0 )
        goto LABEL_35;
      v107 = (PVOID *)GetDomainLockRef(12);
      DomainLockRef = v107;
      if ( v107 == gDomainDummyLock )
      {
        v98 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)*DomainLockRef) == 1 )
      {
        v98 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)*DomainLockRef);
      v50 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v50[2];
          v79 = *v50;
          v50[2] = 0LL;
          if ( !*(_DWORD *)(v79 + 8) )
          {
            v98 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v80 = (PVOID *)GetDomainLockRef(12);
          if ( v80 == gDomainDummyLock )
          {
            v99 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*v80);
          HMUnlockObject(*v50);
          tagDomLock::LockExclusive((PERESOURCE *)v80);
          v50 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        DomainLockRef = v107;
      }
LABEL_34:
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
      goto LABEL_35;
    case 0xAu:
      if ( gbTtmEnabled )
      {
        v98 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3817LL);
      }
      gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 && qword_1C0256518 )
        qword_1C0256518();
      break;
    case 0xBu:
      if ( gbTtmEnabled )
      {
        v98 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3837LL);
      }
      v74 = 0;
      if ( (int)IsPowerOnGdiSupported() >= 0 )
      {
        if ( qword_1C0256528 )
          qword_1C0256528(v119, 0LL, 2LL);
        v74 = 1;
      }
      if ( (gPowerState & 0x20) != 0 )
        PowerOnMonitor(MonitorRequestReasonDP, (__int64)v119, 2u);
      if ( v74 && qword_1C0256538 )
        qword_1C0256538(v119);
      goto LABEL_35;
    default:
      v1 = v4 - 12;
      if ( v4 == 12 )
      {
        if ( gbTtmEnabled )
        {
          v98 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3378LL);
        }
        PowerOffMonitor(MonitorRequestReasonSxTransition);
      }
      else if ( v4 == 13 )
      {
        if ( gbTtmEnabled )
        {
          v98 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3397LL);
        }
        if ( gSessionId != gServiceSessionId )
        {
          EtwTraceWinlogonSleepStartEvent(1LL);
          v8 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v8) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v8 + 2) = 3;
          *((_DWORD *)&gPowerStateLog + 2 * v8 + 3) = 263;
          LOBYTE(v8) = 1;
          v9 = xxxSendWinlogonPowerMessage(v8, 263LL, &dword_1C0251168);
          v10 = 2LL * (_InterlockedExchangeAdd(&gPowerStateLogIndex, 1u) & 0x7F);
          *((_QWORD *)&gPowerStateLog + v10) = MEMORY[0xFFFFF78000000008];
          *((_DWORD *)&gPowerStateLog + 2 * v10 + 2) = 4;
          *((_DWORD *)&gPowerStateLog + 2 * v10 + 3) = v9;
          EtwTraceWinlogonSleepStartEvent(0LL);
          goto LABEL_35;
        }
      }
      break;
  }
  v6 = v96;
LABEL_37:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v1, &StopPowerStateCalloutWorker, v2, v4, v6);
  return (unsigned int)v6;
}
