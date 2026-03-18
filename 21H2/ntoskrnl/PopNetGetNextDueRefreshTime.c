/*
 * XREFs of PopNetGetNextDueRefreshTime @ 0x1409986C4
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x140998800 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140998940 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 */

LARGE_INTEGER PopNetGetNextDueRefreshTime()
{
  LARGE_INTEGER LocalTime; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+38h] [rbp+10h] BYREF

  LocalTime.QuadPart = 0LL;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( qword_140C22708
    && MEMORY[0xFFFFF78000000014] < qword_140C22708
    && qword_140C22708 - MEMORY[0xFFFFF78000000014] >= 1200000000 )
  {
    return (LARGE_INTEGER)(qword_140C22708 - 1200000000);
  }
  else
  {
    ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
    LocalTime.QuadPart = LocalTime.QuadPart
                       + 18000000000LL
                       - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL
                       - 1200000000
                       + (-(__int64)((unsigned __int64)(18000000000LL
                                                      - (LocalTime.QuadPart + 18000000000LL) % 18000000000LL) < 0x47868C00) & 0x430E23400LL);
    ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
    return LocalTime;
  }
}
