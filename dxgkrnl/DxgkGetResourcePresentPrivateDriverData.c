__int64 __fastcall DxgkGetResourcePresentPrivateDriverData(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct CRefCountedBuffer *v3; // r15
  _OWORD *v4; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // sf
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  struct _EX_RUNDOWN_REF *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // eax
  unsigned int PresentPrivateDriverDataFromResource; // r12d
  __int64 v18; // rcx
  __int64 v19; // r8
  KSPIN_LOCK *v21; // rcx
  size_t v22; // r8
  _DWORD *v23; // rdx
  void *v24; // rcx
  struct DXGDEVICE *v25; // [rsp+50h] [rbp-128h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+58h] [rbp-120h] BYREF
  int v27; // [rsp+60h] [rbp-118h] BYREF
  __int64 v28; // [rsp+68h] [rbp-110h]
  char v29; // [rsp+70h] [rbp-108h]
  ULONG64 v30; // [rsp+78h] [rbp-100h]
  struct DXGDEVICE *v31; // [rsp+80h] [rbp-F8h] BYREF
  unsigned int v32; // [rsp+88h] [rbp-F0h]
  struct CRefCountedBuffer *v33; // [rsp+90h] [rbp-E8h] BYREF
  size_t Size[2]; // [rsp+98h] [rbp-E0h] BYREF
  struct _EX_RUNDOWN_REF *v35; // [rsp+A8h] [rbp-D0h] BYREF
  _BYTE v36[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v30 = a1;
  v3 = 0LL;
  v33 = 0LL;
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v4;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2123;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(MmUserProbeAddress, &EventProfilerEnter, a3, 2123);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2123);
  Current = DXGPROCESS::GetCurrent(v5);
  v7 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid DXG proces, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( !v29 )
      return 3221225485LL;
    v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_32:
    if ( v10 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v27);
    return 3221225485LL;
  }
  v26 = 0LL;
  ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                              (__int64)Current,
                                              (DXGRESOURCEREFERENCE *)&v35,
                                              Size[0]);
  DXGRESOURCEREFERENCE::MoveAssign(&v26, ResourceSafe);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v35);
  v12 = v26;
  if ( !v26 )
  {
    v13 = LODWORD(Size[0]);
    WdLogSingleEntry2(2LL, LODWORD(Size[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid resource hande (0x%I64x) specified, returning 0x%I64x",
      v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_13:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
    goto LABEL_9;
  }
  v32 = *(_DWORD *)(v26[1].Count + 468);
  v31 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v32, v7, &v31);
  if ( !v31 )
  {
    v15 = v32;
    WdLogSingleEntry2(2LL, v32, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v15,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    goto LABEL_13;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v31, 0, v14, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
  PresentPrivateDriverDataFromResource = v16;
  if ( v16 >= 0 )
  {
    if ( (HIDWORD(v12->Ptr) & 1) == 0 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Shared resource is expected, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
      if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( !v29 )
        return 3221225485LL;
      LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v10 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_32;
    }
    v21 = *(KSPIN_LOCK **)(v12[7].Count + 176);
    if ( v21 )
    {
      PresentPrivateDriverDataFromResource = GetPresentPrivateDriverDataFromResource(
                                               v21,
                                               (KSPIN_LOCK *)&v33,
                                               (struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA *)Size);
      v3 = v33;
      v22 = HIDWORD(Size[0]);
    }
    else
    {
      WdLogSingleEntry2(3LL, 0LL, 13909LL);
      v22 = 0LL;
      HIDWORD(Size[0]) = 0;
    }
    v23 = (_DWORD *)(v30 + 4);
    if ( v30 + 4 >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = v22;
    if ( (_DWORD)v22 && v3 )
    {
      v24 = (void *)Size[1];
      if ( v22 + Size[1] > MmUserProbeAddress || v22 + Size[1] <= Size[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v24, (char *)v3 + 16, v22);
    }
    if ( v3 )
      CRefCountedBuffer::RefCountedBufferRelease(v3);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    if ( v25 )
      goto LABEL_20;
  }
  else
  {
    WdLogSingleEntry2(4LL, v16, v31);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    if ( v25 )
    {
LABEL_20:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
    }
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v27);
  return PresentPrivateDriverDataFromResource;
}
