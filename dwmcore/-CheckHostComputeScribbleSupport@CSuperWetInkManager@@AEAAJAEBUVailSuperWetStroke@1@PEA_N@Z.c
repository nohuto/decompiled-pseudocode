/*
 * XREFs of ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x1801C876C
 * Callers:
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x1801C9170 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x1801C8724 (-CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18028A798 (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18028B0C8 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckHostComputeScribbleSupport(
        struct ID3D12Device *this,
        const struct CSuperWetInkManager::VailSuperWetStroke *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  CD3DDevice *v8; // rbx
  int D3D12Device; // eax
  __int64 v10; // rdx
  __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ID3D12Device *v13; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D12CommandQueue *v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = this;
  *a3 = 0;
  LOBYTE(v13) = 0;
  v5 = CSuperWetInkManager::CheckCommonComputeScribbleSupport((CSuperWetInkManager *)this, (bool *)&v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !(_BYTE)v13 )
      return 0LL;
    v13 = 0LL;
    v8 = (CD3DDevice *)*((_QWORD *)a2 + 2);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
    D3D12Device = CD3DDevice::TryGetD3D12Device(v8, &v13);
    v6 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v10 = 736LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)D3D12Device);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
      return v6;
    }
    if ( !v13 )
      goto LABEL_12;
    D3D12Device = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(*((CD3DDevice **)a2 + 2), &v14);
    v6 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v10 = 747LL;
      goto LABEL_10;
    }
    if ( v14 )
    {
      LOBYTE(v11) = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**(_QWORD **)a2 + 288LL))(
             *(_QWORD *)a2,
             *((_QWORD *)a2 + 2),
             (char *)a2 + 32,
             v11) )
      {
        *a3 = 1;
      }
    }
    else
    {
LABEL_12:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0q_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          0LL);
    }
    v6 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D5,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
