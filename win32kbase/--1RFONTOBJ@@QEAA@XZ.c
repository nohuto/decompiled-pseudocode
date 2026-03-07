void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x81) != 0 && qword_1C02D5D38 && (int)qword_1C02D5D38() >= 0 )
    {
      if ( qword_1C02D5D40 )
        qword_1C02D5D40(this);
    }
    RFONTOBJ::vReleaseCache(this);
  }
}
