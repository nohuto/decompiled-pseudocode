/*
 * XREFs of xxxCreateThreadInfo @ 0x1C003911C
 * Callers:
 *     UserThreadCallout @ 0x1C0037070 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     AllocQueue @ 0x1C002CFE0 (AllocQueue.c)
 *     HMValidateSharedHandle @ 0x1C0030048 (HMValidateSharedHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RtlGetExpWinVer @ 0x1C00359B8 (RtlGetExpWinVer.c)
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     InitClientInfo @ 0x1C003A4B4 (InitClientInfo.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C003A6D8 (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C003A804 (ApiSetEditionUpdateRawMouseMode.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C003A908 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C003AA94 (ProtectHandle.c)
 *     ?Initialize@tagTHREADINFO@@QEAAXXZ @ 0x1C003AB38 (-Initialize@tagTHREADINFO@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C005A46C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C005A64C (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C006D24C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0080690 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 *     CloseProtectedHandle @ 0x1C008F4B0 (CloseProtectedHandle.c)
 *     LockObjectAssignment @ 0x1C00983D0 (LockObjectAssignment.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C0099B48 (IszzzCalcStartCursorHideSupported.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C009A350 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C00AC508 (IsDestroyThreadsMessagesSupported.c)
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00BE17C (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00BE1A8 (IsEditionSetThreadDesktopAtThreadInitSupported.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C00C3470 (-ParseReserved@@YAKPEBG0@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C00E58B0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C014E59C (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C020BBA8 (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C020BD10 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  struct _KTHREAD *v1; // rdi
  struct _KPROCESS *ThreadProcess; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _NT_TIB *Self; // r15
  int v8; // r13d
  __int64 ThreadWin32Thread; // rsi
  __int64 ProcessPeb; // r8
  ULONG64 v11; // rdx
  const void *v12; // r12
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  ULONG64 v15; // r8
  __int64 v16; // r9
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  ULONG64 v19; // rdx
  _BYTE **v20; // rax
  __int64 v21; // rdx
  PVOID v22; // r14
  __int64 Pool2; // rdi
  unsigned __int64 v24; // rcx
  char v25; // r15
  __int64 CurrentProcessWin32Process; // r14
  int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  PVOID CurrentProcess; // rax
  __int64 v33; // r8
  _BOOL8 v34; // rdx
  _DWORD *v35; // rdi
  __int64 v36; // rcx
  __int128 *v37; // rcx
  __int64 v38; // rcx
  struct _EPROCESS *v39; // r13
  int v40; // eax
  int v41; // r12d
  int v42; // eax
  HANDLE *v44; // r15
  NTSTATUS Event; // edi
  HANDLE v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // rdx
  int v50; // ecx
  _QWORD *v51; // r15
  _QWORD *v52; // rax
  _QWORD *v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rdx
  PVOID v59; // r13
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r13
  int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rax
  _QWORD *v72; // rax
  int v73; // eax
  int v74; // eax
  unsigned int v76; // eax
  unsigned __int64 v77; // r13
  __int64 v78; // r8
  __int64 ProcessWin32Process; // rcx
  _UNKNOWN **v80; // r8
  __int64 ProcessSectionBaseAddress; // rax
  _DWORD *v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int128 *v85; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v87; // r8
  struct tagDESKTOP *v88; // [rsp+50h] [rbp-2C8h]
  int v89; // [rsp+58h] [rbp-2C0h]
  int v90; // [rsp+58h] [rbp-2C0h]
  struct _NT_TIB *v91; // [rsp+60h] [rbp-2B8h]
  char v92; // [rsp+60h] [rbp-2B8h]
  int v93; // [rsp+60h] [rbp-2B8h]
  HANDLE Handle; // [rsp+68h] [rbp-2B0h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-2A8h]
  HANDLE v96; // [rsp+78h] [rbp-2A0h] BYREF
  __int128 v97; // [rsp+80h] [rbp-298h]
  int v98; // [rsp+90h] [rbp-288h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-278h]
  _QWORD *v100; // [rsp+A8h] [rbp-270h]
  PVOID Object; // [rsp+B0h] [rbp-268h] BYREF
  _QWORD *v102; // [rsp+B8h] [rbp-260h]
  PVOID v103; // [rsp+C0h] [rbp-258h] BYREF
  _QWORD v104[10]; // [rsp+D0h] [rbp-248h] BYREF
  __int64 v105; // [rsp+120h] [rbp-1F8h] BYREF
  __int64 v106; // [rsp+128h] [rbp-1F0h]
  unsigned __int64 i; // [rsp+130h] [rbp-1E8h]
  __int128 v108; // [rsp+138h] [rbp-1E0h] BYREF
  __int128 v109; // [rsp+148h] [rbp-1D0h]
  __int128 v110; // [rsp+158h] [rbp-1C0h] BYREF
  __int64 v111; // [rsp+168h] [rbp-1B0h]
  __int128 v112; // [rsp+170h] [rbp-1A8h] BYREF
  __int64 v113; // [rsp+180h] [rbp-198h]
  __int128 v114; // [rsp+190h] [rbp-188h]
  __int128 v115; // [rsp+1A0h] [rbp-178h]
  __int128 v116; // [rsp+1B0h] [rbp-168h]
  __int128 v117; // [rsp+1C0h] [rbp-158h]
  __int128 v118; // [rsp+1D0h] [rbp-148h]
  __int128 v119; // [rsp+1E0h] [rbp-138h] BYREF
  __int128 v120; // [rsp+1F0h] [rbp-128h] BYREF
  __int128 v121; // [rsp+200h] [rbp-118h] BYREF
  __int128 v122; // [rsp+230h] [rbp-E8h] BYREF
  PVOID BackTrace[27]; // [rsp+240h] [rbp-D8h] BYREF
  char v125; // [rsp+328h] [rbp+10h] BYREF
  char v126; // [rsp+330h] [rbp+18h] BYREF
  char v127; // [rsp+338h] [rbp+20h] BYREF

  v1 = Thread;
  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v104, 0, 0x48uLL);
  v88 = 0LL;
  Handle = 0LL;
  v96 = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v91 = Self;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v99 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v4, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(v4, v3, v5, v6) )
  {
    ++gdwGuiThreads;
    v8 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v8 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)v1);
    tagTHREADINFO::Initialize((tagTHREADINFO *)ThreadWin32Thread);
    ProcessPeb = PsGetProcessPeb(ThreadProcess);
    v100 = *(_QWORD **)(ProcessPeb + 32);
    v102 = v104;
    v104[0] = v100[4];
    v104[1] = v100[5];
    v104[2] = v100[17];
    v104[3] = v100[18];
    v104[4] = *(_QWORD *)((char *)v100 + 164);
    v11 = (ULONG64)(v100 + 24);
    if ( (unsigned __int64)(v100 + 24) >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    LODWORD(v104[5]) = *(_DWORD *)v11;
    v12 = *(const void **)(v11 + 8);
    v104[6] = v12;
    if ( !LOWORD(v104[5]) )
    {
      v104[6] = 0LL;
      goto LABEL_11;
    }
    if ( ((unsigned __int8)v12 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (ULONG64)v12 + LOWORD(v104[5]) + 2;
    v20 = (_BYTE **)MmUserProbeAddress;
    if ( v19 < MmUserProbeAddress && LOWORD(v104[5]) <= WORD1(v104[5]) )
    {
      if ( (v104[5] & 1) != 0 )
        goto LABEL_34;
      if ( v19 > (unsigned __int64)v12 )
        goto LABEL_26;
    }
    if ( (v104[5] & 1) == 0 )
    {
LABEL_35:
      **v20 = 0;
LABEL_26:
      v21 = LOWORD(v104[5]);
      v98 = 2037674837;
      v105 = 260LL;
      v22 = gpLeakTrackingAllocator;
      *(_QWORD *)&v114 = &v105;
      *((_QWORD *)&v114 + 1) = &v98;
      v97 = v114;
      v106 = LOWORD(v104[5]);
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79747355) != 0x79747355 )
      {
LABEL_27:
        Pool2 = ExAllocatePool2(*(_QWORD *)v97 & 0xFFFFFFFFFFFFFFFCuLL | 1, LOWORD(v104[5]));
        *(_QWORD *)&v97 = Pool2;
LABEL_28:
        v99 = Pool2;
        v104[6] = Pool2;
        if ( !Pool2 )
          ExRaiseStatus(-1073741801);
        if ( qword_1C029BD10 )
        {
          qword_1C029BD10(Pool2, &v112, Win32FreePool);
          Pool2 = v104[6];
        }
        memmove((void *)Pool2, v12, LOWORD(v104[5]));
        v1 = Thread;
LABEL_11:
        v13 = (unsigned int *)(v100 + 26);
        if ( (unsigned __int64)(v100 + 26) >= MmUserProbeAddress )
          v13 = (unsigned int *)MmUserProbeAddress;
        v14 = *v13;
        v89 = *v13;
        LODWORD(v104[7]) = *v13;
        v15 = *((_QWORD *)v13 + 1);
        v104[8] = v15;
        v16 = 1LL;
        if ( (v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = (unsigned __int16)v14 + v15 + 2;
        v18 = (_BYTE **)MmUserProbeAddress;
        if ( v17 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v89) )
        {
          if ( (v14 & 1) != 0 )
            goto LABEL_19;
          if ( v17 > v15 )
            goto LABEL_57;
        }
        if ( (v14 & 1) == 0 )
        {
LABEL_20:
          **v18 = 0;
LABEL_57:
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v17, v15, v16);
          v27 = v8 | 0x100;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
            v27 = v8;
          v92 = v27;
          if ( (HANDLE)gpidLogon == PsGetThreadProcessId(v1) )
          {
            v27 |= 0x2000000u;
            v92 = v27;
          }
          *(_DWORD *)(ThreadWin32Thread + 488) = v27;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v29, v28, v30, v31);
          v34 = 0LL;
          if ( CurrentProcess )
            v34 = CurrentProcess == g_pepDwm;
          if ( v34 )
            *(_DWORD *)(ThreadWin32Thread + 1256) |= 4u;
          if ( (dword_1C029416C & 0x80u) != 0 )
          {
            v82 = (_DWORD *)gspklBaseLayout;
            if ( gspklBaseLayout )
            {
              if ( !gbInDestroyHandleTableObjects
                && !UserIsUserCritSecInExclusive()
                && (!IS_USERCRIT_OWNED_SHARED()
                 || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
                 && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
              {
                __int2c();
              }
              v83 = dword_1C0294B70 * (unsigned int)(unsigned __int16)*v82;
              LOBYTE(v83) = *((_BYTE *)qword_1C0294B68 + v83 + 25);
              if ( (v83 & 1) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v83, v34, v33);
            }
            *(_QWORD *)&v115 = ThreadWin32Thread + 440;
            *((_QWORD *)&v115 + 1) = gspklBaseLayout;
            v122 = v115;
            v37 = &v122;
LABEL_73:
            HMAssignmentLock(v37, 0LL);
            *(_QWORD *)(ThreadWin32Thread + 448) = ThreadWin32Thread + 1048;
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
              *(_DWORD *)(ThreadWin32Thread + 488) |= 0x2000000u;
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x400) != 0 )
              *(_DWORD *)(ThreadWin32Thread + 1256) |= 0x20u;
            *(_QWORD *)(ThreadWin32Thread + 424) = CurrentProcessWin32Process;
            *(_QWORD *)(ThreadWin32Thread + 664) = *(_QWORD *)(CurrentProcessWin32Process + 320);
            *(_QWORD *)(CurrentProcessWin32Process + 320) = ThreadWin32Thread;
            ++*(_DWORD *)(CurrentProcessWin32Process + 384);
            if ( Self )
              Self[2].StackBase = PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
            *(_QWORD *)(ThreadWin32Thread + 480) = (char *)Self + 2048;
            LODWORD(Self[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 236LL) = 0;
            v38 = *(_QWORD *)(ThreadWin32Thread + 480);
            *(_QWORD *)(ThreadWin32Thread + 360) = v38 + 232;
            *(_DWORD *)(v38 + 240) = *(_DWORD *)(ThreadWin32Thread + 344);
            *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 244LL) = 0;
            *(_QWORD *)(ThreadWin32Thread + 368) = *(_QWORD *)(ThreadWin32Thread + 480) + 240LL;
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
              *(_DWORD *)(ThreadWin32Thread + 488) |= 0x20000000u;
            v39 = Process;
            if ( !*(_DWORD *)(ThreadWin32Thread + 632) )
            {
              if ( PsGetProcessPeb(Process) )
              {
                ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
                *(_DWORD *)(ThreadWin32Thread + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
              }
              else
              {
                *(_DWORD *)(ThreadWin32Thread + 632) = 1536;
              }
            }
            if ( qword_1C029BD28 )
            {
              v40 = qword_1C029BD28();
              v41 = -1073741637;
            }
            else
            {
              v41 = -1073741637;
              v40 = -1073741637;
            }
            if ( v40 >= 0 && qword_1C029BD30 )
              qword_1C029BD30();
            v93 = v92 & 0xC;
            if ( !v93 )
            {
              v42 = qword_1C029BD38 ? qword_1C029BD38() : -1073741637;
              if ( v42 >= 0 )
              {
                if ( qword_1C029BD40 ? qword_1C029BD40(ThreadWin32Thread) : 0 )
                  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
              }
            }
            v44 = (HANDLE *)(ThreadWin32Thread + 728);
            Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 728), 0x1F0003u, 0LL, SynchronizationEvent, 0);
            if ( Event >= 0 )
            {
              v46 = *v44;
              Object = 0LL;
              Event = ObReferenceObjectByHandle(v46, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
              *(_QWORD *)(ThreadWin32Thread + 736) = Object;
              if ( Event < 0 )
              {
                if ( Event != -1073741816 )
                  ObCloseHandle(*v44, 1);
              }
              else
              {
                LOBYTE(v48) = 1;
                Event = ProtectHandle(*v44, v47, ExEventObjectType, v48);
              }
            }
            if ( Event < 0 )
            {
              *(_QWORD *)(ThreadWin32Thread + 728) = 0LL;
            }
            else
            {
              Event = ObDuplicateObject(
                        v39,
                        *(_QWORD *)(ThreadWin32Thread + 728),
                        v39,
                        ThreadWin32Thread + 1440,
                        0,
                        512,
                        2,
                        0);
              if ( Event < 0 )
              {
                *(_QWORD *)(ThreadWin32Thread + 1440) = 0LL;
              }
              else
              {
                Event = InitializeThreadInfoIocp(v39, (struct tagTHREADINFO *)ThreadWin32Thread);
                if ( Event >= 0 )
                {
                  v49 = 0x4000LL;
                  v50 = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000;
                  v90 = v50;
                  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
                  v51 = v102;
                  if ( !*(_DWORD *)(CurrentProcessWin32Process + 788) && *((_DWORD *)v102 + 8) )
                  {
                    *(_DWORD *)(CurrentProcessWin32Process + 788) = 28;
                    *(_DWORD *)(CurrentProcessWin32Process + 792) = *((_DWORD *)v51 + 4);
                    *(_DWORD *)(CurrentProcessWin32Process + 796) = *((_DWORD *)v51 + 5);
                    *(_DWORD *)(CurrentProcessWin32Process + 800) = *((_DWORD *)v51 + 6);
                    *(_DWORD *)(CurrentProcessWin32Process + 804) = *((_DWORD *)v51 + 7);
                    *(_DWORD *)(CurrentProcessWin32Process + 808) = *((_DWORD *)v51 + 8);
                    *(_WORD *)(CurrentProcessWin32Process + 812) = *((_WORD *)v51 + 18);
                  }
                  if ( !v50 )
                  {
                    if ( (v51[4] & 0x200) != 0 )
                      v76 = *(_DWORD *)v51;
                    else
                      v76 = *((_WORD *)v51 + 28)
                          ? ParseReserved((const unsigned __int16 *)v51[8], (const unsigned __int16 *)0x4000)
                          : 0;
                    *(_DWORD *)(CurrentProcessWin32Process + 692) = v76;
                    if ( (v51[4] & 0x400) != 0 )
                    {
                      v77 = v51[1];
                      if ( HMValidateSharedHandle(v77, v49) )
                        *(_QWORD *)(CurrentProcessWin32Process + 696) = v77;
                    }
                  }
                  v52 = AllocQueue(0LL, 0LL);
                  v53 = v52;
                  if ( v52 )
                  {
                    tagTHREADINFO::AssignQueueWorker(ThreadWin32Thread, (_DWORD)v52, 472, 1488, 432);
                    v53[12] = ThreadWin32Thread;
                    v53[11] = ThreadWin32Thread;
                    ApiSetEditionUpdateRawMouseMode(v53, v54);
                    if ( Process == gpepCSRSS )
                    {
                      *((_DWORD *)v53 + 106) = 0x2000;
                      v57 = 0;
                    }
                    else
                    {
                      *((_DWORD *)v53 + 106) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL);
                      v57 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 884LL);
                    }
                    *((_DWORD *)v53 + 107) = v57;
                    if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0xC) != 0 || !grpWinStaList )
                    {
                      *(_DWORD *)(ThreadWin32Thread + 1256) |= 0x10u;
                      if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported() >= 0 )
                      {
                        Event = ApiSetEditionSetProcessWindowStationAtProcessInit(v51 + 5, v51[4] & 0x40000000);
                        if ( Event < 0 )
                          goto LABEL_253;
                        *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
                      }
                      if ( (int)IsEditionSetThreadDesktopAtThreadInitSupported() >= 0 )
                        ApiSetEditionSetThreadDesktopAtThreadInit();
                      goto LABEL_134;
                    }
                    v96 = 0LL;
                    if ( qword_1C029BD58 )
                      Event = qword_1C029BD58();
                    else
                      Event = -1073741637;
                    if ( Event < 0
                      || (!qword_1C029BD60
                        ? (Event = -1073741637)
                        : (Event = qword_1C029BD60(-1LL, v51 + 5, &v96, v51[4] & 0x40000000, &Handle)),
                          Event < 0) )
                    {
                      if ( Event == -1073741205 )
                      {
                        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v126);
                        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v126);
                      }
                      else
                      {
                        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                        if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                          McTemplateK0dq_EtwWriteTransfer(
                            Microsoft_Windows_Win32kEnableBits,
                            &DesktopResolutionFailure,
                            v87,
                            CurrentProcessId,
                            Event);
                        Event = -1073741502;
                      }
                    }
                    else
                    {
                      if ( qword_1C029BD68 )
                        Event = qword_1C029BD68();
                      else
                        Event = -1073741637;
                      if ( Event >= 0 )
                      {
                        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v127, v55, v56);
                        if ( qword_1C029BD70 )
                        {
                          LOBYTE(v58) = 1;
                          Event = qword_1C029BD70(v96, v58);
                        }
                        else
                        {
                          Event = -1073741637;
                        }
                        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v127);
                        if ( Event >= 0 )
                        {
                          v103 = 0LL;
                          Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v103, 0LL);
                          v59 = v103;
                          v88 = (struct tagDESKTOP *)v103;
                          if ( Event < 0 )
                            goto LABEL_254;
                          if ( qword_1C029BD10 )
                            qword_1C029BD10(v103, &v110, CompositionObject::Release);
                          if ( v59 )
                            ObfReferenceObject(v59);
                          ObfDereferenceObject(v59);
                          LODWORD(v108) = 1;
                          *((_QWORD *)&v108 + 1) = PsGetCurrentProcess(v61, v60, v62, v63);
                          *(_QWORD *)&v109 = v59;
                          *((_QWORD *)&v109 + 1) = 0x100000000LL;
                          Event = qword_1C029BD78 ? qword_1C029BD78() : -1073741637;
                          if ( Event < 0 )
                            goto LABEL_254;
                          Event = qword_1C029BD80 ? qword_1C029BD80(&v108) : -1073741637;
                          if ( Event < 0 )
                            goto LABEL_254;
                          if ( !*(_QWORD *)(CurrentProcessWin32Process + 392)
                            && PsGetProcessId(Process) != (HANDLE)gpidLogon )
                          {
                            LockObjectAssignment(CurrentProcessWin32Process + 336, v59);
                            *(_QWORD *)(CurrentProcessWin32Process + 392) = Handle;
                          }
LABEL_134:
                          if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
                          {
LABEL_297:
                            v59 = v88;
LABEL_254:
                            if ( v59 && qword_1C029BE18 )
                              qword_1C029BE18(&v110);
                            if ( v99 && qword_1C029BE28 )
                              qword_1C029BE28(&v112);
                            xxxDestroyThreadInfo();
                            return (unsigned int)Event;
                          }
                          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v125, v64, v65);
                          if ( qword_1C029BD88 )
                            Event = qword_1C029BD88();
                          else
                            Event = -1073741637;
                          v59 = v88;
                          if ( Event >= 0 )
                          {
                            if ( qword_1C029BD90 )
                              Event = qword_1C029BD90(ThreadWin32Thread, v88, Handle);
                            else
                              Event = -1073741637;
                          }
                          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v125);
                          if ( Event < 0 )
                          {
                            AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v125);
                            goto LABEL_254;
                          }
                          if ( v88 == grpdeskRitInput )
                          {
                            v67 = 0LL;
                            if ( qword_1C029BD98 )
                              v68 = qword_1C029BD98();
                            else
                              v68 = -1073741637;
                            if ( v68 >= 0 )
                            {
                              if ( qword_1C029BDA0 )
                                v67 = qword_1C029BDA0(ThreadWin32Thread);
                              else
                                v67 = 0LL;
                            }
                            if ( v67 && v67 != *(_QWORD *)(ThreadWin32Thread + 432) )
                            {
                              if ( (int)IsDestroyThreadsMessagesSupported() >= 0 && qword_1C029BDB0 )
                                qword_1C029BDB0(*(_QWORD *)(ThreadWin32Thread + 432), ThreadWin32Thread);
                              zzzDestroyQueue(
                                *(struct tagQ **)(ThreadWin32Thread + 432),
                                (tagTHREADINFO *)ThreadWin32Thread);
                              tagTHREADINFO::AssignQueueWorker(ThreadWin32Thread, v67, 472, 1488, 432);
                            }
                          }
                          if ( *((int *)v51 + 8) < 0 )
                          {
                            if ( !v90 )
                            {
                              if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
                              {
                                *((_DWORD *)v51 + 8) &= ~0x80000000;
                                goto LABEL_149;
                              }
                              gppiScreenSaver = CurrentProcessWin32Process;
                              gptSSCursor = *((_QWORD *)gpsi + 620);
                              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
                              EtwTraceScreenSaverProcessEvent(1LL);
                            }
                            ForegroundBoost::SetForegroundPriority(ThreadWin32Thread, 1LL);
                            if ( !v90 )
                              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
                            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x2000000u;
                          }
LABEL_149:
                          if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0xC) == 0 && !v90 )
                          {
                            ++gdwDeferWinEvent;
                            if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
                            {
                              ProcessWin32Process = PsGetProcessWin32Process(Process);
                              if ( qword_1C029BCF0 )
                                qword_1C029BCF0(ProcessWin32Process, 5000LL);
                            }
                            --gdwDeferWinEvent;
                            if ( grpWinStaList )
                            {
                              if ( !*(_QWORD *)(CurrentProcessWin32Process + 664) )
                              {
                                UserSetLastError(1003LL, v66, v78);
                                goto LABEL_296;
                              }
                            }
                          }
                          v69 = (unsigned int)_InterlockedExchange(
                                                (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 448) + 20LL),
                                                (MEMORY[0xFFFFF78000000320]
                                               * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
                          if ( qword_1C029BDD0 )
                            v70 = qword_1C029BDD0(v69);
                          else
                            v70 = -1073741637;
                          if ( v70 >= 0 && qword_1C029BDD8 )
                            qword_1C029BDD8(0LL, 1LL);
                          if ( ThreadWin32Thread != -1272 )
                            *(_QWORD *)(ThreadWin32Thread + 1272) = 0LL;
                          v71 = *(_QWORD *)(ThreadWin32Thread + 432);
                          if ( v71 )
                          {
                            v72 = (_QWORD *)(v71 + 412);
                            if ( v72 )
                              *v72 = 0LL;
                          }
                          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
                            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x4000u;
                          *(_DWORD *)(ThreadWin32Thread + 488) |= 0x1000000u;
                          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0
                            && (gptiForeground && CurrentProcessWin32Process == *((_QWORD *)gptiForeground + 53)
                             || CInputGlobals::GetPtiLastWoken(gpInputGlobals)
                             && CurrentProcessWin32Process == *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals)
                                                              + 53)
                             && (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) != 0x10) )
                          {
                            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x20u;
                            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
                              || (LOBYTE(v66) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                            {
                              LOBYTE(v66) = 0;
                            }
                            v80 = &WPP_RECORDER_INITIALIZED;
                            if ( (_BYTE)v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                            {
                              LOBYTE(v80) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                              WPP_RECORDER_AND_TRACE_SF_q(
                                WPP_GLOBAL_Control->AttachedDevice,
                                v66,
                                (_DWORD)v80,
                                WPP_MAIN_CB.Queue.ListEntry.Flink,
                                4,
                                13,
                                11,
                                (__int64)&WPP_ed79ecbb4a1f3750d196ff03f8980747_Traceguids,
                                ThreadWin32Thread);
                            }
                          }
                          if ( (*(_DWORD *)gpsi & 4) != 0 )
                          {
                            v73 = qword_1C029BDE0 ? qword_1C029BDE0() : -1073741637;
                            if ( v73 >= 0 && qword_1C029BDE8 )
                              qword_1C029BDE8(0LL);
                          }
                          if ( !v93 )
                          {
                            Event = qword_1C029BDF0 ? qword_1C029BDF0() : -1073741637;
                            if ( Event < 0 )
                              goto LABEL_297;
                            Event = qword_1C029BDF8 ? qword_1C029BDF8() : -1073741637;
                            if ( Event < 0 )
                              goto LABEL_297;
                          }
                          if ( !v90 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 )
                          {
                            if ( qword_1C029BE00 )
                              v41 = qword_1C029BE00();
                            if ( v41 >= 0 && qword_1C029BE08 )
                              qword_1C029BE08(7LL);
                          }
                          if ( v88 )
                          {
                            if ( (*((_DWORD *)v88 + 12) & 8) != 0 )
                            {
LABEL_296:
                              Event = -1073741823;
                              goto LABEL_297;
                            }
                            if ( qword_1C029BE18 )
                              qword_1C029BE18(&v110);
                          }
                          if ( v99 && qword_1C029BE28 )
                            qword_1C029BE28(&v112);
                          v74 = *(_DWORD *)(ThreadWin32Thread + 1256);
                          if ( (v74 & 1) != 0 )
                            *(_DWORD *)(ThreadWin32Thread + 1256) = v74 & 0xFFFFFFFE;
                          return (unsigned int)Event;
                        }
                      }
                      CloseProtectedHandle(Handle);
                      CloseProtectedHandle(v96);
                      Handle = 0LL;
                      v96 = 0LL;
                    }
                  }
                  else
                  {
                    Event = -1073741801;
                  }
                }
              }
            }
LABEL_253:
            v59 = 0LL;
            goto LABEL_254;
          }
          if ( gspklGlobalActive )
          {
LABEL_67:
            v35 = (_DWORD *)gspklGlobalActive;
            if ( gspklGlobalActive )
            {
              if ( !gbInDestroyHandleTableObjects
                && !UserIsUserCritSecInExclusive()
                && (!IS_USERCRIT_OWNED_SHARED()
                 || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
                 && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
              {
                __int2c();
              }
              v36 = dword_1C0294B70 * (unsigned int)(unsigned __int16)*v35;
              LOBYTE(v36) = *((_BYTE *)qword_1C0294B68 + v36 + 25);
              if ( (v36 & 1) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v34, v33);
            }
            *(_QWORD *)&v118 = ThreadWin32Thread + 440;
            *((_QWORD *)&v118 + 1) = gspklGlobalActive;
            v121 = v118;
            v37 = &v121;
            goto LABEL_73;
          }
          if ( gspklBaseLayout )
          {
            *(_QWORD *)&v116 = &gspklGlobalActive;
            *((_QWORD *)&v116 + 1) = gspklBaseLayout;
            v119 = v116;
            v84 = 1LL;
            v85 = &v119;
          }
          else
          {
            if ( !gspklWinstaLessSessionLayouts )
              goto LABEL_67;
            *(_QWORD *)&v117 = &gspklGlobalActive;
            *((_QWORD *)&v117 + 1) = gspklWinstaLessSessionLayouts;
            v120 = v117;
            v84 = 0LL;
            v85 = &v120;
          }
          HMAssignmentLock(v85, v84);
          goto LABEL_67;
        }
LABEL_19:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v17, v15);
        v18 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_20;
      }
      v24 = 0LL;
      for ( i = 0LL; ; i = v24 )
      {
        if ( v24 >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_27;
        if ( *((_DWORD *)gpLeakTrackingAllocator + v24) == 2037674837 )
          break;
        ++v24;
      }
      v25 = 0;
      if ( LOWORD(v104[5]) < 0x1000uLL || (v104[5] & 0xFFF) != 0 )
      {
        v25 = 1;
        v21 = LOWORD(v104[5]) + 16LL;
        v106 = v21;
      }
      Pool2 = ExAllocatePool2(*(_QWORD *)v97 & 0xFFFFFFFFFFFFFFFCuLL | 1, v21);
      if ( Pool2 )
      {
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v25 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v22,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_47:
            *(_QWORD *)&v97 = Pool2;
LABEL_48:
            Self = v91;
            goto LABEL_28;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v22,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_47;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      Pool2 = 0LL;
      *(_QWORD *)&v97 = 0LL;
      goto LABEL_48;
    }
LABEL_34:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(LODWORD(v104[5]), v19, ProcessPeb);
    v20 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_35;
  }
  return 3221225738LL;
}
