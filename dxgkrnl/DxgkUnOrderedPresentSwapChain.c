__int64 __fastcall DxgkUnOrderedPresentSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  NTSTATUS v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  struct _KTHREAD ***v13; // r15
  struct DXGSWAPCHAIN *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID *Object; // [rsp+20h] [rbp-138h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-130h]
  int v22; // [rsp+50h] [rbp-108h] BYREF
  __int64 v23; // [rsp+58h] [rbp-100h]
  char v24; // [rsp+60h] [rbp-F8h]
  PVOID v25; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGDEVICE *v26; // [rsp+70h] [rbp-E8h] BYREF
  HANDLE Handle[2]; // [rsp+78h] [rbp-E0h] BYREF
  __int128 v28; // [rsp+88h] [rbp-D0h]
  __int128 v29; // [rsp+98h] [rbp-C0h]
  __int64 v30; // [rsp+A8h] [rbp-B0h]
  _BYTE v31[128]; // [rsp+B0h] [rbp-A8h] BYREF

  v3 = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2202;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2202);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2202);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v3;
  v28 = *(_OWORD *)(v3 + 16);
  v29 = *(_OWORD *)(v3 + 32);
  v30 = *(_QWORD *)(v3 + 48);
  v4 = (int)Handle[1];
  if ( !LODWORD(Handle[1]) )
  {
    WdLogSingleEntry1(2LL, 1015LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UnOrderedPresent is not allowed for consumer",
      1015LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v22);
    }
    return 3221225485LL;
  }
  v25 = 0LL;
  v8 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v25, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v9;
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_15:
    if ( v12 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v22);
    return v9;
  }
  v13 = (struct _KTHREAD ***)v25;
  v14 = *(struct DXGSWAPCHAIN **)v25;
  v26 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v31, v14, 1, 1);
  v9 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v31, &v26, 1);
  if ( (v9 & 0x80000000) != 0 )
  {
LABEL_21:
    ObfDereferenceObject(v13);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    {
      LODWORD(HandleInformation) = v4;
      LODWORD(Object) = v9;
      McTemplateK0pqqpqq_EtwWriteTransfer(
        v16,
        v15,
        v17,
        v14,
        Object,
        HandleInformation,
        (_QWORD)v29,
        DWORD2(v29),
        HIDWORD(v29));
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return v9;
    v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_15;
  }
  if ( *((_DWORD *)v14 + 58) )
  {
    v9 = DXGSWAPCHAIN::UnOrderedPresent(*v13, (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)Handle);
    goto LABEL_21;
  }
  WdLogSingleEntry1(2LL, 1048LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DxgkUnOrderedPresentSwapChain is not allowed for sequential swapchains",
    1048LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v22);
  return 3221225659LL;
}
