__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  int v2; // r15d
  struct _KPROCESS *ThreadProcess; // rdi
  __int64 v4; // rcx
  struct _NT_TIB *Self; // r13
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v7; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned int *v9; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  void *v11; // rdi
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rdx
  ULONG64 v15; // r8
  ULONG64 v16; // rdx
  void *QuotaZInit; // rax
  _QWORD *v18; // rax
  __int64 v19; // rsi
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _BOOL8 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  _DWORD *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rcx
  __int64 v43; // rcx
  struct _EPROCESS *v44; // r13
  int v45; // r12d
  HANDLE *v46; // r14
  int Event; // edi
  HANDLE v48; // rcx
  HANDLE v49; // r15
  __int64 v50; // r8
  PVOID v51; // r12
  const unsigned __int16 *v52; // rdx
  int v53; // r15d
  __int64 *v54; // r13
  struct tagQ *v55; // rax
  struct tagQ *v56; // r14
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  struct tagDESKTOP *v77; // r14
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  int v101; // edx
  int v102; // r8d
  struct tagQ *v103; // r14
  __int64 v104; // rax
  _QWORD *v105; // rax
  int v106; // eax
  unsigned int v108; // eax
  _QWORD *ProcessWin32Process; // rax
  __int64 v110; // r8
  __int64 v111; // r9
  char v112; // al
  __int64 v113; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  _DWORD *v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  bool IsLockedShared; // al
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // r14
  unsigned int CurrentProcessId; // eax
  __int64 v125; // rcx
  __int64 v126; // r8
  HANDLE *InitialState; // [rsp+20h] [rbp-198h]
  BOOLEAN InitialStatea[8]; // [rsp+20h] [rbp-198h]
  BOOLEAN InitialStateb[8]; // [rsp+20h] [rbp-198h]
  PVOID Object; // [rsp+50h] [rbp-168h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-160h] BYREF
  PEPROCESS Process; // [rsp+60h] [rbp-158h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp-150h] BYREF
  HANDLE v134[2]; // [rsp+70h] [rbp-148h] BYREF
  __int64 v135; // [rsp+80h] [rbp-138h] BYREF
  __int64 v136; // [rsp+88h] [rbp-130h]
  void *v137; // [rsp+90h] [rbp-128h]
  __int64 v138; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v139; // [rsp+A8h] [rbp-110h]
  __int128 v140; // [rsp+B0h] [rbp-108h]
  __int128 v141; // [rsp+C0h] [rbp-F8h]
  void *v142; // [rsp+D0h] [rbp-E8h]
  __int64 v143; // [rsp+D8h] [rbp-E0h]
  unsigned __int16 *v144; // [rsp+E0h] [rbp-D8h]
  __int64 *v145; // [rsp+F0h] [rbp-C8h]
  PVOID v146; // [rsp+F8h] [rbp-C0h] BYREF
  __int128 v147; // [rsp+100h] [rbp-B8h] BYREF
  __int128 v148; // [rsp+110h] [rbp-A8h]
  __int128 v149; // [rsp+120h] [rbp-98h] BYREF
  __int64 v150; // [rsp+130h] [rbp-88h]
  __int128 v151; // [rsp+138h] [rbp-80h] BYREF
  __int64 v152; // [rsp+148h] [rbp-70h]
  _QWORD v153[13]; // [rsp+150h] [rbp-68h] BYREF
  int v154; // [rsp+1C8h] [rbp+10h] BYREF
  int v155; // [rsp+1D0h] [rbp+18h]
  struct tagDESKTOP *v156; // [rsp+1D8h] [rbp+20h]

  v2 = 0;
  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  v4 = 0LL;
  v156 = 0LL;
  HandleInformation = 0LL;
  Handle = 0LL;
  v134[0] = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v137 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(0LL, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( gbCleanedUpResources )
    return 3221225738LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v4);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return 3221225738LL;
  ++gdwGuiThreads;
  if ( ThreadProcess == gpepCSRSS )
    v2 = 33554504;
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  tagTHREADINFO::Initialize((tagTHREADINFO *)v7);
  v142 = 0LL;
  Object = *(PVOID *)(PsGetProcessPeb(ThreadProcess) + 32);
  v145 = &v138;
  v138 = *((_QWORD *)Object + 4);
  v139 = *((_QWORD *)Object + 5);
  v140 = *(_OWORD *)((char *)Object + 136);
  *(_QWORD *)&v141 = *(_QWORD *)((char *)Object + 164);
  v9 = (unsigned int *)((char *)Object + 192);
  if ( (unsigned __int64)Object + 192 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = (NSInstrumentation::CLeakTrackingAllocator *)*v9;
  v155 = (int)v10;
  DWORD2(v141) = (_DWORD)v10;
  v11 = (void *)*((_QWORD *)v9 + 1);
  v142 = v11;
  if ( !(_WORD)v10 )
  {
    v142 = 0LL;
    goto LABEL_14;
  }
  if ( ((unsigned __int8)v11 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = (ULONG64)v11 + (unsigned __int16)v10 + 2;
  if ( v16 <= (unsigned __int64)v11 || v16 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v10 > HIWORD(v155) )
  {
    if ( ((unsigned __int8)v10 & 1) == 0 )
      goto LABEL_35;
    goto LABEL_34;
  }
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
LABEL_34:
    v154 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 901LL);
LABEL_35:
    ExRaiseAccessViolation();
  }
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v10,
                         v16,
                         (unsigned __int16)v10,
                         0x79747355u);
  v137 = QuotaZInit;
  v142 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  if ( qword_1C02D65C8 )
  {
    qword_1C02D65C8(QuotaZInit, &v151, Win32FreePool);
    QuotaZInit = v142;
  }
  memmove(QuotaZInit, v11, WORD4(v141));
LABEL_14:
  v12 = (unsigned int *)((char *)Object + 208);
  if ( (unsigned __int64)Object + 208 >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v13 = *v12;
  v155 = v13;
  LODWORD(v143) = v13;
  v14 = (unsigned __int16 *)*((_QWORD *)v12 + 1);
  v144 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  if ( v15 <= (unsigned __int64)v14 || v15 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v13 > HIWORD(v155) )
  {
    if ( (v13 & 1) == 0 )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( (v13 & 1) != 0 )
  {
LABEL_39:
    v155 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 924LL);
LABEL_40:
    ExRaiseAccessViolation();
  }
  v18 = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
  v19 = (__int64)v18;
  if ( v18 && !*v18 )
    v19 = 0LL;
  v20 = v2 | 0x100;
  if ( (*(_DWORD *)(v19 + 12) & 0x80u) == 0 )
    v20 = v2;
  if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
    v20 |= 0x2000000u;
  *(_DWORD *)(v7 + 488) = v20;
  CurrentProcess = PsGetCurrentProcess(v22, v21, v23, v24);
  v29 = 0LL;
  if ( CurrentProcess )
    v29 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( v29 )
    *(_DWORD *)(v7 + 1272) |= 4u;
  if ( (dword_1C02CEE1C & 0x80u) == 0 )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(v29, v26, v27, v28) + 13912) )
    {
LABEL_55:
      if ( *(_QWORD *)(SGDGetUserSessionState(v31, v30, v32, v33) + 13912) )
      {
        v39 = *(_DWORD **)(SGDGetUserSessionState(v35, v34, v36, v37) + 13912);
        if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_EXCLUSIVE(v38, v34, v36, v37) )
        {
          if ( !IS_USERCRIT_OWNED_AT_ALL(v40, v34, v36, v37)
            || (!tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
             && !tagDomLock::IsLockedShared(&gDomainHandleManagerLock)
              ? (v112 = 0)
              : (v112 = 1),
                !v112) )
          {
            __int2c();
          }
        }
        v35 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)*v39;
        if ( (*((_BYTE *)qword_1C02D0E08 + v35 + 25) & 1) != 0 )
        {
          v155 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 987LL);
        }
      }
      v41 = *(_QWORD *)(SGDGetUserSessionState(v35, v34, v36, v37) + 13912);
      v153[0] = v7 + 440;
      v153[1] = v41;
      v42 = v153;
      goto LABEL_61;
    }
    v113 = gspklBaseLayout;
    if ( gspklBaseLayout )
    {
      v121 = SGDGetUserSessionState(v31, v30, v32, v33);
      v122 = 1LL;
    }
    else
    {
      v113 = gspklWinstaLessSessionLayouts;
      if ( !gspklWinstaLessSessionLayouts )
        goto LABEL_55;
      v121 = SGDGetUserSessionState(v31, v30, v32, v33);
      v122 = 0LL;
    }
    v135 = v121 + 13912;
    v136 = v113;
    HMAssignmentLock(&v135, v122);
    goto LABEL_55;
  }
  v115 = (_DWORD *)gspklBaseLayout;
  if ( gspklBaseLayout )
  {
    if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_EXCLUSIVE(v29, v26, v27, v28) )
    {
      if ( !IS_USERCRIT_OWNED_AT_ALL(v117, v116, v118, v119) )
        goto LABEL_234;
      if ( tagDomLock::IsLockedExclusive(&gDomainHandleManagerLock)
        || (IsLockedShared = tagDomLock::IsLockedShared(&gDomainHandleManagerLock)) )
      {
        IsLockedShared = 1;
      }
      if ( !IsLockedShared )
LABEL_234:
        __int2c();
    }
    if ( (*((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*v115 + 25) & 1) != 0 )
    {
      v155 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 969LL);
    }
  }
  v135 = v7 + 440;
  v136 = gspklBaseLayout;
  v42 = &v135;
LABEL_61:
  HMAssignmentLock(v42, 0LL);
  *(_QWORD *)(v7 + 448) = v7 + 1056;
  if ( (*(_DWORD *)(v19 + 12) & 0x800000) != 0 )
    *(_DWORD *)(v7 + 488) |= 0x2000000u;
  if ( (*(_DWORD *)(v19 + 812) & 0x400) != 0 )
    *(_DWORD *)(v7 + 1272) |= 0x20u;
  *(_QWORD *)(v7 + 424) = v19;
  *(_QWORD *)(v7 + 664) = *(_QWORD *)(v19 + 320);
  *(_QWORD *)(v19 + 320) = v7;
  ++*(_DWORD *)(v19 + 376);
  if ( Self )
    Self[2].StackBase = PsGetThreadId(*(PETHREAD *)v7);
  *(_QWORD *)(v7 + 480) = (char *)Self + 2048;
  LODWORD(Self[40].ArbitraryUserPointer) = *(_DWORD *)(v7 + 340);
  *(_DWORD *)(*(_QWORD *)(v7 + 480) + 236LL) = 0;
  v43 = *(_QWORD *)(v7 + 480);
  *(_QWORD *)(v7 + 360) = v43 + 232;
  *(_DWORD *)(v43 + 240) = *(_DWORD *)(v7 + 344);
  *(_DWORD *)(*(_QWORD *)(v7 + 480) + 244LL) = 0;
  *(_QWORD *)(v7 + 368) = *(_QWORD *)(v7 + 480) + 240LL;
  if ( (*(_DWORD *)(v19 + 12) & 0x2000000) != 0 )
  {
    *(_DWORD *)(v7 + 488) |= 0x20000000u;
    if ( !*(_QWORD *)(v19 + 760) )
    {
      v155 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1067LL);
    }
  }
  v44 = Process;
  if ( !*(_DWORD *)(v7 + 632) )
  {
    if ( PsGetProcessPeb(Process) )
    {
      ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
      *(_DWORD *)(v7 + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
    }
    else
    {
      *(_DWORD *)(v7 + 632) = 1536;
    }
  }
  if ( qword_1C02D65E0 && (int)qword_1C02D65E0() >= 0 && qword_1C02D65E8 )
    qword_1C02D65E8();
  v45 = v20 & 0xC;
  v155 = v45;
  if ( !v45 && qword_1C02D65F0 && (int)qword_1C02D65F0() >= 0 && qword_1C02D65F8 && (unsigned int)qword_1C02D65F8(v7) )
    *(_DWORD *)(v19 + 12) |= 0x1000000u;
  v46 = (HANDLE *)(v7 + 728);
  Event = ZwCreateEvent((PHANDLE)(v7 + 728), 0x1F0003u, 0LL, SynchronizationEvent, 0);
  if ( Event >= 0 )
  {
    v48 = *v46;
    Object = 0LL;
    Event = ObReferenceObjectByHandle(v48, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    *(_QWORD *)(v7 + 736) = Object;
    if ( Event < 0 )
    {
      if ( Event != -1073741816 )
        ObCloseHandle(*v46, 1);
    }
    else
    {
      v49 = *v46;
      HandleInformation = 0LL;
      Object = 0LL;
      Event = ObReferenceObjectByHandle(v49, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, &HandleInformation);
      v51 = Object;
      if ( Event >= 0 )
      {
        LOBYTE(v154) = (HandleInformation.HandleAttributes & 2) != 0;
        BYTE1(v154) = 1;
        LOBYTE(v50) = 1;
        Event = ObSetHandleAttributes(v49, &v154, v50);
        ObfDereferenceObject(v51);
      }
      v45 = v155;
    }
  }
  if ( Event < 0 )
  {
    *v46 = 0LL;
    goto LABEL_244;
  }
  Event = ObDuplicateObject(v44, *v46, v44, v7 + 1480, 0, 512, 2, 0);
  if ( Event < 0 )
  {
    *(_QWORD *)(v7 + 1480) = 0LL;
    goto LABEL_244;
  }
  Event = InitializeThreadInfoIocp(v44, (void **)v7);
  if ( Event < 0 )
  {
LABEL_244:
    v77 = v156;
    goto LABEL_245;
  }
  v53 = *(_DWORD *)(v19 + 12) & 0x4000;
  *(_DWORD *)(v19 + 12) |= 0x4000u;
  if ( !*(_DWORD *)(v19 + 780) && (_DWORD)v141 )
  {
    *(_DWORD *)(v19 + 780) = 28;
    *(_OWORD *)(v19 + 784) = v140;
    *(_DWORD *)(v19 + 800) = v141;
    *(_WORD *)(v19 + 804) = WORD2(v141);
  }
  if ( v53 )
  {
    v54 = v145;
  }
  else
  {
    if ( (v141 & 0x200) != 0 )
    {
      v108 = v138;
    }
    else if ( (_WORD)v143 )
    {
      v108 = ParseReserved(v144, v52);
    }
    else
    {
      v108 = 0;
    }
    *(_DWORD *)(v19 + 684) = v108;
    v54 = v145;
    if ( (v145[4] & 0x400) != 0 )
    {
      v123 = v145[1];
      if ( HMValidateSharedHandle(v145[1]) )
        *(_QWORD *)(v19 + 688) = v123;
    }
  }
  v55 = (struct tagQ *)AllocQueue(0LL, 0LL);
  v56 = v55;
  if ( !v55 )
  {
    Event = -1073741801;
    goto LABEL_244;
  }
  tagTHREADINFO::AssignQueue((tagTHREADINFO *)v7, v55);
  *((_QWORD *)v56 + 13) = v7;
  *((_QWORD *)v56 + 12) = v7;
  ApiSetEditionUpdateRawMouseMode(v56);
  if ( Process == gpepCSRSS )
  {
    *((_DWORD *)v56 + 108) = 0x2000;
    v57 = 0;
  }
  else
  {
    *((_DWORD *)v56 + 108) = *(_DWORD *)(*(_QWORD *)(v7 + 424) + 864LL);
    v57 = *(_DWORD *)(*(_QWORD *)(v7 + 424) + 868LL);
  }
  *((_DWORD *)v56 + 109) = v57;
  if ( (*(_DWORD *)(v7 + 488) & 0xC) != 0 || !grpWinStaList )
  {
    *(_DWORD *)(v7 + 1272) |= 0x10u;
    if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported() >= 0 )
    {
      Event = ApiSetEditionSetProcessWindowStationAtProcessInit(v54 + 5, v54[4] & 0x40000000);
      if ( Event < 0 )
        goto LABEL_244;
      *(_DWORD *)(v19 + 12) |= 0x40010u;
    }
    if ( (int)IsEditionSetThreadDesktopAtThreadInitSupported() >= 0 )
      ApiSetEditionSetThreadDesktopAtThreadInit();
    v77 = v156;
    goto LABEL_119;
  }
  if ( !qword_1C02D6610 )
    goto LABEL_266;
  Event = qword_1C02D6610();
  if ( Event < 0 )
    goto LABEL_99;
  if ( !qword_1C02D6618 )
  {
LABEL_266:
    Event = -1073741637;
    goto LABEL_267;
  }
  InitialState = &Handle;
  Event = qword_1C02D6618(-1LL, v54 + 5, v134, v54[4] & 0x40000000);
LABEL_99:
  if ( Event < 0 )
  {
    if ( Event == -1073741205 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v154);
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v154);
      goto LABEL_244;
    }
LABEL_267:
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    {
      LODWORD(InitialState) = Event;
      McTemplateK0dq_EtwWriteTransfer(v125, &DesktopResolutionFailure, v126, CurrentProcessId, InitialState);
    }
    Event = -1073741502;
    goto LABEL_244;
  }
  if ( !qword_1C02D6620 )
  {
    Event = -1073741637;
LABEL_265:
    CloseProtectedHandle(Handle);
    CloseProtectedHandle(v134[0]);
    Handle = 0LL;
    v134[0] = 0LL;
    goto LABEL_244;
  }
  Event = qword_1C02D6620();
  if ( Event >= 0 )
  {
    if ( !*(_QWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 8)
      || (v66 = SGDGetUserSessionState(v63, v62, v64, v65), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v66 + 8))) )
    {
      v154 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
      if ( (gdwExtraInstrumentations & 1) != 0 )
        goto LABEL_273;
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v68, v67, v69, v70, InitialState);
    ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
    if ( qword_1C02D6628 )
      Event = qword_1C02D6628(v134[0], 1LL);
    else
      Event = -1073741637;
    v76 = PsGetCurrentThreadWin32Thread(v73, v72, v74, v75, *(_QWORD *)InitialStatea);
    --*(_DWORD *)(v76 + 48);
  }
  if ( Event < 0 )
    goto LABEL_265;
  v146 = 0LL;
  Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v146, 0LL);
  v77 = (struct tagDESKTOP *)v146;
  v156 = (struct tagDESKTOP *)v146;
  if ( Event < 0 )
    goto LABEL_245;
  if ( qword_1C02D65C8 )
    qword_1C02D65C8(v146, &v149, CompositionObject::Release);
  if ( v77 )
    ObfReferenceObject(v77);
  ObfDereferenceObject(v77);
  LODWORD(v147) = 1;
  *((_QWORD *)&v147 + 1) = PsGetCurrentProcess(v79, v78, v80, v81);
  *(_QWORD *)&v148 = v77;
  *((_QWORD *)&v148 + 1) = 0x100000000LL;
  if ( !qword_1C02D6630 )
    goto LABEL_263;
  Event = qword_1C02D6630();
  if ( Event >= 0 )
  {
    if ( !qword_1C02D6638 )
      goto LABEL_263;
    Event = qword_1C02D6638(&v147);
  }
  if ( Event < 0 )
    goto LABEL_245;
  if ( !*(_QWORD *)(v19 + 384) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
  {
    LockObjectAssignment(v19 + 336, v77, v110, v111);
    *(_QWORD *)(v19 + 384) = Handle;
  }
LABEL_119:
  if ( !(unsigned int)InitClientInfo(v7) )
    goto LABEL_245;
  if ( *(_QWORD *)(SGDGetUserSessionState(v83, v82, v84, v85) + 8) )
  {
    v90 = SGDGetUserSessionState(v87, v86, v88, v89);
    if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v90 + 8)) )
      goto LABEL_122;
  }
  v154 = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
  if ( (gdwExtraInstrumentations & 1) != 0 )
LABEL_273:
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_122:
  v95 = PsGetCurrentThreadWin32Thread(v92, v91, v93, v94, InitialState);
  ++*(_DWORD *)(v95 + 48);
  LOBYTE(v154) = 1;
  if ( !qword_1C02D6640 )
    goto LABEL_291;
  Event = qword_1C02D6640();
  if ( Event < 0 )
    goto LABEL_126;
  if ( !qword_1C02D6648 )
  {
LABEL_291:
    Event = -1073741637;
    goto LABEL_292;
  }
  Event = qword_1C02D6648(v7, v77, Handle);
LABEL_126:
  if ( Event < 0 )
  {
LABEL_292:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v154);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v154);
    goto LABEL_245;
  }
  v100 = PsGetCurrentThreadWin32Thread(v97, v96, v98, v99, *(_QWORD *)InitialStateb);
  --*(_DWORD *)(v100 + 48);
  if ( v77 != grpdeskRitInput )
    goto LABEL_134;
  v103 = 0LL;
  if ( !qword_1C02D6650 || (int)qword_1C02D6650() < 0 )
    goto LABEL_132;
  if ( qword_1C02D6658 )
  {
    v103 = (struct tagQ *)qword_1C02D6658(v7);
LABEL_132:
    if ( v103 && v103 != *(struct tagQ **)(v7 + 432) )
    {
      if ( (int)IsDestroyThreadsMessagesSupported() >= 0 && qword_1C02D6668 )
        qword_1C02D6668(*(_QWORD *)(v7 + 432), v7);
      zzzDestroyQueue(*(tagQ **)(v7 + 432), (tagTHREADINFO *)v7);
      tagTHREADINFO::AssignQueue((tagTHREADINFO *)v7, v103);
    }
  }
  v77 = v156;
LABEL_134:
  if ( *((int *)v54 + 8) < 0 )
  {
    if ( !v53 )
    {
      if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
      {
        *((_DWORD *)v54 + 8) &= ~0x80000000;
        goto LABEL_135;
      }
      gppiScreenSaver = v19;
      gptSSCursor = *((_QWORD *)gpsi + 620);
      *(_DWORD *)(v19 + 12) |= 0x200000u;
      EtwTraceScreenSaverProcessEvent(1LL);
    }
    ForegroundBoost::SetForegroundPriority(v7, 1);
    if ( !v53 )
      *(_DWORD *)(v19 + 12) |= 0x400000u;
    *(_DWORD *)(v7 + 488) |= 0x2000000u;
  }
LABEL_135:
  if ( (*(_DWORD *)(v7 + 488) & 0xC) == 0 && !v53 )
  {
    ++gdwDeferWinEvent;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
    {
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
      if ( ProcessWin32Process && !*ProcessWin32Process )
        ProcessWin32Process = 0LL;
      v102 = (int)qword_1C02D65A8;
      if ( qword_1C02D65A8 )
        qword_1C02D65A8(ProcessWin32Process, 5000LL);
    }
    --gdwDeferWinEvent;
    if ( grpWinStaList )
    {
      if ( !*(_QWORD *)(v19 + 656) )
      {
        UserSetLastError(1003);
        Event = -1073741823;
        goto LABEL_245;
      }
    }
  }
  if ( qword_1C02D6E70 && (int)qword_1C02D6E70() >= 0 && qword_1C02D6E78 )
    qword_1C02D6E78();
  if ( v7 != -1288 )
    *(_QWORD *)(v7 + 1288) = 0LL;
  v104 = *(_QWORD *)(v7 + 432);
  if ( v104 )
  {
    v105 = (_QWORD *)(v104 + 420);
    if ( v105 )
      *v105 = 0LL;
  }
  if ( (*(_DWORD *)(v19 + 12) & 0x20000) != 0 )
    *(_DWORD *)(v7 + 488) |= 0x4000u;
  *(_DWORD *)(v7 + 488) |= 0x1000000u;
  if ( (*(_DWORD *)(v19 + 12) & 0x140) == 0
    && (gptiForeground && v19 == *((_QWORD *)gptiForeground + 53)
     || CInputGlobals::GetPtiLastWoken(gpInputGlobals)
     && v19 == *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 53)
     && (*(_DWORD *)(v19 + 812) & 0x30) != 0x10) )
  {
    *(_DWORD *)(v7 + 488) |= 0x20u;
    LOBYTE(v101) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v101 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v102) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v101,
        v102,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        10,
        (__int64)&WPP_55b8abaf247d38ec9a9d8de03bae7632_Traceguids,
        v7);
    }
  }
  if ( (*(_DWORD *)gpsi & 4) != 0 && qword_1C02D6688 && (int)qword_1C02D6688() >= 0 && qword_1C02D6690 )
    qword_1C02D6690(0LL);
  if ( v45 )
    goto LABEL_160;
  if ( !qword_1C02D6698 )
    goto LABEL_263;
  Event = qword_1C02D6698();
  if ( Event < 0 )
    goto LABEL_159;
  if ( !qword_1C02D66A0 )
  {
LABEL_263:
    Event = -1073741637;
    goto LABEL_245;
  }
  Event = qword_1C02D66A0();
LABEL_159:
  if ( Event < 0 )
    goto LABEL_245;
LABEL_160:
  if ( !v53 && (*(_DWORD *)(v19 + 12) & 1) == 0 && qword_1C02D66A8 && (int)qword_1C02D66A8() >= 0 && qword_1C02D66B0 )
    qword_1C02D66B0(7LL);
  if ( !v77 )
    goto LABEL_165;
  if ( (*((_DWORD *)v77 + 12) & 8) == 0 )
  {
    if ( qword_1C02D66C0 )
      qword_1C02D66C0(&v149);
LABEL_165:
    if ( v137 && qword_1C02D66D0 )
      qword_1C02D66D0(&v151);
    v106 = *(_DWORD *)(v7 + 1272);
    if ( (v106 & 1) != 0 )
      *(_DWORD *)(v7 + 1272) = v106 & 0xFFFFFFFE;
    return (unsigned int)Event;
  }
  Event = -1073741823;
LABEL_245:
  if ( v77 && qword_1C02D66C0 )
    qword_1C02D66C0(&v149);
  if ( v137 && qword_1C02D66D0 )
    qword_1C02D66D0(&v151);
  xxxDestroyThreadInfo();
  return (unsigned int)Event;
}
