/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00B5B3C
 * Callers:
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C0052260 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HRGN *a1)
{
  struct HOBJ__ *v2; // rcx
  __int64 v3; // rdx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject((struct HOBJ__ *)*a1, v3);
    *a1 = 0LL;
  }
}
