__int64 __fastcall DxgkEngGetClientRectApiExt(HDC a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C02D5650 && (int)qword_1C02D5650() >= 0 && qword_1C02D5658 )
    return (unsigned int)qword_1C02D5658(a1, a2);
  return v2;
}
