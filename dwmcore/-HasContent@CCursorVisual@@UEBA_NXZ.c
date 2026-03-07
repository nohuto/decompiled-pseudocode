char __fastcall CCursorVisual::HasContent(CCursorVisual *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 90) || *((_QWORD *)this + 32) )
    return 1;
  return result;
}
