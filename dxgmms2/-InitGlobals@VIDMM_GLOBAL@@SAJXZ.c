/*
 * XREFs of ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C00BDE54
 * Callers:
 *     DriverEntry @ 0x1C010D1E8 (DriverEntry.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001AD8 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001AFC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0019624 (McGenEventRegister_EtwRegister.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1C00BE18C (-InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C00BE1D4 (TlgRegisterAggregateProviderEx.c)
 *     ?InitGlobals@VIDMM_DMA_POOL@@SAJXZ @ 0x1C00BE568 (-InitGlobals@VIDMM_DMA_POOL@@SAJXZ.c)
 *     ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x1C00BE6E8 (-InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C00C0968 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 */

__int64 VIDMM_GLOBAL::InitGlobals(void)
{
  DXGGLOBAL *Global; // rax
  __int64 v1; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr00_8
  int inited; // eax
  unsigned int v4; // esi
  __int64 v5; // rax
  NTSTATUS v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int LiveDumpWithWdLogs; // eax
  __int64 v12; // rcx
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+88h] [rbp-80h]
  struct _PCW_REGISTRATION_INFORMATION v15; // [rsp+90h] [rbp-78h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-48h]
  struct _PCW_REGISTRATION_INFORMATION v17; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v18; // [rsp+F8h] [rbp-10h]
  struct _PCW_REGISTRATION_INFORMATION v19; // [rsp+100h] [rbp-8h] BYREF
  __int64 v20; // [rsp+130h] [rbp+28h]
  struct _PCW_REGISTRATION_INFORMATION v21; // [rsp+138h] [rbp+30h] BYREF
  __int64 v22; // [rsp+168h] [rbp+60h]

  KeQueryPerformanceCounter(&VIDMM_GLOBAL::_QpcFrequency);
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister();
  TlgRegisterAggregateProviderEx();
  VIDMM_GLOBAL::ReadConfiguration();
  VIDMM_GLOBAL::_RotationHistory = (void *)operator new[](98304LL, 0x6D4D6956u, 64LL);
  if ( VIDMM_GLOBAL::_RotationHistory )
    *(&VIDMM_GLOBAL::_RotationHistory + 1) = (void *)2048;
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v1 = 4 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 4uLL) )
    v1 = -1LL;
  VIDMM_PROCESS::_pDxProcessPerAdapterCount = (void *)operator new[](v1, 0x33316956u, 256LL);
  if ( VIDMM_PROCESS::_pDxProcessPerAdapterCount )
  {
    inited = VIDMM_DMA_POOL::InitGlobals();
    v4 = inited;
    if ( inited < 0 || (inited = VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage(), v4 = inited, inited < 0) )
    {
      WdLogSingleEntry1(1LL, inited);
      goto LABEL_18;
    }
    qword_1C0076928 = (__int64)&VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    v5 = operator new(32LL, 0x30316956u, 256LL);
    if ( v5 )
    {
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_DWORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 20) = 66;
      *(_DWORD *)(v5 + 24) = -1;
      VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = (struct DXGPUSHLOCK *)v5;
      qword_1C0076948 = (__int64)&VIDMM_GLOBAL::_AdapterListHead;
      VIDMM_GLOBAL::_AdapterListHead = &VIDMM_GLOBAL::_AdapterListHead;
      Info.Name = (PCUNICODE_STRING)L"$&";
      Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetProcessMemory'::`2'::Descriptors;
      VIDMM_PARTITION::_PartitionTree = 0LL;
      *(_QWORD *)&Info.Version = 512LL;
      *(_QWORD *)&Info.CounterCount = 5LL;
      v14 = 0LL;
      Info.Callback = 0LL;
      Info.CallbackContext = 0LL;
      v6 = PcwRegister(&GpuPerformanceCounterSetProcessMemory, &Info);
      v4 = v6;
      if ( v6 >= 0 )
      {
        *(_QWORD *)&v15.Version = 512LL;
        v15.Name = (PCUNICODE_STRING)&`InitRegistrationInformationGpuPerformanceCounterSetEngine'::`2'::Name;
        *(_QWORD *)&v15.CounterCount = 2LL;
        v15.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetEngine'::`2'::Descriptors;
        VIDMM_GLOBAL::PerfCounterSetEngineRegistered = 1;
        v16 = 0LL;
        v15.Callback = 0LL;
        v15.CallbackContext = 0LL;
        v6 = PcwRegister(&GpuPerformanceCounterSetEngine, &v15);
        v4 = v6;
        if ( v6 >= 0 )
        {
          VIDMM_GLOBAL::PerfCounterSetProcessMemoryRegistered = 1;
          v17.Name = (PCUNICODE_STRING)L"$&";
          *(_QWORD *)&v17.Version = 512LL;
          v17.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetAdapterMemory'::`2'::Descriptors;
          *(_QWORD *)&v17.CounterCount = 3LL;
          v18 = 0LL;
          v17.Callback = 0LL;
          v17.CallbackContext = 0LL;
          v6 = PcwRegister(&GpuPerformanceCounterSetAdapterMemory, &v17);
          v4 = v6;
          if ( v6 >= 0 )
          {
            VIDMM_GLOBAL::PerfCounterSetAdapterMemoryRegistered = 1;
            v19.Name = (PCUNICODE_STRING)L"02";
            *(_QWORD *)&v19.Version = 512LL;
            v19.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
            *(_QWORD *)&v19.CounterCount = 1LL;
            v20 = 0LL;
            v19.Callback = 0LL;
            v19.CallbackContext = 0LL;
            v6 = PcwRegister(&GpuPerformanceCounterSetLocalAdapterMemory, &v19);
            v4 = v6;
            if ( v6 >= 0 )
            {
              VIDMM_GLOBAL::PerfCounterSetLocalAdapterMemoryRegistered = 1;
              v21.Name = (PCUNICODE_STRING)L"8:";
              *(_QWORD *)&v21.Version = 512LL;
              v21.Counters = (PPCW_COUNTER_DESCRIPTOR)&`InitRegistrationInformationGpuPerformanceCounterSetNonLocalAdapterMemory'::`2'::Descriptors;
              *(_QWORD *)&v21.CounterCount = 1LL;
              v22 = 0LL;
              v21.Callback = 0LL;
              v21.CallbackContext = 0LL;
              v6 = PcwRegister(&GpuPerformanceCounterSetNonLocalAdapterMemory, &v21);
              v4 = v6;
              if ( v6 >= 0 )
              {
                VIDMM_GLOBAL::PerfCounterSetNonLocalAdapterMemoryRegistered = 1;
                VIDMM_GLOBAL::InitPhysicalHeap();
                return v4;
              }
            }
          }
        }
      }
      WdLogSingleEntry1(1LL, v6);
      DxgkLogInternalTriageEvent(v10, 0x40000LL);
      LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(403LL, 2065LL, (int)v4, 0LL, 0LL, 0);
      if ( LiveDumpWithWdLogs >= 0 )
        return v4;
      WdLogSingleEntry1(1LL, LiveDumpWithWdLogs);
LABEL_18:
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
      return v4;
    }
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock = 0LL;
    WdLogSingleEntry1(1LL, -1073741801LL);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3221225495LL;
  }
  else
  {
    _InterlockedAdd(&dword_1C00767DC, 1u);
    WdLogSingleEntry1(6LL, 482LL);
    DxgkLogInternalTriageEvent(v8, 262145LL);
    return -1073741801LL;
  }
}
