bool __fastcall CRectangleGeometry::IsRoundedRectangleGeometry(CRectangleGeometry *this)
{
  char v1; // dl
  bool result; // al

  v1 = 1;
  result = *((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0;
  if ( !*((_BYTE *)this + 196) )
  {
    if ( (*((float *)this + 42) <= 0.0 || *((float *)this + 43) <= 0.0)
      && (*((float *)this + 46) <= 0.0 || *((float *)this + 47) <= 0.0)
      && (*((float *)this + 44) <= 0.0 || *((float *)this + 45) <= 0.0) )
    {
      v1 = 0;
    }
    return v1 | result;
  }
  return result;
}
