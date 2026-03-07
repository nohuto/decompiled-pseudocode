void __fastcall SFMLOGICALSURFACE::CleanupRegions(REGION **this)
{
  REGION *v2; // rcx
  REGION *v3; // rcx

  REGION::vDeleteREGION(this[11]);
  v2 = this[10];
  this[11] = 0LL;
  REGION::vDeleteREGION(v2);
  v3 = *this;
  this[10] = 0LL;
  EtwTraceLifetimeAccum(v3, 1LL);
  REGION::vDeleteREGION(this[16]);
  this[16] = 0LL;
  METAREGION::vClearMoveData((METAREGION *)(this + 16), 1);
}
