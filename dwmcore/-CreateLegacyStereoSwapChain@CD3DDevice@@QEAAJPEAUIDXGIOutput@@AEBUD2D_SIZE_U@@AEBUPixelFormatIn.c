__int64 __fastcall CD3DDevice::CreateLegacyStereoSwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        struct CLegacyStereoSwapChain **a7)
{
  int v11; // ebx
  int v12; // eax
  char v13; // al
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // edi
  int v17; // r8d
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  struct IDXGISwapChainDWM1 *v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  struct RenderTargetInfo *v29; // [rsp+68h] [rbp-98h]
  _DWORD v30[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+88h] [rbp-78h]
  unsigned int v33; // [rsp+8Ch] [rbp-74h]
  int v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+94h] [rbp-6Ch]
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+ACh] [rbp-54h]
  _BYTE v41[40]; // [rsp+C0h] [rbp-40h] BYREF
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+108h] [rbp+8h]

  v29 = a5;
  v28 = 0LL;
  *a7 = 0LL;
  v11 = *((_DWORD *)this + 272);
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( v11 < 0 )
  {
    v23 = 343;
    goto LABEL_28;
  }
  if ( *((_BYTE *)this + 1508) )
    CD3DDevice::Trim(this);
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(&v28);
  v12 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          &v28);
  v11 = v12;
  if ( v12 < 0 )
  {
    v23 = 352;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 32LL))(v28, v41);
  v11 = v12;
  if ( v12 < 0 )
  {
    v23 = 355;
LABEL_25:
    v19 = v12;
LABEL_29:
    v20 = 3;
    goto LABEL_30;
  }
  if ( !v42 || !v43 )
  {
    v11 = -2003304442;
    v23 = 363;
LABEL_28:
    v19 = v11;
    goto LABEL_29;
  }
  v30[0] = a3->width;
  v30[1] = a3->height;
  v30[2] = *(_DWORD *)a4;
  v30[3] = 1;
  v31 = 1LL;
  v13 = CD3DDevice::UseSwapchainAsShaderInput(this);
  v34 = 0;
  v33 = a6;
  v16 = v15 + 2;
  if ( v13 )
    v14 = v15 + 111;
  v38 = v44;
  v39 = v45;
  v32 = v14;
  v35 = v15;
  v36 = v15 + 2;
  v37 = v15;
  v40 = 0LL;
  if ( CD3DDevice::UseSwapchainAsShaderInput(this) )
    v32 = v17 | 0x10;
  v18 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v27);
  v11 = v18;
  if ( v18 < 0 )
  {
    v23 = 399;
    goto LABEL_18;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v27 + 48LL))(
          v27,
          &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
          &v26);
  v11 = v18;
  if ( v18 < 0 )
  {
    v23 = 400;
    goto LABEL_18;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **)))(*(_QWORD *)v26 + 24LL))(
          v26,
          *((_QWORD *)this + 69),
          v30,
          &v38,
          a2,
          &v25);
  v11 = v18;
  if ( v18 < 0 )
  {
    v23 = 407;
    goto LABEL_18;
  }
  v18 = (**v25)(v25, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v24);
  v11 = v18;
  if ( v18 < 0 )
  {
    v23 = 409;
    goto LABEL_18;
  }
  v18 = CLegacyStereoSwapChain::Create(this, (const struct DXGI_OUTPUT_DWM_DESC *)v41, v24, a4, v29, a7);
  v11 = v18;
  if ( v18 < 0 )
  {
    v23 = 417;
LABEL_18:
    v19 = v18;
    v20 = v16;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1803B6EC0, v20, v19, v23, 0LL);
  }
  v21 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v11, 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v28);
  return v21;
}
