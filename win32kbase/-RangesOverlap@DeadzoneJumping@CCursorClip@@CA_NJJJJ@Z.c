/*
 * XREFs of ?RangesOverlap@DeadzoneJumping@CCursorClip@@CA_NJJJJ@Z @ 0x1C020B024
 * Callers:
 *     ?CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z @ 0x1C020AB04 (-CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CCursorClip::DeadzoneJumping::RangesOverlap(int a1, int a2, int a3, int a4)
{
  if ( a1 <= a2 && a3 <= a4 )
  {
    if ( a3 > a1 )
      goto LABEL_6;
    if ( a1 <= a4 )
      return 1;
    if ( a3 >= a1 )
    {
LABEL_6:
      if ( a3 <= a2 )
        return 1;
    }
  }
  return 0;
}
