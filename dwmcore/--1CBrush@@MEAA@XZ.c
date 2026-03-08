/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x180096CEC
 * Callers:
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18001F6F0 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800B5E94 (--1CEffectBrush@@MEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800B6154 (--1CGradientBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800B85A4 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x1800B8B34 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x1800B8D84 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800F26B0 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x18021D9B8 (--1CClipBrush@@MEAA@XZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x180221CE4 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CBrush::~CBrush(CBrush *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 72);
  CResource::~CResource(this);
}
