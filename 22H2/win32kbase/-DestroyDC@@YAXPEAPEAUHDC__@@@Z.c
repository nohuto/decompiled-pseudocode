/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0008E98
 * Callers:
 *     CleanupGDI @ 0x1C0008ABC (CleanupGDI.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0008F00 (bDeleteDCInternal.c)
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  __int64 v2; // rcx

  v2 = (__int64)*a1;
  if ( v2 )
  {
    GreSetDCOwnerEx(v2, 2147483650LL, 0LL);
    bDeleteDCInternal(*a1, 1LL, 0LL);
    *a1 = 0LL;
  }
}
