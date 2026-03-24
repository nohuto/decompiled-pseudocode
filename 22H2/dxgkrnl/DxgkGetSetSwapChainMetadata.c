/*
 * XREFs of DxgkGetSetSwapChainMetadata @ 0x1C02AE810
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C02ACF48 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall DxgkGetSetSwapChainMetadata(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_GETSETSWAPCHAINMETADATA *v4; // rax
  HANDLE hNtSwapChain; // r14
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  PVOID v16; // r14
  _DWORD *v17; // r8
  int v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  char v20; // [rsp+40h] [rbp-38h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA Handle; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2121;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2121);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 2121LL);
  v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)MmUserProbeAddress;
  Handle = *v4;
  Object = 0LL;
  hNtSwapChain = Handle.hNtSwapChain;
  v6 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v10 = v6;
  if ( v6 >= 0 )
  {
    v16 = Object;
    LODWORD(v10) = SwapChainGetSetMetaDataInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, 0, 1);
    if ( (int)v10 >= 0 )
    {
      v17 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = Handle.DataCopied;
    }
    ObfDereferenceObject(v16);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = hNtSwapChain;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdWarning(v11);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18, v12);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v18);
  return (unsigned int)v10;
}
