__int64 (*GreIsCurrentProcessSystemCritical())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D5FD0;
  if ( qword_1C02D5FD0 )
    return (__int64 (*)(void))qword_1C02D5FD0();
  return result;
}
