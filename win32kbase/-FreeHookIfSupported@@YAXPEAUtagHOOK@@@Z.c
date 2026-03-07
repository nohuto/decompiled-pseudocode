void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  if ( qword_1C02D6D00 && (int)qword_1C02D6D00() >= 0 )
  {
    if ( qword_1C02D6D08 )
      qword_1C02D6D08(a1);
  }
}
