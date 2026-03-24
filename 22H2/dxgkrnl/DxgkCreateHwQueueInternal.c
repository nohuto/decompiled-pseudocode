/*
 * XREFs of DxgkCreateHwQueueInternal @ 0x1C0271958
 * Callers:
 *     ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023ED10 (-VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateHwQueue @ 0x1C0271940 (DxgkCreateHwQueue.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ @ 0x1C026CCB0 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C026CDD4 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C026CEDC (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueueInternal(__int64 a1, char a2, __int64 a3)
{
  struct _D3DKMT_CREATEHWQUEUE *v4; // r12
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // r15
  struct _D3DKMT_CREATEHWQUEUE *v10; // rax
  struct _D3DKMT_CREATEHWQUEUE *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 PrivateDriverDataSize; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  void *v25; // rcx
  size_t v26; // r8
  char *pPrivateDriverData; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  DXGCONTEXT *v42; // r13
  __int64 v43; // rax
  __int64 hHwContext; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct DXGDEVICE *v48; // rbx
  __int64 v49; // r9
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct DXGHWQUEUE *v54; // rdx
  __int64 v55; // rax
  char *v56; // rcx
  int v58; // [rsp+38h] [rbp-180h] BYREF
  __int64 v59; // [rsp+40h] [rbp-178h]
  char v60; // [rsp+48h] [rbp-170h]
  struct DXGCONTEXT *v61; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v62[2]; // [rsp+58h] [rbp-160h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v63; // [rsp+68h] [rbp-150h]
  void *v64; // [rsp+70h] [rbp-148h]
  struct DXGHWQUEUE *v65; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v66[16]; // [rsp+80h] [rbp-138h] BYREF
  struct _D3DKMT_CREATEHWQUEUE v67; // [rsp+90h] [rbp-128h] BYREF
  void *v68; // [rsp+C0h] [rbp-F8h]
  void *v69[3]; // [rsp+C8h] [rbp-F0h] BYREF
  int v70; // [rsp+E0h] [rbp-D8h]
  _BYTE v71[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v4 = (struct _D3DKMT_CREATEHWQUEUE *)a1;
  v58 = -1;
  v59 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v60 = 1;
    v58 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2153);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 2153LL);
  memset(&v67, 0, sizeof(v67));
  v63 = 0LL;
  v69[0] = 0LL;
  v70 = 0;
  v9 = 0LL;
  v64 = 0LL;
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v10 = v4;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v10 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
    v67 = *v10;
    v11 = &v67;
    v63 = &v67;
  }
  else
  {
    v11 = v4;
    v63 = v4;
  }
  if ( v11->pPrivateDriverData )
  {
    if ( v11->PrivateDriverDataSize )
      goto LABEL_18;
LABEL_14:
    v12 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v12 + 24) = 632LL;
    WdLogEvent5_WdWarning(v12);
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>((__int64)v69);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v13);
    if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v58);
    return 3221225485LL;
  }
  if ( v11->PrivateDriverDataSize )
    goto LABEL_14;
LABEL_18:
  PrivateDriverDataSize = v11->PrivateDriverDataSize;
  if ( (_DWORD)PrivateDriverDataSize )
  {
    if ( a2 )
    {
      if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements(v69, PrivateDriverDataSize) )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
        v21[3] = v11->hHwContext;
        v21[4] = v11->PrivateDriverDataSize;
        v21[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v21);
        PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>((__int64)v69);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v22);
        if ( v60 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v58);
        }
        return 3221225495LL;
      }
      v25 = v69[0];
      v68 = v69[0];
      v26 = v11->PrivateDriverDataSize;
      pPrivateDriverData = (char *)v11->pPrivateDriverData;
      if ( &pPrivateDriverData[v26] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v26] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v25, pPrivateDriverData, v26);
      v9 = v69[0];
      v64 = v69[0];
    }
    else
    {
      v9 = v11->pPrivateDriverData;
      v64 = v9;
    }
  }
  Current = DXGPROCESS::GetCurrent(v6, PrivateDriverDataSize, v7, v8);
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v31 + 24) = PsGetCurrentProcess(v33, v32, v34, v35);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    v36 = v31;
LABEL_32:
    WdLogEvent5_WdError(v36);
    goto LABEL_43;
  }
  if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
    v11->Flags.Value &= ~8u;
  if ( (v11->Flags.Value & 8) != 0 && !g_OSTestSigningEnabled )
  {
    v39 = WdLogNewEntry5_WdError(v38, v37);
    *(_QWORD *)(v39 + 24) = 688LL;
    v36 = v39;
    goto LABEL_32;
  }
  v61 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66, v11->hHwContext, Current, &v61, 0);
  v42 = v61;
  if ( !v61 )
  {
    v43 = WdLogNewEntry5_WdError(v41, v40);
    hHwContext = v11->hHwContext;
    *(_QWORD *)(v43 + 32) = -1073741811LL;
LABEL_42:
    *(_QWORD *)(v43 + 24) = hHwContext;
    WdLogEvent5_WdError(v43);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
LABEL_43:
    PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>((__int64)v69);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v45);
    if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v58);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v61 + 105) & 0x10) == 0 )
  {
    v43 = WdLogNewEntry5_WdError(v41, v40);
    hHwContext = v11->hHwContext;
    goto LABEL_42;
  }
  v48 = (struct DXGDEVICE *)*((_QWORD *)v61 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62, v48);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, (__int64)v48, 0, v49, 0);
  v50 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v71, 0LL);
  if ( v50 >= 0 )
  {
    v65 = 0LL;
    v50 = DXGCONTEXT::CreateHwQueue(v42, v11, v9, &v65);
    if ( v50 >= 0 )
    {
      v54 = v65;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v65 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
      {
        v11->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v65 + 6) + 40LL);
        v11->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v54 + 6) + 56LL);
        v11->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v54 + 6) + 48LL);
      }
      v11->hHwQueue = *((_DWORD *)v54 + 6);
      if ( a2 )
      {
        if ( (unsigned __int64)v4 >= MmUserProbeAddress )
          v4 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
        *(_OWORD *)&v4->hHwContext = *(_OWORD *)&v11->hHwContext;
        *(_OWORD *)&v4->pPrivateDriverData = *(_OWORD *)&v11->pPrivateDriverData;
        *(_OWORD *)&v4->HwQueueProgressFenceCPUVirtualAddress = *(_OWORD *)&v11->HwQueueProgressFenceCPUVirtualAddress;
        v55 = v11->PrivateDriverDataSize;
        if ( (_DWORD)v55 )
        {
          v56 = (char *)v11->pPrivateDriverData;
          if ( (unsigned __int64)&v56[v55] > MmUserProbeAddress || &v56[v55] <= v56 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v56, v9, (unsigned int)v55);
        }
      }
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v71);
  if ( v62[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v66);
  PagedPoolZeroedArray<DXGCONTEXT *,2>::~PagedPoolZeroedArray<DXGCONTEXT *,2>((__int64)v69);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v51);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v58);
  return (unsigned int)v50;
}
