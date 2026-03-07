void __fastcall RESETFCOBJ::~RESETFCOBJ(RFONTOBJ **this)
{
  if ( *(_DWORD *)this )
  {
    if ( !*((_DWORD *)this + 1) )
    {
      RFONTOBJ::vReleaseCache(this[1]);
      RFONTOBJ::vMakeInactive(this[1]);
    }
  }
}
