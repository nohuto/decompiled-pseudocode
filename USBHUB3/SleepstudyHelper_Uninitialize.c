__int64 (*SleepstudyHelper_Uninitialize())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C006DCD8;
  if ( qword_1C006DCD8 )
    return (__int64 (*)(void))qword_1C006DCD8();
  return result;
}
