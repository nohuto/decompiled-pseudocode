/*
 * XREFs of ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C0021EB4
 * Callers:
 *     ?Delete@CVisRgnTrackerProp@@UEAAXXZ @ 0x1C0021E50 (-Delete@CVisRgnTrackerProp@@UEAAXXZ.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 * Callees:
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1C0021EE8 (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::FreeTrackedRegions(CVisRgnTrackerProp *this)
{
  signed int i; // ebx

  for ( i = 0; i < 3; ++i )
    CVisRgnTrackerProp::FreeTrackedRegion(this, i);
}
