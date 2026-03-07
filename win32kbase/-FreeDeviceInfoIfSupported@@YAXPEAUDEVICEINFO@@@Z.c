void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  if ( qword_1C02D61F0 && (int)qword_1C02D61F0() >= 0 )
  {
    if ( qword_1C02D61F8 )
      qword_1C02D61F8(a1);
  }
}
