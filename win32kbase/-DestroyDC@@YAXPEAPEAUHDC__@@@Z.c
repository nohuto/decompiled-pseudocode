/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B5B70
 * Callers:
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((__int64)v2, 0x80000002, 0, 0);
    GrepDeleteDC(*a1, 0x400000u);
    *a1 = 0LL;
  }
}
