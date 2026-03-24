/*
 * XREFs of DxgkUnlock @ 0x1C0152950
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250E90 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0152CF0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_UNLOCK *v3; // rsi
  unsigned __int8 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rdi
  struct _KTHREAD **v14; // r8
  struct _D3DKMT_UNLOCK v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // rcx
  int v20; // edi
  struct _KEVENT *v21; // r15
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGDEVICE *v27; // rdi
  unsigned int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  struct _KEVENT *v40; // rcx
  __int64 v41; // rcx
  unsigned __int8 v42; // di
  __int64 v43; // r8
  unsigned __int8 v44; // di
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGDEVICE *v49; // [rsp+30h] [rbp-118h] BYREF
  struct DXGDEVICE *v50; // [rsp+38h] [rbp-110h] BYREF
  int v51; // [rsp+40h] [rbp-108h] BYREF
  __int64 v52; // [rsp+48h] [rbp-100h]
  char v53; // [rsp+50h] [rbp-F8h]
  struct _D3DKMT_UNLOCK v54; // [rsp+58h] [rbp-F0h] BYREF
  struct DXGDEVICE *v55; // [rsp+68h] [rbp-E0h] BYREF
  int v56; // [rsp+70h] [rbp-D8h]
  _BYTE v57[8]; // [rsp+80h] [rbp-C8h] BYREF
  char v58; // [rsp+88h] [rbp-C0h] BYREF
  DXGADAPTER *v59; // [rsp+98h] [rbp-B0h]
  char v60; // [rsp+A0h] [rbp-A8h]
  __int64 v61; // [rsp+A8h] [rbp-A0h]
  _BYTE v62[88]; // [rsp+C8h] [rbp-80h] BYREF

  v3 = (struct _D3DKMT_UNLOCK *)a1;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2012);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2012LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v14 = v13;
    if ( !v13 )
    {
      v34 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v34 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v35);
      if ( !v53 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_51;
    }
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (struct _D3DKMT_UNLOCK *)MmUserProbeAddress;
    v15 = *v3;
  }
  else
  {
    v15 = *v3;
  }
  v54 = v15;
  v49 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v15.hDevice, v14, &v49);
  v18 = v49;
  if ( !v49 )
  {
    v38 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v38 + 24) = v15.hDevice;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v39);
    if ( !v53 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_51:
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v51);
    return 3221225485LL;
  }
  v55 = v49;
  v19 = *(_QWORD *)(*((_QWORD *)v49 + 2) + 16LL);
  if ( *(int *)(v19 + 2328) >= 0x2000 || *(_BYTE *)(v19 + 2628) )
  {
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal(v19, v16) + 311);
    v56 = v20;
  }
  else
  {
    v20 = 0;
    v56 = 0;
  }
  v21 = (struct _KEVENT *)*((_QWORD *)v18 + 2);
  if ( *((_DWORD *)v18 + 108) == 2 )
  {
    if ( KeReadStateEvent(v21 + 5) )
      goto LABEL_17;
    v40 = v21 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v21 + 4) )
      goto LABEL_17;
    v40 = v21 + 4;
  }
  KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( v20 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v18 + 144, 0LL) )
      goto LABEL_19;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL));
    v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v18 + 144));
    if ( !v44 )
    {
LABEL_64:
      ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
LABEL_63:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    goto LABEL_64;
  }
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL));
    v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v43, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 1u);
    if ( !v42 )
      goto LABEL_64;
    goto LABEL_63;
  }
LABEL_19:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v18, 2, v22, 0);
  if ( v62[72] )
    COREACCESS::AcquireShared((COREACCESS *)v62, 0LL);
  if ( v60 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
    v45[3] = 275LL;
    v45[4] = 4LL;
    v45[5] = &v58;
    v45[6] = 0LL;
    v45[7] = 0LL;
    WdLogEvent5_WdCriticalError(v45);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v59 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v59 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, 72);
      KeWaitForSingleObject((char *)v59 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v59, 0LL);
  }
  v61 = 0LL;
  v60 = 1;
  if ( *((_DWORD *)v49 + 144) == 4 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v55);
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v46);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v51);
    return 0LL;
  }
  else
  {
    v54.hDevice = 0;
    v27 = v49;
    v28 = DXGDEVICE::Unlock(v49, &v54, v4);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
    if ( v56 )
      ExReleasePushLockSharedEx((char *)v27 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v27 + 17));
    KeLeaveCriticalRegion();
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v29);
    if ( v53 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v51);
    }
    return v28;
  }
}
