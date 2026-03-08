/*
 * XREFs of ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1802968E4
 * Callers:
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x1801F19F0 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18028A818 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18028AB08 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x180296850 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18028A5B0 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180296558 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?_Reallocate_exactly@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@AEAAX_K@Z @ 0x1802970A4 (-_Reallocate_exactly@-$vector@PEAUID3D11SamplerState@@V-$allocator@PEAUID3D11SamplerState@@@std@.c)
 */

__int64 __fastcall CSurfaceShaderComposer::RunShader(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        float *a6,
        int a7,
        unsigned __int64 *a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int128 *a12,
        char a13)
{
  _BYTE *v13; // rsi
  float *v15; // r12
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rdi
  unsigned __int64 v20; // rbx
  _BYTE *v21; // r14
  __int64 v22; // rcx
  int D3DSamplerStateNoRef; // eax
  __int64 v24; // rcx
  unsigned int v25; // r12d
  float v26; // xmm1_4
  float v27; // xmm0_4
  int v28; // eax
  float v29; // xmm1_4
  int (__fastcall *v30)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v31)(_QWORD, GUID *, __int64 *); // rbx
  int v32; // eax
  __int64 v33; // rcx
  _OWORD *v34; // rax
  __int64 v35; // rax
  void *v36; // rbx
  __int16 v38; // [rsp+40h] [rbp-A9h] BYREF
  char v39; // [rsp+42h] [rbp-A7h]
  __int64 v40; // [rsp+50h] [rbp-99h] BYREF
  GUID *v41; // [rsp+58h] [rbp-91h] BYREF
  __int128 v42; // [rsp+60h] [rbp-89h] BYREF
  _BYTE *v43; // [rsp+70h] [rbp-79h]
  int v44; // [rsp+78h] [rbp-71h]
  __int64 v45; // [rsp+80h] [rbp-69h] BYREF
  __int64 v46; // [rsp+88h] [rbp-61h] BYREF
  __int64 v47; // [rsp+90h] [rbp-59h] BYREF
  __int64 v48; // [rsp+98h] [rbp-51h]
  __int64 v49; // [rsp+A0h] [rbp-49h]
  __int128 *v50; // [rsp+A8h] [rbp-41h]
  __int64 v51; // [rsp+B0h] [rbp-39h]
  _OWORD *v52; // [rsp+B8h] [rbp-31h] BYREF
  __int128 v53; // [rsp+C8h] [rbp-21h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-11h] BYREF

  v13 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v15 = a6;
  v44 = a7;
  v17 = *a8;
  v47 = a10;
  v51 = a11;
  v50 = a12;
  v18 = *(_QWORD *)(a1 + 96);
  v45 = a4;
  v48 = (__int64)a6;
  v43 = 0LL;
  v19 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v18 + 560);
  v53 = 0LL;
  v42 = 0LL;
  if ( v17 )
  {
    if ( v17 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<ID3D11SamplerState *>::_Reallocate_exactly(&v42);
    v13 = v43;
  }
  v20 = a8[1];
  v21 = (_BYTE *)*((_QWORD *)&v42 + 1);
  v49 = v20 + 2 * *a8 + *a8;
  if ( v20 != v49 )
  {
    while ( 1 )
    {
      v22 = *(_QWORD *)(a1 + 96);
      v38 = *(_WORD *)v20;
      v39 = *(_BYTE *)(v20 + 2);
      D3DSamplerStateNoRef = CD3DDevice::GetD3DSamplerStateNoRef(v22, (unsigned __int8 *)&v38, &v46);
      v25 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
        break;
      if ( v21 == v13 )
      {
        std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
          (const void **)&v42,
          v21,
          &v46);
        v13 = v43;
        v21 = (_BYTE *)*((_QWORD *)&v42 + 1);
      }
      else
      {
        *(_QWORD *)v21 = v46;
        v21 += 8;
        *((_QWORD *)&v42 + 1) = v21;
      }
      v20 += 3LL;
      if ( v20 == v49 )
      {
        v15 = (float *)v48;
        goto LABEL_12;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, D3DSamplerStateNoRef, 0xFCu, 0LL);
    goto LABEL_28;
  }
LABEL_12:
  if ( v50 )
  {
    v54 = *v50;
  }
  else
  {
    v26 = v15[1];
    v27 = *v15 + v15[2];
    LODWORD(v54) = (int)*v15;
    v28 = (int)v26;
    v29 = v26 + v15[3];
    DWORD1(v54) = v28;
    DWORD2(v54) = (int)v27;
    HIDWORD(v54) = (int)v29;
  }
  v30 = (*v19)[131];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  v30(v19, *(GUID **)(a1 + 72), (__int64 *)&v41);
  if ( a9 )
  {
    v31 = **v19;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    if ( v31(v19, &GUID_b4e3c01d_e79e_4637_91b2_510e9f4c9b8f, &v40) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 1160LL))(v40, 1LL);
  }
  v32 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64, _DWORD, _OWORD **))(*v19)[14])(
          v19,
          *(_QWORD *)(a1 + 64),
          0LL,
          4LL,
          0,
          &v52);
  v25 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x120u, 0LL);
LABEL_28:
    v36 = (void *)v42;
    goto LABEL_29;
  }
  v34 = v52;
  *v52 = *a2;
  v34[1] = a2[1];
  v34[2] = a2[2];
  v34[3] = a2[3];
  v34[4] = a2[4];
  v34[5] = a2[5];
  v34[6] = a2[6];
  v34[7] = a2[7];
  v34[8] = a2[8];
  (*v19)[15](v19, *(GUID **)(a1 + 64), 0LL);
  if ( a13 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int128 *, __int64))(*v19)[133])(
      v19,
      v47,
      &v54,
      1LL);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, _QWORD, _QWORD))(*v19)[9])(
    v19,
    v51,
    0LL,
    0LL);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64))(*v19)[8])(
    v19,
    0LL,
    a5,
    v45);
  v35 = *(_QWORD *)(a1 + 80);
  if ( v35 )
  {
    v45 = *(_QWORD *)(v35 + 96);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, __int64, __int64 *))(*v19)[16])(
      v19,
      *(unsigned int *)(a1 + 88),
      1LL,
      &v45);
  }
  else
  {
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, _QWORD))(*v19)[16])(
      v19,
      0LL,
      0LL,
      0LL);
  }
  v36 = (void *)v42;
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, _QWORD))(*v19)[10])(
    v19,
    0LL,
    (unsigned int)((__int64)&v21[-v42] >> 3),
    v42);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64))(*v19)[35])(
    v19,
    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * v44 + 1640),
    0LL,
    0xFFFFFFFFLL);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64 *, _QWORD))(*v19)[33])(
    v19,
    1LL,
    &v47,
    0LL);
  (*v19)[45](v19, (GUID *)1, (__int64 *)&v54);
  (*v19)[44](v19, (GUID *)1, (__int64 *)v48);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v19)[13])(v19, 6LL);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int128 *))(*v19)[8])(
    v19,
    0LL,
    a5,
    &v53);
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, _QWORD))(*v19)[33])(
    v19,
    0LL,
    0LL,
    0LL);
  if ( v40 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 1160LL))(v40, 0LL);
LABEL_29:
  (*v19)[131](v19, v41, 0LL);
  if ( v36 )
    std::_Deallocate<16,0>(v36, (v13 - (_BYTE *)v36) & 0xFFFFFFFFFFFFFFF8uLL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  return v25;
}
