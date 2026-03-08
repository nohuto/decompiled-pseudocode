/*
 * XREFs of ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800CC2A8
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800C84D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAVILegacySwapChain@@@Z @ 0x1800CA340 (-Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@A.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800D106C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x180103100 (-IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x180103FD4 (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrimAllDevices@CDeviceManager@@QEAAXXZ @ 0x18028293C (-TrimAllDevices@CDeviceManager@@QEAAXXZ.c)
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
  int v12; // r15d
  int v13; // ebx
  int v14; // eax
  int v15; // r9d
  int v16; // r8d
  enum DXGI_FORMAT v17; // r9d
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  unsigned int v20; // ebx
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  const struct RenderTargetInfo *v29; // [rsp+68h] [rbp-98h]
  _DWORD v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+80h] [rbp-80h]
  int v33; // [rsp+84h] [rbp-7Ch]
  int v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+8Ch] [rbp-74h]
  int v36; // [rsp+94h] [rbp-6Ch]
  unsigned int v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  int v41; // [rsp+B0h] [rbp-50h]
  _BYTE v42[40]; // [rsp+C0h] [rbp-40h] BYREF
  int v43; // [rsp+E8h] [rbp-18h]
  int v44; // [rsp+ECh] [rbp-14h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+12Ch] [rbp+2Ch]

  v29 = a5;
  v28 = 0LL;
  v12 = 0;
  *a8 = 0LL;
  v13 = *((_DWORD *)this + 272);
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( v13 < 0 )
  {
    v23 = 196;
    goto LABEL_38;
  }
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(&v28);
  v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          &v28);
  v13 = v14;
  if ( v14 < 0 )
  {
    v23 = 199;
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 32LL))(v28, v42);
  v13 = v14;
  if ( v14 < 0 )
  {
    v23 = 202;
    goto LABEL_30;
  }
  if ( !v43 || !v44 )
  {
    v13 = -2003304442;
    v23 = 207;
    goto LABEL_38;
  }
  if ( (v47 & 0x100) != 0 )
  {
    CDeviceManager::TrimAllDevices(this);
  }
  else if ( *((_BYTE *)this + 1508) )
  {
    CD3DDevice::Trim(this);
  }
  v15 = *(_DWORD *)a4;
  v30[0] = a3->width;
  v30[1] = a3->height;
  v31 = v45;
  v33 = v46;
  v32 = v15;
  v34 = 0;
  v35 = 1LL;
  if ( CD3DDevice::UseSwapchainAsShaderInput(this) )
    v16 = 112;
  v36 = v16;
  if ( a7 && (v47 & 0x100) == 0 && CD3DDevice::IsFrontBufferRenderingSupported(this, v17) )
    v36 |= 0x2000480u;
  v37 = a6;
  lpVtbl = a2->lpVtbl;
  v38 = 0LL;
  v39 = 0;
  v40 = 1;
  GetParent = lpVtbl->GetParent;
  v41 = 1;
  v14 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v27);
  v13 = v14;
  if ( v14 < 0 )
  {
    v23 = 265;
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v27 + 48LL))(
          v27,
          &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
          &v26);
  v13 = v14;
  if ( v14 < 0 )
  {
    v23 = 266;
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v26 + 24LL))(
          v26,
          *((_QWORD *)this + 69),
          v30,
          a2,
          &v25);
  v13 = v14;
  if ( v14 < 0 )
  {
    v23 = 272;
    goto LABEL_30;
  }
  v14 = (**v25)(v25, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v24);
  v13 = v14;
  if ( v14 < 0 )
  {
    v23 = 274;
    goto LABEL_30;
  }
  if ( (v36 & 0x400) != 0 )
  {
    if ( *((int *)this + 147) >= 2600 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v24 + 264LL))(v24) == 2 )
      {
        v12 = 1;
        goto LABEL_23;
      }
      v13 = -2003304306;
      v23 = 290;
LABEL_38:
      v22 = v13;
      goto LABEL_39;
    }
    v12 = 2;
  }
LABEL_23:
  v14 = CLegacySwapChain::Create(
          (__int64)this,
          (const struct DXGI_OUTPUT_DWM_DESC *)v42,
          v24,
          (__int64)a4,
          (__int64)v29,
          v12,
          a8);
  v13 = v14;
  if ( v14 < 0 )
  {
    v23 = 307;
LABEL_30:
    v22 = v14;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1803558A8, 3u, v22, v23, 0LL);
  }
  v20 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v13, 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v28);
  return v20;
}
