/*
 * XREFs of ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x180025394
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x180024F00 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IW4Enum@FrontBufferRender@@PEAPEAVILegacySwapChain@@@Z @ 0x1800256A4 (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRe.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x180025B90 (-IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x180025BFC (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x18002CAE8 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078718 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacySwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        bool a7,
        struct ILegacySwapChain **a8)
{
  __int64 v12; // rcx
  int v13; // r15d
  int v14; // ebx
  int v15; // eax
  int v16; // r9d
  int v17; // r8d
  enum DXGI_FORMAT v18; // r9d
  __int64 v19; // r10
  bool IsFrontBufferRenderingSupported; // al
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  unsigned int v23; // ebx
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  const struct RenderTargetInfo *v32; // [rsp+68h] [rbp-98h]
  _DWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+84h] [rbp-7Ch]
  int v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+8Ch] [rbp-74h]
  int v39; // [rsp+94h] [rbp-6Ch]
  unsigned int v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  int v44; // [rsp+B0h] [rbp-50h]
  _BYTE v45[8]; // [rsp+C0h] [rbp-40h] BYREF
  int v46; // [rsp+C8h] [rbp-38h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+F4h] [rbp-Ch]
  int v49; // [rsp+118h] [rbp+18h]

  v32 = a5;
  v12 = 0LL;
  v31 = 0LL;
  *a8 = 0LL;
  v13 = 0;
  v14 = *((_DWORD *)this + 282);
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( v14 < 0 )
  {
    v26 = 920;
    goto LABEL_38;
  }
  if ( *((_BYTE *)this + 1436) )
  {
    CD3DDevice::Trim(this);
    v12 = v31;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v15 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          &v31);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 929;
    goto LABEL_30;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v31 + 32LL))(v31, v45);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 932;
    goto LABEL_30;
  }
  if ( !(_DWORD)v47 || !HIDWORD(v47) )
  {
    v14 = -2003304442;
    v26 = 937;
    goto LABEL_38;
  }
  v16 = *(_DWORD *)a4;
  v33[0] = a3->width;
  v33[1] = a3->height;
  v34 = v47;
  v35 = v16;
  v36 = v48;
  v37 = 0;
  v38 = 1LL;
  if ( CD3DDevice::UseSwapchainAsShaderInput(this) )
    v17 = 112;
  v39 = v17;
  if ( a7 != (_BYTE)v19 && (v49 & 0x100) == 0 )
  {
    IsFrontBufferRenderingSupported = CD3DDevice::IsFrontBufferRenderingSupported(this, v18);
    v19 = 0LL;
    if ( IsFrontBufferRenderingSupported )
      v39 |= 0x2000480u;
  }
  v40 = a6;
  lpVtbl = a2->lpVtbl;
  v43 = 1;
  v44 = 1;
  v41 = v19;
  GetParent = lpVtbl->GetParent;
  v42 = v19;
  v15 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v30);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 978;
    goto LABEL_30;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v30 + 48LL))(
          v30,
          &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
          &v29);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 979;
    goto LABEL_30;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v29 + 24LL))(
          v29,
          *((_QWORD *)this + 74),
          v33,
          a2,
          &v28);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 985;
    goto LABEL_30;
  }
  v15 = (**v28)(v28, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v27);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 987;
    goto LABEL_30;
  }
  if ( (v39 & 0x400) != 0 )
  {
    if ( *((int *)this + 157) < 2600 )
    {
      v13 = 2;
      goto LABEL_21;
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v27 + 264LL))(v27) == 2 )
    {
      v13 = 1;
      goto LABEL_21;
    }
    v14 = -2003304306;
    v26 = 1003;
LABEL_38:
    v25 = v14;
    goto LABEL_39;
  }
LABEL_21:
  v15 = CLegacySwapChain::Create(this, v27, a4, v32, v46, v13, a8);
  v14 = v15;
  if ( v15 < 0 )
  {
    v26 = 1020;
LABEL_30:
    v25 = v15;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802DD050, 3u, v25, v26, 0LL);
  }
  v23 = CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v14, 2LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
  return v23;
}
