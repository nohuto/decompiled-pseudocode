/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x180096EBC
 * Callers:
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18001F7E0 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800B6374 (--1CEffectBrush@@MEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800B6634 (--1CGradientBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800B8A84 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x1800B9014 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x1800B9264 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800F32E0 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x180220F18 (--1CClipBrush@@MEAA@XZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x180225244 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D54D8 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC624 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
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
