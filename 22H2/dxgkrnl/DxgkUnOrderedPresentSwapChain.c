/*
 * XREFs of DxgkUnOrderedPresentSwapChain @ 0x1C02AF840
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqpqq_EtwWriteTransfer @ 0x1C004C534 (McTemplateK0pqqpqq_EtwWriteTransfer.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02AA0A8 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C02AA118 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02AA14C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z @ 0x1C02AD1F4 (-UnOrderedPresent@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_UNORDEREDPRESENTSWAPCHAIN@@@Z.c)
 */

__int64 __fastcall DxgkUnOrderedPresentSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  HANDLE v11; // r14
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KTHREAD ***v21; // r15
  struct DXGSWAPCHAIN *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  PVOID *Object; // [rsp+20h] [rbp-128h]
  __int64 v33; // [rsp+28h] [rbp-120h]
  int v34; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-F0h]
  char v36; // [rsp+60h] [rbp-E8h]
  PVOID v37; // [rsp+68h] [rbp-E0h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+80h] [rbp-C8h]
  __int128 v40; // [rsp+90h] [rbp-B8h]
  __int64 v41; // [rsp+A0h] [rbp-A8h]
  _BYTE v42[128]; // [rsp+B0h] [rbp-98h] BYREF

  v3 = a1;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2202;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2202);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2202LL);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v3;
  v39 = *(_OWORD *)(v3 + 16);
  v40 = *(_OWORD *)(v3 + 32);
  v41 = *(_QWORD *)(v3 + 48);
  v5 = (int)Handle[1];
  if ( !LODWORD(Handle[1]) )
  {
    v6 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
    *(_QWORD *)(v6 + 24) = 1016LL;
    WdLogEvent5_WdError(v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v7);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v34);
    }
    return 3221225485LL;
  }
  v37 = 0LL;
  v11 = Handle[0];
  v12 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v37, 0LL);
  v16 = v12;
  if ( v12 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = v16;
    WdLogEvent5_WdWarning(v17);
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v18);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v34);
    return (unsigned int)v16;
  }
  v21 = (struct _KTHREAD ***)v37;
  v22 = *(struct DXGSWAPCHAIN **)v37;
  v37 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v42, v22, 1, 1);
  LODWORD(v16) = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v42, (struct DXGDEVICE **)&v37, 1);
  if ( (int)v16 < 0 )
  {
LABEL_21:
    ObfDereferenceObject(v21);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v33) = v5;
      LODWORD(Object) = v16;
      McTemplateK0pqqpqq_EtwWriteTransfer(v26, v25, v27, v22, Object, v33, (_QWORD)v40, DWORD2(v40), HIDWORD(v40));
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v42);
    goto LABEL_14;
  }
  if ( *((_DWORD *)v22 + 56) )
  {
    LODWORD(v16) = DXGSWAPCHAIN::UnOrderedPresent(*v21, (struct _D3DKMT_UNORDEREDPRESENTSWAPCHAIN *)Handle);
    goto LABEL_21;
  }
  v28 = WdLogNewEntry5_WdError(v24, v23);
  *(_QWORD *)(v28 + 24) = 1049LL;
  WdLogEvent5_WdError(v28);
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v29);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v34);
  return 3221225659LL;
}
