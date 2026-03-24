/*
 * XREFs of PopNetGetNextDueRefreshTime @ 0x1408F1DB4
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408F1F70 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408F20B0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     ExLocalTimeToSystemTime @ 0x1402B5530 (ExLocalTimeToSystemTime.c)
 *     ExSystemTimeToLocalTime @ 0x1402D3270 (ExSystemTimeToLocalTime.c)
 */

LARGE_INTEGER PopNetGetNextDueRefreshTime()
{
  LARGE_INTEGER v1; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+40h] [rbp+18h] BYREF

  LocalTime.QuadPart = 0LL;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  if ( qword_140C23388
    && MEMORY[0xFFFFF78000000014] < qword_140C23388
    && qword_140C23388 - MEMORY[0xFFFFF78000000014] >= 1200000000 )
  {
    return (LARGE_INTEGER)(qword_140C23388 - 1200000000);
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
