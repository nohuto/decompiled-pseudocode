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
