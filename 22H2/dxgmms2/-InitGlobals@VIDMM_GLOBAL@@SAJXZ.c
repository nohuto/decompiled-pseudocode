/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0090DEC
 * Callers:
 *     VidMmInitGlobals @ 0x1C0017380 (VidMmInitGlobals.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C000229C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00022C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0017398 (McGenEventRegister_EtwRegister.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C0090A60 (TlgRegisterAggregateProviderEx.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C009126C (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C00912B4 (-InitGlobals@VIDMM_DMA_POOL@@SAJXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0091434 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 *     __security_init_cookie @ 0x1C00D5044 (__security_init_cookie.c)
 *     wil_InitializeFeatureStaging @ 0x1C00D5078 (wil_InitializeFeatureStaging.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int64 MaximumAdapterCount; // rbx
  SIZE_T v9; // rax
  PVOID v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int inited; // eax
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  int LiveDumpWithWdLogs; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // rax
  _QWORD v36[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+80h] [rbp-80h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v42; // [rsp+B0h] [rbp-50h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v43; // [rsp+E0h] [rbp-20h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v44; // [rsp+110h] [rbp+10h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v45; // [rsp+140h] [rbp+40h] BYREF

  _security_init_cookie();
  v0 = wil_InitializeFeatureStaging();
  v4 = v0;
  if ( v0 < 0 )
  {
    VIDMM_GLOBAL::KirEnabled = 0;
LABEL_27:
    v35 = WdLogNewEntry5_WdAssertion(v2, v1, v3);
    *(_QWORD *)(v35 + 24) = v4;
    goto LABEL_28;
  }
  bTracingEnabled = 0;
  VIDMM_GLOBAL::KirEnabled = 1;
  McGenEventRegister_EtwRegister();
  TlgRegisterAggregateProviderEx(v6, v5);
  VIDMM_GLOBAL::ReadConfiguration();
  VIDMM_GLOBAL::_RotationHistory = operator new[](0x18000uLL, 0x6D4D6956u, (POOL_TYPE)512);
  if ( VIDMM_GLOBAL::_RotationHistory )
    *(&VIDMM_GLOBAL::_RotationHistory + 1) = (void *)2048;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global);
  v9 = 4 * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 4uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, 0x33316956u, PagedPool);
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = v10;
  if ( !v10 )
  {
    _InterlockedAdd(&dword_1C00506BC, 1u);
    v12 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v12 + 24) = 491LL;
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
  memset(v10, 0, 4 * MaximumAdapterCount);
  inited = VIDMM_DMA_POOL::InitGlobals();
  v4 = inited;
  if ( inited < 0 )
    goto LABEL_27;
  v15 = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage();
  v4 = v15;
  if ( v15 < 0 )
    goto LABEL_27;
  qword_1C00507F0 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
  v16 = operator new[](0x20uLL, 0x30316956u, PagedPool);
  if ( v16 )
  {
    *v16 = 0LL;
    v16[1] = 0LL;
    *((_DWORD *)v16 + 4) = 0;
    *((_DWORD *)v16 + 5) = 53;
    *((_DWORD *)v16 + 6) = -1;
  }
  else
  {
    v16 = 0LL;
  }
  VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v16;
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = -1073741801LL;
    WdLogEvent5_WdAssertion(v20);
    return 3221225495LL;
  }
  VIDMM_PARTITION::_PartitionTree = 0LL;
  qword_1C0050838 = (__int64)&VIDMM_GLOBAL::_AdapterListHead;
  VIDMM_GLOBAL::_AdapterListHead.Flink = &VIDMM_GLOBAL::_AdapterListHead;
  v36[0] = 2490404LL;
  v36[1] = L"GPU Process Memory";
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetProcessMemory'::`2'::Descriptors;
  Info.Name = (PCUNICODE_STRING)v36;
  *(_QWORD *)&Info.Version = 256LL;
  *(_QWORD *)&Info.CounterCount = 5LL;
  Info.Callback = 0LL;
  Info.CallbackContext = 0LL;
  v21 = PcwRegister(&GpuPerformanceCounterSetProcessMemory, &Info);
  v4 = v21;
  if ( v21 < 0 )
    goto LABEL_17;
  VIDMM_GLOBAL::PerfCounterSetEngineRegistered = 1;
  v37[1] = L"GPU Engine";
  v37[0] = 1441812LL;
  v42.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetEngine'::`2'::Descriptors;
  *(_QWORD *)&v42.Version = 256LL;
  v42.Name = (PCUNICODE_STRING)v37;
  *(_QWORD *)&v42.CounterCount = 2LL;
  v42.Callback = 0LL;
  v42.CallbackContext = 0LL;
  v26 = PcwRegister(&GpuPerformanceCounterSetEngine, &v42);
  v4 = v26;
  if ( v26 < 0 )
    goto LABEL_17;
  VIDMM_GLOBAL::PerfCounterSetProcessMemoryRegistered = 1;
  v38[1] = L"GPU Adapter Memory";
  v38[0] = 2490404LL;
  v43.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetAdapterMemory'::`2'::Descriptors;
  *(_QWORD *)&v43.Version = 256LL;
  v43.Name = (PCUNICODE_STRING)v38;
  *(_QWORD *)&v43.CounterCount = 3LL;
  v43.Callback = 0LL;
  v43.CallbackContext = 0LL;
  v27 = PcwRegister(&GpuPerformanceCounterSetAdapterMemory, &v43);
  v4 = v27;
  if ( v27 < 0 )
    goto LABEL_17;
  VIDMM_GLOBAL::PerfCounterSetAdapterMemoryRegistered = 1;
  v39[1] = L"GPU Local Adapter Memory";
  v39[0] = 3276848LL;
  v44.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
  *(_QWORD *)&v44.Version = 256LL;
  v44.Name = (PCUNICODE_STRING)v39;
  *(_QWORD *)&v44.CounterCount = 1LL;
  v44.Callback = 0LL;
  v44.CallbackContext = 0LL;
  v28 = PcwRegister(&GpuPerformanceCounterSetLocalAdapterMemory, &v44);
  v4 = v28;
  if ( v28 < 0 )
    goto LABEL_17;
  VIDMM_GLOBAL::PerfCounterSetLocalAdapterMemoryRegistered = 1;
  v40[1] = L"GPU Non Local Adapter Memory";
  v40[0] = 3801144LL;
  v45.Counters = (PPCW_COUNTER_DESCRIPTOR)&`RegisterGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
  *(_QWORD *)&v45.Version = 256LL;
  v45.Name = (PCUNICODE_STRING)v40;
  *(_QWORD *)&v45.CounterCount = 1LL;
  v45.Callback = 0LL;
  v45.CallbackContext = 0LL;
  v29 = PcwRegister(&GpuPerformanceCounterSetNonLocalAdapterMemory, &v45);
  v4 = v29;
  if ( v29 < 0 )
  {
LABEL_17:
    v25 = WdLogNewEntry5_WdAssertion(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v4;
    WdLogEvent5_WdAssertion(v25);
  }
  else
  {
    VIDMM_GLOBAL::PerfCounterSetNonLocalAdapterMemoryRegistered = 1;
  }
  if ( (int)v4 < 0 )
  {
    LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x193u, 0x811uLL, (int)v4, 0LL, 0LL, 0);
    v34 = LiveDumpWithWdLogs;
    if ( LiveDumpWithWdLogs < 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33);
      *(_QWORD *)(v35 + 24) = v34;
LABEL_28:
      WdLogEvent5_WdAssertion(v35);
    }
  }
  return (unsigned int)v4;
}
