void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  if ( qword_1C02D6D30 && (int)qword_1C02D6D30() >= 0 )
  {
    if ( qword_1C02D6D38 )
      qword_1C02D6D38(a1);
  }
}
