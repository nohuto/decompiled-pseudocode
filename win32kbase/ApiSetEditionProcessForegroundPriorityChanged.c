__int64 (*__fastcall ApiSetEditionProcessForegroundPriorityChanged(__int64 a1, unsigned int a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D76F8;
  if ( qword_1C02D76F8 )
  {
    result = (__int64 (*)(void))qword_1C02D76F8();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02D7700;
      if ( qword_1C02D7700 )
        return (__int64 (*)(void))qword_1C02D7700(a1, a2);
    }
  }
  return result;
}
