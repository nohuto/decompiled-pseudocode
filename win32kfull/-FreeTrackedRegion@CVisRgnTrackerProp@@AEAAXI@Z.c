/*
 * XREFs of ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1C0021EE8
 * Callers:
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C0021EB4 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1C0025B7C (-RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisRgnTrackerProp::FreeTrackedRegion(CVisRgnTrackerProp *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx

  v2 = a2;
  v4 = *((_QWORD *)this + a2 + 6);
  if ( v4 )
  {
    GreSetRegionOwner(v4, 2147483650LL);
    GreDeleteObject(*((_QWORD *)this + v2 + 6));
    *((_QWORD *)this + v2 + 6) = 0LL;
  }
}
