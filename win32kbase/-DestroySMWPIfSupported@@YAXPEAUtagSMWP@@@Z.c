void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  if ( qword_1C02D6CF0 && (int)qword_1C02D6CF0() >= 0 )
  {
    if ( qword_1C02D6CF8 )
      qword_1C02D6CF8(a1);
  }
}
