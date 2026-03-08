/*
 * XREFs of ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18029E400
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18029D7BC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x18029E080 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x18029E1E4 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18028A818 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleResource(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned int *a5,
        enum DXGI_MODE_ROTATION a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v11; // r14
  char v13; // si
  int v15; // ebp
  float v16; // xmm6_4
  __int64 (__fastcall ***v17)(_QWORD, __int64 *); // rcx
  int *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v25; // [rsp+70h] [rbp-48h] BYREF
  int v26; // [rsp+78h] [rbp-40h]
  int v27; // [rsp+7Ch] [rbp-3Ch]

  v9 = *(_QWORD *)(a1 + 128);
  v11 = *(_QWORD *)(a1 + 80);
  v13 = *(_BYTE *)(a1 + 108);
  v15 = *(_DWORD *)(a1 + 284);
  v25 = *(_QWORD *)a8;
  v26 = *(_DWORD *)(a8 + 8);
  v27 = *(_DWORD *)(a8 + 12);
  v16 = *(float *)(a1 + 104);
  v17 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 16LL));
  v18 = (int *)(**v17)(v17, &a8);
  v19 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 24LL) + *(_QWORD *)(a1 + 128) + 8LL;
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
  v21 = CD3DDevice::HDRConvert(v11, a2, a3, a4, a5, a6, a7, v20, v18, v15, v16, v13, (__int64)&v25);
  v23 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x37Bu, 0LL);
  return v23;
}
