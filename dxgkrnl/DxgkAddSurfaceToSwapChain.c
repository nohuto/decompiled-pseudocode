__int64 __fastcall DxgkAddSurfaceToSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS v8; // eax
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD ***v12; // r15
  struct DXGSWAPCHAIN *v13; // rsi
  _DWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  PVOID *Object; // [rsp+20h] [rbp-138h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-130h]
  int v21; // [rsp+50h] [rbp-108h] BYREF
  __int64 v22; // [rsp+58h] [rbp-100h]
  char v23; // [rsp+60h] [rbp-F8h]
  PVOID v24; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGDEVICE *v25; // [rsp+70h] [rbp-E8h] BYREF
  HANDLE Handle[2]; // [rsp+78h] [rbp-E0h]
  void *v27[2]; // [rsp+88h] [rbp-D0h] BYREF
  ULONG64 v28; // [rsp+98h] [rbp-C0h]
  struct DXGSWAPCHAIN *v29; // [rsp+A0h] [rbp-B8h]
  _BYTE v30[128]; // [rsp+B0h] [rbp-A8h] BYREF

  v28 = a1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2200;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2200);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2200);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  *(_OWORD *)v27 = v4[1];
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry1(2LL, 856LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkAddSurfaceToSwapChain is not allowed for consumer",
      856LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v21);
    }
    return 3221225485LL;
  }
  v24 = 0LL;
  v8 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v24, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v8);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v21);
    return (unsigned int)v9;
  }
  v12 = (struct _KTHREAD ***)v24;
  v13 = *(struct DXGSWAPCHAIN **)v24;
  v29 = v13;
  v25 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v30, v13, 1, 1);
  v9 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v30, &v25, 1);
  if ( v9 < 0 )
  {
LABEL_28:
    ObfDereferenceObject(v12);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    {
      LODWORD(HandleInformation) = Handle[1];
      LODWORD(Object) = v9;
      McTemplateK0pqqpq_EtwWriteTransfer(
        v17,
        &EventIndirectSwapChainAddSurface,
        v18,
        v13,
        Object,
        HandleInformation,
        v27[0],
        LODWORD(v27[1]));
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v30);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v13 + 58) )
  {
    v9 = DXGSWAPCHAIN::AddSurface(*v12, *((DXGADAPTER ***)v25 + 2), (int)Handle[1], v27[0], (unsigned int *)&v27[1]);
    if ( v9 >= 0 )
    {
      v14 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = v27[1];
    }
    goto LABEL_28;
  }
  WdLogSingleEntry1(2LL, 902LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkAddSurfaceToSwapChain is not allowed for sequential swapchains",
    902LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v21);
  return 3221225659LL;
}
