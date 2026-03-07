__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, char *a3)
{
  DXGPROCESS *Current; // r8
  struct _D3DKMT_EVICT *v7; // rax
  struct _D3DKMT_EVICT *v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct DXGALLOCATIONREFERENCE *v11; // rsi
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // r9
  int v14; // ebx
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // rbx
  unsigned int *v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned int *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  struct DXGDEVICE *v23; // r8
  __int64 v24; // rsi
  __int64 v25; // r8
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  const wchar_t *v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rsi
  struct D3DDDI_EVICT_FLAGS v36; // ebx
  unsigned int v37; // edi
  unsigned int HostProcess; // eax
  char v39; // [rsp+50h] [rbp-248h]
  struct DXGDEVICE *v40; // [rsp+58h] [rbp-240h] BYREF
  int v41; // [rsp+60h] [rbp-238h] BYREF
  __int64 v42; // [rsp+68h] [rbp-230h]
  char v43; // [rsp+70h] [rbp-228h]
  struct _D3DKMT_EVICT *v44; // [rsp+78h] [rbp-220h]
  __int64 v45; // [rsp+80h] [rbp-218h] BYREF
  unsigned int *v46; // [rsp+88h] [rbp-210h]
  int v47; // [rsp+90h] [rbp-208h]
  struct DXGDEVICE *v48; // [rsp+98h] [rbp-200h] BYREF
  struct DXGALLOCATIONREFERENCE *v49; // [rsp+A0h] [rbp-1F8h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-1F0h] BYREF
  unsigned int v51; // [rsp+B0h] [rbp-1E8h]
  int v52; // [rsp+B4h] [rbp-1E4h]
  unsigned int v53[2]; // [rsp+B8h] [rbp-1E0h]
  struct _D3DKMT_EVICT *v54; // [rsp+C0h] [rbp-1D8h]
  struct D3DDDI_EVICT_FLAGS *p_Flags; // [rsp+C8h] [rbp-1D0h]
  __int64 v56; // [rsp+D0h] [rbp-1C8h]
  _BYTE v57[16]; // [rsp+D8h] [rbp-1C0h] BYREF
  unsigned int *v58; // [rsp+E8h] [rbp-1B0h]
  DXGPROCESS *v59; // [rsp+F0h] [rbp-1A8h]
  unsigned int *v60; // [rsp+F8h] [rbp-1A0h]
  _BYTE v61[24]; // [rsp+100h] [rbp-198h] BYREF
  __int128 v62; // [rsp+118h] [rbp-180h] BYREF
  __int128 v63; // [rsp+128h] [rbp-170h]
  struct DXGALLOCATIONREFERENCE *v64; // [rsp+140h] [rbp-158h] BYREF
  char v65; // [rsp+148h] [rbp-150h] BYREF
  int v66; // [rsp+1C8h] [rbp-D0h]
  _BYTE v67[160]; // [rsp+1D0h] [rbp-C8h] BYREF

  v47 = a2;
  v44 = a1;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2116);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2116);
  Current = DXGPROCESS::GetCurrent();
  v59 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v30 = L"Invalid process context, returning 0x%I64x";
LABEL_50:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v30, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_69;
  }
  v62 = 0LL;
  v63 = 0LL;
  if ( a2 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    v62 = *(_OWORD *)&v7->hDevice;
    v63 = *(_OWORD *)&v7->Flags.0;
    v8 = (struct _D3DKMT_EVICT *)&v62;
    v54 = (struct _D3DKMT_EVICT *)&v62;
  }
  else
  {
    v8 = a1;
    v54 = a1;
  }
  if ( !v8->NumAllocations )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v30 = L"Call to DxgkEvict contained no allocations, returning 0x%I64x";
    goto LABEL_50;
  }
  if ( !v8->AllocationList )
  {
    WdLogSingleEntry1(2LL, 780LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"AllocationList passed to DxgkEvict cannot be NULL.",
      780LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_69:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v41);
    return 3221225485LL;
  }
  p_Flags = &v8->Flags;
  if ( v8->Flags.Value >= 4 )
  {
    WdLogSingleEntry1(2LL, 787LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Reserved flags passed to DxgkEvict should be all zeros.",
      787LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_69;
  }
  v64 = (struct DXGALLOCATIONREFERENCE *)&v65;
  v9 = 0LL;
  v10 = 16LL;
  do
  {
    *(_QWORD *)((char *)v64 + v9) = 0LL;
    v9 += 8LL;
    --v10;
  }
  while ( v10 );
  v66 = 16;
  v11 = v64;
  v49 = v64;
  v48 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v8->hDevice, (struct _KTHREAD **)Current, &v48);
  v12 = v48;
  if ( !v48 )
  {
    WdLogSingleEntry1(3LL, v8->hDevice);
LABEL_65:
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v64);
    goto LABEL_69;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v57,
    v48);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, (__int64)v12, 0, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v67, a3);
  if ( v14 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v57);
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v41);
    return (unsigned int)v14;
  }
  NumAllocations = v8->NumAllocations;
  v56 = NumAllocations;
  AllocationList = (unsigned int *)v8->AllocationList;
  v46 = AllocationList;
  v17 = &AllocationList[NumAllocations];
  v60 = v17;
  if ( v17 < AllocationList )
  {
    WdLogSingleEntry1(3LL, NumAllocations);
LABEL_64:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v57);
    goto LABEL_65;
  }
  v39 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 209LL);
  v18 = 0LL;
  v50 = 0LL;
  while ( AllocationList != v17 )
  {
    v19 = 16LL;
    if ( (unsigned int)NumAllocations < 0x10 )
      v19 = (unsigned int)NumAllocations;
    v52 = v19;
    v58 = &AllocationList[v19];
    *(_QWORD *)v53 = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v61, *(struct DXGPROCESS **)v53);
    while ( AllocationList != v58 )
    {
      if ( v47 )
      {
        v20 = AllocationList;
        if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
          v20 = (unsigned int *)MmUserProbeAddress;
        v21 = *v20;
        LODWORD(v46) = v21;
        v51 = v21;
        v8 = v54;
        v12 = v48;
      }
      else
      {
        v21 = *AllocationList;
        LODWORD(v46) = v21;
        v51 = v21;
      }
      DXGPROCESS::GetAllocationUnsafe(*(__int64 *)v53, (DXGALLOCATIONREFERENCE *)&v45, v21);
      v22 = v45;
      if ( !v45 )
      {
        WdLogSingleEntry1(3LL, (unsigned int)v46);
        goto LABEL_63;
      }
      v23 = *(struct DXGDEVICE **)(v45 + 8);
      if ( v23 != v12 )
      {
        WdLogSingleEntry2(3LL, v12, v23);
LABEL_63:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v45);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v48 + 2) + 736LL) + 8LL) + 208LL))(
          *((_QWORD *)v48 + 100),
          11LL);
        goto LABEL_64;
      }
      if ( *(_QWORD *)v11 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v11 + 88LL));
        v22 = v45;
      }
      *(_QWORD *)v11 = v22;
      v45 = 0LL;
      v11 = (struct DXGALLOCATIONREFERENCE *)((char *)v11 + 8);
      v46 = ++AllocationList;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v45);
    }
    v24 = (v11 - v49) >> 3;
    *(_QWORD *)v53 = v24;
    if ( v39 )
    {
      v35 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
      v36.0 = (struct D3DDDI_EVICT_FLAGS::$E7212E13AE7D8E335D08FC594CA6B628::$D06293F7ED6D7321B9AED12FAD2D769E)p_Flags->Value;
      v37 = *((_DWORD *)v12 + 118);
      HostProcess = DXGPROCESS::GetHostProcess(v59);
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v35 + 4472),
        HostProcess,
        v37,
        v36,
        v53[0],
        v49,
        &v50);
      v12 = v48;
      AllocationList = v46;
      v11 = v49;
    }
    else
    {
      v25 = (unsigned int)v24;
      v11 = v49;
      DXGDEVICE::Evict(v12, v49, v25, (struct D3DDDI_EVICT_FLAGS)p_Flags->0, &v50);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61);
    LODWORD(NumAllocations) = v56 - v52;
    v56 = (unsigned int)(v56 - v52);
    v18 = v50;
    v17 = v60;
  }
  if ( v47 )
  {
    p_NumBytesToTrim = &v44->NumBytesToTrim;
    if ( (unsigned __int64)&v44->NumBytesToTrim >= MmUserProbeAddress )
      p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
    *p_NumBytesToTrim = v50;
  }
  else
  {
    v8->NumBytesToTrim = v18;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v57);
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v64);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v41);
  return 0LL;
}
