/*
 * XREFs of ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18028C668
 * Callers:
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x18012D5DC (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x180103FD4 (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18029FA80 (-Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 */

__int64 __fastcall CD3DDevice::CreateDDASwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct IDDASwapChain **a6)
{
  int v9; // ebx
  int v10; // eax
  bool v11; // zf
  int v12; // r8d
  __int64 v13; // r9
  struct IDXGIOutputVtbl *lpVtbl; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, GUID *, __int64 *); // r14
  int v18; // r9d
  unsigned int v19; // ebx
  unsigned int v21; // [rsp+20h] [rbp-59h]
  struct IDXGISwapChainDWM1 *v22; // [rsp+30h] [rbp-49h] BYREF
  __int64 v23; // [rsp+38h] [rbp-41h] BYREF
  __int64 v24; // [rsp+40h] [rbp-39h] BYREF
  struct D2D_SIZE_U v25; // [rsp+48h] [rbp-31h] BYREF
  int v26; // [rsp+50h] [rbp-29h]
  int v27; // [rsp+54h] [rbp-25h]
  __int64 v28; // [rsp+58h] [rbp-21h]
  int v29; // [rsp+60h] [rbp-19h]
  __int64 v30; // [rsp+64h] [rbp-15h]
  int v31; // [rsp+6Ch] [rbp-Dh]
  int v32; // [rsp+70h] [rbp-9h]
  int v33; // [rsp+74h] [rbp-5h]

  v24 = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  v9 = *((_DWORD *)this + 272);
  v22 = 0LL;
  if ( v9 < 0 )
  {
    v18 = v9;
    v21 = 543;
    goto LABEL_16;
  }
  v25 = *a3;
  v10 = *(_DWORD *)a4;
  v28 = 1LL;
  v26 = v10;
  v27 = 0;
  v11 = CD3DDevice::UseSwapchainAsShaderInput(this) == 0;
  v30 = v13;
  if ( !v11 )
    v12 = 112;
  v32 = *((_DWORD *)a4 + 1);
  lpVtbl = a2->lpVtbl;
  v29 = v12;
  v31 = v13;
  v33 = 0;
  v15 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))lpVtbl->GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v24);
  v9 = v15;
  if ( v15 < 0 )
  {
    v21 = 568;
    goto LABEL_11;
  }
  v16 = v24;
  v17 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v24 + 48LL);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v15 = v17(v16, &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f, &v23);
  v9 = v15;
  if ( v15 < 0 )
  {
    v21 = 569;
    goto LABEL_11;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct D2D_SIZE_U *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(*(_QWORD *)v23 + 32LL))(
          v23,
          *((_QWORD *)this + 69),
          &v25,
          a2,
          &v22);
  v9 = v15;
  if ( v15 < 0 )
  {
    v21 = 575;
    goto LABEL_11;
  }
  v15 = CDDASwapChain::Create(this, v22, a4, a5, a6);
  v9 = v15;
  if ( v15 < 0 )
  {
    v21 = 582;
LABEL_11:
    v18 = v15;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180383C70, 2u, v18, v21, 0LL);
  }
  v19 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
  return v19;
}
