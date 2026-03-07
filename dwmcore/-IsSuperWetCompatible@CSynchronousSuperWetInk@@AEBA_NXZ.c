char __fastcall CSynchronousSuperWetInk::IsSuperWetCompatible(CSynchronousSuperWetInk *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 43) == 2 || *((_QWORD *)this + 23) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      if ( *((_QWORD *)this + 26) )
        return 1;
    }
  }
  return result;
}
