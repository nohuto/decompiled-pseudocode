/*
 * XREFs of DxgkLock @ 0x1C010CE30
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02432C0 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00033FC (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010C850 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0152CF0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
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
  struct _D3DKMT_LOCK *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // rcx
  int v20; // edi
  struct _KEVENT *v21; // r15
  volatile signed __int64 *v22; // rdi
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // esi
  _QWORD *p_pData; // rcx
  _DWORD *p_hAllocation; // rcx
  struct DXGADAPTER *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // rcx
  unsigned __int8 v37; // di
  __int64 v38; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  struct _KEVENT *v46; // rcx
  unsigned __int8 v47; // di
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  struct DXGDEVICE *v52; // [rsp+30h] [rbp-178h] BYREF
  struct DXGDEVICE *v53; // [rsp+38h] [rbp-170h] BYREF
  int v54; // [rsp+40h] [rbp-168h] BYREF
  __int64 v55; // [rsp+48h] [rbp-160h]
  char v56; // [rsp+50h] [rbp-158h]
  struct _D3DKMT_LOCK *v57; // [rsp+58h] [rbp-150h]
  struct _D3DKMT_LOCK v58; // [rsp+60h] [rbp-148h] BYREF
  struct DXGDEVICE *v59; // [rsp+90h] [rbp-118h] BYREF
  int v60; // [rsp+98h] [rbp-110h]
  __int64 v61; // [rsp+B0h] [rbp-F8h] BYREF
  struct DXGADAPTER *v62; // [rsp+B8h] [rbp-F0h]
  char v63; // [rsp+C0h] [rbp-E8h]
  _BYTE v64[8]; // [rsp+D0h] [rbp-D8h] BYREF
  _BYTE v65[16]; // [rsp+D8h] [rbp-D0h] BYREF
  DXGADAPTER *v66; // [rsp+E8h] [rbp-C0h]
  char v67; // [rsp+F0h] [rbp-B8h]
  __int64 v68; // [rsp+F8h] [rbp-B0h]
  _BYTE v69[16]; // [rsp+118h] [rbp-90h] BYREF
  __int64 v70; // [rsp+128h] [rbp-80h]
  __int64 v71; // [rsp+158h] [rbp-50h]
  char v72; // [rsp+160h] [rbp-48h]

  v57 = a1;
  v54 = -1;
  v55 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2011);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 2011LL);
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
      v40 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v40 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v40);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v41);
      if ( !v56 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_63;
    }
  }
  memset(&v58, 0, sizeof(v58));
  if ( v4 )
  {
    v15 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v15 = (struct _D3DKMT_LOCK *)MmUserProbeAddress;
    v58 = *v15;
  }
  else
  {
    v58 = *a1;
  }
  v52 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53, v58.hDevice, v14, &v52);
  v18 = v52;
  if ( !v52 )
  {
    v44 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v44 + 24) = v58.hDevice;
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v45);
    if ( !v56 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_63:
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v54);
    return 3221225485LL;
  }
  v59 = v52;
  v19 = *(_QWORD *)(*((_QWORD *)v52 + 2) + 16LL);
  if ( *(int *)(v19 + 2328) >= 0x2000 || *(_BYTE *)(v19 + 2628) )
  {
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal(v19, v16) + 311);
    v60 = v20;
  }
  else
  {
    v20 = 0;
    v60 = 0;
  }
  v21 = (struct _KEVENT *)*((_QWORD *)v18 + 2);
  if ( *((_DWORD *)v18 + 108) == 2 )
  {
    if ( KeReadStateEvent(v21 + 5) )
      goto LABEL_17;
    v46 = v21 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v21 + 4) )
      goto LABEL_17;
    v46 = v21 + 4;
  }
  KeWaitForSingleObject(v46, Executive, 0, 0, 0LL);
LABEL_17:
  KeEnterCriticalRegion();
  if ( !v20 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 0) )
      goto LABEL_19;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL));
    v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, &EventBlockThread, v38, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 1u);
    if ( !v37 )
      goto LABEL_49;
    goto LABEL_72;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v18 + 144, 0LL) )
    goto LABEL_19;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL));
  v47 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
  DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v18 + 144));
  if ( v47 )
LABEL_72:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
LABEL_49:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_19:
  v22 = *(volatile signed __int64 **)(*((_QWORD *)v18 + 2) + 16LL);
  v62 = (struct DXGADAPTER *)v22;
  _InterlockedIncrement64(v22 + 3);
  v61 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v22 + 17, 0LL);
  v63 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v52, 0, v23, 0);
  if ( v72 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v69, 0LL);
    v25 = *(unsigned int *)(v70 + 200);
    if ( (_DWORD)v25 != 1 )
      goto LABEL_80;
  }
  if ( v67 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24);
    v48[3] = 275LL;
    v48[4] = 4LL;
    v48[5] = v65;
    v48[6] = 0LL;
    v48[7] = 0LL;
    WdLogEvent5_WdCriticalError(v48);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v66 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v66 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventBlockThread, v27, 72);
      KeWaitForSingleObject((char *)v66 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v66, 0LL);
  }
  v68 = 0LL;
  v67 = 1;
  if ( *(_DWORD *)(v71 + 576) == 1 )
  {
    v58.hDevice = 0;
    v28 = DXGDEVICE::Lock(v52, &v58, (struct COREDEVICEACCESS *)v64);
    if ( v28 >= 0 )
    {
      p_pData = &a1->pData;
      if ( v4 )
      {
        if ( (unsigned __int64)p_pData >= MmUserProbeAddress )
          p_pData = (_QWORD *)MmUserProbeAddress;
        *p_pData = v58.pData;
        p_hAllocation = &a1->hAllocation;
        if ( (unsigned __int64)&a1->hAllocation >= MmUserProbeAddress )
          p_hAllocation = (_DWORD *)MmUserProbeAddress;
        *p_hAllocation = v58.hAllocation;
      }
      else
      {
        *p_pData = v58.pData;
        a1->hAllocation = v58.hAllocation;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
    v31 = v62;
    ExReleasePushLockSharedEx((char *)v62 + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v62 + 2), v62);
    if ( v60 )
      ExReleasePushLockSharedEx((char *)v52 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v52 + 17));
    KeLeaveCriticalRegion();
    if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v32);
    if ( v56 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v54);
    }
    return (unsigned int)v28;
  }
  COREACCESS::Release((COREACCESS *)v65);
  if ( v72 )
LABEL_80:
    COREACCESS::Release((COREACCESS *)v69);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v61);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v59);
  if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v49);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v54);
  return 3221226166LL;
}
