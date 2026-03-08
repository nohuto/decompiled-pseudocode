/*
 * XREFs of ExpReadSiloTimeZoneMarker @ 0x1409F5178
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1409F484C (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExpReadTimeZoneInformation @ 0x1409F51A8 (ExpReadTimeZoneInformation.c)
 */

bool ExpReadSiloTimeZoneMarker()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  ExpReadTimeZoneInformation(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
