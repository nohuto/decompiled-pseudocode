void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // r13d
  __int64 v6; // r8
  DXGGLOBAL *v7; // rbx
  __int64 v8; // rcx
  struct _EPROCESS *v9; // rax
  __int64 v10; // r8
  unsigned __int8 v11; // r12
  __int64 v12; // r8
  __int64 v13; // rcx
  DXGDODPRESENT *v14; // rcx
  __int64 v15; // r8
  int FirstProfilerInterface; // eax
  __int64 v17; // r8
  bool v18; // zf
  DXGGLOBAL *v19; // rbx
  __int64 v20; // rcx
  struct _EPROCESS *v21; // rax
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v23; // r13
  int v24; // r12d
  __int64 v25; // rax
  DXGGLOBAL *Global; // rbx
  __int64 v27; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned __int8 v29; // dl
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rax
  DXGDODPRESENT *v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-58h]
  unsigned __int8 v36; // [rsp+98h] [rbp+20h]

  v5 = a2;
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
  if ( v5 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent();
    v23 = Current;
    v24 = a3 & 2;
    if ( v24 )
    {
      if ( !Current )
      {
        WdLogSingleEntry1(1LL, 4173LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 4173LL, 0LL, 0LL, 0LL, 0LL);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v23 + 216, 0LL);
      *((_QWORD *)v23 + 28) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v23, (struct DXGADAPTER *)a1);
      v25 = *(_QWORD *)(a1 + 2928);
      if ( v25 && *(_QWORD *)(v25 + 744) )
        DXGPROCESS::FlushAllDevice(v23, (const struct DXGADAPTER *)a1);
    }
    Global = DXGGLOBAL::GetGlobal();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v27);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 232), 0LL, CurrentProcess);
    v29 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    v36 = v29;
    if ( bTracingEnabled
      && (qword_1C013A870 & 0x1000000) != 0
      && (qword_1C013A870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      LODWORD(v34) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v30, a1, v34);
      v29 = v36;
    }
    LOBYTE(v30) = v29 != 0;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3LL, v30);
    if ( bTracingEnabled
      && (qword_1C013A870 & 0x1000000) != 0
      && (qword_1C013A870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      LODWORD(v34) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v31, a1, v34);
    }
    if ( *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    v32 = *(_QWORD *)(a1 + 2928);
    if ( v32 && *(_QWORD *)(v32 + 744) )
    {
      if ( *(_BYTE *)(v32 + 752) )
      {
        WdLogSingleEntry1(1LL, 4216LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"this->GetRenderCore()->m_bSchedulerSuspendedByAcquireCoreResource == FALSE",
          4216LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(a1 + 2928), 0, 0) < 0 )
      {
        WdLogSingleEntry1(1LL, 4218LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(SchedulerStatus)", 4218LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2928) + 752LL) = 1;
    }
    if ( !*(_QWORD *)(a1 + 2928) )
    {
      v33 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2920) + 448LL);
      if ( v33 )
        DXGDODPRESENT::Flush(v33);
    }
    if ( v24 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v23, (struct DXGADAPTER *)a1);
      *((_QWORD *)v23 + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v23 + 216, 0LL);
      KeLeaveCriticalRegion();
    }
    v5 = a2;
    goto LABEL_13;
  }
  KeEnterCriticalRegion();
  if ( (a3 & 1) == 0 )
  {
    v7 = DXGGLOBAL::GetGlobal();
    v9 = (struct _EPROCESS *)PsGetCurrentProcess(v8);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v7, *(_QWORD *)(a1 + 232), 0LL, v9);
    v11 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (qword_1C013A870 & 0x1000000) != 0
      && (qword_1C013A870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      LODWORD(v34) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v10, a1, v34);
    }
    LOBYTE(v10) = v11 != 0;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, v5, v10);
    if ( bTracingEnabled
      && (qword_1C013A870 & 0x1000000) != 0
      && (qword_1C013A870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      LODWORD(v34) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v12, a1, v34);
    }
    if ( *(_DWORD *)(a1 + 200) == 1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 64LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 4104), 0xFFFFFFFF) == 1 )
        DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v13);
    }
LABEL_12:
    if ( !*(_QWORD *)(a1 + 2928) )
    {
      v14 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2920) + 448LL);
      if ( v14 )
        DXGDODPRESENT::Flush(v14);
    }
LABEL_13:
    *(_DWORD *)(a1 + 176) = v5;
    return;
  }
  if ( bTracingEnabled
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v34) = 1;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v6, a1, v34);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    *(_DWORD *)(a1 + 4676) = v5;
    FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
    v18 = bTracingEnabled == 0;
    *(_DWORD *)(a1 + 4680) = FirstProfilerInterface;
    if ( !v18
      && (qword_1C013A870 & 0x1000000) != 0
      && (qword_1C013A870 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
    {
      LODWORD(v34) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v17, a1, v34);
    }
    v19 = DXGGLOBAL::GetGlobal();
    v21 = (struct _EPROCESS *)PsGetCurrentProcess(v20);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v19, *(_QWORD *)(a1 + 232), 0LL, v21);
    goto LABEL_12;
  }
  if ( bTracingEnabled
    && (qword_1C013A870 & 0x1000000) != 0
    && (qword_1C013A870 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000000LL) != 0 )
  {
    LODWORD(v34) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v15, a1, v34);
  }
  KeLeaveCriticalRegion();
}
