char __fastcall DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(
        float a1,
        float *a2,
        _BYTE *a3)
{
  char result; // al

  result = 0;
  if ( *a2 != a1 )
  {
    result = 1;
    *a2 = a1;
    *a3 = 1;
  }
  return result;
}
