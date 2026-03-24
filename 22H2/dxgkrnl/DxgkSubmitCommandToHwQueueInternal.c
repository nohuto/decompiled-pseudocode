/*
 * XREFs of DxgkSubmitCommandToHwQueueInternal @ 0x1C0272228
 * Callers:
 *     ?VmBusSubmitCommandToHwQueueCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DB790 (-VmBusSubmitCommandToHwQueueCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250610 (-VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueue @ 0x1C0272210 (DxgkSubmitCommandToHwQueue.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017AD0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0017BF8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C024D3EC (-VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SU.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C026F178 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 */

__int64 __fastcall DxgkSubmitCommandToHwQueueInternal(struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a1, char a2, __int64 a3)
{
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _SLIST_ENTRY **v21; // r14
  _QWORD *v22; // rax
  __int64 hHwQueue; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+30h] [rbp-158h] BYREF
  __int64 v43; // [rsp+38h] [rbp-150h]
  char v44; // [rsp+40h] [rbp-148h]
  struct DXGHWQUEUE *v45[2]; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v46[16]; // [rsp+58h] [rbp-130h] BYREF
  _BYTE v47[8]; // [rsp+68h] [rbp-120h] BYREF
  __int64 v48; // [rsp+70h] [rbp-118h]
  char v49; // [rsp+78h] [rbp-110h]
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v50; // [rsp+80h] [rbp-108h]
  __int128 v51; // [rsp+88h] [rbp-100h] BYREF
  __int128 v52; // [rsp+98h] [rbp-F0h]
  __int128 v53; // [rsp+A8h] [rbp-E0h]
  const D3DKMT_HANDLE *WrittenPrimaries; // [rsp+B8h] [rbp-D0h]
  _BYTE v55[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v4 = a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2160;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2160);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2160LL);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v45[0] = Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = PsGetCurrentProcess(v14, v13, v15, v16);
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v17);
    if ( v44 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v42);
    }
    return 3221225485LL;
  }
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  WrittenPrimaries = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)MmUserProbeAddress;
    v51 = *(_OWORD *)&v4->hHwQueue;
    v52 = *(_OWORD *)&v4->CommandBuffer;
    v53 = *(_OWORD *)&v4->pPrivateDriverData;
    WrittenPrimaries = v4->WrittenPrimaries;
    v4 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)&v51;
  }
  v50 = v4;
  v45[0] = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v46, v4->hHwQueue, (struct _KTHREAD **)Current, v45, 0);
  v21 = (struct _SLIST_ENTRY **)v45[0];
  if ( !v45[0] )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v22[3] = Current;
    hHwQueue = v4->hHwQueue;
    v22[5] = -1073741811LL;
LABEL_13:
    v22[4] = hHwQueue;
    WdLogEvent5_WdError(v22);
LABEL_21:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v46, v24);
    goto LABEL_22;
  }
  if ( v4->NumPrimaries > 0x10 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v22[3] = v21;
    hHwQueue = v4->NumPrimaries;
    v22[5] = 16LL;
    v22[6] = -1073741811LL;
    goto LABEL_13;
  }
  if ( !v4->pPrivateDriverData )
  {
    if ( !v4->PrivateDriverDataSize )
      goto LABEL_26;
LABEL_20:
    v25 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v25 + 24) = 1126LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_21;
  }
  if ( !v4->PrivateDriverDataSize )
    goto LABEL_20;
LABEL_26:
  v29 = *(_QWORD *)(*((_QWORD *)v45[0] + 2) + 16LL);
  v30 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
  if ( *(_BYTE *)(v30 + 209) )
  {
    v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v30 + 4240),
            Current,
            v4);
LABEL_28:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v46, v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v33);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v42);
    return v32;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v45,
    *(struct DXGDEVICE **)(*((_QWORD *)v45[0] + 2) + 16LL));
  v48 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
  v49 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, v29, 0, v36, 0);
  v37 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
  if ( v37 >= 0 )
  {
    v32 = DXGHWQUEUE::SubmitCommand(v21, v4, a2);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    if ( v49 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v45);
    goto LABEL_28;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
  if ( v49 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v45);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v46, v38);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v39);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v42);
  return (unsigned int)v37;
}
