/*
 * XREFs of ?ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@012AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18029DEF4
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18029D7BC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18028AB08 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertMultiResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // rdx
  __int64 v14; // r14
  char v16; // si
  int v17; // ebp
  float v18; // xmm6_4
  __int64 (__fastcall ***v19)(_QWORD, __int64 *); // rcx
  int *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v27; // [rsp+80h] [rbp-48h] BYREF
  int v28; // [rsp+88h] [rbp-40h]
  int v29; // [rsp+8Ch] [rbp-3Ch]
  __int64 v30; // [rsp+E0h] [rbp+18h] BYREF

  v30 = a3;
  v12 = *(_QWORD *)(a1 + 128);
  v14 = *(_QWORD *)(a1 + 80);
  v16 = *(_BYTE *)(a1 + 108);
  v17 = *(_DWORD *)(a1 + 284);
  v27 = *(_QWORD *)a11;
  v28 = *(_DWORD *)(a11 + 8);
  v29 = *(_DWORD *)(a11 + 12);
  v18 = *(float *)(a1 + 104);
  v19 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 16LL));
  v20 = (int *)(**v19)(v19, &v30);
  v21 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 24LL) + *(_QWORD *)(a1 + 128) + 8LL;
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 56LL))(v21);
  v23 = CD3DDevice::HDRConvertWithFakeOverlay(
          v14,
          a2,
          a4,
          a5,
          (int *)a6,
          (__int64 *)a7,
          (unsigned int *)a8,
          (enum DXGI_MODE_ROTATION)a9,
          a10,
          v22,
          v20,
          v17,
          v18,
          v16,
          (__int64)&v27);
  v25 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x3AFu, 0LL);
  return v25;
}
