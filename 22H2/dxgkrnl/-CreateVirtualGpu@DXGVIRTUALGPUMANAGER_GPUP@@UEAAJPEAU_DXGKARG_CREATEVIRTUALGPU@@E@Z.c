/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0236F90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B800 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     DpiKsrIsSoftBoot @ 0x1C0188340 (DpiKsrIsSoftBoot.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C022F860 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C02308DC (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0232828 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1C0235248 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02859D4 (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02D3204 (DpiKsrGetSavedAdapterState.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // r12
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  ULONG PartitionId; // edx
  __int64 v24; // rdi
  DXGK_VIRTUAL_GPU *v25; // rax
  __int64 v26; // r8
  DXGK_VIRTUAL_GPU *v27; // rsi
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  int VirtualGpu; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 NumMemorySegments; // rax
  __int64 v40; // rax
  SIZE_T v41; // rax
  PVOID v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  void *v46; // rcx
  __int64 v47; // rax
  ULONG v48; // eax
  _DWORD *v49; // r12
  __int64 v50; // rax
  int SavedAdapterState; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  _DWORD *v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // ebx
  struct DXGADAPTER *v58; // rdi
  int StandardAllocation; // eax
  unsigned int v60; // ebx
  __int64 v61; // rax
  __int64 v62; // r8
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rdi
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  ULONG v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r12
  __int64 v76; // rdi
  void *v77; // rcx
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned int v84; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v85; // [rsp+44h] [rbp-BCh] BYREF
  int v86; // [rsp+48h] [rbp-B8h] BYREF
  DXGDEVICE *VirtualGpuDevice; // [rsp+50h] [rbp-B0h]
  UINT64 v88; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v89; // [rsp+60h] [rbp-A0h]
  _DWORD *v90; // [rsp+68h] [rbp-98h] BYREF
  char v91[8]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v92; // [rsp+78h] [rbp-88h]
  char v93; // [rsp+80h] [rbp-80h]
  __int64 v94; // [rsp+88h] [rbp-78h] BYREF
  char v95[8]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGADAPTER *v96; // [rsp+98h] [rbp-68h]
  char v97; // [rsp+A0h] [rbp-60h]
  char v98[8]; // [rsp+A8h] [rbp-58h] BYREF
  DXGPUSHLOCK *v99; // [rsp+B0h] [rbp-50h]
  int v100; // [rsp+B8h] [rbp-48h]
  _BYTE v101[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v102[54]; // [rsp+D0h] [rbp-30h] BYREF
  UINT64 v103; // [rsp+280h] [rbp+180h] BYREF
  UINT Alignment; // [rsp+288h] [rbp+188h]
  ULONG DriverSegmentId; // [rsp+28Ch] [rbp+18Ch]
  UINT PrivateDriverData; // [rsp+290h] [rbp+190h]
  int v107; // [rsp+294h] [rbp+194h]
  _BYTE v108[144]; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v109[8]; // [rsp+330h] [rbp+230h] BYREF
  char v110[64]; // [rsp+338h] [rbp+238h] BYREF
  char v111[88]; // [rsp+378h] [rbp+278h] BYREF
  _DXGKARG_SETVIRTUALGPURESOURCES v112[26]; // [rsp+3D0h] [rbp+2D0h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, a3, a4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 408LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_BYTE *)Current + 347) |= 8u;
  v89 = *(struct DXGADAPTER **)(*((_QWORD *)this + 4) + 16LL);
  v12 = v89;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 176, 0LL);
  *((_QWORD *)Current + 23) = KeGetCurrentThread();
  v10 = *((_QWORD *)this + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
  v92 = v12;
  v93 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v108, v12, 0LL);
  LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v108, 0LL);
  if ( (int)v12 < 0 )
    goto LABEL_6;
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice(Current, *((struct ADAPTER_RENDER **)this + 4));
  v15 = VirtualGpuDevice;
  if ( !VirtualGpuDevice )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = 440LL;
    WdLogEvent5_WdError(v16);
    LODWORD(v12) = -1073741801;
LABEL_6:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v11);
    if ( v93 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v12;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v13);
  if ( v93 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v91);
  *(_QWORD *)(v10 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)Current + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v101,
    v15);
  v96 = v89;
  v97 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v109, (__int64)v15, 2, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v109, 0LL);
  v12 = (struct DXGADAPTER *)v18;
  if ( v18 >= 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v98, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v99);
    PartitionId = a2->PartitionId;
    v100 = 2;
    v84 = 0xFFFF;
    LODWORD(v12) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v84);
    if ( (int)v12 < 0 )
    {
LABEL_71:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
      goto LABEL_72;
    }
    v24 = v84;
    a2->PartitionId = v84;
    v25 = (DXGK_VIRTUAL_GPU *)operator new(0xC0uLL, 0x4B677844u, 1, PagedPool);
    v27 = v25;
    if ( v25 )
    {
      DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v25, *((struct ADAPTER_RENDER **)this + 4), 0);
      *(_QWORD *)v27 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
    }
    else
    {
      v27 = 0LL;
    }
    if ( !v27 )
    {
      LODWORD(v12) = -1073741801;
      goto LABEL_71;
    }
    *((_QWORD *)v27 + 11) = Current;
    v28 = (_QWORD *)((char *)v27 + 120);
    *((_DWORD *)v27 + 6) = v24;
    *((_QWORD *)v27 + 21) = v15;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v24) = v27;
    v29 = (_QWORD *)((char *)this + 72);
    ++*((_DWORD *)this + 4);
    v30 = *((_QWORD *)this + 9);
    if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v30 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)this + 72) )
      __fastfail(3u);
    *v28 = v30;
    *((_QWORD *)v27 + 16) = v29;
    *(_QWORD *)(v30 + 8) = v28;
    *v29 = v28;
    VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)this + 4), a2, v26);
    v12 = (struct DXGADAPTER *)VirtualGpu;
    if ( VirtualGpu < 0 )
    {
LABEL_22:
      v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
LABEL_67:
      *(_QWORD *)(v35 + 24) = v12;
      WdLogEvent5_WdWarning(v35);
      goto LABEL_68;
    }
    *((_BYTE *)v27 + 184) = 1;
    *(CLSID *)((char *)v27 + 36) = a2->UserModeVirtualDeviceProvider;
    RtlCopyLuid((PLUID)((char *)v27 + 28), &a2->VirtualGpuLuid);
    NumMemorySegments = a2->NumMemorySegments;
    if ( (unsigned int)NumMemorySegments > 0x20 )
    {
      v40 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v40 + 24) = a2->NumMemorySegments;
      *(_QWORD *)(v40 + 32) = 495LL;
      WdLogEvent5_WdWarning(v40);
      LODWORD(v12) = -1073741811;
LABEL_68:
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)this + 24LL))(this, v27);
      goto LABEL_71;
    }
    if ( (_DWORD)NumMemorySegments )
    {
      v41 = 32 * NumMemorySegments;
      if ( !is_mul_ok(a2->NumMemorySegments, 0x20uLL) )
        v41 = -1LL;
      v42 = operator new[](v41, 0x4B677844u, PagedPool);
      *((_QWORD *)v27 + 22) = v42;
      v46 = v42;
      if ( !v42 )
      {
        v47 = WdLogNewEntry5_WdLowResource(0LL, v43, v44, v45);
        *(_QWORD *)(v47 + 24) = 504LL;
        WdLogEvent5_WdLowResource(v47);
        LODWORD(v12) = -1073741801;
        goto LABEL_68;
      }
      v48 = a2->NumMemorySegments;
      *((_DWORD *)v27 + 40) = v48;
      memset(v46, 0, 32LL * v48);
    }
    v49 = 0LL;
    if ( DpiKsrIsSoftBoot() )
    {
      v50 = *((_QWORD *)this + 4);
      v86 = 0;
      v90 = 0LL;
      SavedAdapterState = DpiKsrGetSavedAdapterState(*(_QWORD *)(*(_QWORD *)(v50 + 16) + 216LL), &v86, &v90);
      v12 = (struct DXGADAPTER *)SavedAdapterState;
      if ( SavedAdapterState < 0 )
      {
        v54 = WdLogNewEntry5_WdError(v53, v52);
        *(_QWORD *)(v54 + 24) = v12;
LABEL_34:
        WdLogEvent5_WdError(v54);
        goto LABEL_68;
      }
      if ( v90 )
      {
        v55 = v90 + 1;
        v56 = 0LL;
        if ( *v90 )
        {
          while ( *v55 != (_DWORD)v24 )
          {
            v56 = (unsigned int)(v56 + 1);
            v55 = (_DWORD *)((char *)v55 + (unsigned int)v55[3]);
            if ( (unsigned int)v56 >= *v90 )
              goto LABEL_39;
          }
          v72 = a2->NumMemorySegments;
          if ( v55[2] != v72 )
          {
            v54 = WdLogNewEntry5_WdError(v55, v56);
            *(_QWORD *)(v54 + 24) = 541LL;
            goto LABEL_34;
          }
          v73 = 0LL;
          v49 = v55 + 4;
          if ( v72 )
          {
            while ( v49[6 * v73] == a2->SegmentInfo[v73].DriverSegmentId
                 && *(_QWORD *)&v49[6 * v73 + 4] == a2->SegmentInfo[v73].Size
                 && v49[6 * v73 + 1] == a2->SegmentInfo[v73].Alignment )
            {
              v73 = (unsigned int)(v73 + 1);
              if ( (unsigned int)v73 >= v72 )
                goto LABEL_39;
            }
            v54 = WdLogNewEntry5_WdError(v55, v73);
            *(_QWORD *)(v54 + 24) = 551LL;
            goto LABEL_34;
          }
        }
      }
    }
LABEL_39:
    v57 = a2->NumMemorySegments;
    v58 = 0LL;
    v84 = 0;
    if ( !v57 )
    {
LABEL_63:
      memset(v112[0].MemoryInfo, 0, 0x400uLL);
      v75 = 0LL;
      v112[0].PartitionId = a2->PartitionId;
      v112[0].NumMemoryAllocations = v57;
      if ( v57 )
      {
        do
        {
          v85 = 0;
          v94 = 0LL;
          v88 = 0LL;
          v76 = (unsigned int)v75;
          (*(void (__fastcall **)(_QWORD, _QWORD, ULONG *, __int64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 640LL)
                                                                                           + 8LL)
                                                                               + 224LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 648LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v76 * 32 + *((_QWORD *)v27 + 22)) + 48LL) + 8LL),
            &v85,
            &v94,
            &v88);
          v77 = *(void **)(*(_QWORD *)(*(_QWORD *)(v76 * 32 + *((_QWORD *)v27 + 22)) + 48LL) + 16LL);
          v112[0].MemoryInfo[v76].AllocationAddress.MemorySegmentOffset = v88;
          v112[0].MemoryInfo[v76].DriverAllocationHandle = v77;
          LODWORD(v77) = v85;
          v78 = 6 * (v75 + 3);
          v112[0].MemoryInfo[v76].AllocationAddress.MemorySegmentId = v85;
          v75 = (unsigned int)(v75 + 1);
          v112[0].MemoryInfo[v76].AllocationSize = *((_QWORD *)&a2->PartitionId + v78);
          *(_DWORD *)(v76 * 32 + *((_QWORD *)v27 + 22) + 28) = (_DWORD)v77;
          *(_QWORD *)(v76 * 32 + *((_QWORD *)v27 + 22) + 8) = v88;
        }
        while ( (unsigned int)v75 < a2->NumMemorySegments );
      }
      v79 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)this + 4), v112, v74);
      v12 = (struct DXGADAPTER *)v79;
      if ( v79 >= 0 )
      {
        LODWORD(v12) = 0;
        goto LABEL_71;
      }
      v35 = WdLogNewEntry5_WdWarning(v81, v80, v82);
      *(_QWORD *)(v35 + 32) = 669LL;
      goto LABEL_67;
    }
    while ( 1 )
    {
      v107 = 0;
      memset(v102, 0, 0x1A8uLL);
      LODWORD(v102[0]) |= 0x200u;
      LODWORD(v102[2]) = 5;
      v89 = v58;
      HIDWORD(v102[0]) = *((_DWORD *)VirtualGpuDevice + 109);
      v102[3] = &v103;
      v103 = *((_QWORD *)&a2->PartitionId + 6 * ((_QWORD)v58 + 3));
      Alignment = a2->SegmentInfo[(_QWORD)v58].Alignment;
      DriverSegmentId = a2->SegmentInfo[(_QWORD)v58].DriverSegmentId;
      PrivateDriverData = a2->SegmentInfo[(_QWORD)v58].PrivateDriverData;
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             (struct _DXGK_ALLOCATIONINFO *)VirtualGpuDevice,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v102,
                             0LL);
      v12 = (struct DXGADAPTER *)StandardAllocation;
      if ( StandardAllocation < 0 )
        goto LABEL_22;
      v60 = HIDWORD(v102[6]);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v61 = (v60 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v61 >= *((_DWORD *)Current + 64) )
        goto LABEL_47;
      v62 = *((_QWORD *)Current + 30);
      v63 = *(_DWORD *)(v62 + 16 * v61 + 8);
      if ( ((v60 >> 25) & 0x60) != (*(_BYTE *)(v62 + 16 * v61 + 8) & 0x60) || (v63 & 0x2000) != 0 || (v63 & 0x1F) == 0 )
        goto LABEL_47;
      v64 = v63 & 0x1F;
      if ( (_BYTE)v64 != 5 )
        break;
      v66 = *(_QWORD *)(v62 + 16LL * (unsigned int)v61);
LABEL_48:
      ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v67 = 32LL * (_QWORD)v58;
      *(_QWORD *)(v67 + *((_QWORD *)v27 + 22)) = v66;
      v68 = *((_QWORD *)VirtualGpuDevice + 2);
      if ( v49 )
        v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v68 + 640) + 8LL)
                                                                        + 1240LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 648LL),
                *(_QWORD *)(*(_QWORD *)(v67 + *((_QWORD *)v27 + 22)) + 24LL),
                (unsigned int)v49[6 * (_QWORD)v89],
                *(_QWORD *)&v49[6 * (_QWORD)v89 + 2]);
      else
        v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v68 + 640) + 8LL)
                                                                                        + 232LL))(
                *(_QWORD *)(*((_QWORD *)this + 4) + 648LL),
                *(_QWORD *)(*(_QWORD *)(v67 + *((_QWORD *)v27 + 22)) + 24LL),
                0LL,
                0LL,
                0LL,
                0LL);
      LODWORD(v12) = v69;
      if ( v69 < 0 )
      {
        v54 = WdLogNewEntry5_WdError(v71, v70);
        *(_QWORD *)(v54 + 24) = (int)v12;
        goto LABEL_34;
      }
      *(_QWORD *)(v67 + *((_QWORD *)v27 + 22) + 16) = v103;
      *(_DWORD *)(v67 + *((_QWORD *)v27 + 22) + 24) = Alignment;
      v57 = a2->NumMemorySegments;
      v58 = (struct DXGADAPTER *)(v84 + 1);
      v84 = (unsigned int)v58;
      if ( (unsigned int)v58 >= v57 )
        goto LABEL_63;
    }
    v65 = WdLogNewEntry5_WdError(v64, 2LL * (unsigned int)v61);
    *(_QWORD *)(v65 + 24) = 316LL;
    WdLogEvent5_WdError(v65);
LABEL_47:
    v66 = 0LL;
    goto LABEL_48;
  }
  v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
  *(_QWORD *)(v22 + 24) = v15;
  *(_QWORD *)(v22 + 32) = v12;
  WdLogEvent5_WdWarning(v22);
LABEL_72:
  COREACCESS::~COREACCESS((COREACCESS *)v111);
  COREACCESS::~COREACCESS((COREACCESS *)v110);
  if ( v97 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v101);
  return (unsigned int)v12;
}
