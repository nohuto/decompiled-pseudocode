/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00079E4
 * Callers:
 *     CleanupGDI @ 0x1C000763C (CleanupGDI.c)
 * Callees:
 *     GreSetRegionOwner @ 0x1C0035410 (GreSetRegionOwner.c)
 *     GreDeleteObject @ 0x1C0038500 (GreDeleteObject.c)
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
