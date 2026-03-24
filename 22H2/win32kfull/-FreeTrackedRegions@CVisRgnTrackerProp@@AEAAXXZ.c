/*
 * XREFs of ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1C00E91F8
 * Callers:
 *     ?Delete@CVisRgnTrackerProp@@UEAAXXZ @ 0x1C00E91A0 (-Delete@CVisRgnTrackerProp@@UEAAXXZ.c)
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisRgnTrackerProp::FreeTrackedRegions(CVisRgnTrackerProp *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = (_QWORD *)((char *)this + 40);
  v2 = 3LL;
  do
  {
    if ( *v1 )
    {
      GreSetRegionOwner(*v1, 2147483650LL);
      GreDeleteObject(*v1);
      *v1 = 0LL;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
