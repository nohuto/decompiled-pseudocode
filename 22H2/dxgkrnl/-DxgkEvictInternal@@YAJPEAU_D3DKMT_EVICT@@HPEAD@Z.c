/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0154B3C
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C0154050 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     DxgkEvict @ 0x1C0154B20 (DxgkEvict.c)
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02414E0 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0005790 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C0155128 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C0156088 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C01560D8 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0248C18 (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, char *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  DXGPROCESS *Current; // r13
  struct _D3DKMT_EVICT *v13; // rax
  struct _D3DKMT_EVICT *v14; // r15
  _BYTE *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGDEVICE *v19; // r13
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r9
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // rbx
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned int *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rdi
  unsigned int v37; // r8d
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  struct _EX_RUNDOWN_REF *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rbx
  unsigned int v55; // edi
  unsigned int HostProcess; // eax
  char v57; // [rsp+40h] [rbp-238h]
  struct DXGDEVICE *v58; // [rsp+48h] [rbp-230h] BYREF
  int v59; // [rsp+50h] [rbp-228h] BYREF
  __int64 v60; // [rsp+58h] [rbp-220h]
  char v61; // [rsp+60h] [rbp-218h]
  struct _D3DKMT_EVICT *v62; // [rsp+68h] [rbp-210h]
  struct _EX_RUNDOWN_REF *v63; // [rsp+70h] [rbp-208h] BYREF
  unsigned int *v64; // [rsp+78h] [rbp-200h]
  int v65; // [rsp+80h] [rbp-1F8h]
  DXGDEVICE *v66; // [rsp+88h] [rbp-1F0h] BYREF
  unsigned __int64 v67; // [rsp+90h] [rbp-1E8h] BYREF
  unsigned int v68; // [rsp+98h] [rbp-1E0h]
  int v69; // [rsp+9Ch] [rbp-1DCh]
  unsigned int v70[2]; // [rsp+A0h] [rbp-1D8h]
  struct _D3DKMT_EVICT *v71; // [rsp+A8h] [rbp-1D0h]
  struct D3DDDI_EVICT_FLAGS *v72; // [rsp+B0h] [rbp-1C8h]
  __int64 v73; // [rsp+B8h] [rbp-1C0h]
  _BYTE v74[16]; // [rsp+C0h] [rbp-1B8h] BYREF
  unsigned int *v75; // [rsp+D0h] [rbp-1A8h]
  DXGPROCESS *v76; // [rsp+D8h] [rbp-1A0h]
  unsigned __int64 v77; // [rsp+E0h] [rbp-198h]
  _BYTE v78[24]; // [rsp+E8h] [rbp-190h] BYREF
  __int128 v79; // [rsp+100h] [rbp-178h] BYREF
  __int128 v80; // [rsp+110h] [rbp-168h]
  _BYTE *v81; // [rsp+120h] [rbp-158h] BYREF
  _BYTE v82[128]; // [rsp+128h] [rbp-150h] BYREF
  int v83; // [rsp+1A8h] [rbp-D0h]
  _BYTE v84[160]; // [rsp+1B0h] [rbp-C8h] BYREF

  v65 = a2;
  v62 = a1;
  v59 = -1;
  v60 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2116);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 2116LL);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v76 = Current;
  if ( !Current )
    goto LABEL_44;
  v79 = 0LL;
  v80 = 0LL;
  if ( a2 )
  {
    v11 = MmUserProbeAddress;
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    v79 = *(_OWORD *)&v13->hDevice;
    v80 = *(_OWORD *)&v13->Flags.0;
    v14 = (struct _D3DKMT_EVICT *)&v79;
    v71 = (struct _D3DKMT_EVICT *)&v79;
  }
  else
  {
    v14 = a1;
    v71 = a1;
  }
  v72 = (struct D3DDDI_EVICT_FLAGS *)v14;
  if ( !v14->NumAllocations )
  {
LABEL_44:
    v43 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
LABEL_46:
    WdLogEvent5_WdError(v43);
LABEL_64:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v44);
    if ( v61 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v59);
    }
    return 3221225485LL;
  }
  if ( !v14->AllocationList )
  {
    v43 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v43 + 24) = 778LL;
    goto LABEL_46;
  }
  if ( v14->Flags.Value >= 4 )
  {
    v43 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v43 + 24) = 785LL;
    goto LABEL_46;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v81);
  v81 = v82;
  v83 = 16;
  v15 = v82;
  v66 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v58, v14->hDevice, (struct _KTHREAD **)Current, &v66);
  v19 = v66;
  if ( !v66 )
  {
    v45 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v45 + 24) = v14->hDevice;
    WdLogEvent5_WdWarning(v45);
LABEL_60:
    if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v81);
    goto LABEL_64;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v74,
    v66);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, (__int64)v19, 0, v20, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v84, a3);
  if ( v22 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v84);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v74);
    if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v81);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v46);
    if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v59);
    return (unsigned int)v22;
  }
  NumAllocations = v14->NumAllocations;
  v73 = NumAllocations;
  AllocationList = (unsigned int *)v14->AllocationList;
  v64 = AllocationList;
  v26 = (unsigned __int64)&AllocationList[NumAllocations];
  v77 = v26;
  if ( v26 < (unsigned __int64)AllocationList )
  {
    v49 = WdLogNewEntry5_WdWarning(v21, NumAllocations, v26);
    *(_QWORD *)(v49 + 24) = v14->NumAllocations;
    WdLogEvent5_WdWarning(v49);
LABEL_59:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v84);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v74);
    goto LABEL_60;
  }
  v27 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
  v57 = *(_BYTE *)(v27 + 209);
  v28 = 0LL;
  v67 = 0LL;
  while ( AllocationList != (unsigned int *)v26 )
  {
    v29 = 16LL;
    if ( (unsigned int)NumAllocations < 0x10 )
      v29 = (unsigned int)NumAllocations;
    v69 = v29;
    v75 = &AllocationList[v29];
    *(_QWORD *)v70 = DXGPROCESS::GetCurrent(v27, NumAllocations, v26, v23);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v78, *(struct _KTHREAD ***)v70);
    while ( AllocationList != v75 )
    {
      if ( v65 )
      {
        v30 = AllocationList;
        if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
          v30 = (unsigned int *)MmUserProbeAddress;
        v31 = *v30;
        LODWORD(v64) = v31;
        v68 = v31;
        v14 = v71;
        v19 = v66;
      }
      else
      {
        v31 = *AllocationList;
        LODWORD(v64) = v31;
        v68 = v31;
      }
      DXGPROCESS::GetAllocationUnsafe(*(__int64 *)v70, (DXGALLOCATIONREFERENCE *)&v63, v31);
      if ( !v63 )
      {
        v50 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v33, v32, v34);
        v50[3].Count = (unsigned int)v64;
        goto LABEL_58;
      }
      if ( (DXGDEVICE *)v63[1].Count != v19 )
      {
        v50 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v33, v32, v34);
        v50[3].Count = (ULONG_PTR)v19;
        v50[4].Count = v63[1].Count;
LABEL_58:
        WdLogEvent5_WdWarning(v50);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v63, v51);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v78);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 616LL) + 8LL) + 208LL))(
          *((_QWORD *)v19 + 96),
          11LL);
        goto LABEL_59;
      }
      DXGALLOCATIONREFERENCE::MoveAssign(v15, &v63);
      v15 += 8;
      v64 = ++AllocationList;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v63, v35);
    }
    v36 = (v15 - v82) >> 3;
    *(_QWORD *)v70 = v36;
    if ( v57 )
    {
      v54 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL);
      v55 = *((_DWORD *)v19 + 110);
      HostProcess = DXGPROCESS::GetHostProcess(v76);
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v54 + 4240),
        HostProcess,
        v55,
        v72[4],
        v70[0],
        (const struct DXGALLOCATIONREFERENCE *)v82,
        &v67);
      AllocationList = v64;
      v15 = v82;
    }
    else
    {
      v37 = v36;
      v15 = v82;
      DXGDEVICE::Evict(v19, (struct DXGALLOCATIONREFERENCE *)v82, v37, v72[4], &v67);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v78);
    NumAllocations = (unsigned int)(v73 - v69);
    v73 = NumAllocations;
    v28 = v67;
    v26 = v77;
  }
  if ( v65 )
  {
    p_NumBytesToTrim = &v62->NumBytesToTrim;
    if ( (unsigned __int64)&v62->NumBytesToTrim >= MmUserProbeAddress )
      p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
    *p_NumBytesToTrim = v67;
  }
  else
  {
    v14->NumBytesToTrim = v28;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v84);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v74);
  if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v81);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v39);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v59);
  return 0LL;
}
