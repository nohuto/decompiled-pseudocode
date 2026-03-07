void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  if ( qword_1C02D6D50 && (int)qword_1C02D6D50() >= 0 )
  {
    if ( qword_1C02D6D58 )
      qword_1C02D6D58(a1);
  }
}
