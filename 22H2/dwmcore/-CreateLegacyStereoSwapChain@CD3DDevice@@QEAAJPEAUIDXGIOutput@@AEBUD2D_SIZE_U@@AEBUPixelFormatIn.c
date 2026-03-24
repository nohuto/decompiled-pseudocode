/*
 * XREFs of ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18023E590
 * Callers:
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x18018DA70 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x180025BFC (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x18002CAE8 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078718 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18024D7B8 (-Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacyStereoSwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        struct ILegacyStereoSwapChain **a7)
{
  __int64 v8; // rcx
  int v11; // ebx
  int v13; // eax
  __int64 v14; // r8
  int v15; // r9d
  bool v16; // r10
  int v17; // r11d
  unsigned int v18; // edi
  int v19; // r10d
  int v20; // eax
  int v21; // r9d
  unsigned int v22; // r8d
  unsigned int v23; // ebx
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  struct IDXGISwapChainDWM1 *v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  struct RenderTargetInfo *v31; // [rsp+68h] [rbp-98h]
  _DWORD v32[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+88h] [rbp-78h]
  unsigned int v35; // [rsp+8Ch] [rbp-74h]
  int v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+94h] [rbp-6Ch]
  int v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+9Ch] [rbp-64h]
  __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  int v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+ACh] [rbp-54h]
  _BYTE v43[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  int v47; // [rsp+F4h] [rbp-Ch]

  v8 = 0LL;
  v31 = a5;
  v30 = 0LL;
  *a7 = 0LL;
  v11 = *((_DWORD *)this + 282);
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  if ( v11 < 0 )
  {
    v25 = 1056;
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 1436) )
  {
    CD3DDevice::Trim(this);
    v8 = v30;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v13 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          &v30);
  v11 = v13;
  if ( v13 < 0 )
  {
    v25 = 1065;
    goto LABEL_27;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 32LL))(v30, v43);
  v11 = v13;
  if ( v13 < 0 )
  {
    v25 = 1068;
LABEL_27:
    v21 = v13;
LABEL_31:
    v22 = 3;
    goto LABEL_32;
  }
  if ( !v45 || !v46 )
  {
    v11 = -2003304442;
    v25 = 1076;
LABEL_30:
    v21 = v11;
    goto LABEL_31;
  }
  v32[0] = a3->width;
  v32[1] = a3->height;
  v32[2] = *(_DWORD *)a4;
  v32[3] = 1;
  v33 = 1LL;
  v16 = CD3DDevice::UseSwapchainAsShaderInput(this);
  v35 = a6;
  v18 = v17 + 2;
  if ( v16 )
    v15 = v17 + 111;
  v41 = v47;
  v34 = v15;
  v36 = 0;
  v37 = v17;
  v38 = v17 + 2;
  v39 = v17;
  v40 = v14;
  v42 = 0LL;
  if ( CD3DDevice::UseSwapchainAsShaderInput(this) )
    v34 = (16 * (v19 + 6)) | 0x10;
  v20 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v29);
  v11 = v20;
  if ( v20 < 0 )
  {
    v25 = 1112;
    goto LABEL_20;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v29 + 48LL))(
          v29,
          &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
          &v28);
  v11 = v20;
  if ( v20 < 0 )
  {
    v25 = 1113;
    goto LABEL_20;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **)))(*(_QWORD *)v28 + 24LL))(
          v28,
          *((_QWORD *)this + 74),
          v32,
          &v40,
          a2,
          &v27);
  v11 = v20;
  if ( v20 < 0 )
  {
    v25 = 1120;
    goto LABEL_20;
  }
  v20 = (**v27)(v27, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v26);
  v11 = v20;
  if ( v20 < 0 )
  {
    v25 = 1122;
    goto LABEL_20;
  }
  v20 = CLegacyStereoSwapChain::Create(this, v26, a4, v31, v44, a7);
  v11 = v20;
  if ( v20 < 0 )
  {
    v25 = 1130;
LABEL_20:
    v21 = v20;
    v22 = v18;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180306950, v22, v21, v25, 0LL);
  }
  v23 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v11, 2u);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
  return v23;
}
