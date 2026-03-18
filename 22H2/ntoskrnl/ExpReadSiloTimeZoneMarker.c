/*
 * XREFs of ExpReadSiloTimeZoneMarker @ 0x1409F8008
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140840928 (ExpRefreshTimeZoneInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1409F76DC (ExpSetTimeZoneInformation.c)
 * Callees:
 *     ExpReadTimeZoneInformation @ 0x1409F8038 (ExpReadTimeZoneInformation.c)
 */

bool ExpReadSiloTimeZoneMarker()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  ExpReadTimeZoneInformation(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
