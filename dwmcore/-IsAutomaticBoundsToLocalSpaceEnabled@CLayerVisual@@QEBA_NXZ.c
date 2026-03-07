char __fastcall CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(CLayerVisual *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 728) )
  {
    if ( *((_BYTE *)this + 729) )
      return 1;
  }
  return result;
}
