/*
 * XREFs of IsSuperWetInkCompatibleVailContainer @ 0x1801CC1D8
 * Callers:
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801CBCC0 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC208 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC49C (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CCD30 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x18027C21C (-IsVailContainer@@YA_NXZ.c)
 */

bool IsSuperWetInkCompatibleVailContainer()
{
  bool v0; // al
  char v1; // cl

  v0 = IsVailContainer();
  v1 = 0;
  if ( v0 )
    return *((_DWORD *)g_pComposition + 276) == 6;
  return v1;
}
