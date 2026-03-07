void __fastcall xxxCleanupAndFreeDdeConvIfSupported(struct tagDDECONV *a1)
{
  if ( qword_1C02D6D20 && (int)qword_1C02D6D20() >= 0 )
  {
    if ( qword_1C02D6D28 )
      qword_1C02D6D28(a1);
  }
}
