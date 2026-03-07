__int64 (*UserIsCurrentThreadDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D7280;
  if ( qword_1C02D7280 )
    return (__int64 (*)(void))qword_1C02D7280();
  return result;
}
