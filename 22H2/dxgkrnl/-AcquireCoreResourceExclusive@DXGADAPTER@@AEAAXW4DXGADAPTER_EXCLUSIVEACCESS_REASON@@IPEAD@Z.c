/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C013042C
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000287C (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C012E5B4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C020BD24 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1C020BF2C (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02167E4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003A9C0 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00EAF88 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 *     W32kStub_DCompositionNotifyCompositionTokenPresent @ 0x1C0107AF0 (W32kStub_DCompositionNotifyCompositionTokenPresent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C01305A8 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z @ 0x1C0130654 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C0164490 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C02845EC (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C02855A0 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C02861CC (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _EPROCESS *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGGLOBAL *v15; // rax
  unsigned __int8 v16; // r12
  __int64 v17; // r8
  unsigned int v18; // r13d
  __int64 v19; // r8
  DXGDODPRESENT *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _EPROCESS *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  DXGGLOBAL *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  DXGPROCESS *v38; // r15
  int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _EPROCESS *CurrentProcess; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int8 v50; // r13
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  DXGDODPRESENT *v60; // rcx
  __int64 v61; // [rsp+20h] [rbp-38h]

  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    v21 = WdLogNewEntry5_WdCriticalError(v7, v6);
    *(_QWORD *)(v21 + 24) = 275LL;
    *(_QWORD *)(v21 + 32) = 4LL;
    *(_QWORD *)(v21 + 40) = a1;
    *(_OWORD *)(v21 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( a2 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent(v32, v31, v33, v34);
    v38 = Current;
    v39 = a3 & 2;
    if ( v39 )
    {
      if ( !Current )
      {
        v40 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v40 + 24) = 4095LL;
        WdLogEvent5_WdAssertion(v40);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v38 + 176, 0LL);
      *((_QWORD *)v38 + 23) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v38, (struct DXGADAPTER *)a1);
      v41 = *(_QWORD *)(a1 + 2704);
      if ( v41 && *(_QWORD *)(v41 + 624) )
        DXGPROCESS::FlushAllDevice(v38, (const struct DXGADAPTER *)a1);
    }
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 104));
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v43, v42, v44, v45);
    Global = DXGGLOBAL::GetGlobal(v48, v47);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 224), 0LL, CurrentProcess);
    v50 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    if ( bTracingEnabled
      && (qword_1C00B19B0 & 0x1000000) != 0
      && (qword_1C00B19B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v51, a1, 1);
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3LL);
    if ( bTracingEnabled
      && (qword_1C00B19B0 & 0x1000000) != 0
      && (qword_1C00B19B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v61) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v52, a1, v61);
    }
    if ( v50 && *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    ExReleasePushLockSharedEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    v55 = *(_QWORD *)(a1 + 2704);
    if ( !v55 )
      goto LABEL_68;
    if ( *(_QWORD *)(v55 + 624) )
    {
      if ( *(_BYTE *)(v55 + 632) )
      {
        v56 = WdLogNewEntry5_WdAssertion(v54, v53);
        *(_QWORD *)(v56 + 24) = 4146LL;
        WdLogEvent5_WdAssertion(v56);
        v55 = *(_QWORD *)(a1 + 2704);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler((ADAPTER_RENDER *)v55, 0, 0LL) < 0 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v58, v57);
        *(_QWORD *)(v59 + 24) = 4148LL;
        WdLogEvent5_WdAssertion(v59);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 2704) + 632LL) = 1;
      v55 = *(_QWORD *)(a1 + 2704);
    }
    if ( !v55 )
    {
LABEL_68:
      v60 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2696) + 384LL);
      if ( v60 )
        DXGDODPRESENT::Flush(v60);
    }
    if ( v39 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v38, (struct DXGADAPTER *)a1);
      *((_QWORD *)v38 + 23) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v38 + 176, 0LL);
      KeLeaveCriticalRegion();
    }
    v18 = a2;
    goto LABEL_12;
  }
  if ( (a3 & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 104));
    v12 = (struct _EPROCESS *)PsGetCurrentProcess(v9, v8, v10, v11);
    v15 = DXGGLOBAL::GetGlobal(v14, v13);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v15, *(_QWORD *)(a1 + 224), 0LL, v12);
    v16 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    KeEnterCriticalRegion();
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    if ( bTracingEnabled
      && (qword_1C00B19B0 & 0x1000000) != 0
      && (qword_1C00B19B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v17, a1, 1);
    }
    v18 = a2;
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, a2);
    if ( bTracingEnabled
      && (qword_1C00B19B0 & 0x1000000) != 0
      && (qword_1C00B19B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v61) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v19, a1, v61);
    }
    if ( v16 && *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    ExReleasePushLockSharedEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
LABEL_11:
    if ( !*(_QWORD *)(a1 + 2704) )
    {
      v20 = *(DXGDODPRESENT **)(*(_QWORD *)(a1 + 2696) + 384LL);
      if ( v20 )
        DXGDODPRESENT::Flush(v20);
    }
LABEL_12:
    *(_DWORD *)(a1 + 176) = v18;
    return;
  }
  KeEnterCriticalRegion();
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  if ( bTracingEnabled
    && (qword_1C00B19B0 & 0x1000000) != 0
    && (qword_1C00B19B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v22, a1, 1);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    if ( bTracingEnabled
      && (qword_1C00B19B0 & 0x1000000) != 0
      && (qword_1C00B19B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v61) = 1;
      McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v25, a1, v61);
    }
    v27 = (struct _EPROCESS *)PsGetCurrentProcess(v24, v23, v25, v26);
    v30 = DXGGLOBAL::GetGlobal(v29, v28);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v30, *(_QWORD *)(a1 + 224), 0LL, v27);
    v18 = a2;
    goto LABEL_11;
  }
  if ( bTracingEnabled
    && (qword_1C00B19B0 & 0x1000000) != 0
    && (qword_1C00B19B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v61) = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v25, a1, v61);
  }
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  KeLeaveCriticalRegion();
}
