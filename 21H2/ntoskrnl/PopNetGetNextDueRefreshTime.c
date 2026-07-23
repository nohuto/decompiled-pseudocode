/*
 * XREFs of PopNetGetNextDueRefreshTime @ 0x1408F1F14
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408F20D0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408F2210 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x140233710 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402515B0 (ExSystemTimeToLocalTime.c)
 */

LARGE_INTEGER PopNetGetNextDueRefreshTime()
{
  LARGE_INTEGER v1; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+40h] [rbp+18h] BYREF

  LocalTime.QuadPart = 0LL;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( qword_140C23988
    && MEMORY[0xFFFFF78000000014] < qword_140C23988
    && qword_140C23988 - MEMORY[0xFFFFF78000000014] >= 1200000000 )
  {
    return (LARGE_INTEGER)(qword_140C23988 - 1200000000);
  }
  else
  {
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
    v1.QuadPart = LocalTime.QuadPart
                + 18000000000LL
                - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL
                - 1200000000
                + (-(__int64)((unsigned __int64)(18000000000LL - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL) < 0x47868C00) & 0x430E23400LL);
    ExLocalTimeToSystemTime(&v1, &v1);
    return v1;
  }
}
