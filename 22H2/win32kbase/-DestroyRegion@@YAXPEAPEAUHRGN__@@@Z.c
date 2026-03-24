/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0008E64
 * Callers:
 *     CleanupGDI @ 0x1C0008ABC (CleanupGDI.c)
 * Callees:
 *     GreSetRegionOwner @ 0x1C0036880 (GreSetRegionOwner.c)
 *     GreDeleteObject @ 0x1C0039970 (GreDeleteObject.c)
 */

void __fastcall DestroyRegion(HBRUSH *a1)
{
  HBRUSH v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner(v2, 2147483650LL);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
