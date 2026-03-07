__int64 __fastcall DxgkCreateSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r13
  DXGSWAPCHAIN *v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 SurfaceCount; // rbx
  const wchar_t *v8; // r9
  _D3DKMT_CREATESWAPCHAIN *v9; // rax
  char v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  HANDLE *v20; // rcx
  struct ADAPTER_RENDER **v21; // rbx
  __int64 hDevice; // rbx
  __int64 v23; // rsi
  ULONG64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  DXGSWAPCHAIN *v28; // rax
  int v29; // eax
  int v30; // ebx
  struct DXGDEVICE *v31; // r13
  __int64 v32; // r9
  __int64 v33; // rcx
  int v34; // eax
  const wchar_t *v35; // r9
  NTSTATUS inserted; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-238h]
  PHANDLE Handle; // [rsp+28h] [rbp-230h]
  __int64 v41; // [rsp+30h] [rbp-228h]
  __int64 v42; // [rsp+38h] [rbp-220h]
  char v43; // [rsp+50h] [rbp-208h]
  struct DXGDEVICE *v44; // [rsp+58h] [rbp-200h] BYREF
  int v45; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-1F0h]
  char v47; // [rsp+70h] [rbp-1E8h]
  __int64 v48; // [rsp+78h] [rbp-1E0h]
  _QWORD v49[3]; // [rsp+80h] [rbp-1D8h] BYREF
  HANDLE v50; // [rsp+98h] [rbp-1C0h] BYREF
  _D3DKMT_CREATESWAPCHAIN v51; // [rsp+A0h] [rbp-1B8h] BYREF
  struct DXGDEVICE *v52; // [rsp+D8h] [rbp-180h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-178h] BYREF
  void *v54; // [rsp+E8h] [rbp-170h]
  struct DXGDEVICE *v55; // [rsp+F0h] [rbp-168h] BYREF
  ULONG64 v56; // [rsp+F8h] [rbp-160h]
  _BYTE v57[160]; // [rsp+100h] [rbp-158h] BYREF
  _BYTE v58[128]; // [rsp+1A0h] [rbp-B8h] BYREF

  v3 = a1;
  v56 = a1;
  v48 = a1;
  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2108);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2108);
  v4 = 0LL;
  v43 = 0;
  Object = 0LL;
  v50 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    SurfaceCount = 426LL;
    WdLogSingleEntry1(2LL, 426LL);
    v8 = L"Invalid process context";
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, SurfaceCount, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v45);
    }
    return -1073741811LL;
  }
  v9 = (_D3DKMT_CREATESWAPCHAIN *)v3;
  if ( v3 >= MmUserProbeAddress )
    v9 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v51 = *v9;
  v10 = (char)v51.Flags.0;
  if ( (*(_BYTE *)&v51.Flags.0 & 2) != 0 )
  {
    if ( v51.SurfaceCount )
    {
      SurfaceCount = 449LL;
      WdLogSingleEntry1(2LL, 449LL);
      v8 = L"In non-sequence mode create cannot have any surfaces, add surface should be used to add them";
      goto LABEL_18;
    }
    if ( !v51.bProducer )
    {
      SurfaceCount = 456LL;
      WdLogSingleEntry1(2LL, 456LL);
      v8 = L"In non-sequence mode create has to be the producer";
      goto LABEL_18;
    }
  }
  else
  {
    if ( v51.SurfaceCount > 0x32 )
    {
      SurfaceCount = v51.SurfaceCount;
      WdLogSingleEntry1(2LL, v51.SurfaceCount);
      v8 = L"Caller requested 0x%I64x buffers, this is over the maximum";
      goto LABEL_18;
    }
    if ( !v51.SurfaceCount )
    {
      SurfaceCount = 470LL;
      WdLogSingleEntry1(2LL, 470LL);
      v8 = L"Cannot create swapchain with zero buffers";
      goto LABEL_18;
    }
  }
  v14 = 0LL;
  v54 = 0LL;
  if ( v51.SurfaceCount )
  {
    v15 = v51.SurfaceCount;
    v16 = 8LL * v51.SurfaceCount;
    if ( !is_mul_ok(v51.SurfaceCount, 8uLL) )
      v16 = -1LL;
    v14 = (void *)operator new[](v16, 0x4B677844u, 256LL);
    v54 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(6LL, 482LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating memory for handles array",
        482LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v45);
      return 3221225495LL;
    }
    pNtSurfaceHandles = v51.pNtSurfaceHandles;
    v20 = &v51.pNtSurfaceHandles[v15];
    if ( v20 < v51.pNtSurfaceHandles || (unsigned __int64)v20 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, pNtSurfaceHandles, 8 * v15);
    v51.pNtSurfaceHandles = (HANDLE *)v14;
  }
  v55 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v51.hDevice, Current, &v55);
  v21 = (struct ADAPTER_RENDER **)v55;
  if ( !v55 )
  {
    hDevice = v51.hDevice;
    LODWORD(v23) = -1073741811;
    WdLogSingleEntry2(2LL, v51.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_36:
    if ( v44 )
    {
      v24 = -1LL;
      v25 = _InterlockedDecrement64((volatile signed __int64 *)v44 + 8);
      if ( !v25 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    }
    goto LABEL_70;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49, v55);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v57, (__int64)v21, 2, v27, 0);
  LODWORD(v23) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v57, 0LL);
  if ( (int)v23 < 0 )
    goto LABEL_40;
  v28 = (DXGSWAPCHAIN *)operator new[](0xF0uLL, 0x4B677844u, 256LL);
  if ( v28 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v28);
  else
    v4 = 0LL;
  v49[2] = v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(6LL, 521LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DXGSWAPCHAIN class",
      521LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v23) = -1073741801;
    goto LABEL_40;
  }
  LODWORD(v23) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, v21[2], &v51);
  if ( (int)v23 < 0
    || (LODWORD(v23) = DXGSWAPCHAIN::OpenSwapchainLocal(
                         v4,
                         v51.hDevice,
                         (struct DXGDEVICE *)v21,
                         (__int64)v51.BufferAvailableEvent,
                         v10 & 1,
                         v51.bProducer),
        (int)v23 < 0) )
  {
LABEL_40:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
    if ( v49[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
    goto LABEL_36;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v57);
  if ( v49[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v49);
  if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
  v52 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v58, v4, v51.bProducer, 1);
  v29 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v58, &v52, 1);
  v23 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry1(2LL, v29);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire swapchain and device lock (0x%I64x)",
      v23,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_56:
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v58);
    goto LABEL_70;
  }
  v30 = 0;
  if ( v51.SurfaceCount )
  {
    v31 = v52;
    while ( 1 )
    {
      LODWORD(v23) = DXGSWAPCHAIN::AddSurface(
                       (struct _KTHREAD **)v4,
                       *((DXGADAPTER ***)v31 + 2),
                       v51.bProducer,
                       v51.pNtSurfaceHandles[v30],
                       (unsigned int *)&v52);
      if ( (int)v23 < 0 )
        goto LABEL_56;
      if ( ++v30 >= v51.SurfaceCount )
      {
        v3 = v56;
        break;
      }
    }
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v58);
  LOBYTE(v32) = 1;
  LOBYTE(v33) = 1;
  v34 = ObCreateObject(v33, g_pDxgkSharedSwapChainObjectType, v51.pObjectAttributes, v32, 0LL, 8, 248, 0, &Object);
  v23 = v34;
  if ( v34 >= 0 )
  {
    *(_QWORD *)Object = v4;
    v43 = 1;
    inserted = ObInsertObject(Object, 0LL, v51.DesiredAccess, 0, 0LL, &v50);
    v23 = inserted;
    if ( inserted >= 0 )
    {
      v24 = v3 + 48;
      v25 = MmUserProbeAddress;
      if ( v3 + 48 >= MmUserProbeAddress )
        v24 = MmUserProbeAddress;
      *(_QWORD *)v24 = v50;
      goto LABEL_70;
    }
    WdLogSingleEntry1(2LL, inserted);
    v35 = L"Failed to create Nt handle for swapchain (0x%I64x)";
  }
  else
  {
    WdLogSingleEntry1(2LL, v34);
    v35 = L"Failed to create Nt swapchain object (0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v35, v23, 0LL, 0LL, 0LL, 0LL);
LABEL_70:
  if ( (int)v23 < 0 )
  {
    v25 = (__int64)v50;
    if ( v50 )
      ObCloseHandle(v50, 1);
    if ( v4 && !v43 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v14 )
    operator delete(v14);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
  {
    LODWORD(v42) = v51.SurfaceCount;
    LODWORD(v41) = v51.hDevice;
    LODWORD(Handle) = v51.bProducer;
    LODWORD(NewObject) = v23;
    McTemplateK0pqdqqpp_EtwWriteTransfer(v25, v24, v26, v4, NewObject, Handle, v41, v42, v51.BufferAvailableEvent, v50);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v45);
  return (unsigned int)v23;
}
