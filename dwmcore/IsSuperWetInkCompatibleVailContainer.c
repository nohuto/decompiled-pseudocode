/*
 * XREFs of IsSuperWetInkCompatibleVailContainer @ 0x1801C8FA8
 * Callers:
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C8A90 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801C8FD8 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801C926C (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C9B00 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     ?IsVailContainer@@YA_NXZ @ 0x180278ADC (-IsVailContainer@@YA_NXZ.c)
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
