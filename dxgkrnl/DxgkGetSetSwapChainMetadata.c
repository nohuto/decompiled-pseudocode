__int64 __fastcall DxgkGetSetSwapChainMetadata(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_GETSETSWAPCHAINMETADATA *v4; // rax
  NTSTATUS v5; // eax
  int SetMetaDataInternal; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  PVOID v11; // rsi
  _DWORD *v12; // r8
  int v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h]
  char v15; // [rsp+40h] [rbp-38h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA Handle; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2121;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2121);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2121);
  v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)MmUserProbeAddress;
  Handle = *v4;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  SetMetaDataInternal = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle.hNtSwapChain, v5);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
    if ( !v15 )
      return (unsigned int)SetMetaDataInternal;
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_10;
  }
  v11 = Object;
  SetMetaDataInternal = SwapChainGetSetMetaDataInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, 0, 1);
  if ( SetMetaDataInternal >= 0 )
  {
    v12 = (_DWORD *)(a1 + 32);
    if ( a1 + 32 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = Handle.DataCopied;
  }
  ObfDereferenceObject(v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_10:
    if ( v9 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v13);
  }
  return (unsigned int)SetMetaDataInternal;
}
