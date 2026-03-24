/*
 * XREFs of ?Delete@CVisRgnTrackerProp@@UEAAXXZ @ 0x1C00E91A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C00E91F8 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 */

void __fastcall CVisRgnTrackerProp::Delete(CVisRgnTrackerProp ***this)
{
  CVisRgnTrackerProp **v2; // rcx
  CVisRgnTrackerProp **v3; // rdx

  CVisRgnTrackerProp::FreeTrackedRegions((CVisRgnTrackerProp *)this);
  if ( *((_BYTE *)this + 65) )
  {
    v2 = this[2];
    if ( v2[1] != (CVisRgnTrackerProp *)(this + 2) || (v3 = this[3], *v3 != (CVisRgnTrackerProp *)(this + 2)) )
      __fastfail(3u);
    *v3 = (CVisRgnTrackerProp *)v2;
    v2[1] = (CVisRgnTrackerProp *)v3;
    *((_BYTE *)this + 65) = 0;
  }
  Win32FreePool(this);
}
