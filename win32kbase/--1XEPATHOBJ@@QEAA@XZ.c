void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  if ( qword_1C02D5DE8 && (int)qword_1C02D5DE8() >= 0 && qword_1C02D5DF0 )
    qword_1C02D5DF0(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
