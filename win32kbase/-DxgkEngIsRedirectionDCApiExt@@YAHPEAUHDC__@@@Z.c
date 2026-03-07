__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02D5630 && (int)qword_1C02D5630() >= 0 && qword_1C02D5638 )
    return (unsigned int)qword_1C02D5638(a1);
  return v1;
}
