char __fastcall CLayerVisual::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 93 )
    return 1;
  v4 = CVisual::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
