/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00A0400
 * Callers:
 *     CleanupGDI @ 0x1C00A0060 (CleanupGDI.c)
 * Callees:
 *     GreSetRegionOwner @ 0x1C003E590 (GreSetRegionOwner.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 */

void __fastcall DestroyRegion(HPALETTE *a1)
{
  HPALETTE v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
