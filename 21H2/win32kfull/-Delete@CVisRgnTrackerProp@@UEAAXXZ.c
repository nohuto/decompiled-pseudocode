/*
 * XREFs of ?Delete@CVisRgnTrackerProp@@UEAAXXZ @ 0x1C00B4CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C00B4D1C (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 */

void __fastcall CVisRgnTrackerProp::Delete(CVisRgnTrackerProp ***this)
{
  CVisRgnTrackerProp **v2; // rcx
  CVisRgnTrackerProp **v3; // rdx

  CVisRgnTrackerProp::FreeTrackedRegions((CVisRgnTrackerProp *)this);
  if ( *((_BYTE *)this + 73) )
  {
    v2 = this[3];
    if ( v2[1] != (CVisRgnTrackerProp *)(this + 3) || (v3 = this[4], *v3 != (CVisRgnTrackerProp *)(this + 3)) )
      __fastfail(3u);
    *v3 = (CVisRgnTrackerProp *)v2;
    v2[1] = (CVisRgnTrackerProp *)v3;
    *((_BYTE *)this + 73) = 0;
  }
  Win32FreePool(this);
}
