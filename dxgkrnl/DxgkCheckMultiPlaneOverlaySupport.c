__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  bool v10; // bl
  ULONG64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // r12
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // sf
  size_t v25; // r8
  const void *v26; // rdx
  char *v27; // rcx
  ADAPTER_RENDER **v28; // r15
  __int64 v29; // rbx
  __int64 v30; // r9
  int v31; // eax
  unsigned int v32; // r13d
  __int64 v33; // rcx
  __int64 v34; // r8
  _DWORD *v35; // rdx
  __int64 v36; // rbx
  __int64 CurrentProcess; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // [rsp+50h] [rbp-138h] BYREF
  __int64 v41; // [rsp+58h] [rbp-130h]
  char v42; // [rsp+60h] [rbp-128h]
  size_t Size; // [rsp+68h] [rbp-120h] BYREF
  int v44; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v45; // [rsp+74h] [rbp-114h]
  ULONG64 v46; // [rsp+78h] [rbp-110h]
  unsigned int v47; // [rsp+80h] [rbp-108h]
  struct DXGPROCESS *v48[2]; // [rsp+88h] [rbp-100h] BYREF
  struct DXGDEVICE *v49[2]; // [rsp+98h] [rbp-F0h] BYREF
  void *Src[2]; // [rsp+A8h] [rbp-E0h]
  __int64 v51; // [rsp+B8h] [rbp-D0h]
  _BYTE v52[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v46 = a1;
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2093);
  Current = DXGPROCESS::GetCurrent(v4);
  v48[0] = Current;
  if ( !Current )
  {
    v6 = -1073741811;
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
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v11;
  v51 = *(_QWORD *)(v11 + 16);
  v12 = (unsigned __int64)Src[0] >> 32;
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v36 = HIDWORD(Src[0]);
    CurrentProcess = PsGetCurrentProcess(v12);
    v6 = -1073741811;
    WdLogSingleEntry3(2LL, (unsigned int)v36, -1073741811LL, CurrentProcess);
    v39 = PsGetCurrentProcess(v38);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v36,
      -1073741811LL,
      v39,
      0LL,
      0LL);
LABEL_54:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_56:
      if ( v9 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v40);
    }
    return v6;
  }
  v13 = (unsigned __int64)Src[0] >> 32;
  v14 = 120 * v12;
  v15 = -1;
  if ( v14 <= 0xFFFFFFFF )
    v15 = v14;
  LODWORD(Size) = v15;
  v6 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v45 = v6;
  v47 = v6;
  if ( v14 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 7511LL);
    goto LABEL_54;
  }
  v16 = 120 * v13;
  if ( !is_mul_ok(v13, 0x78uLL) )
    v16 = -1LL;
  v18 = (struct DXGDEVICE *)operator new[](v16, 0x4B677844u, 256LL);
  v49[1] = v18;
  if ( !v18 )
  {
    v19 = PsGetCurrentProcess(v17);
    v20 = -1073741801;
    WdLogSingleEntry2(3LL, -1073741801LL, v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 )
      return v20;
    LOBYTE(v21) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_21:
    if ( v23 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v40);
    return v20;
  }
  v25 = (unsigned int)Size;
  v26 = Src[1];
  v27 = (char *)Src[1] + (unsigned int)Size;
  if ( v27 < Src[1] || (unsigned __int64)v27 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v26, v25);
  v49[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&Size,
    (unsigned int)Src[0],
    (struct _KTHREAD **)v48[0],
    v49);
  v28 = (ADAPTER_RENDER **)v49[0];
  if ( !v49[0] )
  {
    v29 = LODWORD(Src[0]);
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
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
    operator delete(v18);
    if ( Size && _InterlockedExchangeAdd64((volatile signed __int64 *)(Size + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(Size + 16), (struct DXGDEVICE *)Size);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_56;
    }
    return v6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v49[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, (__int64)v28, 2, v30, 0);
  v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v52, 0LL);
  v32 = v31;
  if ( v31 >= 0 )
  {
    v44 = 0;
    if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                v28,
                HIDWORD(Src[0]),
                (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)v18,
                v10,
                &v44) < 0 )
    {
      v20 = v45;
    }
    else
    {
      v35 = (_DWORD *)(v46 + 16);
      if ( v46 + 16 >= MmUserProbeAddress )
        v35 = (_DWORD *)MmUserProbeAddress;
      *v35 = v44;
      v20 = v45;
    }
    operator delete(v18);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v52);
    if ( v48[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    if ( Size && _InterlockedExchangeAdd64((volatile signed __int64 *)(Size + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(Size + 16), (struct DXGDEVICE *)Size);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( !v42 )
      return v20;
    v23 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_21;
  }
  WdLogSingleEntry2(3LL, v28, v31);
  operator delete(v18);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v52);
  if ( v48[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
  if ( Size && _InterlockedExchangeAdd64((volatile signed __int64 *)(Size + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(Size + 16), (struct DXGDEVICE *)Size);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v40);
  return v32;
}
