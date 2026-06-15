/*
 * XREFs of ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000609C
 * Callers:
 *     ActivatePolicyManager @ 0x1800059F0 (ActivatePolicyManager.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003AE8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CDuckingManager@@QEAA@XZ @ 0x1800089D0 (--0CDuckingManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_18000A300.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18000A4EC (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x18000A8FC (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 *     ??0CApplicationManager@@IEAA@XZ @ 0x18001AF20 (--0CApplicationManager@@IEAA@XZ.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x1800226D0 (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18002AF48 (-TS_ServiceStart@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180039DDC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18003A7D8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CWindowsPolicyManager::RuntimeClassInitialize(struct CPlaybackManager **this)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rbx
  signed int v4; // esi
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax
  const char *v8; // r9
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  HANDLE v11; // rax
  CApplicationManager *v12; // rax
  PSID *v13; // r14
  int v14; // edi
  PSID v15; // r12
  DWORD v16; // edi
  const char *v17; // r9
  __int64 v18; // rdx
  _DWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  int Instance; // eax
  unsigned __int64 v23; // r9
  struct CPlaybackManager *v24; // rcx
  CDuckingManager *v25; // rax
  volatile signed __int32 *v26; // rsi
  signed __int32 v27; // eax
  CApplicationManager *v28; // rax
  DWORD v29; // eax
  unsigned int dwCreationFlags; // [rsp+28h] [rbp-79h]
  PSID *v31; // [rsp+38h] [rbp-69h]
  _QWORD Recipient[3]; // [rsp+60h] [rbp-41h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+78h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( ThreadPool )
    goto LABEL_25;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x60uLL);
  if ( v3 )
  {
    *v3 = &CAudioThreadPool::`vftable';
    v3[10] = 0LL;
    *((_DWORD *)v3 + 2) = 3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 17) = 1;
    *((_DWORD *)v3 + 18) = 72;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    v4 = -2147024882;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = 0;
  if ( RtlDllShutdownInProgress() )
  {
    v4 = -2147023781;
  }
  else
  {
    ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
    v3[10] = ThreadpoolCleanupGroup;
    if ( ThreadpoolCleanupGroup )
    {
      v3[3] = ThreadpoolCleanupGroup;
      v3[4] = 0LL;
    }
    else
    {
      LastError = GetLastError();
      v4 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v4 = LastError;
    }
    if ( v4 >= 0 )
    {
      ThreadPool = (struct CAudioThreadPool *)v3;
      v3 = 0LL;
      goto LABEL_21;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_59645097987a3a1d89299ed4bf796b10_Traceguids, v4);
  }
LABEL_21:
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *, __int64))*v3)(v3, 1LL);
  if ( v4 < 0 )
    goto LABEL_24;
LABEL_25:
  g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  if ( !g_WorkerEventPort )
  {
    v9 = 255LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v8);
  }
  g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
  if ( !g_EventWorkerThreadHandle )
  {
    v9 = 258LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v8);
  }
  TS_ServiceStart();
  v10 = 0LL;
  v31 = 0LL;
  if ( !g_ApplicationManager )
  {
    v11 = GetProcessHeap();
    v12 = (CApplicationManager *)HeapAlloc(v11, 0, 0xB0uLL);
    v13 = v12 ? (PSID *)CApplicationManager::CApplicationManager(v12) : 0LL;
    if ( v13 )
    {
      v15 = v13[2];
      if ( v15 )
      {
        v16 = GetLastError();
        LocalFree(v15);
        SetLastError(v16);
      }
      v13[2] = 0LL;
      if ( ConvertStringSidToSidW(
             L"S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991",
             v13 + 2) )
      {
        v14 = 0;
      }
      else
      {
        v14 = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x1D2,
                (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                v17);
      }
      if ( v14 >= 0 )
      {
        v10 = (volatile signed __int32 *)v13;
        v31 = v13;
        v13 = 0LL;
      }
    }
    else
    {
      v14 = -2147024882;
    }
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (*((void (__fastcall **)(PSID *))*v13 + 2))(v13);
        (*((void (__fastcall **)(PSID *, __int64))*v13 + 1))(v13, 1LL);
      }
      v10 = (volatile signed __int32 *)v31;
    }
    if ( v14 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, v14);
      }
      AudPolicyLogError("CApplicationManager::CreateInstance", 402, v14);
      v18 = 263LL;
      goto LABEL_81;
    }
  }
  v19 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = 0LL;
  if ( v19 )
  {
    *(_OWORD *)v19 = 0LL;
    v19[3] = 1;
    *(_QWORD *)v19 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v19 = &CStreamClassPolicyManager::`vftable';
    v20 = (__int64)v19;
  }
  v21 = g_StreamClassPolicyManager;
  g_StreamClassPolicyManager = v20;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( g_StreamClassPolicyManager )
  {
    Instance = CPlaybackManager::CreateInstance(this + 4);
    v14 = Instance;
    if ( Instance < 0 )
    {
      v23 = (unsigned int)Instance;
      v18 = 268LL;
LABEL_82:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)v23);
      goto LABEL_89;
    }
    v24 = this[5];
    this[5] = 0LL;
    if ( v24 )
      ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release)();
    this[5] = 0LL;
    v25 = (CDuckingManager *)operator new(0x1F0uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v25 )
    {
      Recipient[2] = v25;
      v26 = (volatile signed __int32 *)CDuckingManager::CDuckingManager(v25);
      v14 = CDuckingManager::RuntimeClassInitialize((CDuckingManager *)v26);
      if ( v14 >= 0 )
      {
        if ( v26 )
        {
          do
            v27 = *((_DWORD *)v26 + 5);
          while ( v27 != 0x7FFFFFFF && v27 != _InterlockedCompareExchange(v26 + 5, v27 + 1, v27) );
          v10 = (volatile signed __int32 *)v31;
        }
        this[5] = (struct CPlaybackManager *)v26;
        if ( v26 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(v26);
        v14 = 0;
      }
      else if ( v26 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(v26);
      }
      if ( v14 >= 0 )
      {
        g_DuckingManager = this[5];
        v28 = (CApplicationManager *)v10;
        v10 = 0LL;
        v31 = 0LL;
        g_ApplicationManager = v28;
        g_PlaybackManager = this[4];
        memset_0(&spc, 0, sizeof(spc));
        if ( GetPwrCapabilities(&spc) && spc.spare2[2] )
        {
          g_bIsAoAcSystem = 1;
          Recipient[0] = LowPowerEpochNotificationCallback;
          Recipient[1] = 0LL;
          v29 = PowerSettingRegisterNotification(
                  &GUID_LOW_POWER_EPOCH,
                  2u,
                  Recipient,
                  &g_hLowPowerEpochNotificationHandle);
          if ( v29 )
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              (void *)0x11F,
              (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
              (const char *)v29,
              dwCreationFlags);
        }
        else
        {
          g_bIsAoAcSystem = 0;
        }
        v14 = 0;
        goto LABEL_89;
      }
    }
    else
    {
      v14 = -2147024882;
    }
    v18 = 270LL;
LABEL_81:
    v23 = (unsigned int)v14;
    goto LABEL_82;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10A,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)0x8007000ELL);
  v14 = -2147024882;
LABEL_89:
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*((void (__fastcall **)(PSID *))*v31 + 2))(v31);
      (*((void (__fastcall **)(PSID *, __int64))*v31 + 1))(v31, 1LL);
    }
  }
  return (unsigned int)v14;
}
