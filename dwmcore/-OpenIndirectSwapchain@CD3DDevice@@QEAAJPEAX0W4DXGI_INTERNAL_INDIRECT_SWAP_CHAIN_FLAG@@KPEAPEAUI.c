/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x18028CDEC
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801EC0A4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::OpenIndirectSwapchain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, __int64 *); // rbp
  int v13; // r9d
  unsigned int v14; // ebx
  unsigned int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v6 = a6;
  v17 = 0LL;
  v18 = 0LL;
  *a6 = 0LL;
  v9 = *(_DWORD *)(a1 + 1088);
  if ( v9 < 0 )
  {
    v13 = *(_DWORD *)(a1 + 1088);
    v16 = 716;
    goto LABEL_12;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 536) + 56LL))(*(_QWORD *)(a1 + 536), &v17);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = 718;
    goto LABEL_8;
  }
  v11 = v17;
  v12 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v17 + 48LL);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v10 = v12(v11, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &v18);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = 719;
    goto LABEL_8;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, int, _QWORD *))(*(_QWORD *)v18 + 32LL))(
          v18,
          *(_QWORD *)(a1 + 536),
          a2,
          0LL,
          5,
          0x10000000,
          v6);
  v9 = v10;
  if ( v10 < 0 )
  {
    v16 = 726;
LABEL_8:
    v13 = v10;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v13, v16, 0LL);
  }
  v14 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v9, 0);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  return v14;
}
