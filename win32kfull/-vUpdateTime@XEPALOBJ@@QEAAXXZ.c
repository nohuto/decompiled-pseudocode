/*
 * XREFs of ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00D922C
 * Callers:
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0007488 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00D91B8 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C00FA71C (GreRealizeDefaultPalette.c)
 *     GreSetSystemPaletteUse @ 0x1C02D3F08 (GreSetSystemPaletteUse.c)
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02DA728 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02DABC4 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02DACDC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vUpdateTime(XEPALOBJ *this)
{
  signed __int32 v2; // ecx
  __int64 v3; // rdx

  v2 = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(this) + 962);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v2;
  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v3 != *(_QWORD *)this )
    *(_DWORD *)(v3 + 32) = v2;
}
