__int64 __fastcall DxgkEngGetDCApiExt(HWND a1, HDC *a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( qword_1C02D5610 && (int)qword_1C02D5610() >= 0 && qword_1C02D5618 )
    return qword_1C02D5618(a1, a2);
  return v2;
}
