__int64 __fastcall DxgkEngDetectGDIPathApiExt(const void *a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( qword_1C02D5670 && (int)qword_1C02D5670() >= 0 && qword_1C02D5678 )
    return (unsigned int)qword_1C02D5678(a1, a2, a3, a4);
  return v4;
}
