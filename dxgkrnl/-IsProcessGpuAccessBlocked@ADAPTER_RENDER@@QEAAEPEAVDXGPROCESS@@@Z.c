/*
 * XREFs of ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C01B7C34
 * Callers:
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01B7980 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 * Callees:
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C0009E78 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 */

unsigned __int8 __fastcall ADAPTER_RENDER::IsProcessGpuAccessBlocked(VIDSCH_EXPORT **this, struct DXGPROCESS *a2)
{
  if ( *((_BYTE *)this[2] + 209) )
    return 0;
  else
    return VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(this[92], this[93], a2);
}
