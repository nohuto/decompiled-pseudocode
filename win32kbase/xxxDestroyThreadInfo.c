/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C0072BF4
 * Callers:
 *     UserThreadCallout @ 0x1C0074BD0 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0009FE0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C000CB30 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 *     EtwTraceInputProcessDelay @ 0x1C0033C70 (EtwTraceInputProcessDelay.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C003422C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0055B50 (Win32FreeToPagedLookasideList.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C005BBB8 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C00706D8 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     FreeMessageList @ 0x1C0070724 (FreeMessageList.c)
 *     UnlockObjectAssignment @ 0x1C0070750 (UnlockObjectAssignment.c)
 *     HMAssignmentUnlock @ 0x1C0072910 (HMAssignmentUnlock.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00782A0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C00783B0 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0078460 (DestroyThreadsObjects.c)
 *     IsInputThread @ 0x1C007CC40 (IsInputThread.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0082880 (ApiSetEditionGetProcessWindowStation.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0092210 (EtwTraceMessageCheckDelay.c)
 *     ThreadLock @ 0x1C0092AE0 (ThreadLock.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0093B20 (UserDeactivateMITInputProcessing.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00944FC (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C00945DC (ProtectHandle.c)
 *     DeactivateKSTInputProcessingHelper @ 0x1C0095134 (DeactivateKSTInputProcessingHelper.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0096A2C (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     EtwTraceProcessWindowInfo @ 0x1C009B6E0 (EtwTraceProcessWindowInfo.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00A6424 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00A6464 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     LockObjectAssignment @ 0x1C00A7CA0 (LockObjectAssignment.c)
 *     PushW32ThreadLock @ 0x1C00A7FD0 (PushW32ThreadLock.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00A9160 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00AAB24 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00AD590 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     CleanupResources @ 0x1C00B38E0 (CleanupResources.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C00B96A0 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C00B98A4 (IsDestroyThreadsMessagesSupported.c)
 *     DestroyThreadsMessages @ 0x1C00B9B48 (DestroyThreadsMessages.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B9C70 (PopAndFreeW32ThreadLock.c)
 *     ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C00C4720 (-AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C00C6EC4 (ApiSetEditionSystemGenerateMove.c)
 *     DisableDelegation @ 0x1C00C8990 (DisableDelegation.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1C00D2FD4 (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 *     xxxWindowEvent @ 0x1C00D40F8 (xxxWindowEvent.c)
 *     FreeHwndList @ 0x1C00D4410 (FreeHwndList.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00D46B0 (IsCleanupIAMAccessSupported.c)
 *     CleanupIAMAccess @ 0x1C00D4808 (CleanupIAMAccess.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0153C3C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0153CA0 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0153CEC (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C0153D54 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0153EEC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01540F0 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0154224 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0154358 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C0154388 (CleanupRimDevObjInUserModeCallback.c)
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 *     ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C015D54C (-ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1C0161690 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C016691C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C01A09F0 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0213444 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C0214A98 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ApiSetEditionFreeMoveSizeDataOnThreadDestroy @ 0x1C023E0C4 (ApiSetEditionFreeMoveSizeDataOnThreadDestroy.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C026FFC0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     Is_PostMessageSupported @ 0x1C0271F74 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x1C0271FA0 (IsxxxMNEndMenuStateSupported.c)
 *     _PostMessage @ 0x1C02721A4 (_PostMessage.c)
 *     xxxMNEndMenuState @ 0x1C02721CC (xxxMNEndMenuState.c)
 */

void xxxDestroyThreadInfo()
{
  __int64 v0; // r8
  __int64 v1; // r9
  struct tagTHREADINFO *v2; // rsi
  struct tagTHREADINFO *v3; // rcx
  char *v4; // rbx
  __int64 Self; // rdx
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // rax
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct tagTHREADINFO *i; // rax
  int v22; // eax
  char v23; // al
  unsigned __int64 v24; // rbx
  unsigned int ThreadId; // r12d
  char ThreadInfoFlags; // r13
  int v27; // r15d
  int v28; // ecx
  int v29; // r8d
  _DWORD *v30; // r15
  char *v31; // rcx
  int v32; // eax
  int v33; // eax
  _QWORD *ProcessWindowStation; // rbx
  int v35; // eax
  __int64 v36; // rdx
  __int64 *v37; // rbx
  __int64 v38; // r15
  struct tagTHREADINFO *v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  _DWORD *v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rcx
  struct tagPROCESSINFO **v51; // r13
  struct tagPROCESSINFO *v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // eax
  int v62; // eax
  int v63; // eax
  void *v64; // rcx
  struct _ETHREAD *v65; // rbx
  void *v66; // rcx
  struct tagPROCESSINFO *v67; // r15
  int v68; // r12d
  int v69; // edx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rbx
  CActivationObjectManager *v73; // rcx
  int v74; // eax
  int v75; // eax
  int v76; // eax
  _QWORD *v77; // rbx
  _QWORD *v78; // r15
  int v79; // eax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rbx
  int v86; // eax
  __int64 v87; // rax
  _DWORD *v88; // rbx
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // rcx
  __int64 *v94; // r15
  __int64 CurrentProcessWin32Process; // rax
  struct tagTHREADINFO **v96; // r9
  _QWORD *v97; // r8
  struct tagTHREADINFO *v98; // rax
  struct tagTHREADINFO **v99; // rdx
  struct tagTHREADINFO *v100; // rcx
  struct tagTHREADINFO *v101; // rax
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  void *v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  int v117; // eax
  PVOID *v118; // rbx
  struct tagTHREADINFO *v119; // rdx
  struct tagTHREADINFO *v120; // rdx
  _DWORD *v121; // r14
  _QWORD *v122; // rax
  __int64 v123; // rdx
  _QWORD *v124; // rcx
  void **v125; // rbx
  void **j; // rcx
  tagQ *v127; // rcx
  __int64 v128; // rcx
  char *v129; // r8
  char *v130; // rcx
  __int64 v131; // rcx
  void *v132; // r8
  _QWORD *v133; // rdx
  signed __int32 v134[8]; // [rsp+0h] [rbp-1A8h] BYREF
  int v135; // [rsp+60h] [rbp-148h]
  _BYTE v136[4]; // [rsp+64h] [rbp-144h] BYREF
  __int64 *v137; // [rsp+68h] [rbp-140h] BYREF
  _QWORD v138[2]; // [rsp+70h] [rbp-138h] BYREF
  __int64 *v139; // [rsp+80h] [rbp-128h]
  unsigned int v140; // [rsp+88h] [rbp-120h] BYREF
  unsigned int v141; // [rsp+8Ch] [rbp-11Ch] BYREF
  _DWORD *v142; // [rsp+90h] [rbp-118h]
  struct tagPROCESSINFO **v143; // [rsp+98h] [rbp-110h]
  _DWORD *v144; // [rsp+A0h] [rbp-108h]
  PVOID *v145; // [rsp+A8h] [rbp-100h] BYREF
  int v146; // [rsp+B0h] [rbp-F8h] BYREF
  struct tagTHREADINFO *v147; // [rsp+B8h] [rbp-F0h]
  struct tagPROCESSINFO *v148; // [rsp+C0h] [rbp-E8h]
  struct tagPROCESSINFO *v149; // [rsp+C8h] [rbp-E0h]
  char v150[8]; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v151; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v152; // [rsp+F8h] [rbp-B0h]
  __int128 v153; // [rsp+118h] [rbp-90h] BYREF
  __int64 v154; // [rsp+128h] [rbp-80h]
  _QWORD v155[10]; // [rsp+130h] [rbp-78h] BYREF

  memset(v155, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v155[1]);
  v155[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v155[3]) = 20;
  LOBYTE(v155[6]) = -1;
  v2 = gptiCurrent;
  v147 = gptiCurrent;
  v3 = gptiCurrent;
  v4 = (char *)gptiCurrent + 424;
  v143 = (struct tagPROCESSINFO **)((char *)gptiCurrent + 424);
  v148 = (struct tagPROCESSINFO *)*((_QWORD *)gptiCurrent + 53);
  v149 = v148;
  Self = (__int64)KeGetPcr()->NtTib.Self;
  if ( gptiCurrent == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( Self )
    *(_QWORD *)(Self + 120) = 0LL;
  v6 = *((_QWORD *)v2 + 190);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 1520) = 0LL;
    Self = 4160749567LL;
    *(_DWORD *)(*((_QWORD *)v2 + 190) + 1272LL) &= ~0x8000000u;
    *((_QWORD *)v2 + 190) = 0LL;
    *((_DWORD *)v2 + 318) &= ~0x8000000u;
  }
  v7 = (__int64 *)((char *)v2 + 456);
  v139 = (__int64 *)((char *)v2 + 456);
  v8 = *((_QWORD *)v2 + 57);
  if ( v8 && *(struct tagTHREADINFO **)(v8 + 280) == v3 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*v7);
  if ( (struct tagTHREADINFO *)gptiBlockInput == v2 )
    gptiBlockInput = 0LL;
  v144 = (_DWORD *)((char *)v2 + 488);
  *((_DWORD *)v2 + 122) |= 0x41u;
  if ( qword_1C02D74C0 )
  {
    v9 = qword_1C02D74C0(v3);
    v10 = -1073741637;
  }
  else
  {
    v10 = -1073741637;
    v9 = -1073741637;
  }
  if ( v9 >= 0 && qword_1C02D74C8 )
    qword_1C02D74C8(v2);
  if ( *(_QWORD *)(SGDGetUserSessionState(v3, Self, v0, v1) + 3424) )
  {
    SGDGetUserSessionState(v12, v11, v13, v14);
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v2);
  }
  if ( qword_1C02D6768 )
    v15 = qword_1C02D6768();
  else
    v15 = -1073741637;
  if ( v15 >= 0 && qword_1C02D6770 )
    qword_1C02D6770(v2);
  if ( qword_1C02D6778 )
    v16 = qword_1C02D6778();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C02D6780 )
    qword_1C02D6780();
  if ( qword_1C02D6788 )
    v17 = qword_1C02D6788();
  else
    v17 = -1073741637;
  if ( v17 >= 0 && qword_1C02D6790 )
    qword_1C02D6790();
  if ( *v7 )
  {
    v18 = *(_QWORD *)(*v7 + 216);
    if ( v18 && *(struct tagTHREADINFO **)(v18 + 32) == v2 )
    {
      v19 = qword_1C02D67A8 ? qword_1C02D67A8() : -1073741637;
      if ( v19 >= 0 && qword_1C02D67B0 )
        qword_1C02D67B0();
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v150, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v20 = *v7;
    if ( *(_QWORD *)(*v7 + 248) == *(_QWORD *)v4 )
    {
      for ( i = *(struct tagTHREADINFO **)(*(_QWORD *)v4 + 320LL);
            i && (i == v2 || *((_QWORD *)i + 57) != v20);
            i = (struct tagTHREADINFO *)*((_QWORD *)i + 83) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v20 + 248) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v150);
  }
  v142 = (_DWORD *)((char *)v2 + 1272);
  if ( (*((_DWORD *)v2 + 318) & 8) != 0 )
  {
    v22 = qword_1C02D67B8 ? qword_1C02D67B8() : -1073741637;
    if ( v22 >= 0 && qword_1C02D67C0 )
      qword_1C02D67C0(&gMagnContext, v2, 0LL, 1LL);
  }
  EtwTraceProcessWindowInfo(v2);
  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C02C4068 - 1) <= 2u
      || (qword_1C02C4050 & 0x8000000000200000uLL) == 0
      || (v23 = 1, (qword_1C02C4058 & 0x8000000000200000uLL) != qword_1C02C4058) )
    {
      v23 = 0;
    }
    if ( v23 )
    {
      v141 = 0;
      v140 = 0;
      v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v2);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v2);
      v27 = *((_DWORD *)v2 + 304) != 0 ? v24 - *((_DWORD *)v2 + 304) : 0;
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v2 + 54), v24, &v141, &v140, 0LL, 0LL);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v28,
          (unsigned int)&ThreadExitEvent,
          v29,
          ThreadId,
          ThreadInfoFlags,
          v27,
          v141,
          v140);
      v7 = v139;
    }
  }
  v30 = v144;
  if ( (*v144 & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v2);
    EtwTraceInputProcessDelay(v2);
  }
  v31 = (char *)*((_QWORD *)v2 + 169);
  if ( v31 )
  {
    Win32FreePool(v31);
    *((_QWORD *)v2 + 169) = 0LL;
  }
  if ( qword_1C02D67C8 )
    v32 = qword_1C02D67C8();
  else
    v32 = -1073741637;
  if ( v32 >= 0 && qword_1C02D67D0 )
    qword_1C02D67D0(v2);
  if ( *((_QWORD *)v2 + 84) )
  {
    if ( qword_1C02D67D8 )
      v33 = qword_1C02D67D8();
    else
      v33 = -1073741637;
    if ( v33 >= 0 && qword_1C02D67E0 )
      qword_1C02D67E0(v2);
    if ( *((_QWORD *)v2 + 84) )
      ApiSetEditionFreeMoveSizeDataOnThreadDestroy(v2);
  }
  ProcessWindowStation = (_QWORD *)ApiSetEditionGetProcessWindowStation();
  if ( ProcessWindowStation )
  {
    v151 = 0LL;
    v152 = 0LL;
    PushW32ThreadLock(ProcessWindowStation, &v151, CompositionObject::Release);
    ObfReferenceObject(ProcessWindowStation);
    if ( (struct tagTHREADINFO *)ProcessWindowStation[10] == v2 )
    {
      v35 = qword_1C02D67E8 ? qword_1C02D67E8() : -1073741637;
      if ( v35 >= 0 && qword_1C02D67F0 )
        qword_1C02D67F0(ProcessWindowStation);
    }
    if ( (struct tagTHREADINFO *)ProcessWindowStation[11] == v2 )
      ProcessWindowStation[11] = 0LL;
    PopAndFreeW32ThreadLock(&v151);
  }
  if ( !*((_QWORD *)v2 + 76) )
    goto LABEL_165;
  while ( 1 )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v138);
    v37 = (__int64 *)*((_QWORD *)v2 + 76);
    v38 = *v37;
    if ( *v37 != *(_QWORD *)v138[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v138);
      if ( v38 )
      {
        v138[0] = *(_QWORD *)(v38 + 88);
        ++*(_DWORD *)(v138[0] + 8LL);
      }
      else
      {
        v138[0] = &gSmartObjNullRef;
      }
    }
    v137 = v37;
    v39 = (struct tagTHREADINFO *)v37[4];
    if ( gptiCurrent == v39 )
      ++*((_DWORD *)v37 + 10);
    else
      v137 = 0LL;
    if ( v2 != v39 )
      break;
    v40 = *((_DWORD *)v37 + 2);
    if ( (v40 & 0x100) != 0 )
    {
      if ( qword_1C02D6808 )
        v41 = qword_1C02D6808();
      else
        v41 = -1073741637;
      if ( v41 >= 0 )
      {
        v36 = *(_QWORD *)v138[0];
        if ( qword_1C02D6810 )
          qword_1C02D6810(v37, v36);
      }
    }
    else
    {
      *((_DWORD *)v37 + 2) = v40 & 0xFFFFFFFB;
      *(_DWORD *)(*((_QWORD *)v2 + 54) + 396LL) &= ~0x100000u;
      if ( qword_1C02D6838 )
        v42 = qword_1C02D6838();
      else
        v42 = -1073741637;
      if ( v42 >= 0 && qword_1C02D6840 )
        qword_1C02D6840(*(_QWORD *)v138[0], v37);
      v39 = *(struct tagTHREADINFO **)v138[0];
      if ( (**(_DWORD **)v138[0] & 1) == 0 )
      {
        v39 = *(struct tagTHREADINFO **)v138[0];
        if ( (**(_DWORD **)v138[0] & 0x8000) == 0 )
        {
          if ( v137 )
          {
            *((_DWORD *)v137 + 10) = 0;
            v137 = 0LL;
          }
          if ( qword_1C02D6848 )
            v43 = qword_1C02D6848();
          else
            v43 = -1073741637;
          if ( v43 >= 0 )
          {
            v39 = *(struct tagTHREADINFO **)v138[0];
            if ( qword_1C02D6850 )
              qword_1C02D6850(v39);
          }
          if ( qword_1C02D6858 )
            v44 = qword_1C02D6858(v39);
          else
            v44 = -1073741637;
          if ( v44 >= 0 && qword_1C02D6860 )
            qword_1C02D6860(*(_QWORD *)v138[0]);
          v45 = *(_DWORD **)v138[0];
          if ( (**(_DWORD **)v138[0] & 0x40000000) != 0 )
          {
            *v45 &= ~0x20000000u;
          }
          else if ( v45 == (_DWORD *)&gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
            NullifyLookasideRef(qword_1C02D3008);
          }
          else
          {
            v46 = *(_QWORD *)v138[0];
            NullifyLookasideRef(*(void **)(*(_QWORD *)v138[0] + 88LL));
            v47 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 32);
            if ( v47 )
              NSInstrumentation::CTypeIsolation<24576,96>::Free(v47, v46);
            if ( *(_QWORD *)v138[0] != *v37 )
            {
              v135 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2583LL);
            }
            if ( *(_QWORD *)v138[0] == *v37 )
              *v37 = 0LL;
          }
          if ( qword_1C02D6828 )
            v48 = qword_1C02D6828();
          else
            v48 = -1073741637;
          if ( v48 >= 0 && qword_1C02D6830 )
            qword_1C02D6830(v2, v37);
          goto LABEL_123;
        }
      }
    }
    if ( v137 )
    {
      *((_DWORD *)v137 + 10) = 0;
      v137 = 0LL;
    }
    if ( (int)IsxxxMNEndMenuStateSupported(v39, v36) >= 0 )
      xxxMNEndMenuState(v37);
LABEL_123:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v137);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v138);
    if ( !*((_QWORD *)v2 + 76) )
      goto LABEL_164;
  }
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v137);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v138);
LABEL_164:
  v30 = v144;
LABEL_165:
  v49 = *((_QWORD *)v2 + 90);
  if ( v49 )
  {
    HMAssignmentUnlock((__int64 *)(v49 + 16));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v2 + 90) + 24LL));
    HMAssignmentUnlock((__int64 *)(*((_QWORD *)v2 + 90) + 8LL));
    v50 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 40);
    if ( v50 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v50, *((_QWORD *)v2 + 90));
    *((_QWORD *)v2 + 90) = 0LL;
  }
  v51 = v143;
  v52 = *v143;
  if ( *v143 && *((struct tagTHREADINFO **)v52 + 41) == v2 )
    *((_QWORD *)v52 + 41) = 0LL;
  while ( 1 )
  {
    v54 = *((_QWORD *)v2 + 78);
    if ( !v54 )
      break;
    if ( qword_1C02D6868 )
    {
      v53 = qword_1C02D6868();
      v54 = *((_QWORD *)v2 + 78);
    }
    else
    {
      v53 = -1073741637;
    }
    if ( v53 >= 0 && qword_1C02D6870 )
      qword_1C02D6870(v2, v54);
  }
  if ( (*v30 & 0x800) != 0 )
  {
    v153 = 0LL;
    v154 = 0LL;
    v55 = *(_QWORD *)(*v7 + 8);
    v56 = *(_QWORD *)(v55 + 24);
    if ( v56 )
    {
      ThreadLock(*(_QWORD *)(v55 + 24), &v153);
      if ( qword_1C02D6878 )
        v61 = qword_1C02D6878();
      else
        v61 = -1073741637;
      if ( v61 >= 0 && qword_1C02D6880 )
        qword_1C02D6880(v56);
      ThreadUnlock1(v58, v57, v59, v60);
    }
  }
  if ( *v51 && *((_QWORD *)*v51 + 103) )
  {
    v62 = qword_1C02D6888 ? qword_1C02D6888() : -1073741637;
    if ( v62 >= 0 && qword_1C02D6890 )
      qword_1C02D6890(v2);
  }
  if ( qword_1C02D6898 )
    v63 = qword_1C02D6898();
  else
    v63 = -1073741637;
  if ( v63 >= 0 && qword_1C02D68A0 )
    qword_1C02D68A0(v2);
  if ( (*v142 & 0x400000) != 0 )
  {
    *v142 &= ~0x400000u;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
    {
      v135 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2685LL);
    }
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v64 = (void *)*((_QWORD *)v2 + 174);
  if ( v64 )
  {
    CleanupRimDevObjInUserModeCallback(v64);
    *((_QWORD *)v2 + 174) = 0LL;
  }
  v65 = *(struct _ETHREAD **)v2;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v2) )
    CInputManager::NotifyDwmInputThreadShutdown(v65);
  if ( (unsigned __int8)IsInputThread() )
    UserDeactivateMITInputProcessing();
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    DeactivateKSTInputProcessingHelper();
  v67 = v148;
  if ( !v148 || *((struct tagTHREADINFO **)v148 + 40) != v2 || (v68 = 1, *((_QWORD *)v2 + 83)) )
    v68 = 0;
  v135 = v68;
  if ( v148 )
  {
    v66 = (void *)*(unsigned __int16 *)(*((_QWORD *)v2 + 60) + 154LL);
    if ( (_WORD)v66 )
    {
      v69 = *(unsigned __int16 *)(*((_QWORD *)v2 + 60) + 154LL);
      v66 = (void *)*((unsigned __int16 *)v148 + 404);
      if ( (int)v66 >= 0xFFFF - v69 )
      {
        *((_WORD *)v148 + 404) = -1;
      }
      else
      {
        LOWORD(v66) = v69 + (_WORD)v66;
        *((_WORD *)v148 + 404) = (_WORD)v66;
      }
    }
    if ( v68
      && *((_WORD *)v67 + 404)
      && (unsigned int)dword_1C02C93D8 > 5
      && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x200000000000LL) )
    {
      v146 = v70;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C02C93D8,
        (unsigned int)&unk_1C0293C91,
        v70,
        v71,
        (__int64)&v146);
    }
  }
  if ( v68 )
  {
    if ( v67 )
    {
      if ( (*((_DWORD *)v67 + 203) & 0x200000) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v67);
        v72 = *((_QWORD *)v67 + 110);
        if ( v72 )
        {
          *(_QWORD *)(v72 + 96) = 0LL;
          v66 = *(void **)(v72 + 88);
          if ( v66 )
          {
            ZwClose(v66);
            *(_QWORD *)(v72 + 88) = 0LL;
          }
        }
      }
      if ( (*((_DWORD *)v67 + 203) & 0x2000000) != 0 )
        CInputConfig::CleanupInputSpaces((CInputConfig *)v66, v67);
    }
    if ( (struct tagPROCESSINFO *)gppiFullscreen == *v51 && !gbMDEVDisabled )
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 4u, 0LL, 0, 0LL, 0LL, 0LL, (__int64)v155, 0LL);
    if ( *v51 && (unsigned int)IsCurrentProcessDwm() )
      xxxDwmProcessShutdown(1);
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v136);
  if ( qword_1C02D68A8 )
    v74 = qword_1C02D68A8();
  else
    v74 = -1073741637;
  if ( v74 >= 0 && qword_1C02D68B0 )
    qword_1C02D68B0(v2);
  if ( (int)IsFreeDelayedHooksSupported >= 0 && qword_1C02D6D18 )
    qword_1C02D6D18();
  if ( qword_1C02D68B8 )
    v75 = qword_1C02D68B8();
  else
    v75 = -1073741637;
  if ( v75 >= 0 && qword_1C02D68C0 )
    qword_1C02D68C0();
  if ( qword_1C02D68E8 )
    v76 = qword_1C02D68E8();
  else
    v76 = -1073741637;
  if ( v76 >= 0 && qword_1C02D68F0 )
    qword_1C02D68F0();
  CActivationObjectManager::OnThreadTermination(v73);
  DestroyThreadsObjects();
  v77 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v78 = (_QWORD *)*v77;
      if ( (struct tagTHREADINFO *)v77[3] == v2 )
      {
        v79 = qword_1C02D68D8 ? qword_1C02D68D8() : -1073741637;
        if ( v79 >= 0 )
          FreeHwndList(v77);
      }
      v77 = v78;
    }
    while ( v78 );
  }
  if ( qword_1C02D68F8 )
    v80 = qword_1C02D68F8();
  else
    v80 = -1073741637;
  if ( v80 >= 0 && qword_1C02D6900 )
    qword_1C02D6900(v2);
  HMAssignmentUnlock((__int64 *)v2 + 55);
  if ( gdwGuiThreads == 1 )
  {
    *(_DWORD *)(SGDGetUserSessionState(v82, v81, v83, v84) + 2936) = 0;
    _InterlockedOr(v134, 0);
    CleanupResources();
  }
  if ( v68 )
  {
    if ( (*((_DWORD *)*v51 + 3) & 0x1000000) != 0 )
    {
      v85 = *((_QWORD *)v2 + 58);
      if ( v85 )
      {
        if ( *(_QWORD *)(v85 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v85 + 168), 1114LL);
      }
    }
    if ( qword_1C02D6918 )
      v86 = qword_1C02D6918();
    else
      v86 = -1073741637;
    if ( v86 >= 0 && qword_1C02D6920 )
      qword_1C02D6920(*v51);
    *((_DWORD *)*v51 + 3) &= ~0x2000u;
    *((_DWORD *)*v51 + 3) &= ~0x10000000u;
    v87 = *((_QWORD *)v2 + 60);
    v88 = *(_DWORD **)(v87 + 208);
    if ( v88 )
    {
      ProbeForWrite(*(volatile void **)(v87 + 208), 4uLL, 4u);
      *v88 = 0;
    }
    DestroyProcessesObjects(*v51);
  }
  HMAssignmentUnlock((__int64 *)v2 + 99);
  v89 = *((_QWORD *)v2 + 178);
  if ( v89 )
  {
    Win32FreePool((char *)v89);
    *((_QWORD *)v2 + 178) = 0LL;
  }
  if ( !*((_QWORD *)v2 + 54) )
    goto LABEL_310;
  if ( qword_1C02D6FA0 )
    v90 = qword_1C02D6FA0();
  else
    v90 = -1073741637;
  if ( v90 >= 0 && qword_1C02D6FA8 )
    qword_1C02D6FA8(v2);
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 54) + 392LL) -= *((_DWORD *)v2 + 190),
        v91 = *((_QWORD *)v2 + 54),
        v92 = 0,
        (v93 = *(_QWORD *)(v91 + 480)) != 0)
    && (v92 = 1, *(_QWORD *)(v93 + 1528))
    || (v89 = *(_QWORD *)(v91 + 488)) != 0 && ((unsigned int)(v92 + 1) > 1 || *(_QWORD *)(v89 + 1536)) )
  {
    v94 = v139;
    gpdeskRecalcQueueAttach = *v139;
    ApiSetEditionSystemGenerateMove(0LL);
  }
  else
  {
LABEL_310:
    v94 = v139;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v89);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v97 = (_QWORD *)(CurrentProcessWin32Process + 320);
  v98 = *(struct tagTHREADINFO **)(CurrentProcessWin32Process + 320);
  if ( v98 )
  {
    if ( v98 == v2 )
      goto LABEL_319;
    v99 = (struct tagTHREADINFO **)v98;
    do
    {
      v96 = v99 + 83;
      v100 = v99[83];
      v101 = (struct tagTHREADINFO *)v99;
      if ( !v100 )
        break;
      v97 = v99 + 83;
      v99 = (struct tagTHREADINFO **)v99[83];
      v101 = v100;
    }
    while ( v100 != v2 );
    if ( v101 == v2 )
    {
LABEL_319:
      *v97 = *((_QWORD *)v2 + 83);
      *((_QWORD *)v2 + 83) = 0LL;
    }
  }
  v145 = 0LL;
  LockObjectAssignment(&v145, *v94, v97, v96);
  if ( qword_1C02D6928 )
    v102 = qword_1C02D6928();
  else
    v102 = -1073741637;
  if ( v102 >= 0 && qword_1C02D6930 )
    qword_1C02D6930(v2);
  if ( *((_DWORD *)v2 + 386) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v2 + 386) = 0;
  }
  if ( *v51 )
    --*((_DWORD *)*v51 + 94);
  UninitializeThreadInfoIocp(v2);
  v106 = (void *)*((_QWORD *)v2 + 185);
  if ( v106 )
  {
    ObCloseHandle(v106, 0);
    *((_QWORD *)v2 + 185) = 0LL;
  }
  v107 = *((_QWORD *)v2 + 91);
  if ( v107 )
  {
    if ( (int)ProtectHandle(v107, v103, ExEventObjectType, 0LL) >= 0 && (*v142 & 0x1000000) == 0 )
      ObCloseHandle(*((HANDLE *)v2 + 91), 1);
    *((_QWORD *)v2 + 91) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v107, v103, v104, v105) + 15904)
    && *(struct tagTHREADINFO **)(*(_QWORD *)(SGDGetUserSessionState(v109, v108, v110, v111) + 15904) + 16LL) == v2 )
  {
    v116 = SGDGetUserSessionState(v113, v112, v114, v115);
    HMAssignmentUnlock((__int64 *)(v116 + 15904));
  }
  if ( gptiForeground == v2 )
  {
    if ( qword_1C02D6708 )
      v117 = qword_1C02D6708();
    else
      v117 = -1073741637;
    if ( v117 >= 0 )
    {
      xxxWindowEvent(32773, 0, -4, 0, 4);
      xxxWindowEvent(3, 0, 0, 0, 4);
    }
    v118 = v145;
    if ( *((_QWORD *)v145[1] + 25) && (int)Is_PostMessageSupported() >= 0 )
      PostMessage(*((_QWORD *)v118[1] + 25), (unsigned int)guiActivateShellWindow);
    if ( qword_1C02D6938 )
      v10 = qword_1C02D6938();
    if ( v10 >= 0 && qword_1C02D6940 )
      qword_1C02D6940(0LL);
  }
  if ( v2 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
  {
    v120 = (struct tagTHREADINFO *)*((_QWORD *)*v51 + 40);
    if ( !v120 )
      v120 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v120, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v2 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v2 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v2 )
    gHardErrorHandler = 0LL;
  v121 = v142;
  if ( (*v142 & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows(v2, v119);
  if ( (*((_DWORD *)v2 + 319) & 0x40) != 0 )
    DelegationAPI::ScrubShellHandwritingDelegateThread(v2, v119);
  if ( *((_QWORD *)v2 + 54) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v2 + 54), v2);
    ++*(_DWORD *)(*((_QWORD *)v2 + 54) + 400LL);
    zzzDestroyQueue(*((tagQ **)v2 + 54), v2);
  }
  if ( *((_QWORD *)v2 + 82) )
    tagTHREADINFO::AssignAttachQueue(v2, 0LL);
  if ( *v94 )
  {
    v122 = (_QWORD *)((char *)v2 + 744);
    v123 = *((_QWORD *)v2 + 93);
    v124 = (_QWORD *)*((_QWORD *)v2 + 94);
    if ( *(struct tagTHREADINFO **)(v123 + 8) != (struct tagTHREADINFO *)((char *)v2 + 744) || (_QWORD *)*v124 != v122 )
      __fastfail(3u);
    *v124 = v123;
    *(_QWORD *)(v123 + 8) = v124;
    *((_QWORD *)v2 + 94) = (char *)v2 + 744;
    *v122 = v122;
  }
  FreeMessageList((__int64)v2 + 808);
  v125 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v125 )
  {
    if ( j[1] == v2 || j[2] == v2 )
    {
      *v125 = *j;
      Win32FreePool((char *)j);
    }
    else
    {
      v125 = j;
    }
  }
  MarkThreadsObjects(v2);
  if ( (struct tagTHREADINFO *)gptiShutdownWaiter == v2 )
    gptiShutdownWaiter = 0LL;
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v2 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v2 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v2 )
    gHardErrorHandler = 0LL;
  if ( (struct tagTHREADINFO *)gptiLockUpdate == v2 )
    gptiLockUpdate = 0LL;
  if ( gptiForeground == v2 )
  {
    DisableDelegation();
    if ( qword_1C02D6750 )
      qword_1C02D6750(0LL);
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v2 )
    gptiBlockInput = 0LL;
  if ( v2 == CInputGlobals::GetPtiLastWoken(gpInputGlobals) )
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  v127 = (tagQ *)*((_QWORD *)v2 + 54);
  if ( v127 && !tagQ::IsAnyThreadAttached(v127) )
  {
    if ( gpqForeground == v128 )
      gpqForeground = 0LL;
    if ( gpqForegroundPrev == *((_QWORD *)v2 + 54) )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == *((struct tagQ **)v2 + 54) )
      gpqCursor = 0LL;
  }
  if ( v145 )
  {
    v129 = (char *)*((_QWORD *)v2 + 56);
    if ( v129 )
    {
      if ( v129 != (char *)v2 + 1056 )
      {
        RtlFreeHeap(v145[16], 0, v129);
        *((_QWORD *)v2 + 56) = (char *)v2 + 1056;
      }
    }
  }
  if ( (unsigned __int8)IsInputThread() )
    CInputThreadBase::RevokeThreadAsInput((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        &dword_1C02CA7E0,
        &unk_1C029CAE0);
    CInputThreadBase::RevokeThreadAsInput((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
  }
  if ( (*v144 & 4) != 0 )
  {
    v130 = (char *)*((_QWORD *)v2 + 60);
    if ( v130 )
    {
      Win32FreePool(v130);
      *((_QWORD *)v2 + 60) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v145);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v131, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v133 = (_QWORD *)*((_QWORD *)v2 + 189);
    if ( !v133 )
      break;
    *((_QWORD *)v2 + 189) = *v133;
    if ( (_UNKNOWN *)*(v133 - 1) != &gSmartObjNullRef && !--*(_DWORD *)(*(v133 - 1) + 8LL) )
    {
      if ( *(_BYTE *)(*(v133 - 1) + 12LL) )
        Win32FreeToPagedLookasideList((unsigned int *)gpStackRefLookAside, (char *)*(v133 - 1), v132);
    }
  }
  --gdwGuiThreads;
  *v121 |= 0x80u;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v136);
}
