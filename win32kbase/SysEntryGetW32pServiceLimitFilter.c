__int64 (*SysEntryGetW32pServiceLimitFilter())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D60D8;
  if ( qword_1C02D60D8 )
    return (__int64 (*)(void))qword_1C02D60D8();
  return result;
}
