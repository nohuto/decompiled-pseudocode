/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C003EFB0
 * Callers:
 *     UserThreadCallout @ 0x1C003C590 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C0005A60 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C0005F34 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     CleanupResources @ 0x1C000716C (CleanupResources.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C002209C (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0024ACC (ProtectHandle.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C002BAA0 (Win32FreeToPagedLookasideList.c)
 *     ThreadUnlock1 @ 0x1C002E4A0 (ThreadUnlock1.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     HMLockObject @ 0x1C002E770 (HMLockObject.c)
 *     HMAssignmentUnlock @ 0x1C0030630 (HMAssignmentUnlock.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0033190 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C00332B0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0033370 (DestroyThreadsObjects.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C003975C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C003D808 (ApiSetEditionGetProcessWindowStation.c)
 *     IsInputThread @ 0x1C0042120 (IsInputThread.c)
 *     UnlockObjectAssignment @ 0x1C0045F10 (UnlockObjectAssignment.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0045F3C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0045F70 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C0055548 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C006C044 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074AD8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C0075A10 (xxxUserSetDisplayConfig.c)
 *     EtwTraceProcessWindowInfo @ 0x1C0079A30 (EtwTraceProcessWindowInfo.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C00814B0 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     PushW32ThreadLock @ 0x1C0084AF4 (PushW32ThreadLock.c)
 *     LockObjectAssignment @ 0x1C0085950 (LockObjectAssignment.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0086EA0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00912B8 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C0093D58 (FreeMessageList.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00953FC (PopAndFreeW32ThreadLock.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0097D30 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C00981F0 (IsDestroyThreadsMessagesSupported.c)
 *     DestroyThreadsMessages @ 0x1C00992A4 (DestroyThreadsMessages.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C009F760 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C00A740C (ApiSetEditionSystemGenerateMove.c)
 *     DisableDelegation @ 0x1C00AA0D0 (DisableDelegation.c)
 *     FreeHwndList @ 0x1C00B7A6C (FreeHwndList.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C00B7BCC (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00B8084 (IsCleanupIAMAccessSupported.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0114AE0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C011C220 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C011C26C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C011C2BC (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C011C384 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C011C514 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C011C62C (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C011C744 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C011C774 (CleanupRimDevObjInUserModeCallback.c)
 *     zzzDestroyQueue @ 0x1C011D460 (zzzDestroyQueue.c)
 *     EtwTraceInputProcessDelay @ 0x1C0122370 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0122C00 (EtwTraceMessageCheckDelay.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124580 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C01268E8 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?TraceLoggingDeadLowLevelHook@@YAXI_K@Z @ 0x1C013A960 (-TraceLoggingDeadLowLevelHook@@YAXI_K@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C01520A0 (RIMIDEProcessRemoveInjectionDevices.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01B1F48 (UserDeactivateMITInputProcessing.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01B30D0 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ApiSetEditionRemoveFromMsdList @ 0x1C01CDAA4 (ApiSetEditionRemoveFromMsdList.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C01FA740 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     CleanupIAMAccess @ 0x1C01FBD5C (CleanupIAMAccess.c)
 *     IsEditionRemoveFromMsdListSupported @ 0x1C01FC4A8 (IsEditionRemoveFromMsdListSupported.c)
 *     Is_PostMessageSupported @ 0x1C01FC5B0 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x1C01FC5DC (IsxxxMNEndMenuStateSupported.c)
 *     _PostMessage @ 0x1C01FC818 (_PostMessage.c)
 *     xxxMNEndMenuState @ 0x1C01FC83C (xxxMNEndMenuState.c)
 *     xxxWindowEvent @ 0x1C01FC860 (xxxWindowEvent.c)
 */

char xxxDestroyThreadInfo()
{
  struct tagTHREADINFO *v0; // rsi
  __int64 v1; // r13
  struct _NT_TIB *Self; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 i; // rax
  int v16; // eax
  char v17; // al
  unsigned __int64 v18; // rbx
  unsigned int ThreadId; // r12d
  int v20; // r15d
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *ProcessWindowStation; // rbx
  int v28; // eax
  __int64 v29; // rdx
  __int64 *v30; // rbx
  __int64 v31; // r15
  struct tagTHREADINFO *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // rcx
  __int64 v39; // r15
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 ThreadWin32Thread; // rax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  void *v56; // rcx
  struct _ETHREAD *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r9
  int v61; // r15d
  __int64 v62; // r8
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rbx
  int v66; // eax
  __int64 v67; // rbx
  unsigned __int64 v68; // rdx
  unsigned int v69; // ecx
  int v70; // eax
  int v71; // eax
  _QWORD *v72; // rbx
  _QWORD *v73; // r12
  int v74; // eax
  int v75; // eax
  __int64 v76; // rbx
  int v77; // eax
  __int64 v78; // rax
  _DWORD *v79; // rbx
  __int64 v80; // rcx
  int v81; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  _QWORD *v85; // rdx
  struct tagTHREADINFO *v86; // rcx
  __int64 v87; // r8
  struct tagTHREADINFO *v88; // rax
  struct tagTHREADINFO *v89; // rcx
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rax
  int v93; // edx
  void *v94; // rcx
  void *v95; // rcx
  int v96; // eax
  __int64 v97; // rbx
  struct tagTHREADINFO *v98; // rdx
  struct tagTHREADINFO *v99; // rdx
  _QWORD *v100; // rax
  __int64 v101; // rdx
  _QWORD *v102; // rcx
  void **v103; // rbx
  void **j; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  char *v107; // r8
  CInputThread *v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rax
  _QWORD *v112; // rdx
  signed __int32 v114[8]; // [rsp+0h] [rbp-188h] BYREF
  int v115; // [rsp+28h] [rbp-160h]
  unsigned int ThreadInfoFlags; // [rsp+50h] [rbp-138h]
  __int64 *v117; // [rsp+58h] [rbp-130h] BYREF
  _QWORD v118[2]; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v119; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v120; // [rsp+74h] [rbp-114h] BYREF
  __int64 v121; // [rsp+78h] [rbp-110h] BYREF
  int v122; // [rsp+80h] [rbp-108h] BYREF
  struct tagTHREADINFO *v123; // [rsp+88h] [rbp-100h]
  __int64 v124; // [rsp+90h] [rbp-F8h]
  _BYTE v125[8]; // [rsp+A8h] [rbp-E0h] BYREF
  __int128 v126; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v127; // [rsp+C0h] [rbp-C8h]
  __int128 v128; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v129; // [rsp+D8h] [rbp-B0h]
  __int128 v130; // [rsp+E0h] [rbp-A8h]
  __int64 v131; // [rsp+F0h] [rbp-98h]
  _QWORD v132[10]; // [rsp+110h] [rbp-78h] BYREF

  memset(v132, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v132[1]);
  v132[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v132[3]) = 20;
  LOBYTE(v132[6]) = -1;
  v0 = gptiCurrent;
  v123 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 53);
  v124 = v1;
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( Self )
    Self[2].StackBase = 0LL;
  v3 = *((_QWORD *)v0 + 186);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 1488) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 186) + 1232LL) &= ~0x8000000u;
    *((_QWORD *)v0 + 186) = 0LL;
    *((_DWORD *)v0 + 308) &= ~0x8000000u;
  }
  v4 = *((_QWORD *)v0 + 57);
  if ( v4 && *(struct tagTHREADINFO **)(v4 + 288) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*((_QWORD *)v0 + 57));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 122) |= 0x41u;
  if ( qword_1C0258108 )
  {
    v5 = qword_1C0258108();
    v6 = -1073741637;
  }
  else
  {
    v6 = -1073741637;
    v5 = -1073741637;
  }
  if ( v5 >= 0 && qword_1C0258110 )
    qword_1C0258110(v0);
  if ( gpTouchProcessor )
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v0);
  if ( qword_1C0257180 )
    v7 = qword_1C0257180();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0257188 )
    qword_1C0257188(v0);
  if ( qword_1C0257190 )
    v8 = qword_1C0257190();
  else
    v8 = -1073741637;
  if ( v8 >= 0 && qword_1C0257198 )
    qword_1C0257198();
  if ( qword_1C02571A0 )
    v9 = qword_1C02571A0();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C02571A8 )
    qword_1C02571A8();
  v10 = *((_QWORD *)v0 + 57);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 216);
    if ( v11 && *(struct tagTHREADINFO **)(v11 + 32) == v0 )
    {
      v12 = qword_1C02571C0 ? qword_1C02571C0() : -1073741637;
      if ( v12 >= 0 && qword_1C02571C8 )
        qword_1C02571C8();
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v125, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v13 = *((_QWORD *)v0 + 57);
    v14 = *((_QWORD *)v0 + 53);
    if ( *(_QWORD *)(v13 + 256) == v14 )
    {
      for ( i = *(_QWORD *)(v14 + 320);
            i && ((struct tagTHREADINFO *)i == v0 || *(_QWORD *)(i + 456) != v13);
            i = *(_QWORD *)(i + 664) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v13 + 256) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v125);
  }
  if ( (*((_DWORD *)v0 + 308) & 8) != 0 )
  {
    v16 = qword_1C02571D0 ? qword_1C02571D0() : -1073741637;
    if ( v16 >= 0 && qword_1C02571D8 )
      qword_1C02571D8(&gMagnContext, v0, 0LL, 1LL);
  }
  EtwTraceProcessWindowInfo(v0);
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C024A738 - 1) <= 2u
      || (qword_1C024A720 & 0x8000000000200000uLL) == 0
      || (v17 = 1, (qword_1C024A728 & 0x8000000000200000uLL) != qword_1C024A728) )
    {
      v17 = 0;
    }
    if ( v17 )
    {
      v120 = 0;
      v119 = 0;
      v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      v20 = *((_DWORD *)v0 + 294) != 0 ? v18 - *((_DWORD *)v0 + 294) : 0;
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 54), v18, &v120, &v119);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v21,
          (unsigned int)&ThreadExitEvent,
          v22,
          ThreadId,
          ThreadInfoFlags,
          v20,
          v120,
          v119);
    }
  }
  if ( (*((_DWORD *)v0 + 122) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v23 = *((_QWORD *)v0 + 160);
  if ( v23 )
  {
    Win32FreePool(v23);
    *((_QWORD *)v0 + 160) = 0LL;
  }
  if ( qword_1C02571E0 )
    v24 = qword_1C02571E0();
  else
    v24 = -1073741637;
  if ( v24 >= 0 && qword_1C02571E8 )
    qword_1C02571E8(v0);
  if ( *((_QWORD *)v0 + 84) )
  {
    v25 = qword_1C02571F0 ? qword_1C02571F0() : -1073741637;
    if ( v25 >= 0 && qword_1C02571F8 )
      qword_1C02571F8(v0);
  }
  v26 = *((_QWORD *)v0 + 84);
  if ( v26 )
  {
    HMAssignmentUnlock((__int64 *)(v26 + 16));
    if ( (int)IsEditionRemoveFromMsdListSupported() >= 0 )
      ApiSetEditionRemoveFromMsdList(*((_QWORD *)v0 + 84));
    Win32FreePool(*((_QWORD *)v0 + 84));
    *((_QWORD *)v0 + 84) = 0LL;
  }
  ProcessWindowStation = (_QWORD *)ApiSetEditionGetProcessWindowStation();
  if ( ProcessWindowStation )
  {
    v128 = 0LL;
    v129 = 0LL;
    PushW32ThreadLock(ProcessWindowStation, &v128, CompositionObject::Release);
    ObfReferenceObject(ProcessWindowStation);
    if ( (struct tagTHREADINFO *)ProcessWindowStation[10] == v0 )
    {
      v28 = qword_1C0257200 ? qword_1C0257200() : -1073741637;
      if ( v28 >= 0 && qword_1C0257208 )
        qword_1C0257208(ProcessWindowStation);
    }
    if ( (struct tagTHREADINFO *)ProcessWindowStation[11] == v0 )
      ProcessWindowStation[11] = 0LL;
    PopAndFreeW32ThreadLock(&v128);
  }
  while ( *((_QWORD *)v0 + 76) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v118);
    v30 = (__int64 *)*((_QWORD *)v0 + 76);
    v31 = *v30;
    if ( *v30 != *(_QWORD *)v118[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v118);
      if ( v31 )
      {
        v118[0] = *(_QWORD *)(v31 + 88);
        ++*(_DWORD *)(v118[0] + 8LL);
      }
      else
      {
        v118[0] = &gSmartObjNullRef;
      }
    }
    v117 = v30;
    v32 = (struct tagTHREADINFO *)v30[4];
    if ( gptiCurrent == v32 )
      ++*((_DWORD *)v30 + 10);
    else
      v117 = 0LL;
    if ( v0 != v32 )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v117);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v118);
      break;
    }
    v33 = *((_DWORD *)v30 + 2);
    if ( (v33 & 0x100) != 0 )
    {
      if ( qword_1C0257220 )
        v34 = qword_1C0257220();
      else
        v34 = -1073741637;
      if ( v34 >= 0 )
      {
        v29 = *(_QWORD *)v118[0];
        if ( qword_1C0257228 )
          qword_1C0257228(v30, v29);
      }
LABEL_119:
      if ( v117 )
      {
        *((_DWORD *)v117 + 10) = 0;
        v117 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported(v32, v29) >= 0 )
        xxxMNEndMenuState(v30);
      goto LABEL_123;
    }
    *((_DWORD *)v30 + 2) = v33 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 54) + 388LL) &= ~0x100000u;
    if ( qword_1C0257250 )
      v35 = qword_1C0257250();
    else
      v35 = -1073741637;
    if ( v35 >= 0 && qword_1C0257258 )
      qword_1C0257258(*(_QWORD *)v118[0], v30);
    v32 = *(struct tagTHREADINFO **)v118[0];
    if ( (**(_DWORD **)v118[0] & 1) != 0 )
      goto LABEL_119;
    v32 = *(struct tagTHREADINFO **)v118[0];
    if ( (**(_DWORD **)v118[0] & 0x8000) != 0 )
      goto LABEL_119;
    if ( v117 )
    {
      *((_DWORD *)v117 + 10) = 0;
      v117 = 0LL;
    }
    if ( qword_1C0257260 )
      v36 = qword_1C0257260();
    else
      v36 = -1073741637;
    if ( v36 >= 0 )
    {
      v32 = *(struct tagTHREADINFO **)v118[0];
      if ( qword_1C0257268 )
        qword_1C0257268(v32);
    }
    if ( qword_1C0257270 )
      v37 = qword_1C0257270(v32);
    else
      v37 = -1073741637;
    if ( v37 >= 0 && qword_1C0257278 )
      qword_1C0257278(*(_QWORD *)v118[0]);
    v38 = *(_DWORD **)v118[0];
    if ( (**(_DWORD **)v118[0] & 0x40000000) != 0 )
    {
      *v38 &= ~0x20000000u;
    }
    else if ( v38 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C0253D08);
    }
    else
    {
      v39 = *(_QWORD *)v118[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v118[0] + 88LL));
      v40 = *((_QWORD *)gpUserTypeIsolation + 4);
      if ( v40 )
        NSInstrumentation::CTypeIsolation<24576,96>::Free(v40, v39);
      if ( *(_QWORD *)v118[0] != *v30 )
      {
        ThreadInfoFlags = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2539LL);
      }
      if ( *(_QWORD *)v118[0] == *v30 )
        *v30 = 0LL;
    }
    if ( qword_1C0257240 )
      v41 = qword_1C0257240();
    else
      v41 = -1073741637;
    if ( v41 >= 0 && qword_1C0257248 )
      qword_1C0257248(v0, v30);
LABEL_123:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v117);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v118);
  }
  v42 = *((_QWORD *)v0 + 90);
  if ( v42 )
  {
    HMAssignmentUnlock((__int64 *)(v42 + 16));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 90) + 24LL));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 90) + 8LL));
    v43 = *((_QWORD *)gpUserTypeIsolation + 5);
    if ( v43 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v43, *((_QWORD *)v0 + 90));
    *((_QWORD *)v0 + 90) = 0LL;
  }
  v44 = *((_QWORD *)v0 + 53);
  if ( v44 && *(struct tagTHREADINFO **)(v44 + 328) == v0 )
    *(_QWORD *)(v44 + 328) = 0LL;
LABEL_178:
  v47 = *((_QWORD *)v0 + 78);
  while ( v47 )
  {
    if ( qword_1C0257280 )
    {
      v45 = qword_1C0257280();
      v46 = *((_QWORD *)v0 + 78);
    }
    else
    {
      v45 = -1073741637;
      v46 = v47;
    }
    v47 = v46;
    if ( v45 >= 0 && qword_1C0257288 )
    {
      qword_1C0257288(v0);
      goto LABEL_178;
    }
  }
  if ( (*((_DWORD *)v0 + 122) & 0x800) != 0 )
  {
    v126 = 0LL;
    v127 = 0LL;
    v48 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v0 + 57) + 8LL) + 24LL);
    if ( v48 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v126 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v126;
      *((_QWORD *)&v126 + 1) = v48;
      HMLockObject(v48);
      if ( qword_1C0257290 )
        v50 = qword_1C0257290();
      else
        v50 = -1073741637;
      if ( v50 >= 0 && qword_1C0257298 )
        qword_1C0257298(v48);
      ThreadUnlock1();
    }
  }
  v51 = *((_QWORD *)v0 + 53);
  if ( v51 && *(_QWORD *)(v51 + 832) )
  {
    v52 = qword_1C02572A0 ? qword_1C02572A0() : -1073741637;
    if ( v52 >= 0 && qword_1C02572A8 )
      qword_1C02572A8(v0);
  }
  if ( *((int *)v0 + 122) < 0 )
  {
    v53 = qword_1C02572B0 ? qword_1C02572B0() : -1073741637;
    if ( v53 >= 0 && qword_1C02572B8 )
      qword_1C02572B8(v0);
  }
  if ( *((_QWORD *)v0 + 145) )
  {
    v54 = qword_1C02572C0 ? qword_1C02572C0() : -1073741637;
    if ( v54 >= 0 && qword_1C02572C8 )
      qword_1C02572C8(v0);
  }
  v55 = *((_DWORD *)v0 + 308);
  if ( (v55 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 308) = v55 & 0xFFBFFFFF;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
    {
      ThreadInfoFlags = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2657LL);
    }
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v56 = (void *)*((_QWORD *)v0 + 169);
  if ( v56 )
  {
    CleanupRimDevObjInUserModeCallback(v56);
    *((_QWORD *)v0 + 169) = 0LL;
  }
  v57 = *(struct _ETHREAD **)v0;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
    CInputManager::NotifyDwmInputThreadShutdown(v57);
  if ( (unsigned __int8)IsInputThread() )
    UserDeactivateMITInputProcessing();
  if ( !v1 || *(struct tagTHREADINFO **)(v1 + 320) != v0 || (v61 = 1, *((_QWORD *)v0 + 83)) )
    v61 = 0;
  ThreadInfoFlags = v61;
  if ( v1 )
  {
    v59 = *(unsigned __int16 *)(*((_QWORD *)v0 + 60) + 154LL);
    if ( (_WORD)v59 )
    {
      v58 = *(unsigned __int16 *)(*((_QWORD *)v0 + 60) + 154LL);
      v59 = *(unsigned __int16 *)(v1 + 816);
      if ( (int)v59 >= 0xFFFF - (int)v58 )
      {
        *(_WORD *)(v1 + 816) = -1;
      }
      else
      {
        LOWORD(v59) = v58 + v59;
        *(_WORD *)(v1 + 816) = v59;
      }
    }
    if ( v61 )
    {
      v62 = *(unsigned __int16 *)(v1 + 816);
      if ( (_WORD)v62 )
      {
        if ( (unsigned int)dword_1C024A250 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_1C024A250, 0x200000000000LL, v62, v60) )
        {
          v122 = v63;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C024A250,
            (unsigned int)&unk_1C0219502,
            0,
            v64,
            (__int64)&v122);
        }
      }
    }
  }
  if ( v61 )
  {
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 820) & 0x200000) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v1);
        v65 = *(_QWORD *)(v1 + 896);
        if ( v65 )
        {
          *(_QWORD *)(v65 + 96) = 0LL;
          v59 = *(_QWORD *)(v65 + 88);
          if ( v59 )
          {
            ZwClose((HANDLE)v59);
            *(_QWORD *)(v65 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v1 + 820) & 0x2000000) != 0 )
        CInputConfig::CleanupInputSpaces((CInputConfig *)v59, (const struct tagPROCESSINFO *)v1);
    }
    v59 = *((_QWORD *)v0 + 53);
    if ( gppiFullscreen == v59 && !gbMDEVDisabled )
    {
      LOBYTE(v115) = 0;
      xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 4LL, 0LL, v115, 0LL, 0LL, 0LL, v132, ThreadInfoFlags);
      v59 = *((_QWORD *)v0 + 53);
    }
    if ( v59 && IsCurrentProcessDwm(v59, v58) )
      xxxDwmProcessShutdown(1);
  }
  if ( qword_1C02572D0 )
    v66 = qword_1C02572D0();
  else
    v66 = -1073741637;
  if ( v66 >= 0 && qword_1C02572D8 )
    qword_1C02572D8(v0);
  if ( *((_DWORD *)v0 + 174) )
  {
    v67 = *((_QWORD *)v0 + 86);
    if ( v67 )
    {
      if ( *(_DWORD *)(v67 + 68) == -1 )
        v68 = *(_QWORD *)(v67 + 56);
      else
        v68 = *(_QWORD *)(v67 + 56)
            + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424)
                        + 8LL * *(int *)(v67 + 68)
                        + 408);
      v69 = *(_DWORD *)(v67 + 48);
    }
    else
    {
      v68 = 0LL;
      v69 = 0;
    }
    TraceLoggingDeadLowLevelHook(v69, v68);
  }
  if ( qword_1C02572E0 )
    v70 = qword_1C02572E0();
  else
    v70 = -1073741637;
  if ( v70 >= 0 && qword_1C02572E8 )
    qword_1C02572E8();
  if ( qword_1C0257310 )
    v71 = qword_1C0257310();
  else
    v71 = -1073741637;
  if ( v71 >= 0 && qword_1C0257318 )
    qword_1C0257318();
  CActivationObjectManager::OnThreadTermination((CActivationObjectManager *)v59);
  DestroyThreadsObjects();
  v72 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v73 = (_QWORD *)*v72;
      if ( (struct tagTHREADINFO *)v72[3] == v0 )
      {
        v74 = qword_1C0257300 ? qword_1C0257300() : -1073741637;
        if ( v74 >= 0 )
          FreeHwndList(v72);
      }
      v72 = v73;
    }
    while ( v73 );
  }
  if ( qword_1C0257320 )
    v75 = qword_1C0257320();
  else
    v75 = -1073741637;
  if ( v75 >= 0 && qword_1C0257328 )
    qword_1C0257328(v0);
  HMAssignmentUnlock((__int64 *)v0 + 55);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v114, 0);
    CleanupResources();
  }
  if ( v61 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) & 0x1000000) != 0 )
    {
      v76 = *((_QWORD *)v0 + 58);
      if ( v76 )
      {
        if ( *(_QWORD *)(v76 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v76 + 168), 1114LL, 0LL, 0LL);
      }
    }
    if ( qword_1C0257340 )
      v77 = qword_1C0257340();
    else
      v77 = -1073741637;
    if ( v77 >= 0 && qword_1C0257348 )
      qword_1C0257348(*((_QWORD *)v0 + 53));
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) &= ~0x10000000u;
    v78 = *((_QWORD *)v0 + 60);
    v79 = *(_DWORD **)(v78 + 208);
    if ( v79 )
    {
      ProbeForWrite(*(volatile void **)(v78 + 208), 4uLL, 4u);
      *v79 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 53));
  }
  HMAssignmentUnlock((__int64 *)v0 + 99);
  v80 = *((_QWORD *)v0 + 173);
  if ( v80 )
  {
    Win32FreePool(v80);
    *((_QWORD *)v0 + 173) = 0LL;
  }
  if ( *((_QWORD *)v0 + 54) )
  {
    if ( qword_1C02579F8 )
      v81 = qword_1C02579F8();
    else
      v81 = -1073741637;
    if ( v81 >= 0 && qword_1C0257A00 )
      qword_1C0257A00(v0);
    v80 = *((_QWORD *)v0 + 54);
    *(_DWORD *)(v80 + 384) -= *((_DWORD *)v0 + 190);
    if ( *(_DWORD *)(*((_QWORD *)v0 + 54) + 392LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 57);
      ApiSetEditionSystemGenerateMove(0LL);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v80);
  v130 = *(_OWORD *)(CurrentProcessWin32Process + 296);
  v131 = *(_QWORD *)(CurrentProcessWin32Process + 312);
  v130 = *(_OWORD *)((char *)v0 + 392);
  v131 = *((_QWORD *)v0 + 51);
  v84 = PsGetCurrentProcessWin32Process(v83);
  v85 = (_QWORD *)(v84 + 320);
  v86 = *(struct tagTHREADINFO **)(v84 + 320);
  if ( v86 )
  {
    if ( v86 == v0 )
      goto LABEL_324;
    v87 = *(_QWORD *)(v84 + 320);
    do
    {
      v88 = *(struct tagTHREADINFO **)(v87 + 664);
      v89 = (struct tagTHREADINFO *)v87;
      if ( !v88 )
        break;
      v85 = (_QWORD *)(v87 + 664);
      v87 = *(_QWORD *)(v87 + 664);
      v89 = v88;
    }
    while ( v88 != v0 );
    if ( v89 == v0 )
    {
LABEL_324:
      *v85 = *((_QWORD *)v0 + 83);
      *((_QWORD *)v0 + 83) = 0LL;
    }
  }
  v121 = 0LL;
  LockObjectAssignment(&v121, *((_QWORD *)v0 + 57));
  if ( qword_1C0257350 )
    v91 = qword_1C0257350();
  else
    v91 = -1073741637;
  if ( v91 >= 0 && qword_1C0257358 )
    qword_1C0257358(v0);
  if ( *((_DWORD *)v0 + 377) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 377) = 0;
  }
  v92 = *((_QWORD *)v0 + 53);
  if ( v92 )
    --*(_DWORD *)(v92 + 384);
  UninitializeThreadInfoIocp(v0, v90);
  v94 = (void *)*((_QWORD *)v0 + 180);
  if ( v94 )
  {
    ObCloseHandle(v94, 0);
    *((_QWORD *)v0 + 180) = 0LL;
  }
  v95 = (void *)*((_QWORD *)v0 + 91);
  if ( v95 )
  {
    if ( (int)ProtectHandle(v95, v93, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*((_DWORD *)v0 + 308) & 0x1000000) == 0 )
    {
      ObCloseHandle(*((HANDLE *)v0 + 91), 1);
    }
    *((_QWORD *)v0 + 91) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( qword_1C0257120 )
      v96 = qword_1C0257120();
    else
      v96 = -1073741637;
    if ( v96 >= 0 )
    {
      xxxWindowEvent(32773, 0, -4, 0, 4);
      xxxWindowEvent(3, 0, 0, 0, 4);
    }
    v97 = v121;
    if ( *(_QWORD *)(*(_QWORD *)(v121 + 8) + 200LL) && (int)Is_PostMessageSupported() >= 0 )
      PostMessage(*(_QWORD *)(*(_QWORD *)(v97 + 8) + 200LL), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( qword_1C0257380 )
      v6 = qword_1C0257380();
    if ( v6 >= 0 && qword_1C0257388 )
      qword_1C0257388(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v99 = *(struct tagTHREADINFO **)(*((_QWORD *)v0 + 53) + 320LL);
    if ( !v99 )
      v99 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v99, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 308) & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows(v0, v98);
  if ( *((_QWORD *)v0 + 54) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 54), v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 54) + 396LL);
    zzzDestroyQueue(*((_QWORD *)v0 + 54), v0);
  }
  if ( *((_QWORD *)v0 + 57) )
  {
    v100 = (_QWORD *)((char *)v0 + 744);
    v101 = *((_QWORD *)v0 + 93);
    v102 = (_QWORD *)*((_QWORD *)v0 + 94);
    if ( *(struct tagTHREADINFO **)(v101 + 8) != (struct tagTHREADINFO *)((char *)v0 + 744) || (_QWORD *)*v102 != v100 )
      __fastfail(3u);
    *v102 = v101;
    *(_QWORD *)(v101 + 8) = v102;
    *((_QWORD *)v0 + 94) = (char *)v0 + 744;
    *v100 = v100;
  }
  FreeMessageList((char *)v0 + 808);
  v103 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v103 )
  {
    if ( j[1] == v0 || j[2] == v0 )
    {
      *v103 = *j;
      Win32FreePool((__int64)j);
    }
    else
    {
      v103 = j;
    }
  }
  MarkThreadsObjects((__int64)v0);
  if ( (struct tagTHREADINFO *)gptiShutdownWaiter == v0 )
    gptiShutdownWaiter = 0LL;
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (struct tagTHREADINFO *)gptiLockUpdate == v0 )
    gptiLockUpdate = 0LL;
  if ( gptiForeground == v0 )
  {
    DisableDelegation();
    if ( qword_1C0257168 )
      qword_1C0257168(0LL);
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals, v105);
  v106 = *((_QWORD *)v0 + 54);
  if ( v106 && !*(_DWORD *)(v106 + 392) )
  {
    if ( gpqForeground == v106 )
    {
      gpqForeground = 0LL;
      v106 = *((_QWORD *)v0 + 54);
    }
    if ( gpqForegroundPrev == v106 )
    {
      gpqForegroundPrev = 0LL;
      v106 = *((_QWORD *)v0 + 54);
    }
    if ( gpqCursor == (struct tagQ *)v106 )
      gpqCursor = 0LL;
  }
  if ( v121 )
  {
    v107 = (char *)*((_QWORD *)v0 + 56);
    if ( v107 )
    {
      if ( v107 != (char *)v0 + 1040 )
      {
        RtlFreeHeap(*(PVOID *)(v121 + 128), 0, v107);
        *((_QWORD *)v0 + 56) = (char *)v0 + 1040;
      }
    }
  }
  if ( (unsigned __int8)IsInputThread() )
    CInputThread::RevokeThreadAsInput(v108);
  if ( (*((_DWORD *)v0 + 122) & 4) != 0 )
  {
    v109 = *((_QWORD *)v0 + 60);
    if ( v109 )
    {
      Win32FreePool(v109);
      *((_QWORD *)v0 + 60) = 0LL;
    }
  }
  UnlockObjectAssignment(&v121);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  LOBYTE(v111) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    LOBYTE(v111) = McTemplateK0_EtwWriteTransfer(v110, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v112 = (_QWORD *)*((_QWORD *)v0 + 184);
    if ( !v112 )
      break;
    *((_QWORD *)v0 + 184) = *v112;
    v111 = *(v112 - 1);
    if ( (_UNKNOWN *)v111 != &gSmartObjNullRef )
    {
      --*(_DWORD *)(*(v112 - 1) + 8LL);
      v111 = *(v112 - 1);
      if ( !*(_DWORD *)(v111 + 8) )
      {
        v111 = *(v112 - 1);
        if ( *(_BYTE *)(v111 + 12) )
          LOBYTE(v111) = (unsigned __int8)Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, *(v112 - 1));
      }
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 308) |= 0x80u;
  return v111;
}
