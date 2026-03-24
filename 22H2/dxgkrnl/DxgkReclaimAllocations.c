/*
 * XREFs of DxgkReclaimAllocations @ 0x1C010D3C0
 * Callers:
 *     <none>
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
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C010A290 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C020D704 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rsi
  struct _KTHREAD **v13; // r14
  unsigned __int8 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // rsi
  __int64 v19; // rcx
  int v20; // edi
  struct _KEVENT *v21; // r14
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
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct DXGDEVICE *v53; // [rsp+30h] [rbp-158h] BYREF
  struct DXGDEVICE *v54; // [rsp+38h] [rbp-150h] BYREF
  int v55; // [rsp+40h] [rbp-148h] BYREF
  __int64 v56; // [rsp+48h] [rbp-140h]
  char v57; // [rsp+50h] [rbp-138h]
  struct DXGDEVICE *v58; // [rsp+58h] [rbp-130h] BYREF
  int v59; // [rsp+60h] [rbp-128h]
  unsigned int v60[4]; // [rsp+68h] [rbp-120h]
  __int128 v61; // [rsp+78h] [rbp-110h]
  __int64 v62; // [rsp+88h] [rbp-100h]
  _D3DKMT_RECLAIMALLOCATIONS2 v63; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v64[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v65[16]; // [rsp+C8h] [rbp-C0h] BYREF
  DXGADAPTER *v66; // [rsp+D8h] [rbp-B0h]
  char v67; // [rsp+E0h] [rbp-A8h]
  __int64 v68; // [rsp+E8h] [rbp-A0h]
  _BYTE v69[16]; // [rsp+108h] [rbp-80h] BYREF
  __int64 v70; // [rsp+118h] [rbp-70h]
  __int64 v71; // [rsp+148h] [rbp-40h]
  char v72; // [rsp+150h] [rbp-38h]

  v3 = a1;
  v55 = -1;
  v56 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2071LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v11, v10)) == 0LL
    || (v13 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v13 = v12;
    if ( !v12 )
    {
      v34 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v34 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v35);
      if ( !v57 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_46;
    }
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v14 = 1;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)v60 = *(_OWORD *)v3;
    v61 = *(_OWORD *)(v3 + 16);
    v62 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    v14 = 0;
    *(_OWORD *)v60 = *(_OWORD *)v3;
    v61 = *(_OWORD *)(v3 + 16);
    v62 = *(_QWORD *)(v3 + 32);
  }
  v63.hPagingQueue = 0;
  v63.NumAllocations = v62;
  v63.pResources = *(D3DKMT_HANDLE **)&v60[2];
  *(_OWORD *)&v63.HandleList = v61;
  v63.PagingFenceValue = 0LL;
  v53 = 0LL;
  v15 = v60[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v60[0], v13, &v53);
  v18 = v53;
  if ( !v53 )
  {
    v38 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v38 + 24) = v15;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v39);
    if ( !v57 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_46:
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v55);
    return 3221225485LL;
  }
  v58 = v53;
  v19 = *(_QWORD *)(*((_QWORD *)v53 + 2) + 16LL);
  if ( *(int *)(v19 + 2328) >= 0x2000 || *(_BYTE *)(v19 + 2628) )
  {
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal(v19, v16) + 311);
    v59 = v20;
  }
  else
  {
    v20 = 0;
    v59 = 0;
  }
  v21 = (struct _KEVENT *)*((_QWORD *)v18 + 2);
  if ( *((_DWORD *)v18 + 108) == 2 )
  {
    if ( KeReadStateEvent(v21 + 5) )
      goto LABEL_16;
    v40 = v21 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v21 + 4) )
      goto LABEL_16;
    v40 = v21 + 4;
  }
  KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
LABEL_16:
  KeEnterCriticalRegion();
  if ( !v20 )
  {
    if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 0) )
      goto LABEL_18;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL));
    v42 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v43, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v18 + 17), 1u);
    if ( !v42 )
      goto LABEL_61;
    goto LABEL_60;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v18 + 144, 0LL) )
    goto LABEL_18;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL));
  v44 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
  DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v18 + 144));
  if ( v44 )
LABEL_60:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
LABEL_61:
  ExReleasePushLockSharedEx(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 104LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_18:
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v18, 0, v22, 0);
  if ( v72 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v69, 0LL);
    v24 = *(unsigned int *)(v70 + 200);
    if ( (_DWORD)v24 != 1 )
      goto LABEL_69;
  }
  if ( v67 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
    v45[3] = 275LL;
    v45[4] = 4LL;
    v45[5] = v65;
    v45[6] = 0LL;
    v45[7] = 0LL;
    WdLogEvent5_WdCriticalError(v45);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v66 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v66 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, 72);
      KeWaitForSingleObject((char *)v66 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v66, 0LL);
  }
  v68 = 0LL;
  v67 = 1;
  if ( *(_DWORD *)(v71 + 576) == 1 )
  {
    v27 = v53;
    v28 = DXGDEVICE::ReclaimAllocations(v53, 0LL, &v63, v14);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
    if ( v59 )
      ExReleasePushLockSharedEx((char *)v27 + 144, 0LL);
    else
      ExReleaseResourceLite(*((PERESOURCE *)v27 + 17));
    KeLeaveCriticalRegion();
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v29);
    if ( v57 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v55);
    }
    return v28;
  }
  COREACCESS::Release((COREACCESS *)v65);
  if ( v72 )
LABEL_69:
    COREACCESS::Release((COREACCESS *)v69);
  v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
  *(_QWORD *)(v49 + 24) = v53;
  *(_QWORD *)(v49 + 32) = -1073741130LL;
  WdLogEvent5_WdWarning(v49);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v64);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v58);
  if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v50);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v55);
  return 3221226166LL;
}
