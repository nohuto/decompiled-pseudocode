/*
 * XREFs of DxgkReclaimAllocations2 @ 0x1C0117190
 * Callers:
 *     ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0246510 (-VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E090 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0026010 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C010A290 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(struct _D3DKMT_RECLAIMALLOCATIONS2 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // r14
  struct _KTHREAD **v13; // rsi
  char CurrentThreadPreviousMode; // al
  bool v15; // r14
  struct _D3DKMT_RECLAIMALLOCATIONS2 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // rsi
  __int64 v21; // r9
  __int64 v22; // r9
  int v23; // esi
  _QWORD *p_PagingFenceValue; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+30h] [rbp-128h] BYREF
  __int64 v43; // [rsp+38h] [rbp-120h]
  char v44; // [rsp+40h] [rbp-118h]
  struct DXGPAGINGQUEUE *v45; // [rsp+48h] [rbp-110h] BYREF
  DXGPAGINGQUEUE *v46; // [rsp+50h] [rbp-108h] BYREF
  __int64 v47; // [rsp+58h] [rbp-100h] BYREF
  int v48; // [rsp+60h] [rbp-F8h]
  struct _D3DKMT_RECLAIMALLOCATIONS2 v49; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGDEVICE *v50; // [rsp+90h] [rbp-C8h]
  _BYTE v51[8]; // [rsp+A0h] [rbp-B8h] BYREF
  _BYTE v52[64]; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v53[16]; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-60h]
  __int64 v55; // [rsp+128h] [rbp-30h]
  char v56; // [rsp+130h] [rbp-28h]

  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2071LL);
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
      v30 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v30 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v30);
LABEL_33:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v31);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v42);
      return 3221225485LL;
    }
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v15 = CurrentThreadPreviousMode == 1;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v16 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v16 = (struct _D3DKMT_RECLAIMALLOCATIONS2 *)MmUserProbeAddress;
    v49 = *v16;
  }
  else
  {
    v49 = *a1;
  }
  v45 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v46, v49.hPagingQueue, v13, &v45, 1);
  if ( !v45 )
  {
    v32 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v32 + 24) = v49.hPagingQueue;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
    if ( v46 )
      DXGPAGINGQUEUE::ReleaseReference(v46, v31);
    goto LABEL_33;
  }
  v20 = (struct DXGDEVICE *)*((_QWORD *)v45 + 2);
  v50 = v20;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47,
    v20);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v20, 0, v21, 0);
  if ( v56 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v53, 0LL);
    if ( *(_DWORD *)(v54 + 200) != 1 )
      goto LABEL_40;
  }
  COREACCESS::AcquireShared((COREACCESS *)v52, 0LL);
  if ( *(_DWORD *)(v55 + 576) == 1 )
  {
    LOBYTE(v22) = v15;
    v23 = DXGDEVICE::ReclaimAllocations(v20, (__int64)v45, &v49, v22);
    if ( v23 >= 0 )
    {
      if ( v15 )
      {
        p_PagingFenceValue = &a1->PagingFenceValue;
        if ( (unsigned __int64)&a1->PagingFenceValue >= MmUserProbeAddress )
          p_PagingFenceValue = (_QWORD *)MmUserProbeAddress;
        *p_PagingFenceValue = v49.PagingFenceValue;
      }
      else
      {
        a1->PagingFenceValue = v49.PagingFenceValue;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    if ( v48 )
      ExReleasePushLockSharedEx(v47 + 144, 0LL);
    else
      ExReleaseResourceLite(*(PERESOURCE *)(v47 + 136));
    KeLeaveCriticalRegion();
    if ( v46 )
      DXGPAGINGQUEUE::ReleaseReference(v46, v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v25);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v42);
    }
    return (unsigned int)v23;
  }
  COREACCESS::Release((COREACCESS *)v52);
  if ( v56 )
LABEL_40:
    COREACCESS::Release((COREACCESS *)v53);
  v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
  *(_QWORD *)(v38 + 24) = v20;
  *(_QWORD *)(v38 + 32) = -1073741130LL;
  WdLogEvent5_WdWarning(v38);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47);
  if ( v46 )
    DXGPAGINGQUEUE::ReleaseReference(v46, v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v39);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v42);
  return 3221226166LL;
}
