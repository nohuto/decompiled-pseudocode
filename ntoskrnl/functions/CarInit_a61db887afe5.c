__int64 CarInit()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange(&CarInitialized, 1, 0);
  if ( (_DWORD)result != 1 )
  {
    qword_140C36518 = (__int64)&CarConfigurationEntries;
    CarConfigurationEntries = (__int64)&CarConfigurationEntries;
    CarLoadConfig();
    result = CarpBugcheckInit();
    if ( DifIsVolatileMode )
      return CarInitLogging();
  }
  return result;
}
