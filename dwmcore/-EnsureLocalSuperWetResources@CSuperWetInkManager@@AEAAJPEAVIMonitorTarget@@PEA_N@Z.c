/*
 * XREFs of ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x1801C8C90
 * Callers:
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801C9A58 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18028A718 (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18028A798 (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18028B0C8 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::EnsureLocalSuperWetResources(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        bool *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  int D3D12Device; // ebx
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  CD3DDevice *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  _QWORD *v18; // [rsp+40h] [rbp+20h] BYREF
  struct ID3D12Device *v19; // [rsp+48h] [rbp+28h] BYREF
  struct ID3D12CommandQueue *v20; // [rsp+50h] [rbp+30h] BYREF

  v18 = 0LL;
  v4 = *(_QWORD *)a2;
  *a3 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(v4 + 144))(a2);
  v6 = v5 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v18);
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))(v6 + 8))(
         v6 + 8,
         &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
         &v18);
  D3D12Device = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v7);
    if ( !v18 )
      return (unsigned int)D3D12Device;
    v9 = (__int64)v18 + *(int *)(v18[1] + 4LL) + 8;
LABEL_4:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    return (unsigned int)D3D12Device;
  }
  v11 = (__int64)v18 + *(int *)(v18[1] + 12LL) + 8;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v19 = 0LL;
  v13 = (CD3DDevice *)v12;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v19);
  D3D12Device = CD3DDevice::TryGetD3D12Device(v13, &v19);
  if ( D3D12Device < 0 )
  {
    v14 = 660LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)D3D12Device);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
    if ( !v18 )
      return (unsigned int)D3D12Device;
    v9 = (__int64)v18 + *(int *)(v18[1] + 4LL) + 8;
    goto LABEL_4;
  }
  if ( !v19 )
    goto LABEL_17;
  D3D12Device = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v13, &v20);
  if ( D3D12Device < 0 )
  {
    v14 = 669LL;
    goto LABEL_8;
  }
  if ( !v20 )
    goto LABEL_17;
  D3D12Device = CD3DDevice::GetDirectInkSuperWetRendererNoRef(
                  v13,
                  (struct IDCompositionDirectInkSuperWetRenderer **)&v20);
  if ( D3D12Device < 0 )
  {
    v14 = 678LL;
    goto LABEL_8;
  }
  if ( !v20 )
  {
LABEL_17:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        0LL);
    goto LABEL_26;
  }
  D3D12Device = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 288LL))(v18);
  if ( D3D12Device < 0 )
  {
    v14 = 686LL;
    goto LABEL_8;
  }
  if ( CCommonRegistryData::EnableFrontBufferRenderChecks
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v18 + 304LL))(v18) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
        5LL);
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v18 + 312LL))(v18, v15);
    *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*v18 + 280LL))(v18) + 49) = 1;
LABEL_26:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
    if ( v18 )
      goto LABEL_29;
    return 0LL;
  }
  *a3 = 1;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  if ( v18 )
  {
LABEL_29:
    v16 = (__int64)v18 + *(int *)(v18[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
