__int64 (*PowerOnGdi())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D6AC0;
  if ( qword_1C02D6AC0 )
    return (__int64 (*)(void))qword_1C02D6AC0();
  return result;
}
