/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000BDF0
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_StagingConfig_Load @ 0x180008648 (wil_details_StagingConfig_Load.c)
 *     wil_details_StagingConfig_FireNotification @ 0x180008B30 (wil_details_StagingConfig_FireNotification.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000AF1C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000B260 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18000B3BC (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18000B640 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18000B7C8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, int a2, unsigned int a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v6; // eax
  FARPROC ProcAddress; // rax
  HMODULE ModuleHandleW; // rax
  __int64 v9; // r8
  int v10; // eax
  void *v11; // rbx
  HANDLE ProcessHeap; // rax
  int v13; // [rsp+30h] [rbp-168h] BYREF
  int v14; // [rsp+34h] [rbp-164h]
  _BYTE v15[56]; // [rsp+40h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-120h]
  int v17; // [rsp+90h] [rbp-108h]
  _BYTE v18[208]; // [rsp+A0h] [rbp-F8h] BYREF

  v3 = (unsigned int)a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = (unsigned int)this;
  if ( (_DWORD)this || a3 || v4 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        (RTL_SRWLOCK *)&wil::details::g_featureStateManager,
        (int)this,
        a2,
        a3);
    }
    else if ( a3 || v4 == 254 )
    {
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        v4,
        a3);
    }
    else
    {
      v13 = (int)this;
      v14 = (unsigned __int16)a2;
      if ( a2 < 0 )
        HIWORD(v14) |= 1u;
      ProcAddress = (FARPROC)g_wil_details_pfnRtlNotifyFeatureUsage;
      if ( g_wil_details_pfnRtlNotifyFeatureUsage )
        goto LABEL_21;
      ModuleHandleW = g_wil_details_ntdllModuleHandle;
      if ( !g_wil_details_ntdllModuleHandle )
      {
        ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
        g_wil_details_ntdllModuleHandle = ModuleHandleW;
      }
      ProcAddress = GetProcAddress(ModuleHandleW, "RtlNotifyFeatureUsage");
      g_wil_details_pfnRtlNotifyFeatureUsage = (__int64)ProcAddress;
      if ( ProcAddress )
LABEL_21:
        v10 = ((__int64 (__fastcall *)(int *))ProcAddress)(&v13);
      else
        v10 = -1073741511;
      if ( v10 )
      {
        if ( !(unsigned int)wil_details_StagingConfig_Load((__int64)v15, 0, v9, (__int64)v18) )
        {
          wil_details_StagingConfig_FireNotification((__int64)v15, v5, (unsigned __int16)v4, v3);
          if ( v17 )
          {
            v11 = lpMem;
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v11);
          }
        }
      }
    }
  }
  else if ( !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnDllShutdownInProgress;
    if ( wil::details::g_pfnDllShutdownInProgress )
      v6 = wil::details::g_pfnDllShutdownInProgress();
    if ( !v6 && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)&wil::details::g_featureStateManager) )
    {
      wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&qword_18019B480[25], qword_18019B480);
      wil::details_abi::FeatureStateData::RecordUsage(qword_18019B480);
    }
  }
}
