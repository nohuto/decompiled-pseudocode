/*
 * XREFs of xxxCreateThreadInfo @ 0x1C003D918
 * Callers:
 *     UserThreadCallout @ 0x1C003C590 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0068284 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     AllocQueue @ 0x1C0006570 (AllocQueue.c)
 *     ValidateHmonitor @ 0x1C000F990 (ValidateHmonitor.c)
 *     ProtectHandle @ 0x1C0024ACC (ProtectHandle.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0024B70 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     HMAssignmentLock @ 0x1C0030310 (HMAssignmentLock.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C003975C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RtlGetExpWinVer @ 0x1C003EB3C (RtlGetExpWinVer.c)
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0044E6C (ApiSetEditionUpdateRawMouseMode.c)
 *     CloseProtectedHandle @ 0x1C0046DF8 (CloseProtectedHandle.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C0047334 (IszzzCalcStartCursorHideSupported.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     zzzCalcStartCursorHide @ 0x1C0047450 (zzzCalcStartCursorHide.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0071C60 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C00732FC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     SetUnavailableInputSource @ 0x1C007FFB0 (SetUnavailableInputSource.c)
 *     PushW32ThreadLock @ 0x1C0084AF4 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0084DFC (PopAndFreeAlwaysW32ThreadLock.c)
 *     InitClientInfo @ 0x1C00851D0 (InitClientInfo.c)
 *     LockObjectAssignment @ 0x1C0085950 (LockObjectAssignment.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0086EA0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00953FC (PopAndFreeW32ThreadLock.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C00981F0 (IsDestroyThreadsMessagesSupported.c)
 *     DestroyThreadsMessages @ 0x1C00992A4 (DestroyThreadsMessages.c)
 *     IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00AD230 (IsEditionSetThreadDesktopAtThreadInitSupported.c)
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00AD25C (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C00B5C14 (-ParseReserved@@YAKPEBG0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C011C3CC (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     zzzDestroyQueue @ 0x1C011D460 (zzzDestroyQueue.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C012398C (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124580 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1C01253EC (McTemplateK0dq_EtwWriteTransfer.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C01CE13C (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C01CE218 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 *     IsSetForegroundPrioritySupported @ 0x1C01FC558 (IsSetForegroundPrioritySupported.c)
 *     SetForegroundPriority @ 0x1C01FC6D4 (SetForegroundPriority.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  PEPROCESS ThreadProcess; // rsi
  __int64 v3; // rcx
  struct _NT_TIB *Self; // r13
  int v5; // r15d
  __int64 ThreadWin32Thread; // rdi
  ULONG64 v7; // rdx
  int v8; // ecx
  const void *v9; // rsi
  ULONG64 v10; // rdx
  _BYTE **v11; // rax
  __int64 v12; // rax
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  ULONG64 v15; // r8
  ULONG64 v16; // rdx
  _BYTE **v17; // rax
  __int64 CurrentProcessWin32Process; // r14
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 **v23; // rcx
  __int64 **v24; // rcx
  __int64 v25; // rcx
  __int64 ProcessSectionBaseAddress; // rax
  int v27; // eax
  int v28; // r12d
  int v29; // eax
  HANDLE *v31; // r15
  int Event; // esi
  HANDLE v33; // rcx
  int v34; // edx
  int v35; // eax
  unsigned int v36; // eax
  _QWORD *v37; // r13
  __int64 v38; // r15
  __int64 v39; // rax
  _DWORD *v40; // r15
  int v41; // eax
  LeaveEnterCrit *v42; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v44; // r8
  __int64 v45; // rdx
  PVOID v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r15
  int v50; // eax
  int v51; // r15d
  __int64 v52; // rdx
  __int64 ProcessWin32Process; // rax
  __int64 v54; // rcx
  int v55; // eax
  int v56; // edx
  __int64 v57; // rcx
  int v58; // ecx
  int v59; // ecx
  int v60; // eax
  int v61; // eax
  struct _EPROCESS *Process; // [rsp+40h] [rbp-1F8h]
  HANDLE Handle; // [rsp+48h] [rbp-1F0h] BYREF
  struct tagDESKTOP *v65; // [rsp+50h] [rbp-1E8h]
  HANDLE v66; // [rsp+58h] [rbp-1E0h] BYREF
  _BYTE v67[8]; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v68; // [rsp+68h] [rbp-1D0h]
  _QWORD v69[10]; // [rsp+70h] [rbp-1C8h] BYREF
  _QWORD *v70; // [rsp+C0h] [rbp-178h]
  PVOID Object; // [rsp+C8h] [rbp-170h] BYREF
  _QWORD *v72; // [rsp+D0h] [rbp-168h]
  PVOID v73; // [rsp+D8h] [rbp-160h] BYREF
  _BYTE v74[8]; // [rsp+E0h] [rbp-158h] BYREF
  __int128 v75; // [rsp+E8h] [rbp-150h] BYREF
  __int128 v76; // [rsp+F8h] [rbp-140h]
  __int128 v77; // [rsp+108h] [rbp-130h] BYREF
  __int64 v78; // [rsp+118h] [rbp-120h]
  __int128 v79; // [rsp+120h] [rbp-118h] BYREF
  __int64 v80; // [rsp+130h] [rbp-108h]
  __int128 v81; // [rsp+140h] [rbp-F8h]
  __int128 v82; // [rsp+150h] [rbp-E8h]
  __int128 v83; // [rsp+160h] [rbp-D8h]
  __int128 v84; // [rsp+170h] [rbp-C8h]
  __int128 v85; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v86; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v87; // [rsp+1C0h] [rbp-78h] BYREF
  _OWORD v88[2]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v89; // [rsp+1F0h] [rbp-48h]
  char v90; // [rsp+248h] [rbp+10h] BYREF
  int v91; // [rsp+250h] [rbp+18h]
  int v92; // [rsp+258h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v69, 0, 0x48uLL);
  v65 = 0LL;
  Handle = 0LL;
  v66 = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v68 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v3, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(v3) )
  {
    ++gdwGuiThreads;
    v5 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v5 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_QWORD *)(ThreadWin32Thread + 392) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 400) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 408) = 0;
    *(_QWORD *)(ThreadWin32Thread + 544) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 552) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 560) = 0;
    *(_QWORD *)(ThreadWin32Thread + 848) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 856) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 864) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1472) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 528) = ThreadWin32Thread + 520;
    *(_QWORD *)(ThreadWin32Thread + 520) = ThreadWin32Thread + 520;
    *(_QWORD *)(ThreadWin32Thread + 1224) = ThreadWin32Thread + 1216;
    *(_QWORD *)(ThreadWin32Thread + 1216) = ThreadWin32Thread + 1216;
    *(_QWORD *)(ThreadWin32Thread + 752) = ThreadWin32Thread + 744;
    *(_QWORD *)(ThreadWin32Thread + 744) = ThreadWin32Thread + 744;
    *(_QWORD *)(ThreadWin32Thread + 1096) = ThreadWin32Thread + 1088;
    *(_QWORD *)(ThreadWin32Thread + 1088) = ThreadWin32Thread + 1088;
    *(_DWORD *)(ThreadWin32Thread + 1104) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1152) = ThreadWin32Thread + 1144;
    *(_QWORD *)(ThreadWin32Thread + 1144) = ThreadWin32Thread + 1144;
    *(_BYTE *)(ThreadWin32Thread + 1248) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1384) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 828) = 1;
    *(_DWORD *)(ThreadWin32Thread + 892) = 3;
    v70 = *(_QWORD **)(PsGetProcessPeb(ThreadProcess) + 32);
    v72 = v69;
    v69[0] = v70[4];
    v69[1] = v70[5];
    v69[2] = v70[17];
    v69[3] = v70[18];
    v69[4] = *(_QWORD *)((char *)v70 + 164);
    v7 = (ULONG64)(v70 + 24);
    if ( (unsigned __int64)(v70 + 24) >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v8 = *(_DWORD *)v7;
    v91 = v8;
    LODWORD(v69[5]) = v8;
    v9 = *(const void **)(v7 + 8);
    v69[6] = v9;
    if ( !(_WORD)v8 )
    {
      v69[6] = 0LL;
      goto LABEL_23;
    }
    if ( ((unsigned __int8)v9 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (ULONG64)v9 + (unsigned __int16)v8 + 2;
    v11 = (_BYTE **)MmUserProbeAddress;
    if ( v10 < MmUserProbeAddress && (unsigned __int16)v8 <= HIWORD(v91) )
    {
      if ( (v8 & 1) != 0 )
        goto LABEL_17;
      if ( v10 > (unsigned __int64)v9 )
      {
LABEL_19:
        v12 = Win32AllocPoolWithQuota(LOWORD(v69[5]), 0x79747355u);
        v68 = v12;
        v69[6] = v12;
        if ( !v12 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v12, &v79, Win32FreePool);
        memmove((void *)v69[6], v9, LOWORD(v69[5]));
LABEL_23:
        v13 = (unsigned int *)(v70 + 26);
        if ( (unsigned __int64)(v70 + 26) >= MmUserProbeAddress )
          v13 = (unsigned int *)MmUserProbeAddress;
        v14 = *v13;
        v91 = v14;
        LODWORD(v69[7]) = v14;
        v15 = *((_QWORD *)v13 + 1);
        v69[8] = v15;
        if ( (v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int16)v14 + v15 + 2;
        v17 = (_BYTE **)MmUserProbeAddress;
        if ( v16 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v91) )
        {
          if ( (v14 & 1) != 0 )
            goto LABEL_32;
          if ( v16 > v15 )
            goto LABEL_34;
        }
        if ( (v14 & 1) == 0 )
        {
LABEL_33:
          **v17 = 0;
LABEL_34:
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
          v19 = v5 | 0x100;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
            v19 = v5;
          if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
            v19 |= 0x2000000u;
          if ( IsCurrentProcessDwm(v21, v20) )
            *(_DWORD *)(ThreadWin32Thread + 1232) |= 4u;
          *(_QWORD *)(ThreadWin32Thread + 340) = 0LL;
          PsGetCurrentProcessWin32Process(v22);
          *(_DWORD *)(ThreadWin32Thread + 328) &= ~4u;
          *(_DWORD *)(ThreadWin32Thread + 488) = v19;
          *(_DWORD *)(ThreadWin32Thread + 1368) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1372) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1360) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1364) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1412) = 0;
          if ( (dword_1C024F41C & 0x80u) != 0 )
          {
            *(_QWORD *)&v81 = ThreadWin32Thread + 440;
            *((_QWORD *)&v81 + 1) = gspklBaseLayout;
            v85 = v81;
            v23 = (__int64 **)&v85;
            goto LABEL_49;
          }
          if ( !gspklGlobalActive )
          {
            if ( gspklBaseLayout )
            {
              *(_QWORD *)&v82 = &gspklGlobalActive;
              *((_QWORD *)&v82 + 1) = gspklBaseLayout;
              v86 = v82;
              v24 = (__int64 **)&v86;
LABEL_47:
              HMAssignmentLock(v24);
              goto LABEL_48;
            }
            if ( gspklWinstaLessSessionLayouts )
            {
              *(_QWORD *)&v83 = &gspklGlobalActive;
              *((_QWORD *)&v83 + 1) = gspklWinstaLessSessionLayouts;
              v87 = v83;
              v24 = (__int64 **)&v87;
              goto LABEL_47;
            }
          }
LABEL_48:
          *(_QWORD *)&v84 = ThreadWin32Thread + 440;
          *((_QWORD *)&v84 + 1) = gspklGlobalActive;
          v88[0] = v84;
          v23 = (__int64 **)v88;
LABEL_49:
          HMAssignmentLock(v23);
          *(_QWORD *)(ThreadWin32Thread + 448) = ThreadWin32Thread + 1040;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x2000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x400) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1232) |= 0x20u;
          *(_QWORD *)(ThreadWin32Thread + 424) = CurrentProcessWin32Process;
          *(_QWORD *)(ThreadWin32Thread + 664) = *(_QWORD *)(CurrentProcessWin32Process + 320);
          *(_QWORD *)(CurrentProcessWin32Process + 320) = ThreadWin32Thread;
          ++*(_DWORD *)(CurrentProcessWin32Process + 384);
          if ( Self )
            Self[2].StackBase = PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 480) = (char *)Self + 2048;
          LODWORD(Self[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 236LL) = 0;
          v25 = *(_QWORD *)(ThreadWin32Thread + 480);
          *(_QWORD *)(ThreadWin32Thread + 360) = v25 + 232;
          *(_DWORD *)(v25 + 240) = *(_DWORD *)(ThreadWin32Thread + 344);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 244LL) = 0;
          *(_QWORD *)(ThreadWin32Thread + 368) = *(_QWORD *)(ThreadWin32Thread + 480) + 240LL;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x20000000u;
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
          if ( qword_1C0256FD8 )
          {
            v27 = qword_1C0256FD8();
            v28 = -1073741637;
          }
          else
          {
            v28 = -1073741637;
            v27 = -1073741637;
          }
          if ( v27 >= 0 && qword_1C0256FE0 )
            qword_1C0256FE0();
          v92 = v19 & 0xC;
          if ( (v19 & 0xC) == 0 )
          {
            v29 = qword_1C0256FE8 ? qword_1C0256FE8() : -1073741637;
            if ( v29 >= 0 )
            {
              if ( qword_1C0256FF0 ? qword_1C0256FF0(ThreadWin32Thread) : 0 )
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
            }
          }
          v31 = (HANDLE *)(ThreadWin32Thread + 728);
          Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 728), 0x1F0003u, 0LL, SynchronizationEvent, 0);
          if ( Event >= 0 )
          {
            v33 = *v31;
            Object = 0LL;
            Event = ObReferenceObjectByHandle(v33, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            *(_QWORD *)(ThreadWin32Thread + 736) = Object;
            if ( Event < 0 )
            {
              if ( Event != -1073741816 )
                ObCloseHandle(*v31, 1);
            }
            else
            {
              Event = ProtectHandle(*v31, v34, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
            }
          }
          if ( Event < 0 )
          {
            *v31 = 0LL;
LABEL_243:
            if ( v65 )
              PopAndFreeW32ThreadLock(&v77);
            if ( v68 )
              PopAndFreeAlwaysW32ThreadLock(&v79);
            xxxDestroyThreadInfo();
            return (unsigned int)Event;
          }
          Event = ObDuplicateObject(Process, *v31, Process, ThreadWin32Thread + 1440, 0, 512, 2, 0);
          if ( Event < 0 )
          {
            *(_QWORD *)(ThreadWin32Thread + 1440) = 0LL;
            goto LABEL_243;
          }
          Event = InitializeThreadInfoIocp(Process, (void **)ThreadWin32Thread);
          if ( Event < 0 )
            goto LABEL_243;
          v35 = *(_DWORD *)(CurrentProcessWin32Process + 12);
          v91 = v35 & 0x4000;
          *(_DWORD *)(CurrentProcessWin32Process + 12) = v35 | 0x4000;
          if ( !*(_DWORD *)(CurrentProcessWin32Process + 788) && LODWORD(v69[4]) )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 788) = 28;
            *(_QWORD *)(CurrentProcessWin32Process + 792) = v69[2];
            *(_QWORD *)(CurrentProcessWin32Process + 800) = v69[3];
            *(_DWORD *)(CurrentProcessWin32Process + 808) = v69[4];
            *(_WORD *)(CurrentProcessWin32Process + 812) = WORD2(v69[4]);
          }
          if ( (v35 & 0x4000) != 0 )
          {
            v37 = v72;
          }
          else
          {
            if ( (v69[4] & 0x200) != 0 )
            {
              v36 = v69[0];
            }
            else if ( LOWORD(v69[7]) )
            {
              v36 = ParseReserved((const unsigned __int16 *)v69[8], (const unsigned __int16 *)0x4000);
            }
            else
            {
              v36 = 0;
            }
            *(_DWORD *)(CurrentProcessWin32Process + 692) = v36;
            v37 = v72;
            if ( (v72[4] & 0x400) != 0 )
            {
              v38 = v72[1];
              if ( ValidateHmonitor(v38) )
                *(_QWORD *)(CurrentProcessWin32Process + 696) = v38;
            }
          }
          v39 = AllocQueue(0LL, 0LL);
          v40 = (_DWORD *)v39;
          if ( !v39 )
          {
            Event = -1073741801;
            goto LABEL_243;
          }
          *(_QWORD *)(ThreadWin32Thread + 432) = v39;
          v88[1] = *(_OWORD *)v39;
          v89 = *(_QWORD *)(v39 + 16);
          *(_QWORD *)(v39 + 96) = ThreadWin32Thread;
          *(_QWORD *)(v39 + 88) = ThreadWin32Thread;
          ApiSetEditionUpdateRawMouseMode(v39);
          ++v40[98];
          if ( Process == gpepCSRSS )
          {
            v40[107] = 0x2000;
            v41 = 0;
          }
          else
          {
            v40[107] = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL);
            v41 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 884LL);
          }
          v40[108] = v41;
          if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0xC) != 0 || !grpWinStaList )
          {
            *(_DWORD *)(ThreadWin32Thread + 1232) |= 0x10u;
            if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported() >= 0 )
            {
              Event = ApiSetEditionSetProcessWindowStationAtProcessInit(v37 + 5, v37[4] & 0x40000000);
              if ( Event < 0 )
                goto LABEL_243;
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
            }
            if ( (int)IsEditionSetThreadDesktopAtThreadInitSupported() >= 0 )
              ApiSetEditionSetThreadDesktopAtThreadInit();
          }
          else
          {
            if ( qword_1C0257008 )
              Event = qword_1C0257008();
            else
              Event = -1073741637;
            if ( Event < 0
              || (!qword_1C0257010
                ? (Event = -1073741637)
                : (Event = qword_1C0257010(-1LL, v37 + 5, &v66, v37[4] & 0x40000000, &Handle)),
                  Event < 0) )
            {
              if ( Event == -1073741205 )
              {
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v90);
                ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                LeaveEnterCrit::~LeaveEnterCrit(v42);
              }
              else
              {
                CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  McTemplateK0dq_EtwWriteTransfer(
                    Microsoft_Windows_Win32kEnableBits,
                    &DesktopResolutionFailure,
                    v44,
                    CurrentProcessId,
                    Event);
                Event = -1073741502;
              }
              goto LABEL_243;
            }
            if ( qword_1C0257018 )
              Event = qword_1C0257018();
            else
              Event = -1073741637;
            if ( Event < 0
              || ((UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v74), !qword_1C0257020)
                ? (Event = -1073741637)
                : (LOBYTE(v45) = 1, Event = qword_1C0257020(v66, v45)),
                  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v74),
                  Event < 0) )
            {
              CloseProtectedHandle(Handle);
              CloseProtectedHandle(v66);
              Handle = 0LL;
              v66 = 0LL;
              goto LABEL_243;
            }
            v73 = 0LL;
            Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v73, 0LL);
            v46 = v73;
            v65 = (struct tagDESKTOP *)v73;
            if ( Event < 0 )
              goto LABEL_243;
            PushW32ThreadLock(v73, &v77, CompositionObject::Release);
            if ( v46 )
              ObfReferenceObject(v46);
            ObfDereferenceObject(v46);
            LODWORD(v75) = 1;
            *((_QWORD *)&v75 + 1) = PsGetCurrentProcess(v48, v47);
            *(_QWORD *)&v76 = v46;
            *((_QWORD *)&v76 + 1) = 0x100000000LL;
            Event = qword_1C0257028 ? qword_1C0257028() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            Event = qword_1C0257030 ? qword_1C0257030(&v75) : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            if ( !*(_QWORD *)(CurrentProcessWin32Process + 392) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
            {
              LockObjectAssignment(CurrentProcessWin32Process + 336, v46);
              *(_QWORD *)(CurrentProcessWin32Process + 392) = Handle;
            }
          }
          if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
            goto LABEL_243;
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v67);
          if ( qword_1C0257038 )
            Event = qword_1C0257038();
          else
            Event = -1073741637;
          if ( Event < 0
            || (!qword_1C0257040 ? (Event = -1073741637) : (Event = qword_1C0257040(ThreadWin32Thread, v65, Handle)),
                Event < 0) )
          {
            UserAtomicCheck::Detach((UserAtomicCheck *)v67);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
            goto LABEL_243;
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v67);
          if ( v65 == grpdeskRitInput )
          {
            v49 = 0LL;
            if ( qword_1C0257048 )
              v50 = qword_1C0257048();
            else
              v50 = -1073741637;
            if ( v50 >= 0 )
            {
              if ( qword_1C0257050 )
                v49 = qword_1C0257050(ThreadWin32Thread);
              else
                v49 = 0LL;
            }
            if ( v49 && v49 != *(_QWORD *)(ThreadWin32Thread + 432) )
            {
              if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
                DestroyThreadsMessages(*(_QWORD *)(ThreadWin32Thread + 432), ThreadWin32Thread);
              zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 432), ThreadWin32Thread);
              *(_QWORD *)(ThreadWin32Thread + 432) = v49;
              ++*(_DWORD *)(v49 + 392);
            }
          }
          v51 = v91;
          if ( *((int *)v37 + 8) < 0 )
          {
            if ( !v91 )
            {
              if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
              {
                *((_DWORD *)v37 + 8) &= ~0x80000000;
                goto LABEL_184;
              }
              gppiScreenSaver = CurrentProcessWin32Process;
              gptSSCursor = *((_QWORD *)gpsi + 620);
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
              EtwTraceScreenSaverProcessEvent(1LL);
            }
            if ( (int)IsSetForegroundPrioritySupported() >= 0 )
              SetForegroundPriority(ThreadWin32Thread);
            if ( !v51 )
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x2000000u;
          }
LABEL_184:
          if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0xC) == 0 && !v51 )
          {
            ++gdwDeferWinEvent;
            if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
            {
              ProcessWin32Process = PsGetProcessWin32Process(Process);
              zzzCalcStartCursorHide(ProcessWin32Process, 5000LL);
            }
            --gdwDeferWinEvent;
            if ( grpWinStaList )
            {
              if ( !*(_QWORD *)(CurrentProcessWin32Process + 664) )
              {
                UserSetLastError(1003LL, v52);
LABEL_191:
                Event = -1073741823;
                goto LABEL_243;
              }
            }
          }
          v54 = (unsigned int)_InterlockedExchange(
                                (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 448) + 12LL),
                                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          if ( qword_1C0257090 )
            v55 = qword_1C0257090(v54);
          else
            v55 = -1073741637;
          if ( v55 >= 0 && qword_1C0257098 )
            qword_1C0257098(0LL, 1LL);
          SetUnavailableInputSource(ThreadWin32Thread + 1240);
          v57 = *(_QWORD *)(ThreadWin32Thread + 432);
          if ( v57 )
            SetUnavailableInputSource(v57 + 420);
          v58 = *(_DWORD *)(ThreadWin32Thread + 488);
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
            v58 |= 0x4000u;
          v59 = v58 | 0x1000000;
          *(_DWORD *)(ThreadWin32Thread + 488) = v59;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0 )
          {
            if ( !gptiForeground || CurrentProcessWin32Process != *((_QWORD *)gptiForeground + 53) )
            {
              if ( !CInputGlobals::GetPtiLastWoken(gpInputGlobals)
                || CurrentProcessWin32Process != *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 53)
                || (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) == 0x10 )
              {
                goto LABEL_212;
              }
              v59 = *(_DWORD *)(ThreadWin32Thread + 488);
            }
            *(_DWORD *)(ThreadWin32Thread + 488) = v59 | 0x20;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v56) = 4;
              WPP_RECORDER_SF_q(
                (_DWORD)gBaseLog,
                v56,
                13,
                16,
                (__int64)&WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids,
                ThreadWin32Thread);
            }
          }
LABEL_212:
          if ( (*(_DWORD *)gpsi & 4) != 0 )
          {
            v60 = qword_1C02570A0 ? qword_1C02570A0() : -1073741637;
            if ( v60 >= 0 && qword_1C02570A8 )
              qword_1C02570A8(0LL);
          }
          if ( !v92 )
          {
            Event = qword_1C02570B0 ? qword_1C02570B0() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
            Event = qword_1C02570B8 ? qword_1C02570B8() : -1073741637;
            if ( Event < 0 )
              goto LABEL_243;
          }
          if ( !v51 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 )
          {
            if ( qword_1C02570C0 )
              v28 = qword_1C02570C0();
            if ( v28 >= 0 && qword_1C02570C8 )
              qword_1C02570C8(7LL);
          }
          if ( v65 )
          {
            if ( (*((_DWORD *)v65 + 12) & 8) != 0 )
              goto LABEL_191;
            PopAndFreeW32ThreadLock(&v77);
          }
          if ( v68 )
            PopAndFreeAlwaysW32ThreadLock(&v79);
          v61 = *(_DWORD *)(ThreadWin32Thread + 1232);
          if ( (v61 & 1) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1232) = v61 & 0xFFFFFFFE;
          return (unsigned int)Event;
        }
LABEL_32:
        v92 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 875LL);
        v17 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_33;
      }
    }
    if ( (v8 & 1) == 0 )
    {
LABEL_18:
      **v11 = 0;
      goto LABEL_19;
    }
LABEL_17:
    v91 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 852LL);
    v11 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_18;
  }
  return 3221225738LL;
}
