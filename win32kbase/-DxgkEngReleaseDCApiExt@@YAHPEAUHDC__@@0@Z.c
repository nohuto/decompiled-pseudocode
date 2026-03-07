__int64 __fastcall DxgkEngReleaseDCApiExt(HDC a1, HDC a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C02D5640 && (int)qword_1C02D5640() >= 0 && qword_1C02D5648 )
    return (unsigned int)qword_1C02D5648(a1, a2);
  return v2;
}
