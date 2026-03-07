__int64 __fastcall DEVLOCKOBJ::bPrepareTrgDco(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !qword_1C02D5890 || (int)qword_1C02D5890() < 0 )
    return 0LL;
  if ( qword_1C02D5898 )
    return (unsigned int)qword_1C02D5898(this, a2);
  return v2;
}
