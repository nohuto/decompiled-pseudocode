void __fastcall FreePointerDeviceIfSupported(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  if ( qword_1C02D6D70 && (int)qword_1C02D6D70() >= 0 )
  {
    if ( qword_1C02D6D78 )
      qword_1C02D6D78(a1);
  }
}
