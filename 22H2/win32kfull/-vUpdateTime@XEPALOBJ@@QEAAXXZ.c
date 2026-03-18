/*
 * XREFs of ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00E0CE0
 * Callers:
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0007548 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreRealizeDefaultPalette @ 0x1C001F258 (GreRealizeDefaultPalette.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00E0C6C (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreSetSystemPaletteUse @ 0x1C02D2184 (GreSetSystemPaletteUse.c)
 *     NtGdiResizePalette @ 0x1C02D2760 (NtGdiResizePalette.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02D895C (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02D8DF8 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02D8F10 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
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
