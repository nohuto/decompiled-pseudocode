/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x140987218
 * Callers:
 *     PopValidateRTCWake @ 0x140AA1594 (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x1402553F0 (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x140583550 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140C3CE40 == 4 )
  {
    if ( !PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, &v1, 0LL);
      return v1;
    }
  }
  else if ( !PoResumeFromHibernate )
  {
    return result;
  }
  return PpmConvertTime(qword_140C3D4A8, PopQpcFrequency, 0x3E8uLL);
}
