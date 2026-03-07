void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C02D4DA0 && *((_QWORD *)xmmword_1C02D4DA0 + 12) && *((_QWORD *)xmmword_1C02D4DA0 + 13) != a1 )
    CitpLogoff(xmmword_1C02D4DA0);
}
