/*
 * XREFs of ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1C00B3C34
 * Callers:
 *     RemoveVisRgnTracker @ 0x1C00B3BEC (RemoveVisRgnTracker.c)
 * Callees:
 *     DwmAsyncUpdateVisRgn @ 0x1C00B4974 (DwmAsyncUpdateVisRgn.c)
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1C00B4D50 (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::RemoveTracker(CVisRgnTrackerProp *this, int a2)
{
  int v3; // edx
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rcx
  void *v9; // rax

  v3 = *((_DWORD *)this + 10) & ~a2;
  *((_DWORD *)this + 10) = v3;
  if ( (v3 & 8) == 0 && *((_QWORD *)this + 6) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 0);
    v9 = (void *)ReferenceDwmApiPort(v8);
    DwmAsyncUpdateVisRgn(v9, 0);
    v3 = *((_DWORD *)this + 10);
  }
  if ( (v3 & 6) == 0 && *((_QWORD *)this + 7) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 1u);
    v7 = (void *)ReferenceDwmApiPort(v6);
    DwmAsyncUpdateVisRgn(v7, 0);
    v3 = *((_DWORD *)this + 10);
  }
  if ( (v3 & 1) == 0 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      CVisRgnTrackerProp::FreeTrackedRegion(this, 2u);
      v5 = (void *)ReferenceDwmApiPort(v4);
      DwmAsyncUpdateVisRgn(v5, 0);
    }
  }
}
