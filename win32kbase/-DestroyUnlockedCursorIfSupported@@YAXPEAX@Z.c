void __fastcall DestroyUnlockedCursorIfSupported(void *a1)
{
  if ( qword_1C02D6CE0 && (int)qword_1C02D6CE0() >= 0 )
  {
    if ( qword_1C02D6CE8 )
      qword_1C02D6CE8(a1);
  }
}
