/*
 * XREFs of ??1CBrush@@MEAA@XZ @ 0x18006220C
 * Callers:
 *     ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x18001D580 (--_GCWindowBackdropBrush@@UEAAPEAXI@Z.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x180061A14 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x180062084 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800CF914 (--1CEffectBrush@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800D3054 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800D61C0 (--_ECColorBrush@@MEAAPEAXI@Z.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x1800E4EC4 (--1CDropShadow@@UEAA@XZ.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x1801B762C (--1CClipBrush@@MEAA@XZ.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801BB2A8 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801E682C (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C8D94 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CBrush::~CBrush(CBrush *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 64);
  CResource::~CResource(this);
}
