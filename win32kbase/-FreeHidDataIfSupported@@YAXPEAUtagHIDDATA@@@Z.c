void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  if ( qword_1C02D6D60 && (int)qword_1C02D6D60() >= 0 )
  {
    if ( qword_1C02D6D68 )
      qword_1C02D6D68(a1);
  }
}
