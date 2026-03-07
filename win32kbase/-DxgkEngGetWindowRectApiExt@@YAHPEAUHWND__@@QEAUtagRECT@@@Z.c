__int64 __fastcall DxgkEngGetWindowRectApiExt(HWND a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C02D5620 && (int)qword_1C02D5620() >= 0 && qword_1C02D5628 )
    return (unsigned int)qword_1C02D5628(a1, a2);
  return v2;
}
