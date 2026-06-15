/*
 * XREFs of ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180005E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_18000A300.c)
 *     ?Shutdown@CDuckingManager@@UEAAXXZ @ 0x18000AB40 (-Shutdown@CDuckingManager@@UEAAXXZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180025BB0 (--1TSSession@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowsPolicyManager::Shutdown(CWindowsPolicyManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  void *v3; // rcx
  _QWORD *v4; // rax
  TSSession *v5; // rbx
  CApplicationManager *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  HANDLE v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CApplicationManager *v12; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    v3 = qword_18004FF98;
    if ( !qword_18004FF98 )
      break;
    v4 = *(_QWORD **)qword_18004FF98;
    v5 = (TSSession *)*((_QWORD *)qword_18004FF98 + 2);
    qword_18004FF98 = v4;
    if ( v4 )
      v4[1] = 0LL;
    else
      qword_18004FFA0 = 0LL;
    operator delete(v3, (const struct std::nothrow_t *)0x18);
    --dword_18004FFA8;
    if ( v5 )
    {
      TSSession::~TSSession(v5);
      operator delete(v5, (const struct std::nothrow_t *)0x160);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( g_hLowPowerEpochNotificationHandle )
  {
    PowerSettingUnregisterNotification(g_hLowPowerEpochNotificationHandle);
    g_hLowPowerEpochNotificationHandle = 0LL;
  }
  g_bLowPowerEpoch = 0;
  g_bApmSuspended = 0;
  g_bIsSystemAsleep = 0;
  CDuckingManager::Shutdown((struct CDuckingManager *)((char *)g_DuckingManager + 8));
  v6 = g_ApplicationManager;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  *((_DWORD *)v6 + 6) = 1;
  if ( v7 )
    LeaveCriticalSection(v7);
  v8 = g_EventWorkerThreadHandle;
  if ( g_EventWorkerThreadHandle )
  {
    if ( g_WorkerEventPort )
    {
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
      v8 = g_EventWorkerThreadHandle;
    }
    WaitForSingleObject(v8, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
  }
  v9 = g_StreamClassPolicyManager;
  g_StreamClassPolicyManager = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 4) = 0LL;
  }
  v11 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release();
  v12 = g_ApplicationManager;
  if ( g_ApplicationManager )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)g_ApplicationManager + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v12 + 16LL))(v12);
      (*(void (__fastcall **)(CApplicationManager *, __int64))(*(_QWORD *)v12 + 8LL))(v12, 1LL);
    }
    g_ApplicationManager = 0LL;
  }
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  if ( g_DeviceEnumerator )
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)g_DeviceEnumerator + 16LL))(g_DeviceEnumerator);
    g_DeviceEnumerator = 0LL;
  }
}
