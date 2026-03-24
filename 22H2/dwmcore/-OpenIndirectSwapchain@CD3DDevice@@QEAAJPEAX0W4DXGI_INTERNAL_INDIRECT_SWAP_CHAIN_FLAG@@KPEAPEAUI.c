/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDevice@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x18023FD18
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180189AC4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSW.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078718 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::OpenIndirectSwapchain(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // r14
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rsi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rsi
  int v15; // r9d
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-30h]
  __int64 v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF

  v6 = a6;
  v19[0] = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *a6 = 0LL;
  v9 = *(_DWORD *)(a1 + 1128);
  if ( v9 < 0 )
  {
    v15 = *(_DWORD *)(a1 + 1128);
    v18 = 2146;
    goto LABEL_16;
  }
  v10 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 592))(
          *(_QWORD *)(a1 + 592),
          &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
          v19);
  v9 = v10;
  if ( v10 < 0 )
  {
    v18 = 2148;
    goto LABEL_11;
  }
  v11 = v19[0];
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19[0] + 56LL);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v10 = v12(v11, &v20);
  v9 = v10;
  if ( v10 < 0 )
  {
    v18 = 2149;
    goto LABEL_11;
  }
  v13 = v20;
  v14 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 48LL);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v10 = v14(v13, &GUID_b14887d9_f537_4af5_b379_7d33031be773, &v21);
  v9 = v10;
  if ( v10 < 0 )
  {
    v18 = 2150;
    goto LABEL_11;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, _QWORD *))(*(_QWORD *)v21 + 32LL))(
          v21,
          v19[0],
          a2,
          0LL,
          5,
          0x10000000,
          v6);
  v9 = v10;
  if ( v10 < 0 )
  {
    v18 = 2157;
LABEL_11:
    v15 = v10;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v15, v18, 0LL);
  }
  v16 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v9, 0);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v19);
  return v16;
}
