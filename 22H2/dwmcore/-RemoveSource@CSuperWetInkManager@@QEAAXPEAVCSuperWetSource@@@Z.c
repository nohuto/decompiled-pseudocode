/*
 * XREFs of ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC49C
 * Callers:
 *     ??1CGenericInk@@EEAA@XZ @ 0x18022CD58 (--1CGenericInk@@EEAA@XZ.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180253328 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 * Callees:
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801CC1D8 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC4DC (-RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC564 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 */

void __fastcall CSuperWetInkManager::RemoveSource(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  if ( IsSuperWetInkCompatibleVailContainer() )
    CSuperWetInkManager::RemoveSourceHost(this, a2);
  else
    CSuperWetInkManager::RemoveSourceLocal(this, a2);
}
