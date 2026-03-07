// write access to const memory has been detected, the output may be wrong!
void __fastcall RawInputThread(__int64 *a1)
{
  __int64 RemoteContext; // r15
  __int64 v3; // r14
  __int64 ProcessWin32Process; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v11; // r8
  __int16 v12; // r9
  unsigned int v13; // eax
  __int64 v14; // rcx
  struct _KTIMER *v15; // rax
  __int64 v16; // rcx
  struct _KTIMER *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  ULONG v22; // edi
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v25; // rcx
  NTSTATUS v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  unsigned int v48; // ebx
  char *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  struct InteractiveControlManager *v56; // rbx
  int v57; // r8d
  int v58; // r9d
  int Settings; // eax
  int v60; // ebx
  IVContainerForegroundSync *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned int v69; // edx
  unsigned int v70; // edx
  LegacyInputDispatcher *v71; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v73[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v75[3]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v76; // [rsp+80h] [rbp-88h] BYREF
  PRKEVENT v77; // [rsp+88h] [rbp-80h]
  _QWORD SystemInformation[2]; // [rsp+90h] [rbp-78h] BYREF
  int v79; // [rsp+A0h] [rbp-68h]
  int v80; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v82[8]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID Event; // [rsp+F8h] [rbp-10h] BYREF

  DestinationString = 0LL;
  Handle = 0LL;
  v77 = 0LL;
  v80 = 0;
  v71 = 0LL;
  RemoteContext = GreGetRemoteContext();
  memset_0(v82, 0, 0x50uLL);
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v3 = *a1;
  SystemInformation[0] = PsGetThreadProcessId(KeGetCurrentThread());
  SystemInformation[1] = PsGetThreadId(KeGetCurrentThread());
  v79 = 16;
  ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(1LL, 0LL);
  InitKeyboard();
  gdwPUDFlags &= ~0x1000u;
  gdwGTERMFlags &= ~1u;
  *(_DWORD *)(gpsi + 1972LL) = 0;
  *(_DWORD *)(gpsi + 2068LL) = 0;
  *(_DWORD *)(gpsi + 2196LL) = 0;
  UserSessionSwitchLeaveCrit(gpsi);
  InkProcessor::Initialize();
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_130;
  v82[6] = CRitTimerScanWakeSystem::ritTimerScanWakeEvent;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  if ( ProcessWin32Process )
  {
    v5 = -*(_QWORD *)ProcessWin32Process;
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  }
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v6 = *(_QWORD *)(GetDispInfo(v5) + 96);
  *(_DWORD *)(gpsi + 4960LL) = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 36LL) / 2;
  *(_DWORD *)(gpsi + 4964LL) = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 40LL) / 2;
  gptCursorAsync = *(struct tagPOINT *const *)(gpsi + 4960LL);
  ClearLogicalCursorPos();
  EnterCrit(1LL, 0LL);
  TransitionCursorSuppressionState(10LL, 1LL);
  UserSessionSwitchLeaveCrit(v7);
  EnterCrit(1LL, 0LL);
  RegisterCoreMsgProviderPreferences(14LL, 3LL, 1LL);
  v9 = *(unsigned int *)SGDGetUserSessionState(v8);
  if ( (_DWORD)v9 != gServiceSessionId )
  {
    IsEnabledDeviceUsage = Feature_ReportShellHotKey__private_IsEnabledDeviceUsage(v9);
    v11 = 4294967289LL;
    if ( IsEnabledDeviceUsage )
    {
      _RegisterHotKey((struct tagWND *)1, 0LL, 4294967289LL, 4104, 0, 0LL);
      v13 = 27;
      v11 = 61744LL;
      v12 = 4098;
    }
    else
    {
      v12 = 8;
      v13 = 0;
    }
    _RegisterHotKey((struct tagWND *)1, 0LL, v11, v12, v13, 0LL);
    SetDebugHotKeys();
    SetWinlogonHotKeys();
    SetWindowArrangementHotKeys();
    SetPenHotKeys();
  }
  CInputGlobals::UpdateLastInputTime(
    gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    14LL);
  UserSessionSwitchLeaveCrit(v14);
  v15 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
  gptmrMaster = v15;
  if ( !v15 )
    goto LABEL_130;
  KeInitializeTimer(v15);
  v16 = gptmrMaster;
  v82[2] = gptmrMaster;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    v17 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
    gptmrWD = v17;
    if ( !v17 )
      goto LABEL_130;
    KeInitializeTimerEx(v17, SynchronizationTimer);
  }
  v82[4] = gptmrWD;
  if ( gProtocolType
    && !(unsigned int)DrvEscapeRemoteDrivers(
                        *(_QWORD *)(gpDispInfo + 16LL),
                        gProtocolType,
                        *(_QWORD *)(RemoteContext + 40),
                        2LL,
                        gptmrWD,
                        8) )
  {
    goto LABEL_130;
  }
  v18 = *(unsigned int *)SGDGetUserSessionState(v16);
  if ( (_DWORD)v18 != gServiceSessionId && !gProtocolType )
  {
    EnterCrit(1LL, 0LL);
    GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v19);
  }
  v20 = *(unsigned int *)SGDGetUserSessionState(v18);
  if ( (_DWORD)v20 == gServiceSessionId )
    gbFirstConnectionDone = 1;
  if ( *(_DWORD *)SGDGetUserSessionState(v20) )
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) < 0 )
      goto LABEL_130;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v22 = 2;
    Event = Object;
    v77 = (PRKEVENT)Object;
  }
  else
  {
    Handle = 0LL;
    v22 = 1;
    if ( PoRequestShutdownEvent(&Event) < 0 )
      goto LABEL_130;
  }
  v23 = *(unsigned int *)SGDGetUserSessionState(v21);
  if ( (_DWORD)v23 != gServiceSessionId )
    CreatePointerDeviceProcessEvents(v23);
  if ( Event )
  {
    CurrentThread = KeGetCurrentThread();
    WPP_MAIN_CB.Dpc.DeferredContext = Event;
    gptiRit = W32GetThreadWin32Thread((__int64)CurrentThread);
    gdwHydraHint |= 0x2000u;
    *(_DWORD *)(gptiRit + 488LL) |= 0x80u;
    v25 = (struct _KEVENT *)a1[1];
    v82[0] = *(_QWORD *)(gptiRit + 1456LL);
    KeSetEvent(v25, 1, 0);
    v76 = *(PVOID *)(v3 + 56);
    ObReferenceObjectByPointer(v76, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v26 = KeWaitForMultipleObjects(v22, &v76, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v26 == 1 && (gdwRITWakeReason & 2) == 0 );
    ObfDereferenceObject(v76);
    if ( v26 == 1 && (gdwRITWakeReason & 2) != 0 )
    {
      KeSetEvent(v77, 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v77);
      if ( Handle )
        ZwClose(Handle);
      KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
      return;
    }
    if ( (unsigned int)GetRITWakeReason(0LL) )
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DeferredContext, 1, 0);
    EnterCrit(1LL, 0LL);
    if ( !*(_QWORD *)(gptiRit + 456LL) )
      xxxSwitchDesktop(*(_QWORD *)(gptiRit + 616LL), *(_QWORD *)(*(_QWORD *)(gptiRit + 616LL) + 16LL), 0, 0);
    KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
    v28 = *(unsigned int *)SGDGetUserSessionState(v27);
    if ( (_DWORD)v28 == gServiceSessionId )
    {
      v38 = SGDGetUserSessionState(v28);
      CBaseInput::InitializeSensor(*(CBaseInput **)(v38 + 16840));
      v40 = SGDGetUserSessionState(v39);
      CBaseInput::InitializeSensor(*(CBaseInput **)(v40 + 12672));
    }
    else
    {
      if ( gProtocolType )
      {
        *(_OWORD *)&v75[1] = 0LL;
        RtlInitUnicodeString((PUNICODE_STRING)&v75[1], 0LL);
        v30 = 1;
        while ( v30 != 2 )
        {
          if ( v30 == 1
            && (v31 = SGDGetUserSessionState(v29), (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v31 + 12672)) >= 0) )
          {
            v32 = SGDGetUserSessionState(v29);
            CBaseInput::HandleTSRequest(*(_QWORD *)(v32 + 12672), 0LL);
            v34 = SGDGetUserSessionState(v33);
            CBaseInput::Read(*(CBaseInput **)(v34 + 12672));
            ++v30;
          }
          else if ( (unsigned int)++v30 > 2 )
          {
            goto LABEL_52;
          }
        }
        v35 = SGDGetUserSessionState(v29);
        if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v35 + 16840)) >= 0 )
        {
          v37 = SGDGetUserSessionState(v36);
          CBaseInput::Read(*(CBaseInput **)(v37 + 16840));
        }
      }
      else
      {
        xxxRegisterForDeviceClassNotifications(v28);
      }
LABEL_52:
      InitTimerPowerSaving();
      ConfigureRITDelayableTimers(0);
    }
    gbIsRITReady = 1;
    GreStartTimers();
    UserSessionSwitchLeaveCrit(v41);
    LegacyInputDispatcher::Create(&v71);
    LegacyInputDispatcher::Initialize(v71, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v82);
    v43 = SGDGetUserSessionState(v42);
    CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v43 + 12672), v71);
    v45 = SGDGetUserSessionState(v44);
    CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v45 + 16840), v71);
    while ( 1 )
    {
LABEL_55:
      while ( 1 )
      {
        v46 = LegacyInputDispatcher::WaitAndDispatch(v71);
        if ( v46 )
          break;
        EnterCrit(1LL, 0LL);
        xxxRemoveQueueCompletion();
        UserSessionSwitchLeaveCrit(v47);
LABEL_118:
        if ( gspwndAltTab )
        {
          EnterCrit(1LL, 0LL);
          v65 = gptiRit;
          if ( (*(_DWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) & 0x40) != 0 )
          {
            do
            {
              xxxReceiveMessage(v65);
              v65 = gptiRit;
              v62 = *(unsigned int *)(*(_QWORD *)(gptiRit + 448LL) + 8LL);
            }
            while ( (v62 & 0x40) != 0 );
          }
          goto LABEL_121;
        }
      }
      if ( v46 == 4 )
        break;
      if ( v46 != 2 )
      {
        if ( ((v46 - 1) & 0xFFFFFFFD) == 0 )
        {
          EnterCrit(1LL, 0LL);
          xxxTimersProc();
          UserSessionSwitchLeaveCrit(v63);
          v64 = dword_1C0362568;
          if ( gnRetryReadInput != dword_1C0362568 )
            v64 = gnRetryReadInput;
          dword_1C0362568 = v64;
        }
        goto LABEL_118;
      }
      EnterCrit(1LL, 0LL);
      if ( gProtocolType )
      {
        DrvEscapeRemoteDrivers(
          *(_QWORD *)(gpDispInfo + 16LL),
          gProtocolType,
          *(_QWORD *)(RemoteContext + 40),
          1LL,
          0LL,
          0);
      }
      else if ( gfRemotingConsole )
      {
        v62 = gConsoleShadowhDev;
        if ( gConsoleShadowhDev )
          HDXDrvEscape(gConsoleShadowhDev, 1LL, 0LL, 0LL);
      }
LABEL_121:
      UserSessionSwitchLeaveCrit(v62);
    }
    v73[0] = 0;
    KeClearEvent((PRKEVENT)WPP_MAIN_CB.Dpc.DeferredContext);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( !(unsigned int)GetRITWakeReason(v73) )
                goto LABEL_55;
              v48 = v73[0];
              if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 2LL) )
              {
                switch ( v48 )
                {
                  case 1u:
                    v49 = "Mouse";
                    break;
                  case 2u:
                    v49 = "Shutdown";
                    break;
                  case 4u:
                    v49 = "EnableMMCSS";
                    break;
                  case 8u:
                    v49 = "RitTakeover";
                    break;
                  case 0x10u:
                    v49 = "DitTakeover";
                    break;
                  case 0x20u:
                    v49 = "ConfigUpdate";
                    break;
                  case 0x40u:
                    v49 = "GetUserProfile";
                    break;
                  case 0x80u:
                    v49 = "DitInControl";
                    break;
                  default:
                    v49 = "UNKNOWN";
                    if ( v48 == -1 )
                      v49 = "NoReason";
                    break;
                }
                Object = v49;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                  (int)&dword_1C035C080,
                  (__int64)&Object);
              }
              if ( v48 != 1 )
                break;
              ProcessMouseEvent();
            }
            if ( v48 == 2 )
            {
              InitiateWin32kCleanup();
              if ( *(_DWORD *)SGDGetUserSessionState(v66) != gServiceSessionId )
              {
                EnterCrit(1LL, 0LL);
                WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
                ObfDereferenceObject(Event);
                UserSessionSwitchLeaveCrit(v67);
              }
              if ( Handle )
                ZwClose(Handle);
              EnterCrit(1LL, 0LL);
              CleanupSensorExplicitly(1LL);
              if ( !gbMIT )
                CleanupSensorExplicitly(2LL);
              UserSessionSwitchLeaveCrit(v68);
              CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
              if ( v71 )
                LegacyInputDispatcher::`scalar deleting destructor'(v71, v69);
              return;
            }
            if ( v48 != 4 )
              break;
            xxxClientEnableMMCSS((*gpsi >> 12) & 1);
          }
          if ( v48 == 8 )
          {
            EnterCrit(1LL, 0LL);
            RitTakeOver(v50);
            v52 = SGDGetUserSessionState(v51);
            CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v52 + 16840), v71);
            goto LABEL_105;
          }
          if ( v48 != 16 )
            break;
          PrepareForMasterInputThreadTakingOver(v71);
        }
        if ( v48 == 128 )
        {
          EnterCrit(1LL, 0LL);
          ZwSetEvent(WPP_MAIN_CB.Dpc.DeferredRoutine, 0LL);
          goto LABEL_105;
        }
        if ( v48 == 32 )
        {
          EnterCrit(1LL, 0LL);
          goto LABEL_105;
        }
        if ( v48 != 64 )
          break;
        EnterCrit(1LL, 0LL);
        CheckPointerDeviceConfiguration();
        v56 = InteractiveControlManager::Instance(v54);
        if ( (unsigned int)dword_1C0357150 > 4 )
        {
          v75[1] = "InteractiveControlManager::GetExternalParameters entry";
          Object = *(PVOID *)(gptiCurrent + 496LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
            (_DWORD)Object,
            (unsigned int)&unk_1C031F1F1,
            v57,
            v58,
            (__int64)&v75[1],
            (__int64)&Object);
        }
        Settings = InteractiveControlSettings::ReadSettings(
                     (struct InteractiveControlManager *)((char *)v56 + 84),
                     v55,
                     v57);
        v60 = Settings;
        if ( Settings < 0 && (unsigned int)dword_1C0357150 > 2 )
        {
          LODWORD(v75[0]) = Settings;
          v75[1] = "Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0357150,
            (__int64)&v75[1],
            (__int64)v75);
        }
        if ( (unsigned int)dword_1C0357150 > 4 )
        {
          LODWORD(Object) = v60;
          v75[1] = "InteractiveControlManager::GetExternalParameters exit";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0357150,
            (__int64)&v75[1],
            (__int64)&Object);
        }
        TraceLoggingMouseWheelRoutingValueAtStartup();
LABEL_105:
        UserSessionSwitchLeaveCrit(v53);
      }
      if ( v48 == 256 )
      {
        EnterCrit(1LL, 0LL);
        IVContainerForegroundSync::xxxIVSyncForeground(v61);
        goto LABEL_105;
      }
    }
  }
LABEL_130:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  if ( v71 )
    LegacyInputDispatcher::`scalar deleting destructor'(v71, v70);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  KeSetEvent(gpevtRitReadyForCallOut, 1, 0);
}
