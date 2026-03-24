/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C0274E08
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DBBE0 (-VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0251530 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C0274DF0 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016A3E8 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0270D70 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 a1, bool a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  PVOID v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r8
  size_t v30; // r8
  char *v31; // rdx
  __int64 v32; // rdx
  unsigned int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // [rsp+40h] [rbp-88h] BYREF
  __int64 v37; // [rsp+48h] [rbp-80h]
  char v38; // [rsp+50h] [rbp-78h]
  unsigned int *v39; // [rsp+58h] [rbp-70h]
  struct _KTHREAD **v40; // [rsp+60h] [rbp-68h]
  __int128 v41; // [rsp+68h] [rbp-60h] BYREF
  __int64 v42; // [rsp+78h] [rbp-50h]
  PVOID P; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v44[16]; // [rsp+88h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+98h] [rbp-30h]

  v4 = (unsigned int *)a1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2162);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2162LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v40 = Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = PsGetCurrentProcess(v14, v13, v15, v16);
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v17);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v36);
    }
    return 3221225485LL;
  }
  P = 0LL;
  v45 = 0;
  v41 = 0LL;
  v42 = 0LL;
  if ( a2 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v41 = *(_OWORD *)v4;
    v42 = *((_QWORD *)v4 + 2);
    v4 = (unsigned int *)&v41;
  }
  v39 = v4;
  v21 = v4[1];
  if ( !(_DWORD)v21 )
  {
    v22 = WdLogNewEntry5_WdError(v10, v21);
    *(_QWORD *)(v22 + 24) = *v4;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v23);
    if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v36);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v27 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, v21);
    if ( !v27 )
    {
      if ( P != v44 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v45 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v26);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v36);
      return 3221225495LL;
    }
    v30 = 4LL * v45;
    v31 = (char *)*((_QWORD *)v4 + 1);
    if ( &v31[v30] < v31 || (unsigned __int64)&v31[v30] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, v31, v30);
    *((_QWORD *)v4 + 1) = v27;
  }
  v33 = SubmitWaitForSyncObjectsFromGpu(
          v4[1],
          *((const unsigned int **)v4 + 1),
          *((const unsigned __int64 **)v4 + 2),
          *v4,
          Current,
          a2,
          0);
  if ( P != v44 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v45 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v32);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v36);
  return v33;
}
