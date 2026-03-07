__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  bool v10; // bl
  _OWORD *v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // sf
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  struct DXGDEVICE *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t v25; // r8
  const void *v26; // rdx
  char *v27; // rcx
  ADAPTER_RENDER **v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r9
  int v31; // eax
  unsigned int v32; // r12d
  __int64 v33; // rcx
  __int64 v34; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v35; // r8
  _DWORD *v36; // rdx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v37; // rdx
  __int64 v38; // rbx
  __int64 CurrentProcess; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+50h] [rbp-158h] BYREF
  __int64 v43; // [rsp+58h] [rbp-150h]
  char v44; // [rsp+60h] [rbp-148h]
  size_t Size; // [rsp+68h] [rbp-140h] BYREF
  int v46; // [rsp+70h] [rbp-138h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v47; // [rsp+74h] [rbp-134h] BYREF
  ULONG64 v48; // [rsp+78h] [rbp-130h]
  unsigned int v49; // [rsp+80h] [rbp-128h]
  unsigned int v50; // [rsp+84h] [rbp-124h]
  struct DXGDEVICE *v51[2]; // [rsp+88h] [rbp-120h] BYREF
  _QWORD v52[2]; // [rsp+98h] [rbp-110h] BYREF
  unsigned int v53[4]; // [rsp+A8h] [rbp-100h]
  void *Src[2]; // [rsp+B8h] [rbp-F0h]
  _BYTE v55[160]; // [rsp+D0h] [rbp-D8h] BYREF

  v48 = a1;
  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2093);
  Current = DXGPROCESS::GetCurrent(v4);
  v6 = (struct _KTHREAD **)Current;
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
    goto LABEL_7;
  }
  v10 = (*((_DWORD *)Current + 106) & 4) == 0;
  v11 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v53 = *v11;
  *(_OWORD *)Src = v11[1];
  v49 = v53[2];
  if ( v53[2] - 1 > 6 )
  {
    v38 = v53[2];
    CurrentProcess = PsGetCurrentProcess(v53[2]);
    WdLogSingleEntry3(2LL, v38, -1073741811LL, CurrentProcess);
    v41 = PsGetCurrentProcess(v40);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport2 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v38,
      -1073741811LL,
      v41,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 )
    {
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_59:
      if ( v9 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v42);
    }
    return 3221225485LL;
  }
  v12 = (unsigned __int64)v53[2] << 7;
  v13 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v13 = v53[2] << 7;
  LODWORD(Size) = v13;
  v14 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v50 = v14;
  if ( v12 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 9373LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( !v44 )
      return v14;
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_17:
    if ( v17 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v42);
    return v14;
  }
  v19 = (unsigned __int64)v53[2] << 7;
  if ( !is_mul_ok(v53[2], 0x80uLL) )
    v19 = -1LL;
  v21 = (struct DXGDEVICE *)operator new[](v19, 0x4B677844u, 256LL);
  v51[1] = v21;
  if ( v21 )
  {
    v25 = (unsigned int)Size;
    v26 = Src[0];
    v27 = (char *)Src[0] + (unsigned int)Size;
    if ( v27 < Src[0] || (unsigned __int64)v27 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v21, v26, v25);
    v51[0] = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&Size, v53[1], v6, v51);
    v28 = (ADAPTER_RENDER **)v51[0];
    if ( !v51[0] )
    {
      v29 = v53[1];
      WdLogSingleEntry2(2LL, v53[1], -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v29,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      operator delete(v21);
      if ( Size && _InterlockedExchangeAdd64((volatile signed __int64 *)(Size + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(Size + 16), (struct DXGDEVICE *)Size);
LABEL_7:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 )
      {
        v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        goto LABEL_59;
      }
      return 3221225485LL;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52, v51[0]);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v28, 2, v30, 0);
    v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
    v32 = v31;
    if ( v31 >= 0 )
    {
      v46 = 0;
      v47.0 = 0;
      if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(
                  v28,
                  v49,
                  (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)v21,
                  v10,
                  &v46,
                  &v47) >= 0 )
      {
        v35 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v48;
        v36 = (_DWORD *)(v48 + 24);
        if ( v48 + 24 >= MmUserProbeAddress )
          v36 = (_DWORD *)MmUserProbeAddress;
        *v36 = v46;
        v37 = v35 + 7;
        if ( (unsigned __int64)&v35[7] >= MmUserProbeAddress )
          v37 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
        v37->0 = v47.0;
      }
      operator delete(v21);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
      if ( v52[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
      if ( Size && _InterlockedExchangeAdd64((volatile signed __int64 *)(Size + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(Size + 16), (struct DXGDEVICE *)Size);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( !v44 )
        return v14;
      v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_17;
    }
    WdLogSingleEntry2(3LL, v28, v31);
    operator delete(v21);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    if ( v52[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
    if ( Size && _InterlockedExchangeAdd64((volatile signed __int64 *)(Size + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(Size + 16), (struct DXGDEVICE *)Size);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v42);
    return v32;
  }
  else
  {
    v22 = PsGetCurrentProcess(v20);
    WdLogSingleEntry2(3LL, -1073741801LL, v22);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( v44 )
    {
      LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v42);
    }
    return 3221225495LL;
  }
}
