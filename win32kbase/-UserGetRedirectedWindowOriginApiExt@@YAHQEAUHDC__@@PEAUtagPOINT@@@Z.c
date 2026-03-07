__int64 __fastcall UserGetRedirectedWindowOriginApiExt(HDC a1, struct tagPOINT *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  *a2 = 0LL;
  if ( qword_1C02D5750 && (int)qword_1C02D5750() >= 0 && qword_1C02D5758 )
    return (unsigned int)qword_1C02D5758(a1, a2);
  return v2;
}
