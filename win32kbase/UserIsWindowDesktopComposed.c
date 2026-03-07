__int64 (*UserIsWindowDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D7278;
  if ( qword_1C02D7278 )
    return (__int64 (*)(void))qword_1C02D7278();
  return result;
}
