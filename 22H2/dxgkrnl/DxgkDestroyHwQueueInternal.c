/*
 * XREFs of DxgkDestroyHwQueueInternal @ 0x1C0271F78
 * Callers:
 *     ?VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240A10 (-VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyHwQueue @ 0x1C0271F60 (DxgkDestroyHwQueue.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C002621C (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r10d
  __int64 v23; // rax
  struct _KTHREAD *v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  DXGHWQUEUE *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // [rsp+28h] [rbp-40h] BYREF
  __int64 v36; // [rsp+30h] [rbp-38h]
  char v37; // [rsp+38h] [rbp-30h]
  _BYTE v38[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v39; // [rsp+80h] [rbp+18h] BYREF

  v4 = (unsigned int *)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2154;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2154);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2154LL);
  v39 = 0;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v39 = *v4;
    v4 = &v39;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v12 = Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14, v16, v17);
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v18);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v35);
    }
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v38, Current);
  v22 = *v4;
  v23 = (*v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v23 >= *((_DWORD *)v12 + 64)
    || (v21 = (unsigned int)v23,
        v24 = v12[30],
        v19 = *((unsigned int *)v24 + 4 * v23 + 2),
        v20 = (v22 >> 25) & 0x60,
        ((v22 >> 25) & 0x60) != (*((_BYTE *)v24 + 16 * v23 + 8) & 0x60))
    || (v20 = 0x2000LL, (v19 & 0x2000) != 0)
    || (v19 & 0x1F) == 0 )
  {
LABEL_17:
    v26 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v26 + 24) = *v4;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
    goto LABEL_18;
  }
  v21 = 2LL * (unsigned int)v23;
  v19 &= 0x1Fu;
  if ( (_BYTE)v19 != 15 )
  {
    v25 = WdLogNewEntry5_WdError(0x2000LL, v19);
    *(_QWORD *)(v25 + 24) = 316LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_17;
  }
  v30 = (DXGHWQUEUE *)*((_QWORD *)v24 + 2 * (unsigned int)v23);
  if ( !v30 )
    goto LABEL_17;
  *((_DWORD *)v24 + 4 * (((unsigned __int64)v22 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
  DXGHWQUEUE::ReleaseReference(v30, v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v32);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v35);
  return 0LL;
}
