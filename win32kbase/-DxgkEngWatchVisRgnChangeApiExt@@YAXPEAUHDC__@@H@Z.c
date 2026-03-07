void __fastcall DxgkEngWatchVisRgnChangeApiExt(HDC a1, unsigned int a2)
{
  if ( qword_1C02D56F0 && (int)qword_1C02D56F0() >= 0 )
  {
    if ( qword_1C02D56F8 )
      qword_1C02D56F8(a1, a2);
  }
}
