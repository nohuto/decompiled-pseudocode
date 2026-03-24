/*
 * XREFs of ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18023F3E8
 * Callers:
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18023F6DC (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18023F9B0 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180009404 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18002BAB0 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9CA4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18023D658 (-Add@-$CMap@W4CompositingShaderLookupKey@@V-$com_ptr_t@UID3D11PixelShader@@Uerr_returncode_polic.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180269A34 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 *     ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180269FE0 (-GetCompositingShaderLookupKey@@YA-AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V-$span@$.c)
 */

__int64 __fastcall CD3DDevice::GetCompositingPixelShaderNoRef(
        struct CD3DDevice *this,
        __int128 *a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 CompositingShaderLookupKey; // r9
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  const void *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int128 v28; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  struct CD3DPixelShader *v30; // [rsp+A8h] [rbp+48h] BYREF

  v27 = *a2;
  v8 = 0;
  CompositingShaderLookupKey = GetCompositingShaderLookupKey(*((unsigned int *)this + 156), &v27);
  *(_QWORD *)&v27 = CompositingShaderLookupKey;
  v12 = 0;
  if ( *((int *)this + 376) <= 0 )
  {
LABEL_5:
    v12 = -1;
  }
  else
  {
    v10 = *((int *)this + 376);
    v9 = 0LL;
    v13 = (_QWORD *)*((_QWORD *)this + 186);
    while ( *v13 != CompositingShaderLookupKey )
    {
      ++v12;
      ++v9;
      ++v13;
      if ( v9 >= v10 )
        goto LABEL_5;
    }
  }
  if ( v12 == -1 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 187) + 8LL * v12);
    if ( v14 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v14 + 8LL))(
        *(_QWORD *)(*((_QWORD *)this + 187) + 8LL * v12),
        v9,
        v10);
  }
  v29 = 0LL;
  v26[0] = v14;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
  if ( !v14 )
  {
    v15 = *a2;
    v16 = *((unsigned int *)this + 156);
    v29 = 0LL;
    v28 = v15;
    v17 = CreateCompositingShader(v16, &v28, a3, &v29);
    v8 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x100Eu, 0LL);
      goto LABEL_21;
    }
    v19 = v29;
    v30 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
    v21 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    v22 = CD3DPixelShader::Create(this, v21, v20, &v30);
    v8 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1014u, 0LL);
      goto LABEL_19;
    }
    wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=(v26, *((_QWORD *)v30 + 14));
    if ( !(unsigned int)CMap<enum CompositingShaderLookupKey,wil::com_ptr_t<ID3D11PixelShader,wil::err_returncode_policy>,CMapEqualHelper<enum CompositingShaderLookupKey,wil::com_ptr_t<ID3D11PixelShader,wil::err_returncode_policy>>>::Add(
                          (__int64)this + 1488,
                          &v27,
                          v26) )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024882, 0x101Au, 0LL);
LABEL_19:
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v30);
LABEL_21:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
      goto LABEL_17;
    }
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v30);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
    v14 = v26[0];
  }
  *a4 = v14;
LABEL_17:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v26);
  return v8;
}
