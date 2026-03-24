/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0127994
 * Callers:
 *     ?VmBusWaitForSyncObjectFromCpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DB930 (-VmBusWaitForSyncObjectFromCpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0128010 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C016D2D0 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0251270 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C001A75C (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01269D4 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016A3E8 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C024E510 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        void *a3)
{
  void **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rdx
  _BYTE *v23; // r9
  size_t v24; // r8
  const void *v25; // rdx
  __int64 v26; // rdx
  PVOID v27; // rcx
  size_t v28; // r8
  const void *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+38h] [rbp-E0h]
  char v48; // [rsp+40h] [rbp-D8h]
  struct DXGDEVICE *v49[2]; // [rsp+48h] [rbp-D0h] BYREF
  struct DXGDEVICE *v50; // [rsp+58h] [rbp-C0h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-B8h] BYREF
  void *v52[2]; // [rsp+70h] [rbp-A8h]
  void *v53; // [rsp+80h] [rbp-98h]
  void **v54; // [rsp+88h] [rbp-90h]
  PVOID v55; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v56[16]; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+A8h] [rbp-70h]
  PVOID P; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v59[32]; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v60; // [rsp+D8h] [rbp-40h]

  v5 = (void **)a1;
  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2043);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2043LL);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v49[1] = Current;
  if ( !Current )
  {
    v38 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v38 + 24) = PsGetCurrentProcess(v40, v39, v41, v42);
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    goto LABEL_73;
  }
  v55 = 0LL;
  v57 = 0;
  P = 0LL;
  v60 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v52 = 0LL;
  v53 = 0LL;
  if ( !a2 )
  {
    v54 = v5;
    if ( *((_DWORD *)v5 + 1) && *((_DWORD *)v5 + 8) < 2u )
    {
LABEL_7:
      v50 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        (DXGDEVICEBYHANDLE *)v49,
        *(unsigned int *)v5,
        (struct _KTHREAD **)Current,
        &v50);
      if ( v50 )
      {
        v15 = *(_QWORD *)(*((_QWORD *)v50 + 2) + 16LL);
        if ( *(_BYTE *)(v15 + 209) )
          v16 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 4240),
                  Current,
                  *((_DWORD *)v50 + 110),
                  (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                  0);
        else
          v16 = WaitForSynchronizationObjectFromCpu(
                  (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                  Current,
                  v50,
                  a3);
        v18 = v16;
        if ( v49[0] )
        {
          v17 = _InterlockedDecrement64((volatile signed __int64 *)v49[0] + 8);
          if ( !v17 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49[0] + 2), v49[0]);
        }
        if ( P != v59 && P )
          ExFreePoolWithTag(P, 0);
        v60 = 0;
        P = 0LL;
        if ( v55 != v56 && v55 )
          ExFreePoolWithTag(v55, 0);
        v55 = 0LL;
        v57 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v17);
        if ( v48 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v46);
        }
        return v18;
      }
      v43 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v43 + 24) = *(unsigned int *)v5;
      *(_QWORD *)(v43 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v43);
      if ( v49[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v49[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49[0] + 2), v49[0]);
      if ( P != v59 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v60 = 0;
      if ( v55 != v56 && v55 )
        ExFreePoolWithTag(v55, 0);
      v55 = 0LL;
      v57 = 0;
    }
LABEL_73:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v10);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v46);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v5;
  *(_OWORD *)v52 = *((_OWORD *)v5 + 1);
  v53 = v5[4];
  if ( HIDWORD(Src[0]) )
  {
    if ( ((unsigned int)v53 & 0xFFFFFFFE) != 0 )
    {
      P = 0LL;
      v60 = 0;
      v55 = 0LL;
      v57 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v10);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v46);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v55, HIDWORD(Src[0]));
      v23 = v55;
      if ( v55 )
      {
        v24 = 4LL * v57;
        v25 = Src[1];
        if ( (char *)Src[1] + v24 < Src[1] || (char *)Src[1] + v24 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v23, v25, v24);
        Src[1] = v55;
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, HIDWORD(Src[0]));
        v27 = P;
        if ( P )
        {
          v28 = 8LL * v60;
          v29 = v52[0];
          if ( (char *)v52[0] + v28 < v52[0] || (char *)v52[0] + v28 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v27, v29, v28);
          v52[0] = P;
          v5 = Src;
          v54 = Src;
          goto LABEL_7;
        }
        P = 0LL;
        v60 = 0;
        if ( v55 != v56 && v55 )
          ExFreePoolWithTag(v55, 0);
        v55 = 0LL;
        v57 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v26);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v46);
        return 3221225495LL;
      }
      else
      {
        if ( P != v59 && P )
        {
          ExFreePoolWithTag(P, 0);
          v23 = v55;
        }
        P = 0LL;
        v60 = 0;
        if ( v23 != v56 && v23 )
          ExFreePoolWithTag(v23, 0);
        v55 = 0LL;
        v57 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v22);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v46);
        return 3221225495LL;
      }
    }
  }
  else
  {
    P = 0LL;
    v60 = 0;
    v55 = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v10);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v46);
    return 3221225485LL;
  }
}
