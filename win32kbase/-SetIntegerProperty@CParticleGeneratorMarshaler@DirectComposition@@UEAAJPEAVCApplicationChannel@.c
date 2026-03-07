__int64 __fastcall DirectComposition::CParticleGeneratorMarshaler::SetIntegerProperty(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  if ( a3 == 2 )
  {
    if ( *((_BYTE *)this + 80) != (a4 != 0) )
    {
      *((_DWORD *)this + 4) |= 0x80u;
      *((_BYTE *)this + 80) = a4 != 0;
      *a5 = 1;
    }
  }
  else if ( a3 == 15 )
  {
    if ( *((_BYTE *)this + 196) != (a4 != 0) )
    {
      *((_DWORD *)this + 4) |= 0x100000u;
      *((_BYTE *)this + 196) = a4 != 0;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
