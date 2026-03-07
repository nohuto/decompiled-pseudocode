__int64 __fastcall DxgkRemoveSurfaceFromSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *v3; // rbx
  BOOL bProducer; // edi
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  struct _KTHREAD ***v13; // rsi
  struct DXGSWAPCHAIN *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r8
  PVOID *Object; // [rsp+20h] [rbp-128h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-120h]
  int v19; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-F0h]
  char v21; // [rsp+60h] [rbp-E8h]
  PVOID v22; // [rsp+68h] [rbp-E0h] BYREF
  struct DXGDEVICE *v23; // [rsp+70h] [rbp-D8h] BYREF
  struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN Handle; // [rsp+78h] [rbp-D0h] BYREF
  _BYTE v25[128]; // [rsp+A0h] [rbp-A8h] BYREF

  v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)a1;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2200);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2200);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _D3DKMT_REMOVESURFACEFROMSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v3;
  bProducer = Handle.bProducer;
  if ( Handle.bProducer )
  {
    v22 = 0LL;
    v8 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v22, 0LL);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v13 = (struct _KTHREAD ***)v22;
      v14 = *(struct DXGSWAPCHAIN **)v22;
      v23 = 0LL;
      DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v25, v14, 1, 1);
      v9 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v25, &v23, 1);
      if ( (v9 & 0x80000000) == 0 )
        v9 = DXGSWAPCHAIN::RemoveSurface(*v13, &Handle);
      ObfDereferenceObject(v13);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
      {
        LODWORD(HandleInformation) = bProducer;
        LODWORD(Object) = v9;
        McTemplateK0pqqpq_EtwWriteTransfer(
          v15,
          &EventIndirectSwapChainRemoveSurface,
          v16,
          v14,
          Object,
          HandleInformation,
          Handle.hNtSurfaceHandle,
          Handle.BufferIdx);
      }
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( !v21 )
        return v9;
      v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    else
    {
      WdLogSingleEntry2(3LL, Handle.hNtSwapChain, v8);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
      if ( !v21 )
        return v9;
      LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    }
    if ( v12 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v19);
    return v9;
  }
  WdLogSingleEntry1(2LL, 946LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"RemoveSurface is not allowed for consumer",
    946LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v19);
  }
  return 3221225485LL;
}
