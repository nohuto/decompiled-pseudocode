_BOOL8 __fastcall bIgnoreDeviceSurfaceUpdates(struct _SURFOBJ *a1, struct _CLIPOBJ **a2)
{
  return a1->iType == 1 && !EngUpdateDeviceSurface(a1, a2);
}
