void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x81) != 0 )
      RFONTOBJ::dtorHelper(this);
    RFONTOBJ::vReleaseCache(this);
  }
}
