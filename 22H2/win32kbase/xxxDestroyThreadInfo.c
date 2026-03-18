/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C0051264
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     UserThreadCallout @ 0x1C0050B50 (UserThreadCallout.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C000B5F0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?ClearPtiLastWoken@CInputGlobals@@QEAAXXZ @ 0x1C000E230 (-ClearPtiLastWoken@CInputGlobals@@QEAAXXZ.c)
 *     xxxUserSetDisplayConfig @ 0x1C0012540 (xxxUserSetDisplayConfig.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C003869C (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     FreeMessageList @ 0x1C00386E8 (FreeMessageList.c)
 *     UnlockObjectAssignment @ 0x1C0038710 (UnlockObjectAssignment.c)
 *     ThreadLock @ 0x1C0045D00 (ThreadLock.c)
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0047F20 (Win32FreeToPagedLookasideList.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C004F640 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C004F750 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C004F800 (DestroyThreadsObjects.c)
 *     EtwTraceProcessWindowInfo @ 0x1C0053640 (EtwTraceProcessWindowInfo.c)
 *     EtwTraceInputProcessDelay @ 0x1C0053680 (EtwTraceInputProcessDelay.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     HMAssignmentUnlock @ 0x1C0056D00 (HMAssignmentUnlock.c)
 *     IsInputThread @ 0x1C0057E50 (IsInputThread.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0066108 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0069BB4 (ApiSetEditionGetProcessWindowStation.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C006FEE4 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     DeactivateKSTInputProcessingHelper @ 0x1C00807B4 (DeactivateKSTInputProcessingHelper.c)
 *     ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C00812F4 (-CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0084BF8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0087988 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C0087A68 (ProtectHandle.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0087D08 (UserDeactivateMITInputProcessing.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0089570 (EtwTraceMessageCheckDelay.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00981A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00981E4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     LockObjectAssignment @ 0x1C0099630 (LockObjectAssignment.c)
 *     PushW32ThreadLock @ 0x1C00999D4 (PushW32ThreadLock.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C009AEB0 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C009B7B4 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C009E0F0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     CleanupResources @ 0x1C009E280 (CleanupResources.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C00A7A90 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     IsDestroyThreadsMessagesSupported @ 0x1C00A7D38 (IsDestroyThreadsMessagesSupported.c)
 *     DestroyThreadsMessages @ 0x1C00AA0D8 (DestroyThreadsMessages.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AA2B0 (PopAndFreeW32ThreadLock.c)
 *     ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C00B5B60 (-AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z.c)
 *     DisableDelegation @ 0x1C00B8A90 (DisableDelegation.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x1C00C376C (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 *     xxxWindowEvent @ 0x1C00C4C0C (xxxWindowEvent.c)
 *     FreeHwndList @ 0x1C00C4EE0 (FreeHwndList.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00C52D8 (IsCleanupIAMAccessSupported.c)
 *     CleanupIAMAccess @ 0x1C00C5468 (CleanupIAMAccess.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C012CC54 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C012CCB8 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C012CD04 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C012CD6C (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C012CF04 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C012D108 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C012D23C (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C012D370 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C012D3A0 (CleanupRimDevObjInUserModeCallback.c)
 *     zzzDestroyQueue @ 0x1C012DDE0 (zzzDestroyQueue.c)
 *     ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C013573C (-ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1C013873C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C013D9BC (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C0173BA4 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01E3B14 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C01E5158 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C0207A40 (ApiSetEditionSystemGenerateMove.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C0231100 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 *     Is_PostMessageSupported @ 0x1C02331C4 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x1C02331F0 (IsxxxMNEndMenuStateSupported.c)
 *     _PostMessage @ 0x1C02333F4 (_PostMessage.c)
 *     xxxMNEndMenuState @ 0x1C023341C (xxxMNEndMenuState.c)
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
  int v57; // eax
  int v58; // eax
  int v59; // eax
  void *v60; // rcx
  struct _ETHREAD *v61; // rbx
  __int64 v62; // rdx
  void *v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  struct tagPROCESSINFO *v66; // r15
  int v67; // r12d
  __int64 v68; // rbx
  CActivationObjectManager *v69; // rcx
  int v70; // eax
  int v71; // eax
  int v72; // eax
  _QWORD *v73; // rbx
  _QWORD *v74; // r15
  int v75; // eax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rbx
  int v82; // eax
  __int64 v83; // rax
  _DWORD *v84; // rbx
  __int64 v85; // rcx
  int v86; // eax
  __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rcx
  __int64 *v90; // r15
  __int64 CurrentProcessWin32Process; // rax
  struct tagTHREADINFO **v92; // r9
  _QWORD *v93; // r8
  struct tagTHREADINFO *v94; // rax
  struct tagTHREADINFO **v95; // rdx
  struct tagTHREADINFO *v96; // rcx
  struct tagTHREADINFO *v97; // rax
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  void *v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  int v113; // eax
  PVOID *v114; // rbx
  struct tagTHREADINFO *v115; // rdx
  struct tagTHREADINFO *v116; // rdx
  _DWORD *v117; // r14
  _QWORD *v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // rcx
  void **v121; // rbx
  void **j; // rcx
  tagQ *v123; // rcx
  __int64 v124; // rcx
  char *v125; // r8
  char *v126; // rcx
  __int64 v127; // rcx
  void *v128; // r8
  _QWORD *v129; // rdx
  signed __int32 v130[8]; // [rsp+0h] [rbp-1A8h] BYREF
  int v131; // [rsp+60h] [rbp-148h]
  _BYTE v132[4]; // [rsp+64h] [rbp-144h] BYREF
  __int64 *v133; // [rsp+68h] [rbp-140h] BYREF
  _QWORD v134[2]; // [rsp+70h] [rbp-138h] BYREF
  __int64 *v135; // [rsp+80h] [rbp-128h]
  unsigned int v136; // [rsp+88h] [rbp-120h] BYREF
  unsigned int v137; // [rsp+8Ch] [rbp-11Ch] BYREF
  _DWORD *v138; // [rsp+90h] [rbp-118h]
  struct tagPROCESSINFO **v139; // [rsp+98h] [rbp-110h]
  _DWORD *v140; // [rsp+A0h] [rbp-108h]
  PVOID *v141; // [rsp+A8h] [rbp-100h] BYREF
  int v142; // [rsp+B0h] [rbp-F8h] BYREF
  struct tagTHREADINFO *v143; // [rsp+B8h] [rbp-F0h]
  struct tagPROCESSINFO *v144; // [rsp+C0h] [rbp-E8h]
  struct tagPROCESSINFO *v145; // [rsp+C8h] [rbp-E0h]
  char v146[8]; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v147; // [rsp+E8h] [rbp-C0h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-B0h]
  __int128 v149; // [rsp+118h] [rbp-90h] BYREF
  __int64 v150; // [rsp+128h] [rbp-80h]
  _QWORD v151[10]; // [rsp+130h] [rbp-78h] BYREF

  memset(v151, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v151[1]);
  v151[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v151[3]) = 20;
  LOBYTE(v151[6]) = -1;
  v2 = gptiCurrent;
  v143 = gptiCurrent;
  v3 = gptiCurrent;
  v4 = (char *)gptiCurrent + 424;
  v139 = (struct tagPROCESSINFO **)((char *)gptiCurrent + 424);
  v144 = (struct tagPROCESSINFO *)*((_QWORD *)gptiCurrent + 53);
  v145 = v144;
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
  v135 = (__int64 *)((char *)v2 + 456);
  v8 = *((_QWORD *)v2 + 57);
  if ( v8 && *(struct tagTHREADINFO **)(v8 + 288) == v3 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*v7);
  if ( (struct tagTHREADINFO *)gptiBlockInput == v2 )
    gptiBlockInput = 0LL;
  v140 = (_DWORD *)((char *)v2 + 488);
  *((_DWORD *)v2 + 122) |= 0x41u;
  if ( qword_1C0296348 )
  {
    v9 = qword_1C0296348(v3);
    v10 = -1073741637;
  }
  else
  {
    v10 = -1073741637;
    v9 = -1073741637;
  }
  if ( v9 >= 0 && qword_1C0296350 )
    qword_1C0296350(v2);
  if ( *(_QWORD *)(SGDGetUserSessionState(v3, Self, v0, v1) + 3424) )
  {
    SGDGetUserSessionState(v12, v11, v13, v14);
    CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(v2);
  }
  if ( qword_1C02955F0 )
    v15 = qword_1C02955F0();
  else
    v15 = -1073741637;
  if ( v15 >= 0 && qword_1C02955F8 )
    qword_1C02955F8(v2);
  if ( qword_1C0295600 )
    v16 = qword_1C0295600();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C0295608 )
    qword_1C0295608();
  if ( qword_1C0295610 )
    v17 = qword_1C0295610();
  else
    v17 = -1073741637;
  if ( v17 >= 0 && qword_1C0295618 )
    qword_1C0295618();
  if ( *v7 )
  {
    v18 = *(_QWORD *)(*v7 + 224);
    if ( v18 && *(struct tagTHREADINFO **)(v18 + 32) == v2 )
    {
      v19 = qword_1C0295630 ? qword_1C0295630() : -1073741637;
      if ( v19 >= 0 && qword_1C0295638 )
        qword_1C0295638();
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v146, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
    v20 = *v7;
    if ( *(_QWORD *)(*v7 + 256) == *(_QWORD *)v4 )
    {
      for ( i = *(struct tagTHREADINFO **)(*(_QWORD *)v4 + 320LL);
            i && (i == v2 || *((_QWORD *)i + 57) != v20);
            i = (struct tagTHREADINFO *)*((_QWORD *)i + 83) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v20 + 256) = 0LL;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v146);
  }
  v138 = (_DWORD *)((char *)v2 + 1272);
  if ( (*((_DWORD *)v2 + 318) & 8) != 0 )
  {
    v22 = qword_1C0295640 ? qword_1C0295640() : -1073741637;
    if ( v22 >= 0 && qword_1C0295648 )
      qword_1C0295648(&gMagnContext, v2, 0LL, 1LL);
  }
  EtwTraceProcessWindowInfo(v2);
  if ( ((unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C0283068 - 1) <= 2u
      || (qword_1C0283050 & 0x8000000000200000uLL) == 0
      || (v23 = 1, (qword_1C0283058 & 0x8000000000200000uLL) != qword_1C0283058) )
    {
      v23 = 0;
    }
    if ( v23 )
    {
      v137 = 0;
      v136 = 0;
      v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v2);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v2);
      v27 = *((_DWORD *)v2 + 304) != 0 ? v24 - *((_DWORD *)v2 + 304) : 0;
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v2 + 54), v24, &v137, &v136, 0LL, 0LL);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v28,
          (unsigned int)&ThreadExitEvent,
          v29,
          ThreadId,
          ThreadInfoFlags,
          v27,
          v137,
          v136);
      v7 = v135;
    }
  }
  v30 = v140;
  if ( (*v140 & 0x1000000) != 0 )
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
  if ( qword_1C0295650 )
    v32 = qword_1C0295650();
  else
    v32 = -1073741637;
  if ( v32 >= 0 && qword_1C0295658 )
    qword_1C0295658(v2);
  if ( *((_QWORD *)v2 + 84) )
  {
    if ( qword_1C0295660 )
      v33 = qword_1C0295660();
    else
      v33 = -1073741637;
    if ( v33 >= 0 && qword_1C0295668 )
      qword_1C0295668(v2);
    if ( *((_QWORD *)v2 + 84) && qword_1C0296498 )
      qword_1C0296498(v2);
  }
  ProcessWindowStation = (_QWORD *)ApiSetEditionGetProcessWindowStation();
  if ( ProcessWindowStation )
  {
    v147 = 0LL;
    v148 = 0LL;
    PushW32ThreadLock(ProcessWindowStation, &v147, CompositionObject::Release);
    ObfReferenceObject(ProcessWindowStation);
    if ( (struct tagTHREADINFO *)ProcessWindowStation[10] == v2 )
    {
      v35 = qword_1C0295670 ? qword_1C0295670() : -1073741637;
      if ( v35 >= 0 && qword_1C0295678 )
        qword_1C0295678(ProcessWindowStation);
    }
    if ( (struct tagTHREADINFO *)ProcessWindowStation[11] == v2 )
      ProcessWindowStation[11] = 0LL;
    PopAndFreeW32ThreadLock(&v147);
  }
  if ( !*((_QWORD *)v2 + 76) )
    goto LABEL_166;
  while ( 1 )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v134);
    v37 = (__int64 *)*((_QWORD *)v2 + 76);
    v38 = *v37;
    if ( *v37 != *(_QWORD *)v134[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v134);
      if ( v38 )
      {
        v134[0] = *(_QWORD *)(v38 + 88);
        ++*(_DWORD *)(v134[0] + 8LL);
      }
      else
      {
        v134[0] = &gSmartObjNullRef;
      }
    }
    v133 = v37;
    v39 = (struct tagTHREADINFO *)v37[4];
    if ( gptiCurrent == v39 )
      ++*((_DWORD *)v37 + 10);
    else
      v133 = 0LL;
    if ( v2 != v39 )
      break;
    v40 = *((_DWORD *)v37 + 2);
    if ( (v40 & 0x100) != 0 )
    {
      if ( qword_1C0295690 )
        v41 = qword_1C0295690();
      else
        v41 = -1073741637;
      if ( v41 >= 0 )
      {
        v36 = *(_QWORD *)v134[0];
        if ( qword_1C0295698 )
          qword_1C0295698(v37, v36);
      }
    }
    else
    {
      *((_DWORD *)v37 + 2) = v40 & 0xFFFFFFFB;
      *(_DWORD *)(*((_QWORD *)v2 + 54) + 396LL) &= ~0x100000u;
      if ( qword_1C02956C0 )
        v42 = qword_1C02956C0();
      else
        v42 = -1073741637;
      if ( v42 >= 0 && qword_1C02956C8 )
        qword_1C02956C8(*(_QWORD *)v134[0], v37);
      v39 = *(struct tagTHREADINFO **)v134[0];
      if ( (**(_DWORD **)v134[0] & 1) == 0 )
      {
        v39 = *(struct tagTHREADINFO **)v134[0];
        if ( (**(_DWORD **)v134[0] & 0x8000) == 0 )
        {
          if ( v133 )
          {
            *((_DWORD *)v133 + 10) = 0;
            v133 = 0LL;
          }
          if ( qword_1C02956D0 )
            v43 = qword_1C02956D0();
          else
            v43 = -1073741637;
          if ( v43 >= 0 )
          {
            v39 = *(struct tagTHREADINFO **)v134[0];
            if ( qword_1C02956D8 )
              qword_1C02956D8(v39);
          }
          if ( qword_1C02956E0 )
            v44 = qword_1C02956E0(v39);
          else
            v44 = -1073741637;
          if ( v44 >= 0 && qword_1C02956E8 )
            qword_1C02956E8(*(_QWORD *)v134[0]);
          v45 = *(_DWORD **)v134[0];
          if ( (**(_DWORD **)v134[0] & 0x40000000) != 0 )
          {
            *v45 &= ~0x20000000u;
          }
          else if ( v45 == (_DWORD *)&gpopupMenu )
          {
            gdwPUDFlags &= ~0x800000u;
            NullifyLookasideRef(qword_1C0291F88);
          }
          else
          {
            v46 = *(_QWORD *)v134[0];
            NullifyLookasideRef(*(void **)(*(_QWORD *)v134[0] + 88LL));
            v47 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 32);
            if ( v47 )
              NSInstrumentation::CTypeIsolation<24576,96>::Free(v47, v46);
            if ( *(_QWORD *)v134[0] != *v37 )
            {
              v131 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2582LL);
            }
            if ( *(_QWORD *)v134[0] == *v37 )
              *v37 = 0LL;
          }
          if ( qword_1C02956B0 )
            v48 = qword_1C02956B0();
          else
            v48 = -1073741637;
          if ( v48 >= 0 && qword_1C02956B8 )
            qword_1C02956B8(v2, v37);
          goto LABEL_124;
        }
      }
    }
    if ( v133 )
    {
      *((_DWORD *)v133 + 10) = 0;
      v133 = 0LL;
    }
    if ( (int)IsxxxMNEndMenuStateSupported(v39, v36) >= 0 )
      xxxMNEndMenuState(v37);
LABEL_124:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v133);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v134);
    if ( !*((_QWORD *)v2 + 76) )
      goto LABEL_165;
  }
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v133);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v134);
LABEL_165:
  v30 = v140;
LABEL_166:
  v49 = *((_QWORD *)v2 + 90);
  if ( v49 )
  {
    HMAssignmentUnlock(v49 + 16);
    HMAssignmentUnlock(*((_QWORD *)v2 + 90) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v2 + 90) + 8LL);
    v50 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 40);
    if ( v50 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v50, *((_QWORD *)v2 + 90));
    *((_QWORD *)v2 + 90) = 0LL;
  }
  v51 = v139;
  v52 = *v139;
  if ( *v139 && *((struct tagTHREADINFO **)v52 + 41) == v2 )
    *((_QWORD *)v52 + 41) = 0LL;
  while ( 1 )
  {
    v54 = *((_QWORD *)v2 + 78);
    if ( !v54 )
      break;
    if ( qword_1C02956F0 )
    {
      v53 = qword_1C02956F0();
      v54 = *((_QWORD *)v2 + 78);
    }
    else
    {
      v53 = -1073741637;
    }
    if ( v53 >= 0 && qword_1C02956F8 )
      qword_1C02956F8(v2, v54);
  }
  if ( (*v30 & 0x800) != 0 )
  {
    v149 = 0LL;
    v150 = 0LL;
    v55 = *(_QWORD *)(*v7 + 8);
    v56 = *(_QWORD *)(v55 + 24);
    if ( v56 )
    {
      ThreadLock(*(_QWORD *)(v55 + 24), &v149);
      if ( qword_1C0295700 )
        v57 = qword_1C0295700();
      else
        v57 = -1073741637;
      if ( v57 >= 0 && qword_1C0295708 )
        qword_1C0295708(v56);
      ThreadUnlock1();
    }
  }
  if ( *v51 && *((_QWORD *)*v51 + 106) )
  {
    v58 = qword_1C0295710 ? qword_1C0295710() : -1073741637;
    if ( v58 >= 0 && qword_1C0295718 )
      qword_1C0295718(v2);
  }
  if ( qword_1C0295720 )
    v59 = qword_1C0295720();
  else
    v59 = -1073741637;
  if ( v59 >= 0 && qword_1C0295728 )
    qword_1C0295728(v2);
  if ( (*v138 & 0x400000) != 0 )
  {
    *v138 &= ~0x400000u;
    if ( gbMouseInjectionBlockedOnDIT != 1 )
    {
      v131 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2684LL);
    }
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  v60 = (void *)*((_QWORD *)v2 + 174);
  if ( v60 )
  {
    CleanupRimDevObjInUserModeCallback(v60);
    *((_QWORD *)v2 + 174) = 0LL;
  }
  v61 = *(struct _ETHREAD **)v2;
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v2) )
    CInputManager::NotifyDwmInputThreadShutdown(v61);
  if ( (unsigned __int8)IsInputThread() )
    UserDeactivateMITInputProcessing();
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    DeactivateKSTInputProcessingHelper();
  v66 = v144;
  if ( !v144 || *((struct tagTHREADINFO **)v144 + 40) != v2 || (v67 = 1, *((_QWORD *)v2 + 83)) )
    v67 = 0;
  v131 = v67;
  if ( v144 )
  {
    v63 = (void *)*(unsigned __int16 *)(*((_QWORD *)v2 + 60) + 154LL);
    if ( (_WORD)v63 )
    {
      v62 = *(unsigned __int16 *)(*((_QWORD *)v2 + 60) + 154LL);
      v63 = (void *)*((unsigned __int16 *)v144 + 404);
      v64 = 0xFFFFLL;
      if ( (int)v63 >= 0xFFFF - (int)v62 )
      {
        *((_WORD *)v144 + 404) = -1;
      }
      else
      {
        LOWORD(v63) = v62 + (_WORD)v63;
        *((_WORD *)v144 + 404) = (_WORD)v63;
      }
    }
    if ( v67 )
    {
      v64 = *((unsigned __int16 *)v66 + 404);
      if ( (_WORD)v64 )
      {
        if ( (unsigned int)dword_1C02883D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02883D8, 0x200000000000LL) )
        {
          v142 = v64;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C02883D8,
            (unsigned int)&unk_1C0255691,
            v64,
            v65,
            (__int64)&v142);
        }
      }
    }
  }
  if ( v67 )
  {
    if ( v66 )
    {
      if ( (*((_DWORD *)v66 + 204) & 0x200000) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v66);
        v68 = *((_QWORD *)v66 + 113);
        if ( v68 )
        {
          *(_QWORD *)(v68 + 96) = 0LL;
          v63 = *(void **)(v68 + 88);
          if ( v63 )
          {
            ZwClose(v63);
            *(_QWORD *)(v68 + 88) = 0LL;
          }
        }
      }
      if ( (*((_DWORD *)v66 + 204) & 0x2000000) != 0 )
        CInputConfig::CleanupInputSpaces((CInputConfig *)v63, v66);
    }
    if ( (struct tagPROCESSINFO *)gppiFullscreen == *v51 && !gbMDEVDisabled )
      xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 4u, 0LL, 0, 0LL, 0LL, 0LL, (__int64)v151, 0LL);
    if ( *v51 && (unsigned int)IsCurrentProcessDwm() )
      xxxDwmProcessShutdown(1);
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v132, v62, v64, v65);
  if ( qword_1C0295730 )
    v70 = qword_1C0295730();
  else
    v70 = -1073741637;
  if ( v70 >= 0 && qword_1C0295738 )
    qword_1C0295738(v2);
  if ( (int)IsFreeDelayedHooksSupported >= 0 && qword_1C0295BA0 )
    qword_1C0295BA0();
  if ( qword_1C0295740 )
    v71 = qword_1C0295740();
  else
    v71 = -1073741637;
  if ( v71 >= 0 && qword_1C0295748 )
    qword_1C0295748();
  if ( qword_1C0295770 )
    v72 = qword_1C0295770();
  else
    v72 = -1073741637;
  if ( v72 >= 0 && qword_1C0295778 )
    qword_1C0295778();
  CActivationObjectManager::OnThreadTermination(v69);
  DestroyThreadsObjects();
  v73 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v74 = (_QWORD *)*v73;
      if ( (struct tagTHREADINFO *)v73[3] == v2 )
      {
        v75 = qword_1C0295760 ? qword_1C0295760() : -1073741637;
        if ( v75 >= 0 )
          FreeHwndList(v73);
      }
      v73 = v74;
    }
    while ( v74 );
  }
  if ( qword_1C0295780 )
    v76 = qword_1C0295780();
  else
    v76 = -1073741637;
  if ( v76 >= 0 && qword_1C0295788 )
    qword_1C0295788(v2);
  HMAssignmentUnlock((char *)v2 + 440);
  if ( gdwGuiThreads == 1 )
  {
    *(_DWORD *)(SGDGetUserSessionState(v78, v77, v79, v80) + 2936) = 0;
    _InterlockedOr(v130, 0);
    CleanupResources();
  }
  if ( v67 )
  {
    if ( (*((_DWORD *)*v51 + 3) & 0x1000000) != 0 )
    {
      v81 = *((_QWORD *)v2 + 58);
      if ( v81 )
      {
        if ( *(_QWORD *)(v81 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v81 + 168), 1114LL);
      }
    }
    if ( qword_1C02957A0 )
      v82 = qword_1C02957A0();
    else
      v82 = -1073741637;
    if ( v82 >= 0 && qword_1C02957A8 )
      qword_1C02957A8(*v51);
    *((_DWORD *)*v51 + 3) &= ~0x2000u;
    *((_DWORD *)*v51 + 3) &= ~0x10000000u;
    v83 = *((_QWORD *)v2 + 60);
    v84 = *(_DWORD **)(v83 + 208);
    if ( v84 )
    {
      ProbeForWrite(*(volatile void **)(v83 + 208), 4uLL, 4u);
      *v84 = 0;
    }
    DestroyProcessesObjects(*v51);
  }
  HMAssignmentUnlock((char *)v2 + 792);
  v85 = *((_QWORD *)v2 + 178);
  if ( v85 )
  {
    Win32FreePool((char *)v85);
    *((_QWORD *)v2 + 178) = 0LL;
  }
  if ( !*((_QWORD *)v2 + 54) )
    goto LABEL_311;
  if ( qword_1C0295E28 )
    v86 = qword_1C0295E28();
  else
    v86 = -1073741637;
  if ( v86 >= 0 && qword_1C0295E30 )
    qword_1C0295E30(v2);
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 54) + 392LL) -= *((_DWORD *)v2 + 190),
        v87 = *((_QWORD *)v2 + 54),
        v88 = 0,
        (v89 = *(_QWORD *)(v87 + 480)) != 0)
    && (v88 = 1, *(_QWORD *)(v89 + 1528))
    || (v85 = *(_QWORD *)(v87 + 488)) != 0 && ((unsigned int)(v88 + 1) > 1 || *(_QWORD *)(v85 + 1536)) )
  {
    v90 = v135;
    gpdeskRecalcQueueAttach = *v135;
    ApiSetEditionSystemGenerateMove(0LL);
  }
  else
  {
LABEL_311:
    v90 = v135;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v85);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v93 = (_QWORD *)(CurrentProcessWin32Process + 320);
  v94 = *(struct tagTHREADINFO **)(CurrentProcessWin32Process + 320);
  if ( v94 )
  {
    if ( v94 == v2 )
      goto LABEL_320;
    v95 = (struct tagTHREADINFO **)v94;
    do
    {
      v92 = v95 + 83;
      v96 = v95[83];
      v97 = (struct tagTHREADINFO *)v95;
      if ( !v96 )
        break;
      v93 = v95 + 83;
      v95 = (struct tagTHREADINFO **)v95[83];
      v97 = v96;
    }
    while ( v96 != v2 );
    if ( v97 == v2 )
    {
LABEL_320:
      *v93 = *((_QWORD *)v2 + 83);
      *((_QWORD *)v2 + 83) = 0LL;
    }
  }
  v141 = 0LL;
  LockObjectAssignment(&v141, *v90, v93, v92);
  if ( qword_1C02957B0 )
    v98 = qword_1C02957B0();
  else
    v98 = -1073741637;
  if ( v98 >= 0 && qword_1C02957B8 )
    qword_1C02957B8(v2);
  if ( *((_DWORD *)v2 + 386) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v2 + 386) = 0;
  }
  if ( *v51 )
    --*((_DWORD *)*v51 + 94);
  UninitializeThreadInfoIocp(v2);
  v102 = (void *)*((_QWORD *)v2 + 185);
  if ( v102 )
  {
    ObCloseHandle(v102, 0);
    *((_QWORD *)v2 + 185) = 0LL;
  }
  v103 = *((_QWORD *)v2 + 91);
  if ( v103 )
  {
    if ( (int)ProtectHandle(v103, v99, ExEventObjectType, 0LL) >= 0 && (*v138 & 0x1000000) == 0 )
      ObCloseHandle(*((HANDLE *)v2 + 91), 1);
    *((_QWORD *)v2 + 91) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v103, v99, v100, v101) + 15904)
    && *(struct tagTHREADINFO **)(*(_QWORD *)(SGDGetUserSessionState(v105, v104, v106, v107) + 15904) + 16LL) == v2 )
  {
    v112 = SGDGetUserSessionState(v109, v108, v110, v111);
    HMAssignmentUnlock(v112 + 15904);
  }
  if ( gptiForeground == v2 )
  {
    if ( qword_1C0295590 )
      v113 = qword_1C0295590();
    else
      v113 = -1073741637;
    if ( v113 >= 0 )
    {
      xxxWindowEvent(32773, 0, -4, 0, 4);
      xxxWindowEvent(3, 0, 0, 0, 4);
    }
    v114 = v141;
    if ( *((_QWORD *)v141[1] + 25) && (int)Is_PostMessageSupported() >= 0 )
      PostMessage(*((_QWORD *)v114[1] + 25), (unsigned int)guiActivateShellWindow);
    if ( qword_1C02957C0 )
      v10 = qword_1C02957C0();
    if ( v10 >= 0 && qword_1C02957C8 )
      qword_1C02957C8(0LL);
  }
  if ( v2 == CInputGlobals::GetPtiLastWoken(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1)) )
  {
    v116 = (struct tagTHREADINFO *)*((_QWORD *)*v51 + 40);
    if ( !v116 )
      v116 = gptiForeground;
    CInputGlobals::SetPtiLastWoken(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1), v116, 0);
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v2 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v2 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v2 )
    gHardErrorHandler = 0LL;
  v117 = v138;
  if ( (*v138 & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows(v2, v115);
  if ( (*((_DWORD *)v2 + 319) & 0x40) != 0 )
    DelegationAPI::ScrubShellHandwritingDelegateThread(v2, v115);
  if ( *((_QWORD *)v2 + 54) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
      DestroyThreadsMessages(*((_QWORD *)v2 + 54), v2);
    ++*(_DWORD *)(*((_QWORD *)v2 + 54) + 400LL);
    zzzDestroyQueue(*((tagQ **)v2 + 54), v2);
  }
  if ( *((_QWORD *)v2 + 82) )
    tagTHREADINFO::AssignAttachQueue(v2, 0LL);
  if ( *v90 )
  {
    v118 = (_QWORD *)((char *)v2 + 744);
    v119 = *((_QWORD *)v2 + 93);
    v120 = (_QWORD *)*((_QWORD *)v2 + 94);
    if ( *(struct tagTHREADINFO **)(v119 + 8) != (struct tagTHREADINFO *)((char *)v2 + 744) || (_QWORD *)*v120 != v118 )
      __fastfail(3u);
    *v120 = v119;
    *(_QWORD *)(v119 + 8) = v120;
    *((_QWORD *)v2 + 94) = (char *)v2 + 744;
    *v118 = v118;
  }
  FreeMessageList((__int64)v2 + 808);
  v121 = &gpai;
  for ( j = (void **)gpai; j; j = (void **)*v121 )
  {
    if ( j[1] == v2 || j[2] == v2 )
    {
      *v121 = *j;
      Win32FreePool((char *)j);
    }
    else
    {
      v121 = j;
    }
  }
  MarkThreadsObjects((__int64)v2);
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
    if ( qword_1C02955D8 )
      qword_1C02955D8(0LL);
  }
  if ( (struct tagTHREADINFO *)gptiBlockInput == v2 )
    gptiBlockInput = 0LL;
  if ( v2 == CInputGlobals::GetPtiLastWoken(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1)) )
    CInputGlobals::ClearPtiLastWoken(*((CInputGlobals **)&WPP_MAIN_CB.Reserved + 1));
  v123 = (tagQ *)*((_QWORD *)v2 + 54);
  if ( v123 && !tagQ::IsAnyThreadAttached(v123) )
  {
    if ( gpqForeground == v124 )
      gpqForeground = 0LL;
    if ( gpqForegroundPrev == *((_QWORD *)v2 + 54) )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == *((struct tagQ **)v2 + 54) )
      gpqCursor = 0LL;
  }
  if ( v141 )
  {
    v125 = (char *)*((_QWORD *)v2 + 56);
    if ( v125 )
    {
      if ( v125 != (char *)v2 + 1056 )
      {
        RtlFreeHeap(v141[17], 0, v125);
        *((_QWORD *)v2 + 56) = (char *)v2 + 1056;
      }
    }
  }
  if ( (unsigned __int8)IsInputThread() )
    CInputThreadBase::RevokeThreadAsInput((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    if ( (unsigned int)dword_1C0289810 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0289810, 2LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        &dword_1C0289810,
        &unk_1C025E152);
    CInputThreadBase::RevokeThreadAsInput((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
  }
  if ( (*v140 & 4) != 0 )
  {
    v126 = (char *)*((_QWORD *)v2 + 60);
    if ( v126 )
    {
      Win32FreePool(v126);
      *((_QWORD *)v2 + 60) = 0LL;
    }
  }
  UnlockObjectAssignment((void **)&v141);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v127, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v129 = (_QWORD *)*((_QWORD *)v2 + 189);
    if ( !v129 )
      break;
    *((_QWORD *)v2 + 189) = *v129;
    if ( (_UNKNOWN *)*(v129 - 1) != &gSmartObjNullRef && !--*(_DWORD *)(*(v129 - 1) + 8LL) )
    {
      if ( *(_BYTE *)(*(v129 - 1) + 12LL) )
        Win32FreeToPagedLookasideList((unsigned int *)gpStackRefLookAside, (char *)*(v129 - 1), v128);
    }
  }
  --gdwGuiThreads;
  *v117 |= 0x80u;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v132);
}
