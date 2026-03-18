/*
 * XREFs of ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C00B4D1C
 * Callers:
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 *     ?Delete@CVisRgnTrackerProp@@UEAAXXZ @ 0x1C00B4CC0 (-Delete@CVisRgnTrackerProp@@UEAAXXZ.c)
 * Callees:
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1C00B4D50 (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::FreeTrackedRegions(CVisRgnTrackerProp *this)
{
  signed int i; // ebx

  for ( i = 0; i < 3; ++i )
    CVisRgnTrackerProp::FreeTrackedRegion(this, i);
}
