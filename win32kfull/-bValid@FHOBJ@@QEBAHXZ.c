_BOOL8 __fastcall FHOBJ::bValid(FHOBJ *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *(_QWORD *)this )
    return **(_QWORD **)this != 0LL;
  return result;
}
