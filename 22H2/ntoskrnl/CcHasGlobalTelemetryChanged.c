/*
 * XREFs of CcHasGlobalTelemetryChanged @ 0x1403D0A54
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140881090 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     <none>
 */

char CcHasGlobalTelemetryChanged()
{
  char result; // al

  result = 0;
  if ( qword_140C5F980 || qword_140C5F988 || qword_140C5F990 || qword_140C5F998 || qword_140C5F9A0 )
    return 1;
  return result;
}
