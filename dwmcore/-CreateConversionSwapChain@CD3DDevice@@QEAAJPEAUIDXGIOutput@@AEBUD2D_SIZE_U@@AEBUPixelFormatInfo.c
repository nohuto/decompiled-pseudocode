/*
 * XREFs of ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacySwapChain@@@Z @ 0x18028C284
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800C84D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800D106C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacySwapChain@@@Z @ 0x18029E67C (-Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM.c)
 */

__int64 __fastcall CD3DDevice::CreateConversionSwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        struct ILegacySwapChain **a7)
{
  int v11; // ebx
  int v12; // eax
  struct IDXGIOutputVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetParent)(IDXGIOutput *, const IID *const, void **); // rbx
  int v15; // r9d
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  struct IDXGISwapChainDWM1 *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+74h] [rbp-8Ch]
  int v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+7Ch] [rbp-84h]
  int v30; // [rsp+84h] [rbp-7Ch]
  unsigned int v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  int v35; // [rsp+A0h] [rbp-60h]
  _BYTE v36[40]; // [rsp+B0h] [rbp-50h] BYREF
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+F8h] [rbp-8h]

  v23[0] = 0LL;
  v22 = 0LL;
  *a7 = 0LL;
  v11 = *((_DWORD *)this + 272);
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  if ( v11 < 0 )
  {
    v18 = 452;
    goto LABEL_25;
  }
  if ( *((_BYTE *)this + 1508) )
    CD3DDevice::Trim(this);
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(v23);
  v12 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          v23);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 461;
    goto LABEL_16;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23[0] + 32LL))(v23[0], v36);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 464;
    goto LABEL_16;
  }
  if ( !v37 || !v38 )
  {
    v11 = -2003304442;
    v18 = 469;
LABEL_25:
    v15 = v11;
    goto LABEL_26;
  }
  v24[0] = a3->width;
  v24[1] = a3->height;
  v25 = v39;
  v26 = *(_DWORD *)a4;
  v27 = v40;
  v31 = a6;
  lpVtbl = a2->lpVtbl;
  v29 = 1LL;
  v34 = 1;
  v35 = 1;
  GetParent = lpVtbl->GetParent;
  v28 = 0;
  v30 = 96;
  v32 = 0LL;
  v33 = 0;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v12 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v22);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 494;
    goto LABEL_16;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 48LL))(
          v22,
          &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
          &v21);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 495;
    goto LABEL_16;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **)))(*(_QWORD *)v21 + 24LL))(
          v21,
          *((_QWORD *)this + 69),
          v24,
          a2,
          &v20);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 501;
    goto LABEL_16;
  }
  v12 = (**v20)(v20, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v19);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 503;
    goto LABEL_16;
  }
  v12 = CConversionSwapChain::Create(this, (const struct DXGI_OUTPUT_DWM_DESC *)v36, v19, a4, a5, a7);
  v11 = v12;
  if ( v12 < 0 )
  {
    v18 = 511;
LABEL_16:
    v15 = v12;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1803B6EC0, 3u, v15, v18, 0LL);
  }
  v16 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v11, 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(v23);
  return v16;
}
