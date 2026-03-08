/*
 * XREFs of KeSetTimer @ 0x140250550
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, 0, 0, (__int64)Dpc);
}
