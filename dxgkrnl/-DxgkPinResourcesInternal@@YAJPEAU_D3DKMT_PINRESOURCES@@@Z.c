__int64 __fastcall DxgkPinResourcesInternal(struct _D3DKMT_PINRESOURCES *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  bool v10; // r12
  struct _D3DKMT_PINRESOURCES *v11; // rax
  __int64 v12; // r13
  DXGDEVICE *v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // eax
  DXGPAGINGQUEUE *v16; // rbx
  __int64 v17; // rbx
  DXGPAGINGQUEUE *v18; // rcx
  __int64 v19; // rbx
  struct DXGRESOURCEREFERENCE *v20; // r8
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v25; // eax
  unsigned int v26; // r13d
  unsigned int *v27; // rdx
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  struct _EX_RUNDOWN_REF *v29; // r8
  unsigned int i; // ecx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  unsigned int v35; // r13d
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // edi
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGDEVICE *v42; // [rsp+50h] [rbp-1B8h] BYREF
  int v43; // [rsp+58h] [rbp-1B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-1A8h]
  char v45; // [rsp+68h] [rbp-1A0h]
  struct _D3DKMT_PINRESOURCES *v46; // [rsp+70h] [rbp-198h]
  unsigned int v47; // [rsp+78h] [rbp-190h]
  DXGPAGINGQUEUE *v48; // [rsp+80h] [rbp-188h] BYREF
  unsigned int v49; // [rsp+88h] [rbp-180h]
  unsigned int v50; // [rsp+8Ch] [rbp-17Ch]
  struct DXGPROCESS *v51; // [rsp+90h] [rbp-178h] BYREF
  struct DXGRESOURCEREFERENCE *v52; // [rsp+98h] [rbp-170h]
  unsigned int v53; // [rsp+A0h] [rbp-168h]
  struct _EX_RUNDOWN_REF **v54; // [rsp+A8h] [rbp-160h]
  _QWORD v55[2]; // [rsp+B0h] [rbp-158h] BYREF
  DXGDEVICE *v56; // [rsp+C0h] [rbp-148h] BYREF
  struct DXGPAGINGQUEUE *v57; // [rsp+C8h] [rbp-140h] BYREF
  struct DXGPAGINGQUEUE *v58; // [rsp+D0h] [rbp-138h]
  unsigned int v59[4]; // [rsp+D8h] [rbp-130h]
  unsigned int v60[4]; // [rsp+E8h] [rbp-120h]
  unsigned int v61; // [rsp+F8h] [rbp-110h]
  struct _EX_RUNDOWN_REF *v62; // [rsp+100h] [rbp-108h] BYREF
  __int64 v63[5]; // [rsp+108h] [rbp-100h] BYREF
  int v64; // [rsp+130h] [rbp-D8h]
  _BYTE v65[160]; // [rsp+140h] [rbp-C8h] BYREF

  v46 = a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2079);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2079);
  Current = DXGPROCESS::GetCurrent(v4);
  v6 = (struct _KTHREAD **)Current;
  v51 = Current;
  if ( !Current )
  {
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 )
      return 3221225485LL;
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_104:
    if ( v9 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v43);
    return 3221225485LL;
  }
  v10 = (*((_DWORD *)Current + 106) & 4) == 0;
  v11 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v11 = (struct _D3DKMT_PINRESOURCES *)MmUserProbeAddress;
  *(_OWORD *)v59 = *(_OWORD *)v11;
  *(_OWORD *)v60 = *((_OWORD *)v11 + 1);
  v56 = 0LL;
  v12 = v59[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v59[0], v6, &v56);
  v13 = v56;
  if ( !v56 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v12, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_13:
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    goto LABEL_7;
  }
  v53 = v60[0];
  if ( (v60[0] & 1) != 0 )
  {
    if ( v60[1] )
    {
      WdLogSingleEntry1(2LL, 6207LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Pinning DirectFlip resources may not specify a paging queue",
        6207LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_13;
    }
  }
  else
  {
    v14 = *(_QWORD *)(*((_QWORD *)v56 + 2) + 16LL);
    if ( (*(_DWORD *)(v14 + 436) & 0x200) == 0 && !(unsigned __int8)DxgkpIsDrtEnabled(v14) )
    {
      WdLogSingleEntry1(2LL, 6218LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Pinning non-DirectFlip resources can only be done on xbox",
        6218LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_13;
    }
  }
  v55[0] = *(_QWORD *)&v59[2];
  if ( !*(_QWORD *)&v59[2] || (v15 = v59[1], (v47 = v59[1]) == 0) )
  {
    WdLogSingleEntry2(3LL, v12, -1073741811LL);
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 )
      return 3221225485LL;
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_104;
  }
  v58 = 0LL;
  v57 = 0LL;
  v16 = 0LL;
  v48 = 0LL;
  if ( v60[1] )
  {
    DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v48, v60[1], v51, &v57, 1);
    v58 = v57;
    if ( !v57 )
    {
      v17 = v60[1];
      WdLogSingleEntry1(2LL, v60[1]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hPagingQueue (0x%.8x) specified",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_27;
    }
    if ( *((DXGDEVICE **)v57 + 2) != v13 )
    {
      v19 = v60[1];
      WdLogSingleEntry2(2LL, v12, v60[1]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Paging queue must belong to the supplied device. hDevice=0x%.8x, hPagingQueue=0x%.8x",
        v12,
        v19,
        0LL,
        0LL,
        0LL);
LABEL_27:
      v18 = v48;
      if ( !v48 )
        goto LABEL_13;
LABEL_28:
      DXGPAGINGQUEUE::ReleaseReference(v18);
      goto LABEL_13;
    }
    v16 = v48;
    v15 = v47;
  }
  v63[0] = 0LL;
  v64 = 0;
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::AllocateElements(v63, v15);
  v20 = (struct DXGRESOURCEREFERENCE *)v63[0];
  v52 = (struct DXGRESOURCEREFERENCE *)v63[0];
  if ( v63[0] )
  {
    v25 = 0;
    v26 = v47;
    while ( 1 )
    {
      v49 = v25;
      if ( v25 >= v26 )
      {
        if ( (*((_BYTE *)v13 + 1901) & 1) != 0 )
        {
          PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((__int64)v63);
          if ( v16 )
            DXGPAGINGQUEUE::ReleaseReference(v16);
          if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
          if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v43);
          return 0LL;
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v13);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v13, 2, v33, 0);
          v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, 0LL);
          v35 = v34;
          if ( v34 >= 0 )
          {
            if ( (v53 & 1) != 0 )
            {
              v38 = DXGDEVICE::PinDirectFlipResources(v13, v47, v52, v10);
            }
            else
            {
              v51 = 0LL;
              v38 = DXGDEVICE::PinResources(v13, v47, v52, v58, (unsigned __int64 *)&v51);
              if ( v38 == 259 )
              {
                v39 = (_QWORD *)((char *)v46 + 24);
                if ( (unsigned __int64)v46 + 24 >= MmUserProbeAddress )
                  v39 = (_QWORD *)MmUserProbeAddress;
                *v39 = v51;
              }
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
            if ( v55[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
            PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((__int64)v63);
            if ( v16 )
              DXGPAGINGQUEUE::ReleaseReference(v16);
            if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
            if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v43);
            return v38;
          }
          else
          {
            WdLogSingleEntry2(3LL, v13, v34);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
            if ( v55[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
            PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((__int64)v63);
            if ( v16 )
              DXGPAGINGQUEUE::ReleaseReference(v16);
            if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
            if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v43);
            return v35;
          }
        }
      }
      v27 = (unsigned int *)(v55[0] + 4LL * v25);
      if ( v27 + 1 < v27 || (unsigned __int64)(v27 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v50 = *v27;
      v61 = v50;
      v54 = (struct _EX_RUNDOWN_REF **)((char *)v20 + 8 * v25);
      ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                  (__int64)v51,
                                                  (DXGRESOURCEREFERENCE *)&v62,
                                                  v50);
      DXGRESOURCEREFERENCE::MoveAssign(v54, ResourceSafe);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v62);
      v29 = *v54;
      if ( !*v54 || (HIDWORD(v29->Ptr) & 1) == 0 || !v29[7].Count )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) )
      {
        WdLogSingleEntry3(2LL, v13, v29, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
          (__int64)v13,
          (__int64)*v54,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_52;
      }
      for ( i = 0; i < v49; ++i )
      {
        if ( *((struct _EX_RUNDOWN_REF **)v52 + i) == v29 )
          goto LABEL_58;
      }
      v25 = v49 + 1;
      v20 = v52;
    }
LABEL_58:
    WdLogSingleEntry2(3LL, v50, -1073741811LL);
LABEL_52:
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((__int64)v63);
    if ( !v16 )
      goto LABEL_13;
    v18 = v16;
    goto LABEL_28;
  }
  v21 = v47;
  WdLogSingleEntry2(6LL, v47, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate temporary buffer for %d handle, returning 0x%I64x",
    v21,
    -1073741801LL,
    0LL,
    0LL,
    0LL);
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>((__int64)v63);
  if ( v16 )
    DXGPAGINGQUEUE::ReleaseReference(v16);
  if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 )
  {
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v43);
  }
  return 3221225495LL;
}
