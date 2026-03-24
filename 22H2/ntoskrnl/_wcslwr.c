/*
 * XREFs of _wcslwr @ 0x1403D1A30
 * Callers:
 *     SiGetBootDeviceNameFromRegistry @ 0x140687C28 (SiGetBootDeviceNameFromRegistry.c)
 *     EtwpCovSampSplitSegments @ 0x140945CC8 (EtwpCovSampSplitSegments.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A2F0 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcslwr(wchar_t *String)
{
  wchar_t v3; // cx
  wchar_t *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int16)(v3 - 65) <= 0x19u )
        *v4 = v3 + 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
