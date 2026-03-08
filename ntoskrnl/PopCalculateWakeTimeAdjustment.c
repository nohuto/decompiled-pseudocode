/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x140984168
 * Callers:
 *     PopValidateRTCWake @ 0x140A9E3E4 (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x140581020 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140C3CD80 == 4 )
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
  return PpmConvertTime(qword_140C3D0E8, PopQpcFrequency, 0x3E8uLL);
}
