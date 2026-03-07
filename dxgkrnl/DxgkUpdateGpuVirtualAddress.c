__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rsi
  bool v4; // r15
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int updated; // esi
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v8; // r12
  struct DXGDEVICE *v9; // r15
  DXGCONTEXT *v10; // r14
  struct DXGDEVICE *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r15
  unsigned __int64 NumOperations; // rdx
  unsigned __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v22; // r8
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v24; // rcx
  char *v25; // rdx
  int v26; // r9d
  UINT v27; // ecx
  UINT v28; // r10d
  unsigned __int64 v29; // rax
  int v30; // r8d
  int v31; // r8d
  __int64 v32; // rax
  bool v33; // cf
  unsigned __int64 v34; // rax
  char *v35; // rax
  unsigned int v36; // edx
  DXGALLOCATIONREFERENCE *v37; // rax
  void *v38; // rcx
  unsigned __int64 v39; // rax
  size_t v40; // rax
  unsigned int v41; // r8d
  int v42; // r10d
  UINT v43; // edx
  _QWORD *v44; // r11
  DXGALLOCATIONREFERENCE *v45; // rcx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v46; // rax
  unsigned int hAllocation; // r9d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v49; // r8
  struct DXGGLOBAL *Global; // rax
  unsigned int v51; // ecx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // ecx
  int v55; // ecx
  DXGPUSHLOCK *v56; // rax
  struct DXGDEVICE *v57; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  NTSTATUS v62; // eax
  int v63; // eax
  __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // r8
  struct DXGDEVICE *v69; // [rsp+50h] [rbp-218h] BYREF
  size_t Size; // [rsp+58h] [rbp-210h]
  int v71; // [rsp+60h] [rbp-208h] BYREF
  __int64 v72; // [rsp+68h] [rbp-200h]
  char v73; // [rsp+70h] [rbp-1F8h]
  bool v74; // [rsp+78h] [rbp-1F0h]
  _DWORD v75[3]; // [rsp+7Ch] [rbp-1ECh]
  char *v76; // [rsp+88h] [rbp-1E0h]
  unsigned int v77; // [rsp+90h] [rbp-1D8h]
  char v78[8]; // [rsp+98h] [rbp-1D0h] BYREF
  char v79; // [rsp+A0h] [rbp-1C8h]
  DXGALLOCATIONREFERENCE *v80; // [rsp+A8h] [rbp-1C0h]
  struct DXGPROCESS *v81; // [rsp+B0h] [rbp-1B8h]
  DXGPUSHLOCK *v82; // [rsp+B8h] [rbp-1B0h]
  PVOID Object; // [rsp+C0h] [rbp-1A8h] BYREF
  _BYTE v84[16]; // [rsp+C8h] [rbp-1A0h] BYREF
  UINT v85; // [rsp+D8h] [rbp-190h]
  struct DXGDEVICE *v86; // [rsp+E0h] [rbp-188h] BYREF
  _BYTE v87[16]; // [rsp+E8h] [rbp-180h] BYREF
  _BYTE v88[16]; // [rsp+F8h] [rbp-170h] BYREF
  struct DXGDEVICE *v89; // [rsp+108h] [rbp-160h]
  DXGCONTEXT *v90; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v91[24]; // [rsp+118h] [rbp-150h] BYREF
  struct _EX_RUNDOWN_REF *v92; // [rsp+130h] [rbp-138h] BYREF
  _QWORD *v93; // [rsp+138h] [rbp-130h]
  char *v94; // [rsp+140h] [rbp-128h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v95; // [rsp+148h] [rbp-120h]
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v96; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v97[160]; // [rsp+190h] [rbp-D8h] BYREF

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v71 = -1;
  v72 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v73 = 1;
    v71 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2106);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v71, 2106);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v74 = v4;
  Current = DXGPROCESS::GetCurrent(v5);
  v81 = Current;
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_136:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    if ( v73 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v71);
    }
    return updated;
  }
  memset(&v96, 0, sizeof(v96));
  v8 = &v96;
  Object = &v96;
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v96 = *v3;
  }
  else
  {
    v8 = v3;
    Object = v3;
  }
  if ( !v8->NumOperations )
  {
    updated = -1073741811;
    WdLogSingleEntry2(3LL, -1073741811LL, 13430LL);
    goto LABEL_136;
  }
  v86 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v69, v8->hDevice, (struct _KTHREAD **)Current, &v86);
  v9 = v86;
  v89 = v86;
  if ( !v86 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(2LL, v8->hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v8->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_133;
  }
  v90 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84, v8->hContext, Current, &v90, 0, 1);
  v10 = v90;
  if ( !v90 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, v81, v8->hContext, -1073741811LL);
LABEL_132:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
LABEL_133:
    if ( !v69 )
      goto LABEL_136;
    goto LABEL_134;
  }
  v11 = (struct DXGDEVICE *)*((_QWORD *)v90 + 2);
  if ( v11 != v9 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(2LL, v11, v9, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Context device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
      *((_QWORD *)v10 + 2),
      (__int64)v9,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_132;
  }
  v12 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
  if ( *(_BYTE *)(v12 + 209) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v12 + 4472),
                v81,
                *((_DWORD *)v9 + 118),
                *((_DWORD *)v90 + 7),
                v8);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
    if ( !v69 )
      goto LABEL_136;
LABEL_134:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
    goto LABEL_136;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v88, v9);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v91, (struct _KTHREAD **)v10 + 56);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v97, (__int64)v9, 0, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
  updated = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(3LL, v14, 13481LL);
LABEL_131:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v88);
    goto LABEL_132;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL) + 2284LL) & 0x40) == 0 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(3LL, -1073741811LL, 13487LL);
    goto LABEL_131;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v10) )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, v81, v8->hContext, -1073741811LL);
    goto LABEL_131;
  }
  *(_QWORD *)&v75[1] = DXGCONTEXT::GetVidMmCompanionContext(v10);
  if ( !*(_QWORD *)&v75[1] )
  {
    updated = -1073741811;
    WdLogSingleEntry4(3LL, v81, v8->hContext, -1073741811LL, 13503LL);
    goto LABEL_131;
  }
  updated = -1073741811;
  LODWORD(v15) = -1073741811;
  v77 = -1073741811;
  v80 = 0LL;
  v75[0] = 0;
  NumOperations = v8->NumOperations;
  Size = NumOperations << 6;
  if ( NumOperations << 6 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, NumOperations);
    goto LABEL_131;
  }
  v17 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v17 = -1LL;
  v18 = (char *)operator new[](v17, 0x4B677844u, 256LL);
  v76 = v18;
  if ( !v18 )
  {
    LODWORD(v15) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  if ( v74 )
  {
    v22 = (unsigned int)Size;
    Operations = v8->Operations;
    v24 = (ULONG64)Operations + (unsigned int)Size;
    if ( v24 < (unsigned __int64)Operations || v24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, Operations, v22);
  }
  else
  {
    memmove(v18, v8->Operations, (unsigned int)Size);
  }
  v25 = v76;
  v8->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v76;
  v26 = 0;
  v27 = 0;
  v28 = v8->NumOperations;
  if ( v28 )
  {
    do
    {
      v29 = (unsigned __int64)v27 << 6;
      v30 = *(_DWORD *)&v25[v29];
      if ( !v30 || v30 == 3 )
      {
        v31 = *(_DWORD *)&v25[v29 + 24];
        if ( !v31 )
        {
          WdLogSingleEntry2(3LL, -1073741811LL, 13563LL);
          goto LABEL_64;
        }
        if ( v26 != v31 )
        {
          ++v75[0];
          v26 = v31;
        }
      }
      else if ( (unsigned int)(v30 - 1) > 1 )
      {
        WdLogSingleEntry2(3LL, -1073741811LL, 13576LL);
LABEL_64:
        v38 = 0LL;
        goto LABEL_127;
      }
      ++v27;
    }
    while ( v27 < v28 );
  }
  v32 = 8LL * v75[0];
  if ( !is_mul_ok(v75[0], 8uLL) )
    v32 = -1LL;
  v33 = __CFADD__(v32, 8LL);
  v34 = v32 + 8;
  if ( v33 )
    v34 = -1LL;
  v35 = (char *)operator new[](v34, 0x4B677844u, 256LL);
  if ( v35 )
  {
    v36 = v75[0];
    *(_QWORD *)v35 = v75[0];
    v80 = (DXGALLOCATIONREFERENCE *)(v35 + 8);
    `vector constructor iterator'(
      v35 + 8,
      8LL,
      v36,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v37 = v80;
  }
  else
  {
    v37 = 0LL;
    v80 = 0LL;
  }
  if ( !v37 )
  {
    LODWORD(v15) = -1073741801;
    WdLogSingleEntry2(6LL, -1073741801LL, 13585LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGALLOCATIONREFERENCE array, returning 0x%I64x",
      -1073741801LL,
      13585LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_64;
  }
  v39 = 8LL * v75[0];
  if ( !is_mul_ok(v75[0], 8uLL) )
    v39 = -1LL;
  v40 = operator new[](v39, 0x4B677844u, 256LL);
  Size = v40;
  if ( !v40 )
  {
    LODWORD(v15) = -1073741801;
    WdLogSingleEntry2(6LL, -1073741801LL, 13593LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate PVIDMM_MULTI_ALLOC array, returning 0x%I64x",
      -1073741801LL,
      13593LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_126;
  }
  v41 = 0;
  v42 = -1;
  v43 = 0;
  v85 = 0;
  if ( v8->NumOperations )
  {
    v44 = (_QWORD *)(v40 - 8);
    v45 = v80;
    v94 = (char *)v80 - v40;
    do
    {
      v46 = &v8->Operations[(unsigned __int64)v43];
      v95 = v46;
      if ( v46->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || v46->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        hAllocation = v46->Map.hAllocation;
        if ( v41 != hAllocation )
        {
          v77 = v46->Map.hAllocation;
          LODWORD(v76) = v42 + 1;
          v93 = v44 + 1;
          v82 = (DXGALLOCATIONREFERENCE *)((char *)v45 + 8 * v42 + 8);
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v81,
                                                        (DXGALLOCATIONREFERENCE *)&v92,
                                                        hAllocation);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v82, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92);
          v44 = v93;
          v49 = *(_QWORD *)((char *)v93 + (_QWORD)v94);
          if ( !v49 )
          {
            WdLogSingleEntry3(3LL, v77, -1073741811LL, 13624LL);
LABEL_126:
            v38 = (void *)Size;
LABEL_127:
            operator delete(v38);
            operator delete(v8->Operations);
            if ( v80 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v80);
LABEL_35:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v88);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
            if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
            if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v71);
            return (unsigned int)v15;
          }
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v89 + 2) + 16LL) )
          {
            WdLogSingleEntry3(2LL, v89, v49, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              (__int64)v89,
              *(_QWORD *)v82,
              -1073741811LL,
              0LL,
              0LL);
            goto LABEL_126;
          }
          *v93 = *(_QWORD *)(v49 + 24);
          v46 = v95;
          v45 = v80;
          v43 = v85;
          v41 = v77;
          v42 = (int)v76;
        }
        v46->Map.hAllocation = v42;
      }
      v85 = ++v43;
    }
    while ( v43 < v8->NumOperations );
  }
  v82 = (struct DXGPROCESS *)((char *)v81 + 248);
  while ( 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v78, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v78);
    LODWORD(v76) = v8->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v82);
    v51 = ((unsigned int)v76 >> 6) & 0xFFFFFF;
    if ( v51 >= *((_DWORD *)v81 + 74) )
      goto LABEL_89;
    v52 = 2LL * v51;
    v53 = *((_QWORD *)v81 + 35);
    v54 = *(_DWORD *)(v53 + 16LL * v51 + 8);
    if ( (((unsigned int)v76 >> 25) & 0x60) != (v54 & 0x60) )
      goto LABEL_89;
    if ( (v54 & 0x2000) != 0 )
      goto LABEL_89;
    v55 = v54 & 0x1F;
    if ( !v55 )
      goto LABEL_89;
    if ( v55 != 11 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_89:
      v76 = 0LL;
      goto LABEL_90;
    }
    v76 = *(char **)(v53 + 8 * v52);
LABEL_90:
    v56 = v82;
    _InterlockedAdd((volatile signed __int32 *)v82 + 4, 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v56, 0LL);
    KeLeaveCriticalRegion();
    if ( !v76 )
    {
      WdLogSingleEntry2(3LL, v8->hFenceObject, -1073741811LL);
      goto LABEL_124;
    }
    v57 = (struct DXGDEVICE *)*((_QWORD *)v76 + 2);
    if ( v57 != v86 )
    {
      WdLogSingleEntry3(2LL, v57, v86, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Monitored fence device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
        *((_QWORD *)v76 + 2),
        (__int64)v86,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_124;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v87, *((struct DXGSYNCOBJECT **)v76 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v87);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)v76 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v76 + 2) + 16LL));
    Object = 0LL;
    v59 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, _QWORD, _QWORD, size_t, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v89 + 2) + 760LL) + 8LL) + 1008LL))(
            *(_QWORD *)(*((_QWORD *)v89 + 2) + 768LL),
            v8,
            *(_QWORD *)&v75[1],
            v75[0],
            Size,
            VidSchSyncObject,
            &Object);
    v15 = v59;
    if ( v59 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v97);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v87);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v78);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v60, (const EVENT_DESCRIPTOR *)"g", v61, 68);
    v62 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v15 = v62;
    if ( !v62 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      WdLogSingleEntry1(3LL, 13721LL);
      LODWORD(v15) = -1073741130;
LABEL_108:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v87);
LABEL_124:
      if ( v79 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v78);
      goto LABEL_126;
    }
    if ( (_DWORD)v15 )
    {
      v64 = 13728LL;
      goto LABEL_107;
    }
    v63 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97, 0LL);
    v15 = v63;
    if ( v63 < 0 )
    {
      v64 = 13738LL;
LABEL_107:
      WdLogSingleEntry2(3LL, v15, v64);
      goto LABEL_108;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v87);
    if ( v79 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v78);
  }
  if ( v59 < 0 )
  {
    v64 = 13745LL;
    goto LABEL_107;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v87);
  if ( v79 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v78);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v80);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v97);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v88);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
  if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
  if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v71);
  return 0LL;
}
