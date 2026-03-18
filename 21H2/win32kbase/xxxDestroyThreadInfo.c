/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C00C64AC
 * Callers:
 *     UserThreadCallout @ 0x1C0037070 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 * Callees:
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C00099D0 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0017700 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0017740 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C00199F0 (UnlockObjectAssignment.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0019A48 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     Win32FreeToPagedLookasideList @ 0x1C00240E0 (Win32FreeToPagedLookasideList.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0024250 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C002D828 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C002D930 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C002D9E0 (DestroyThreadsObjects.c)
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     IsInputThread @ 0x1C0037C40 (IsInputThread.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     HMAssignmentUnlock @ 0x1C0038BD0 (HMAssignmentUnlock.c)
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 *     ProtectHandle @ 0x1C003AA94 (ProtectHandle.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C003C7EC (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C003D410 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ThreadLock @ 0x1C004237C (ThreadLock.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0046060 (EtwTraceMessageCheckDelay.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00473DC (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1C0049830 (EtwTraceInputProcessDelay.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C004A064 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C004FF1C (ApiSetEditionGetProcessWindowStation.c)
 *     CleanupResources @ 0x1C00522CC (CleanupResources.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     DeactivateKSTInputProcessingHelper @ 0x1C005A698 (DeactivateKSTInputProcessingHelper.c)
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C008312C (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     EtwTraceProcessWindowInfo @ 0x1C0087200 (EtwTraceProcessWindowInfo.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C009149C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     PushW32ThreadLock @ 0x1C0097140 (PushW32ThreadLock.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0097C70 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     LockObjectAssignment @ 0x1C00983D0 (LockObjectAssignment.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C009A350 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C00AC0B0 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C00AC508 (IsDestroyThreadsMessagesSupported.c)
 *     FreeMessageList @ 0x1C00AD8EC (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1C00AD910 (DestroyThreadsMessages.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD934 (PopAndFreeW32ThreadLock.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00B18B0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C00B4EDC (ApiSetEditionSystemGenerateMove.c)
 *     ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C00B7390 (-AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     DisableDelegation @ 0x1C00BB460 (DisableDelegation.c)
 *     xxxWindowEvent @ 0x1C00C2950 (xxxWindowEvent.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1C00C4FD8 (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 *     FreeHwndList @ 0x1C00C5B54 (FreeHwndList.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00C5D2C (IsCleanupIAMAccessSupported.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0141828 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0141888 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C01418D4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C014193C (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0141A04 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0141B24 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0141C84 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C0141CB4 (CleanupRimDevObjInUserModeCallback.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C0143E8C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0150EF0 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?TraceLoggingDeadLowLevelHook@@YAXI_K@Z @ 0x1C016803C (-TraceLoggingDeadLowLevelHook@@YAXI_K@Z.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C017F168 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01E3834 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01EBB48 (UserDeactivateMITInputProcessing.c)
 *     ApiSetEditionFreeMoveSizeDataOnThreadDestroy @ 0x1C0207A3C (ApiSetEditionFreeMoveSizeDataOnThreadDestroy.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C023C4C0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     CleanupIAMAccess @ 0x1C023DBD8 (CleanupIAMAccess.c)
 *     Is_PostMessageSupported @ 0x1C023E310 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x1C023E33C (IsxxxMNEndMenuStateSupported.c)
 *     _PostMessage @ 0x1C023E52C (_PostMessage.c)
 *     xxxMNEndMenuState @ 0x1C023E550 (xxxMNEndMenuState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void xxxDestroyThreadInfo()
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
  struct tagTHREADINFO *i; // rax
  int v16; // eax
  char v17; // al
  unsigned __int64 v18; // rbx
  unsigned int ThreadId; // r15d
  char ThreadInfoFlags; // r12
  int v21; // ecx
  int v22; // r8d
  char v23; // r11
  char *v24; // rcx
  int v25; // eax
  int v26; // eax
  struct _SLIST_ENTRY *v27; // rdx
  _QWORD *ProcessWindowStation; // rbx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 *v32; // rbx
  __int64 v33; // r15
  struct tagTHREADINFO *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  _DWORD *v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  struct _SLIST_ENTRY *v50; // rcx
  __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  void *v58; // rcx
  struct _ETHREAD *v59; // rbx
  __int64 v60; // rdx
  void *v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int v64; // r15d
  __int64 v65; // rbx
  __int64 v66; // rcx
  CActivationObjectManager *v67; // rcx
  int v68; // eax
  __int64 v69; // rbx
  unsigned __int64 v70; // rdx
  unsigned int v71; // ecx
  int v72; // eax
  int v73; // eax
  _QWORD *v74; // rbx
  _QWORD *v75; // r12
  int v76; // eax
  int v77; // eax
  __int64 v78; // rbx
  int v79; // eax
  __int64 v80; // rax
  _DWORD *v81; // rbx
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v88; // rdx
  struct tagTHREADINFO *v89; // rcx
  struct tagTHREADINFO **v90; // r8
  struct tagTHREADINFO *v91; // rax
  struct tagTHREADINFO *v92; // rcx
  int v93; // edx
  int v94; // eax
  __int64 v95; // rax
  int v96; // edx
  void *v97; // rcx
  void *v98; // rcx
  int v99; // eax
  PVOID *v100; // rbx
  struct tagTHREADINFO *v101; // rdx
  struct tagTHREADINFO *v102; // rdx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // rcx
  void **v106; // rbx
  void **j; // rcx
  CCursorClip *v108; // rcx
  tagQ *v109; // rcx
  struct tagQ *v110; // rcx
  char *v111; // r8
  char *v112; // rcx
  __int64 v113; // rcx
  _QWORD *v114; // rdx
  signed __int32 v115[8]; // [rsp+0h] [rbp-188h] BYREF
  char v116[8]; // [rsp+60h] [rbp-128h] BYREF
  __int64 *v117; // [rsp+68h] [rbp-120h] BYREF
  _QWORD v118[2]; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v119; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v120[3]; // [rsp+84h] [rbp-104h] BYREF
  PVOID *v121; // [rsp+90h] [rbp-F8h] BYREF
  int v122; // [rsp+98h] [rbp-F0h] BYREF
  struct tagTHREADINFO *v123; // [rsp+A0h] [rbp-E8h]
  __int64 v124; // [rsp+A8h] [rbp-E0h]
  char v125[8]; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v126; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-B0h]
  __int128 v128; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v129; // [rsp+108h] [rbp-80h]
  _QWORD v130[10]; // [rsp+110h] [rbp-78h] BYREF

  memset(v130, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v130[1]);
  v130[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v130[3]) = 20;
  LOBYTE(v130[6]) = -1;
  v0 = gptiCurrent;
  v123 = gptiCurrent;
  v1 = *((_QWORD *)gptiCurrent + 53);
  v124 = v1;
  Self = KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( Self )
    Self[2].StackBase = 0LL;
  v3 = *((_QWORD *)v0 + 185);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 1480) = 0LL;
    *(_DWORD *)(*((_QWORD *)v0 + 185) + 1256LL) &= ~0x8000000u;
    *((_QWORD *)v0 + 185) = 0LL;
    *((_DWORD *)v0 + 314) &= ~0x8000000u;
  }
  v4 = *((_QWORD *)v0 + 57);
  if ( v4 && *(struct tagTHREADINFO **)(v4 + 280) == v0 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*((_QWORD *)v0 + 57));
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v0 + 122) |= 0x41u;
  if ( qword_1C029CD08 )
  {
    v5 = qword_1C029CD08();
    v6 = -1073741637;
  }
  else
  {
    v6 = -1073741637;
    v5 = -1073741637;
  }
  if ( v5 >= 0 && qword_1C029CD10 )
    qword_1C029CD10(v0);
  if ( gpTouchProcessor )
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v0);
  if ( qword_1C029BEC0 )
    v7 = qword_1C029BEC0();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C029BEC8 )
    qword_1C029BEC8(v0);
  if ( qword_1C029BED0 )
    v8 = qword_1C029BED0();
  else
    v8 = -1073741637;
  if ( v8 >= 0 && qword_1C029BED8 )
    qword_1C029BED8();
  if ( qword_1C029BEE0 )
    v9 = qword_1C029BEE0();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C029BEE8 )
    qword_1C029BEE8();
  v10 = *((_QWORD *)v0 + 57);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 216);
    if ( v11 && *(struct tagTHREADINFO **)(v11 + 32) == v0 )
    {
      v12 = qword_1C029BF00 ? qword_1C029BF00() : -1073741637;
      if ( v12 >= 0 && qword_1C029BF08 )
        qword_1C029BF08();
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v125, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v13 = *((_QWORD *)v0 + 57);
    v14 = *((_QWORD *)v0 + 53);
    if ( *(_QWORD *)(v13 + 248) == v14 )
    {
      for ( i = *(struct tagTHREADINFO **)(v14 + 320);
            i && (i == v0 || *((_QWORD *)i + 57) != v13);
            i = (struct tagTHREADINFO *)*((_QWORD *)i + 83) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v13 + 248) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v125);
  }
  if ( (*((_DWORD *)v0 + 314) & 8) != 0 )
  {
    v16 = qword_1C029BF10 ? qword_1C029BF10() : -1073741637;
    if ( v16 >= 0 && qword_1C029BF18 )
      qword_1C029BF18(&gMagnContext, v0, 0LL, 1LL);
  }
  EtwTraceProcessWindowInfo((__int64)v0);
  if ( (W32kEtwEnabledKeyword & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C028DB38 - 1) <= 2u
      || (qword_1C028DB20 & 0x8000000000200000uLL) == 0
      || (v17 = 1, (qword_1C028DB28 & 0x8000000000200000uLL) != qword_1C028DB28) )
    {
      v17 = 0;
    }
    if ( v17 )
    {
      v120[0] = 0;
      v119 = 0;
      v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v0);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v0);
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v0 + 54), v18, v120, &v119);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v21,
          (unsigned int)&ThreadExitEvent,
          v22,
          ThreadId,
          ThreadInfoFlags,
          v23,
          v120[0],
          v119);
    }
  }
  if ( (*((_DWORD *)v0 + 122) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v0);
    EtwTraceInputProcessDelay(v0);
  }
  v24 = (char *)*((_QWORD *)v0 + 164);
  if ( v24 )
  {
    Win32FreePool(v24);
    *((_QWORD *)v0 + 164) = 0LL;
  }
  if ( qword_1C029BF20 )
    v25 = qword_1C029BF20();
  else
    v25 = -1073741637;
  if ( v25 >= 0 && qword_1C029BF28 )
    qword_1C029BF28(v0);
  if ( *((_QWORD *)v0 + 84) )
  {
    if ( qword_1C029BF30 )
      v26 = qword_1C029BF30();
    else
      v26 = -1073741637;
    if ( v26 >= 0 && qword_1C029BF38 )
      qword_1C029BF38(v0);
    if ( *((_QWORD *)v0 + 84) )
      ApiSetEditionFreeMoveSizeDataOnThreadDestroy(v0);
  }
  ProcessWindowStation = (_QWORD *)ApiSetEditionGetProcessWindowStation();
  if ( ProcessWindowStation )
  {
    v126 = 0LL;
    v127 = 0LL;
    PushW32ThreadLock((__int64)ProcessWindowStation, (__int64)&v126, (__int64)CompositionObject::Release);
    ObfReferenceObject(ProcessWindowStation);
    if ( (struct tagTHREADINFO *)ProcessWindowStation[10] == v0 )
    {
      v30 = qword_1C029BF40 ? qword_1C029BF40() : -1073741637;
      if ( v30 >= 0 && qword_1C029BF48 )
        qword_1C029BF48(ProcessWindowStation);
    }
    if ( (struct tagTHREADINFO *)ProcessWindowStation[11] == v0 )
      ProcessWindowStation[11] = 0LL;
    PopAndFreeW32ThreadLock((__int64)&v126);
  }
  while ( *((_QWORD *)v0 + 76) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v118);
    v32 = (__int64 *)*((_QWORD *)v0 + 76);
    v33 = *v32;
    if ( *v32 != *(_QWORD *)v118[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v118);
      if ( v33 )
      {
        v118[0] = *(_QWORD *)(v33 + 88);
        ++*(_DWORD *)(v118[0] + 8LL);
      }
      else
      {
        v118[0] = &gSmartObjNullRef;
      }
    }
    v117 = v32;
    v34 = (struct tagTHREADINFO *)v32[4];
    if ( gptiCurrent == v34 )
      ++*((_DWORD *)v32 + 10);
    else
      v117 = 0LL;
    if ( v0 != v34 )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v117);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v118);
      break;
    }
    v35 = *((_DWORD *)v32 + 2);
    if ( (v35 & 0x100) != 0 )
    {
      if ( qword_1C029BF60 )
        v36 = qword_1C029BF60();
      else
        v36 = -1073741637;
      if ( v36 >= 0 )
      {
        v31 = *(_QWORD *)v118[0];
        if ( qword_1C029BF68 )
          qword_1C029BF68(v32, v31);
      }
LABEL_118:
      if ( v117 )
      {
        *((_DWORD *)v117 + 10) = 0;
        v117 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported(v34, v31) >= 0 )
        xxxMNEndMenuState(v32);
      goto LABEL_122;
    }
    *((_DWORD *)v32 + 2) = v35 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v0 + 54) + 388LL) &= ~0x100000u;
    if ( qword_1C029BF90 )
      v37 = qword_1C029BF90();
    else
      v37 = -1073741637;
    if ( v37 >= 0 && qword_1C029BF98 )
      qword_1C029BF98(*(_QWORD *)v118[0], v32);
    v34 = *(struct tagTHREADINFO **)v118[0];
    if ( (**(_DWORD **)v118[0] & 1) != 0 )
      goto LABEL_118;
    v34 = *(struct tagTHREADINFO **)v118[0];
    if ( (**(_DWORD **)v118[0] & 0x8000) != 0 )
      goto LABEL_118;
    if ( v117 )
    {
      *((_DWORD *)v117 + 10) = 0;
      v117 = 0LL;
    }
    if ( qword_1C029BFA0 )
      v38 = qword_1C029BFA0();
    else
      v38 = -1073741637;
    if ( v38 >= 0 )
    {
      v34 = *(struct tagTHREADINFO **)v118[0];
      if ( qword_1C029BFA8 )
        qword_1C029BFA8(v34);
    }
    if ( qword_1C029BFB0 )
      v39 = qword_1C029BFB0(v34);
    else
      v39 = -1073741637;
    if ( v39 >= 0 && qword_1C029BFB8 )
      qword_1C029BFB8(*(_QWORD *)v118[0]);
    v40 = *(_DWORD **)v118[0];
    if ( (**(_DWORD **)v118[0] & 0x40000000) != 0 )
    {
      *v40 &= ~0x20000000u;
    }
    else if ( v40 == (_DWORD *)&gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(qword_1C0297318);
    }
    else
    {
      v41 = *(_QWORD *)v118[0];
      NullifyLookasideRef(*(void **)(*(_QWORD *)v118[0] + 88LL));
      v44 = *((_QWORD *)gpUserTypeIsolation + 4);
      if ( v44 )
        NSInstrumentation::CTypeIsolation<24576,96>::Free(v44, v41);
      if ( *(_QWORD *)v118[0] != *v32 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(*(_QWORD *)v118[0], v42, v43);
      if ( *(_QWORD *)v118[0] == *v32 )
        *v32 = 0LL;
    }
    if ( qword_1C029BF80 )
      v45 = qword_1C029BF80();
    else
      v45 = -1073741637;
    if ( v45 >= 0 && qword_1C029BF88 )
      qword_1C029BF88(v0, v32);
LABEL_122:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v117);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v118);
  }
  v46 = *((_QWORD *)v0 + 90);
  if ( v46 )
  {
    HMAssignmentUnlock((__int64 *)(v46 + 16));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 90) + 24LL));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v0 + 90) + 8LL));
    v27 = (struct _SLIST_ENTRY *)*((_QWORD *)v0 + 90);
    v47 = *((_QWORD *)gpUserTypeIsolation + 5);
    if ( v47 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v47, v27);
    *((_QWORD *)v0 + 90) = 0LL;
  }
  v48 = *((_QWORD *)v0 + 53);
  if ( v48 && *(struct tagTHREADINFO **)(v48 + 328) == v0 )
    *(_QWORD *)(v48 + 328) = 0LL;
LABEL_177:
  v50 = (struct _SLIST_ENTRY *)*((_QWORD *)v0 + 78);
  while ( v50 )
  {
    if ( qword_1C029BFC0 )
    {
      v49 = qword_1C029BFC0();
      v27 = (struct _SLIST_ENTRY *)*((_QWORD *)v0 + 78);
    }
    else
    {
      v49 = -1073741637;
      v27 = v50;
    }
    v50 = v27;
    if ( v49 >= 0 && qword_1C029BFC8 )
    {
      qword_1C029BFC8(v0);
      goto LABEL_177;
    }
  }
  if ( (*((_DWORD *)v0 + 122) & 0x800) != 0 )
  {
    v128 = 0LL;
    v129 = 0LL;
    v50 = *(struct _SLIST_ENTRY **)(*((_QWORD *)v0 + 57) + 8LL);
    v51 = *((_QWORD *)&v50[1].Next + 1);
    if ( v51 )
    {
      ThreadLock(*((_QWORD *)&v50[1].Next + 1), &v128);
      if ( qword_1C029BFD0 )
        v52 = qword_1C029BFD0();
      else
        v52 = -1073741637;
      if ( v52 >= 0 && qword_1C029BFD8 )
        qword_1C029BFD8(v51);
      ThreadUnlock1();
    }
  }
  v53 = *((_QWORD *)v0 + 53);
  if ( v53 && *(_QWORD *)(v53 + 832) )
  {
    v54 = qword_1C029BFE0 ? qword_1C029BFE0() : -1073741637;
    if ( v54 >= 0 && qword_1C029BFE8 )
      qword_1C029BFE8(v0);
  }
  if ( *((int *)v0 + 122) < 0 )
  {
    v55 = qword_1C029BFF0 ? qword_1C029BFF0() : -1073741637;
    if ( v55 >= 0 && qword_1C029BFF8 )
      qword_1C029BFF8(v0);
  }
  if ( *((_QWORD *)v0 + 148) )
  {
    v56 = qword_1C029C000 ? qword_1C029C000() : -1073741637;
    if ( v56 >= 0 && qword_1C029C008 )
      qword_1C029C008(v0);
  }
  v57 = *((_DWORD *)v0 + 314);
  if ( (v57 & 0x400000) != 0 )
  {
    *((_DWORD *)v0 + 314) = v57 & 0xFFBFFFFF;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v27, v29);
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v58 = (void *)*((_QWORD *)v0 + 169);
  if ( v58 )
  {
    CleanupRimDevObjInUserModeCallback(v58);
    *((_QWORD *)v0 + 169) = 0LL;
  }
  v59 = *(struct _ETHREAD **)v0;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v0) )
    CInputManager::NotifyDwmInputThreadShutdown(v59);
  if ( IsInputThread() )
    UserDeactivateMITInputProcessing();
  if ( CInputThreadBase::IsInputThread(gpKernelSensorThread) )
    DeactivateKSTInputProcessingHelper();
  if ( !v1 || *(struct tagTHREADINFO **)(v1 + 320) != v0 || (v64 = 1, *((_QWORD *)v0 + 83)) )
    v64 = 0;
  v120[1] = v64;
  if ( v1 )
  {
    v61 = (void *)*(unsigned __int16 *)(*((_QWORD *)v0 + 60) + 154LL);
    if ( (_WORD)v61 )
    {
      v60 = *(unsigned __int16 *)(*((_QWORD *)v0 + 60) + 154LL);
      v61 = (void *)*(unsigned __int16 *)(v1 + 816);
      v62 = 0xFFFFLL;
      if ( (int)v61 >= 0xFFFF - (int)v60 )
      {
        *(_WORD *)(v1 + 816) = -1;
      }
      else
      {
        LOWORD(v61) = v60 + (_WORD)v61;
        *(_WORD *)(v1 + 816) = (_WORD)v61;
      }
    }
    if ( v64 )
    {
      v62 = *(unsigned __int16 *)(v1 + 816);
      if ( (_WORD)v62 )
      {
        if ( (unsigned int)dword_1C028D6F0 > 5 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x200000000000LL) )
        {
          v122 = v62;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C028D6F0,
            (unsigned int)&unk_1C025ACD1,
            0,
            v63,
            (__int64)&v122);
        }
      }
    }
  }
  if ( v64 )
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
          v61 = *(void **)(v65 + 88);
          if ( v61 )
          {
            ZwClose(v61);
            *(_QWORD *)(v65 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v1 + 820) & 0x2000000) != 0 )
        CInputConfig::CleanupInputSpaces((CInputConfig *)v61, (const struct tagPROCESSINFO *)v1);
    }
    v66 = *((_QWORD *)v0 + 53);
    if ( gppiFullscreen == v66 && !gbMDEVDisabled )
    {
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 4u, 0LL, 0, 0LL, 0LL, 0LL, (__int64)v130, 0LL);
      v66 = *((_QWORD *)v0 + 53);
    }
    if ( v66 && IsCurrentProcessDwm(v66, v60, v62, v63) )
      xxxDwmProcessShutdown(1u);
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v116, v60, v62);
  if ( qword_1C029C010 )
    v68 = qword_1C029C010();
  else
    v68 = -1073741637;
  if ( v68 >= 0 && qword_1C029C018 )
    qword_1C029C018(v0);
  if ( *((_DWORD *)v0 + 174) )
  {
    v69 = *((_QWORD *)v0 + 86);
    if ( v69 )
    {
      if ( *(_DWORD *)(v69 + 68) == -1 )
        v70 = *(_QWORD *)(v69 + 56);
      else
        v70 = *(_QWORD *)(v69 + 56)
            + *(_QWORD *)(*(_QWORD *)(W32GetCurrentThread() + 424) + 8LL * *(int *)(v69 + 68) + 408);
      v71 = *(_DWORD *)(v69 + 48);
    }
    else
    {
      v70 = 0LL;
      v71 = 0;
    }
    TraceLoggingDeadLowLevelHook(v71, v70);
  }
  if ( (int)IsFreeDelayedHooksSupported >= 0 && qword_1C029C4D0 )
    qword_1C029C4D0();
  if ( qword_1C029C020 )
    v72 = qword_1C029C020();
  else
    v72 = -1073741637;
  if ( v72 >= 0 && qword_1C029C028 )
    qword_1C029C028();
  if ( qword_1C029C050 )
    v73 = qword_1C029C050();
  else
    v73 = -1073741637;
  if ( v73 >= 0 && qword_1C029C058 )
    qword_1C029C058();
  CActivationObjectManager::OnThreadTermination(v67);
  DestroyThreadsObjects();
  v74 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v75 = (_QWORD *)*v74;
      if ( (struct tagTHREADINFO *)v74[3] == v0 )
      {
        v76 = qword_1C029C040 ? qword_1C029C040() : -1073741637;
        if ( v76 >= 0 )
          FreeHwndList((__int64)v74);
      }
      v74 = v75;
    }
    while ( v75 );
  }
  if ( qword_1C029C060 )
    v77 = qword_1C029C060();
  else
    v77 = -1073741637;
  if ( v77 >= 0 && qword_1C029C068 )
    qword_1C029C068(v0);
  HMAssignmentUnlock((__int64 *)v0 + 55);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v115, 0);
    CleanupResources();
  }
  if ( v64 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) & 0x1000000) != 0 )
    {
      v78 = *((_QWORD *)v0 + 58);
      if ( v78 )
      {
        if ( *(_QWORD *)(v78 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v78 + 168), 1114LL, 0LL, 0LL);
      }
    }
    if ( qword_1C029C080 )
      v79 = qword_1C029C080();
    else
      v79 = -1073741637;
    if ( v79 >= 0 && qword_1C029C088 )
      qword_1C029C088(*((_QWORD *)v0 + 53));
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v0 + 53) + 12LL) &= ~0x10000000u;
    v80 = *((_QWORD *)v0 + 60);
    v81 = *(_DWORD **)(v80 + 208);
    if ( v81 )
    {
      ProbeForWrite(*(volatile void **)(v80 + 208), 4uLL, 4u);
      *v81 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v0 + 53));
  }
  HMAssignmentUnlock((__int64 *)v0 + 99);
  v82 = *((_QWORD *)v0 + 173);
  if ( v82 )
  {
    Win32FreePool((char *)v82);
    *((_QWORD *)v0 + 173) = 0LL;
  }
  if ( *((_QWORD *)v0 + 54) )
  {
    if ( qword_1C029C758 )
      v83 = qword_1C029C758();
    else
      v83 = -1073741637;
    if ( v83 >= 0 && qword_1C029C760 )
      qword_1C029C760(v0);
    *(_DWORD *)(*((_QWORD *)v0 + 54) + 384LL) -= *((_DWORD *)v0 + 190);
    v84 = *((_QWORD *)v0 + 54);
    v85 = 0;
    v86 = *(_QWORD *)(v84 + 472);
    if ( v86 && (v85 = 1, *(_QWORD *)(v86 + 1488))
      || (v82 = *(_QWORD *)(v84 + 480)) != 0 && ((unsigned int)(v85 + 1) > 1 || *(_QWORD *)(v82 + 1496)) )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v0 + 57);
      ApiSetEditionSystemGenerateMove(0);
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v82);
  v88 = (_QWORD *)(CurrentProcessWin32Process + 320);
  v89 = *(struct tagTHREADINFO **)(CurrentProcessWin32Process + 320);
  if ( v89 )
  {
    if ( v89 == v0 )
      goto LABEL_332;
    v90 = *(struct tagTHREADINFO ***)(CurrentProcessWin32Process + 320);
    do
    {
      v91 = v90[83];
      v92 = (struct tagTHREADINFO *)v90;
      if ( !v91 )
        break;
      v88 = v90 + 83;
      v90 = (struct tagTHREADINFO **)v90[83];
      v92 = v91;
    }
    while ( v91 != v0 );
    if ( v92 == v0 )
    {
LABEL_332:
      *v88 = *((_QWORD *)v0 + 83);
      *((_QWORD *)v0 + 83) = 0LL;
    }
  }
  v121 = 0LL;
  LockObjectAssignment((void **)&v121, *((void **)v0 + 57));
  if ( qword_1C029C090 )
    v94 = qword_1C029C090();
  else
    v94 = -1073741637;
  if ( v94 >= 0 && qword_1C029C098 )
    qword_1C029C098(v0);
  if ( *((_DWORD *)v0 + 376) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v0 + 376) = 0;
  }
  v95 = *((_QWORD *)v0 + 53);
  if ( v95 )
    --*(_DWORD *)(v95 + 384);
  UninitializeThreadInfoIocp(v0, v93);
  v97 = (void *)*((_QWORD *)v0 + 180);
  if ( v97 )
  {
    ObCloseHandle(v97, 0);
    *((_QWORD *)v0 + 180) = 0LL;
  }
  v98 = (void *)*((_QWORD *)v0 + 91);
  if ( v98 )
  {
    if ( (int)ProtectHandle(v98, v96, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*((_DWORD *)v0 + 314) & 0x1000000) == 0 )
    {
      ObCloseHandle(*((HANDLE *)v0 + 91), 1);
    }
    *((_QWORD *)v0 + 91) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v0 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v0 )
  {
    if ( qword_1C029BE60 )
      v99 = qword_1C029BE60();
    else
      v99 = -1073741637;
    if ( v99 >= 0 )
    {
      xxxWindowEvent(32773LL, 0LL, 4294967292LL, 0LL, 4);
      xxxWindowEvent(3LL, 0LL, 0LL, 0LL, 4);
    }
    v100 = v121;
    if ( *((_QWORD *)v121[1] + 25) && (int)Is_PostMessageSupported() >= 0 )
      PostMessage(*((_QWORD *)v100[1] + 25), (unsigned int)guiActivateShellWindow, 0LL, 0LL);
    if ( qword_1C029C0C0 )
      v6 = qword_1C029C0C0();
    if ( v6 >= 0 && qword_1C029C0C8 )
      qword_1C029C0C8(0LL);
  }
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v102 = *(struct tagTHREADINFO **)(*((_QWORD *)v0 + 53) + 320LL);
    if ( !v102 )
      v102 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v102, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v0 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v0 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v0 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v0 + 314) & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows(v0, v101);
  if ( *((_QWORD *)v0 + 54) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v0 + 54), (__int64)v0);
    ++*(_DWORD *)(*((_QWORD *)v0 + 54) + 392LL);
    zzzDestroyQueue(*((struct tagQ **)v0 + 54), v0);
  }
  if ( *((_QWORD *)v0 + 82) )
    tagTHREADINFO::AssignAttachQueue(v0, 0LL);
  if ( *((_QWORD *)v0 + 57) )
  {
    v103 = (_QWORD *)((char *)v0 + 744);
    v104 = *((_QWORD *)v0 + 93);
    v105 = (_QWORD *)*((_QWORD *)v0 + 94);
    if ( *(struct tagTHREADINFO **)(v104 + 8) != (struct tagTHREADINFO *)((char *)v0 + 744) || (_QWORD *)*v105 != v103 )
      __fastfail(3u);
    *v105 = v104;
    *(_QWORD *)(v104 + 8) = v105;
    *((_QWORD *)v0 + 94) = (char *)v0 + 744;
    *v103 = v103;
  }
  FreeMessageList((__int64)v0 + 808);
  v106 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v106 )
  {
    if ( j[1] == v0 || j[2] == v0 )
    {
      *v106 = *j;
      Win32FreePool((char *)j);
    }
    else
    {
      v106 = j;
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
    DisableDelegation(v108);
    if ( qword_1C029BEA8 )
      qword_1C029BEA8(0LL);
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v0 )
    gptiBlockInput = 0LL;
  if ( v0 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v109 = (tagQ *)*((_QWORD *)v0 + 54);
  if ( v109 && !tagQ::IsAnyThreadAttached(v109) )
  {
    if ( (struct tagQ *)gpqForeground == v110 )
    {
      gpqForeground = 0LL;
      v110 = (struct tagQ *)*((_QWORD *)v0 + 54);
    }
    if ( (struct tagQ *)gpqForegroundPrev == v110 )
    {
      gpqForegroundPrev = 0LL;
      v110 = (struct tagQ *)*((_QWORD *)v0 + 54);
    }
    if ( gpqCursor == v110 )
      gpqCursor = 0LL;
  }
  if ( v121 )
  {
    v111 = (char *)*((_QWORD *)v0 + 56);
    if ( v111 )
    {
      if ( v111 != (char *)v0 + 1048 )
      {
        RtlFreeHeap(v121[16], 0, v111);
        *((_QWORD *)v0 + 56) = (char *)v0 + 1048;
      }
    }
  }
  if ( IsInputThread() )
    CInputThreadBase::RevokeThreadAsInput(gpInputThread);
  if ( CInputThreadBase::IsInputThread(gpKernelSensorThread) )
  {
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        &dword_1C028EE70,
        &unk_1C0263189,
        0LL);
    CInputThreadBase::RevokeThreadAsInput(gpKernelSensorThread);
  }
  if ( (*((_DWORD *)v0 + 122) & 4) != 0 )
  {
    v112 = (char *)*((_QWORD *)v0 + 60);
    if ( v112 )
    {
      Win32FreePool(v112);
      *((_QWORD *)v0 + 60) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v121);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v113, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v114 = (_QWORD *)*((_QWORD *)v0 + 184);
    if ( !v114 )
      break;
    *((_QWORD *)v0 + 184) = *v114;
    if ( (_UNKNOWN *)*(v114 - 1) != &gSmartObjNullRef && !--*(_DWORD *)(*(v114 - 1) + 8LL) )
    {
      if ( *(_BYTE *)(*(v114 - 1) + 12LL) )
        Win32FreeToPagedLookasideList((__int64)gpStackRefLookAside, (struct _SLIST_ENTRY *)*(v114 - 1));
    }
  }
  --gdwGuiThreads;
  *((_DWORD *)v0 + 314) |= 0x80u;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v116);
}
