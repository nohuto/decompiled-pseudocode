bool __fastcall DLODCOBJ::bValid(DLODCOBJ *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_BYTE *)this + 17) != 0;
  return result;
}
