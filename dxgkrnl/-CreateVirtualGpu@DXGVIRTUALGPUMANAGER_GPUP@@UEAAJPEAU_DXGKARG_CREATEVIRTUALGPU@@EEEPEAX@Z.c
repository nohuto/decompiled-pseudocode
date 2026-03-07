__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        void *a6)
{
  DXGVIRTUALGPUMANAGER_GPUP *v7; // r15
  struct DXGPROCESS *Current; // r13
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 StandardAllocation; // rdi
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r8
  ULONG PartitionId; // eax
  ULONG v16; // ecx
  _DWORD *v17; // r13
  char v18; // bl
  DXGK_VIRTUAL_GPU *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rbx
  DXGK_VIRTUAL_GPU *v22; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  int VirtualGpu; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 NumMemorySegments; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int SavedAdapterState; // eax
  _DWORD *v39; // rcx
  unsigned int v40; // edx
  unsigned int v41; // ebx
  __int64 v42; // rdi
  unsigned int v43; // ebx
  unsigned int v44; // eax
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // rdi
  ULONG v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rbx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  ULONG v56; // r13d
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rdx
  ULONG v61; // ecx
  int v62; // eax
  unsigned __int64 v63; // r13
  __int64 v64; // r15
  __int64 *p_MemorySegmentOffset; // rbx
  NTSTATUS v66; // eax
  PVOID v67; // rbx
  PVOID v68; // rcx
  DXGDEVICE *VirtualGpuDevice; // [rsp+58h] [rbp-A8h]
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v71; // [rsp+68h] [rbp-98h] BYREF
  int i; // [rsp+6Ch] [rbp-94h]
  ULONG v73; // [rsp+70h] [rbp-90h] BYREF
  __int64 v74; // [rsp+78h] [rbp-88h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  void *v76; // [rsp+88h] [rbp-78h]
  int v77; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v78; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h]
  _BYTE v80[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-50h]
  char v82; // [rsp+B8h] [rbp-48h]
  __int64 v83; // [rsp+C0h] [rbp-40h]
  __int64 v84; // [rsp+C8h] [rbp-38h] BYREF
  DXGVIRTUALGPUMANAGER_GPUP *v85; // [rsp+D0h] [rbp-30h]
  _BYTE v86[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v87; // [rsp+E0h] [rbp-20h]
  char v88; // [rsp+E8h] [rbp-18h]
  _BYTE v89[8]; // [rsp+F0h] [rbp-10h] BYREF
  DXGPUSHLOCK *v90; // [rsp+F8h] [rbp-8h]
  int v91; // [rsp+100h] [rbp+0h]
  _BYTE v92[24]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v93[54]; // [rsp+120h] [rbp+20h] BYREF
  UINT64 Size; // [rsp+2D0h] [rbp+1D0h] BYREF
  UINT Alignment; // [rsp+2D8h] [rbp+1D8h]
  ULONG DriverSegmentId; // [rsp+2DCh] [rbp+1DCh]
  UINT PrivateDriverData; // [rsp+2E0h] [rbp+1E0h]
  int v98; // [rsp+2E4h] [rbp+1E4h]
  struct _KAPC_STATE ApcState; // [rsp+2E8h] [rbp+1E8h] BYREF
  _BYTE v100[144]; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v101[8]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _BYTE v102[64]; // [rsp+3B8h] [rbp+2B8h] BYREF
  _BYTE v103[88]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _DXGKARG_SETVIRTUALGPURESOURCES v104; // [rsp+450h] [rbp+350h] BYREF
  _BYTE v105[992]; // [rsp+478h] [rbp+378h] BYREF

  Handle = a6;
  v76 = 0LL;
  v7 = this;
  v85 = this;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 437LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != nullptr", 437LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_DWORD *)Current + 106) |= 0x40u;
  v75 = *(_QWORD *)(*((_QWORD *)v7 + 4) + 16LL);
  StandardAllocation = v75;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 171);
  v74 = v9;
  memset(&ApcState, 0, sizeof(ApcState));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 216, 0LL);
  *(_QWORD *)(v9 + 224) = KeGetCurrentThread();
  v10 = *((_QWORD *)v7 + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
  v81 = StandardAllocation;
  v82 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v100, (struct DXGADAPTER *const)StandardAllocation, 0LL);
  LODWORD(StandardAllocation) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v100, 0LL);
  if ( (int)StandardAllocation < 0 )
    goto LABEL_6;
  KeStackAttachProcess(*(PRKPROCESS *)(v9 + 56), &ApcState);
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice((DXGPROCESS *)v9, *((struct ADAPTER_RENDER **)v7 + 4));
  KeUnstackDetachProcess(&ApcState);
  if ( !VirtualGpuDevice )
  {
    WdLogSingleEntry1(2LL, 477LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create partitioned GPU device 0x%I64x",
      477LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(StandardAllocation) = -1073741801;
LABEL_6:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v100);
    if ( v82 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v9 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 216, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)StandardAllocation;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v100);
  if ( v82 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v80);
  *(_QWORD *)(v10 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v9 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 216, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92,
    VirtualGpuDevice);
  v87 = v75;
  v88 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v101, (__int64)VirtualGpuDevice, 2, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v101, 0LL);
  LODWORD(StandardAllocation) = v13;
  if ( v13 >= 0 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89, (struct _KTHREAD **)v7 + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v90);
    v91 = 2;
    if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305188) )
    {
      PartitionId = a2->PartitionId;
      if ( a2->PartitionId == 0xFFFF )
      {
        WdLogSingleEntry1(3LL, 580LL);
        LODWORD(StandardAllocation) = -1073741637;
        goto LABEL_26;
      }
      v16 = *((_DWORD *)v7 + 3);
      if ( PartitionId >= v16 )
      {
        WdLogSingleEntry2(2LL, PartitionId, v16);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The PartitionId supplied is greater that the number of available GPU partitions: 0x%I64x 0x%I64x",
          a2->PartitionId,
          *((unsigned int *)v7 + 3),
          0LL,
          0LL,
          0LL);
LABEL_17:
        LODWORD(StandardAllocation) = -1073741811;
LABEL_26:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v89);
        goto LABEL_27;
      }
      v17 = 0LL;
      v18 = 1;
      v19 = *(DXGK_VIRTUAL_GPU **)(*((_QWORD *)v7 + 3) + 8LL * PartitionId);
      if ( !v19 )
      {
        WdLogSingleEntry1(2LL, PartitionId);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The PartitionId refers to a vGPU that has not yet been created: 0x%I64x",
          a2->PartitionId,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_17;
      }
LABEL_34:
      VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)v7 + 4), a2, v14);
      StandardAllocation = VirtualGpu;
      if ( VirtualGpu < 0 )
      {
LABEL_35:
        WdLogSingleEntry1(3LL, StandardAllocation);
LABEL_98:
        if ( v76 )
          operator delete(v76);
        if ( v19 )
          (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)v7 + 24LL))(v7, v19);
        goto LABEL_26;
      }
      if ( v18 )
      {
        v31 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 8LL * a2->PartitionId);
        v32 = *(_QWORD *)&a2->UserModeVirtualDeviceProvider.Data1 - *(_QWORD *)(v31 + 36);
        if ( !v32 )
          v32 = *(_QWORD *)a2->UserModeVirtualDeviceProvider.Data4 - *(_QWORD *)(v31 + 44);
        if ( v32 )
        {
          WdLogSingleEntry1(1LL, 595LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pArgs->UserModeVirtualDeviceProvider == m_pVirtualGpu[pArgs->PartitionId]->UserModeDllId",
            595LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v33 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 8LL * a2->PartitionId);
        if ( a2->VirtualGpuLuid.LowPart != *(_DWORD *)(v33 + 28) || a2->VirtualGpuLuid.HighPart != *(_DWORD *)(v33 + 32) )
        {
          WdLogSingleEntry1(1LL, 596LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"RtlEqualLuid(&pArgs->VirtualGpuLuid, &m_pVirtualGpu[pArgs->PartitionId]->VirtualGpuLuid)",
            596LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( Handle )
        {
          WdLogSingleEntry1(1LL, 597LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"vGPUHandle == nullptr", 597LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      else
      {
        *((_BYTE *)v19 + 192) = 1;
        *(CLSID *)((char *)v19 + 36) = a2->UserModeVirtualDeviceProvider;
        RtlCopyLuid((PLUID)((char *)v19 + 28), &a2->VirtualGpuLuid);
        NumMemorySegments = a2->NumMemorySegments;
        if ( (unsigned int)NumMemorySegments > 0x20 )
        {
          WdLogSingleEntry2(3LL, (unsigned int)NumMemorySegments, 606LL);
          LODWORD(StandardAllocation) = -1073741811;
          goto LABEL_98;
        }
        if ( (_DWORD)NumMemorySegments )
        {
          v35 = 32 * NumMemorySegments;
          if ( !is_mul_ok(a2->NumMemorySegments, 0x20uLL) )
            v35 = -1LL;
          v36 = operator new[](v35, 0x4B677844u, 256LL);
          *((_QWORD *)v19 + 23) = v36;
          if ( !v36 )
          {
            WdLogSingleEntry1(6LL, 615LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Failed to allocate allocations array",
              615LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(StandardAllocation) = -1073741801;
            goto LABEL_98;
          }
          *((_DWORD *)v19 + 42) = a2->NumMemorySegments;
        }
        if ( DpiKsrIsSoftBoot() )
        {
          v37 = *((_QWORD *)v7 + 4);
          v77 = 0;
          v78 = 0LL;
          SavedAdapterState = DpiKsrGetSavedAdapterState(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 216LL), &v77, &v78);
          StandardAllocation = SavedAdapterState;
          if ( SavedAdapterState < 0 )
          {
            WdLogSingleEntry1(2LL, SavedAdapterState);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to find saved GPU-P state. Status: 0x%I64x",
              StandardAllocation,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_98;
          }
          if ( v78 )
          {
            v39 = v78 + 1;
            v40 = 0;
            if ( *v78 )
            {
              while ( *v39 != a2->PartitionId )
              {
                ++v40;
                v39 = (_DWORD *)((char *)v39 + (unsigned int)v39[3]);
                if ( v40 >= *v78 )
                  goto LABEL_61;
              }
              v48 = a2->NumMemorySegments;
              if ( v39[2] != v48 )
              {
                WdLogSingleEntry1(2LL, 651LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"NumMemorySegments in saved virtual function and new vGPU is different",
                  651LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_98;
              }
              v49 = 0LL;
              v17 = v39 + 4;
              if ( v48 )
              {
                while ( v17[6 * v49] == a2->SegmentInfo[v49].DriverSegmentId
                     && *(_QWORD *)&v17[6 * v49 + 4] == a2->SegmentInfo[v49].Size
                     && v17[6 * v49 + 1] == a2->SegmentInfo[v49].Alignment )
                {
                  v49 = (unsigned int)(v49 + 1);
                  if ( (unsigned int)v49 >= v48 )
                    goto LABEL_61;
                }
                WdLogSingleEntry1(2LL, 661LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Segment parameters in the saved data do not match",
                  661LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_98;
              }
            }
          }
        }
LABEL_61:
        v41 = a2->NumMemorySegments;
        v42 = 0LL;
        for ( i = 0; (unsigned int)v42 < v41; v41 = a2->NumMemorySegments )
        {
          v98 = 0;
          memset(v93, 0, 0x1A8uLL);
          LODWORD(v93[0]) |= 0x200u;
          v83 = (unsigned int)v42;
          HIDWORD(v93[0]) = *((_DWORD *)VirtualGpuDevice + 117);
          v93[3] = &Size;
          LODWORD(v93[2]) = 5;
          Size = a2->SegmentInfo[v42].Size;
          Alignment = a2->SegmentInfo[v42].Alignment;
          DriverSegmentId = a2->SegmentInfo[v42].DriverSegmentId;
          PrivateDriverData = a2->SegmentInfo[v42].PrivateDriverData;
          KeStackAttachProcess(*(PRKPROCESS *)(v74 + 56), &ApcState);
          StandardAllocation = (int)DXGDEVICE::CreateStandardAllocation(
                                      VirtualGpuDevice,
                                      (struct _D3DKM_CREATESTANDARDALLOCATION *)v93,
                                      0LL);
          KeUnstackDetachProcess(&ApcState);
          if ( (int)StandardAllocation < 0 )
            goto LABEL_35;
          v43 = HIDWORD(v93[6]);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v74 + 248));
          v44 = (v43 >> 6) & 0xFFFFFF;
          if ( v44 < *(_DWORD *)(v74 + 296)
            && (v45 = *(_QWORD *)(v74 + 280), ((v43 >> 25) & 0x60) == (*(_BYTE *)(v45 + 16LL * v44 + 8) & 0x60))
            && (*(_DWORD *)(v45 + 16LL * v44 + 8) & 0x2000) == 0
            && (v46 = *(_DWORD *)(v45 + 16LL * v44 + 8) & 0x1F) != 0 )
          {
            if ( v46 == 5 )
            {
              v47 = *(_QWORD *)(v45 + 16LL * v44);
            }
            else
            {
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
              v47 = 0LL;
            }
          }
          else
          {
            v47 = 0LL;
          }
          v50 = v74;
          _InterlockedDecrement((volatile signed __int32 *)(v74 + 264));
          ExReleasePushLockSharedEx(v50 + 248, 0LL);
          KeLeaveCriticalRegion();
          v51 = v83;
          v52 = 32 * v83;
          *(_QWORD *)(32 * v83 + *((_QWORD *)v19 + 23)) = v47;
          if ( v17 )
            v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL)
                                                                                        + 8LL)
                                                                            + 1232LL))(
                    *(_QWORD *)(*((_QWORD *)v7 + 4) + 768LL),
                    *(_QWORD *)(*(_QWORD *)(v52 + *((_QWORD *)v19 + 23)) + 24LL),
                    (unsigned int)v17[6 * v51],
                    *(_QWORD *)&v17[6 * v51 + 2]);
          else
            v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice + 2) + 760LL) + 8LL)
                                                                                            + 216LL))(
                    *(_QWORD *)(*((_QWORD *)v7 + 4) + 768LL),
                    *(_QWORD *)(*(_QWORD *)(v52 + *((_QWORD *)v19 + 23)) + 24LL),
                    0LL,
                    0LL,
                    0LL,
                    0LL);
          LODWORD(StandardAllocation) = v53;
          if ( v53 < 0 )
          {
            WdLogSingleEntry1(2LL, v53);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to pin virtual GPU allocation. Status = 0x%I64x",
              (int)StandardAllocation,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_98;
          }
          v42 = (unsigned int)(i + 1);
          *(_QWORD *)(*((_QWORD *)v19 + 23) + v52 + 16) = Size;
          v54 = *((_QWORD *)v19 + 23);
          i = v42;
          *(_DWORD *)(v54 + v52 + 24) = Alignment;
        }
        memset(v104.MemoryInfo, 0, sizeof(v104.MemoryInfo));
        memset(v105, 0, sizeof(v105));
        v56 = 0;
        v104.PartitionId = a2->PartitionId;
        v104.NumMemoryAllocations = v41;
        if ( v41 )
        {
          do
          {
            v57 = *((_QWORD *)VirtualGpuDevice + 2);
            v73 = 0;
            v84 = 0LL;
            Object = 0LL;
            v58 = v56;
            v59 = v56;
            (*(void (__fastcall **)(_QWORD, _QWORD, ULONG *, __int64 *, PVOID *))(*(_QWORD *)(*(_QWORD *)(v57 + 760)
                                                                                            + 8LL)
                                                                                + 208LL))(
              *(_QWORD *)(*((_QWORD *)v7 + 4) + 768LL),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 23) + v58 * 32) + 48LL) + 8LL),
              &v73,
              &v84,
              &Object);
            v60 = *((_QWORD *)v19 + 23);
            ++v56;
            v61 = v73;
            v104.MemoryInfo[v58].DriverAllocationHandle = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v58 * 32 + v60) + 48LL)
                                                                    + 16LL);
            v104.MemoryInfo[v58].AllocationAddress.MemorySegmentOffset = (UINT64)Object;
            v104.MemoryInfo[v58].AllocationAddress.MemorySegmentId = v61;
            v104.MemoryInfo[v58].AllocationSize = a2->SegmentInfo[v59].Size;
            *(_DWORD *)(v58 * 32 + v60 + 28) = v61;
            *(_QWORD *)(v58 * 32 + *((_QWORD *)v19 + 23) + 8) = Object;
          }
          while ( v56 < a2->NumMemorySegments );
        }
        v62 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)v7 + 4), &v104, v55);
        v63 = 0LL;
        StandardAllocation = v62;
        if ( bTracingEnabled )
        {
          DxgkLogInternalTriageEvent(
            v75,
            196610,
            a2->PartitionId,
            (__int64)L"Setting vGPU resources with %1 segments returns %2",
            a2->NumMemorySegments,
            v62,
            0LL,
            0LL,
            0LL);
          if ( a2->NumMemorySegments )
          {
            v64 = v75;
            p_MemorySegmentOffset = (__int64 *)&v104.MemoryInfo[0].AllocationAddress.MemorySegmentOffset;
            do
            {
              DxgkLogInternalTriageEvent(
                v64,
                196610,
                a2->PartitionId,
                (__int64)L"vGPU has a resource set on segment %1 at offset %2 with a size of %3",
                *((unsigned int *)p_MemorySegmentOffset - 2),
                *p_MemorySegmentOffset,
                p_MemorySegmentOffset[1],
                0LL,
                0LL);
              p_MemorySegmentOffset += 4;
              ++v63;
            }
            while ( v63 < a2->NumMemorySegments );
            v7 = v85;
          }
        }
        if ( (int)StandardAllocation < 0 )
        {
          WdLogSingleEntry2(3LL, StandardAllocation, 812LL);
          goto LABEL_98;
        }
        Object = 0LL;
        v66 = ObReferenceObjectByHandle(Handle, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        v67 = Object;
        StandardAllocation = v66;
        if ( v66 < 0 )
          goto LABEL_35;
        if ( *((_QWORD *)Object + 4) )
        {
          WdLogSingleEntry1(2LL, 830LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The device file handle to bind to the new vGPU has already been bound to some other object.",
            830LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(StandardAllocation) = -1073741816;
          ObfDereferenceObject(v67);
          goto LABEL_98;
        }
        v68 = Object;
        *((_QWORD *)Object + 4) = v76;
        *((_QWORD *)v19 + 20) = v67;
        ObfDereferenceObject(v68);
      }
      DXGK_VIRTUAL_GPU::ReportState(v19, v33, v30);
      LODWORD(StandardAllocation) = 0;
      goto LABEL_26;
    }
    v20 = a2->PartitionId;
    v71 = 0xFFFF;
    LODWORD(StandardAllocation) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(v7, v20, &v71);
    if ( (int)StandardAllocation < 0 )
      goto LABEL_26;
    v21 = v71;
    a2->PartitionId = v71;
    v22 = (DXGK_VIRTUAL_GPU *)operator new[](0xC8uLL, 0x4B677844u, 256LL);
    v19 = v22;
    if ( v22 )
    {
      DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v22, *((struct ADAPTER_RENDER **)v7 + 4), 0);
      *(_QWORD *)v19 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
      v76 = (void *)operator new[](0x10uLL, 0x4B677844u, 256LL);
      if ( v76 )
      {
        *((_QWORD *)v19 + 22) = VirtualGpuDevice;
        *((_QWORD *)v19 + 11) = Current;
        *((_DWORD *)v19 + 6) = v21;
        *(_QWORD *)(*((_QWORD *)v7 + 3) + 8 * v21) = v19;
        ++*((_DWORD *)v7 + 4);
        DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_GPUP *)((char *)v7 + 72));
        v24 = (_QWORD *)((char *)v7 + 104);
        v25 = *((_QWORD *)v7 + 13);
        v26 = (_QWORD *)((char *)v19 + 120);
        if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v25 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)v7 + 104) )
          __fastfail(3u);
        *v26 = v25;
        v17 = 0LL;
        *((_QWORD *)v19 + 16) = v24;
        *(_QWORD *)(v25 + 8) = v26;
        *v24 = v26;
        *((_QWORD *)v7 + 10) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v7 + 72, 0LL);
        KeLeaveCriticalRegion();
        v27 = v76;
        v28 = v75;
        *((_DWORD *)v76 + 2) = v21;
        v18 = 0;
        *v27 = v28;
        goto LABEL_34;
      }
      WdLogSingleEntry1(6LL, 534LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
        534LL,
        0LL,
        0LL,
        0LL,
        0LL);
      (**(void (__fastcall ***)(DXGK_VIRTUAL_GPU *, __int64))v19)(v19, 1LL);
    }
    LODWORD(StandardAllocation) = -1073741801;
    goto LABEL_26;
  }
  WdLogSingleEntry2(3LL, VirtualGpuDevice, v13);
LABEL_27:
  COREACCESS::~COREACCESS((COREACCESS *)v103);
  COREACCESS::~COREACCESS((COREACCESS *)v102);
  if ( v88 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92);
  return (unsigned int)StandardAllocation;
}
