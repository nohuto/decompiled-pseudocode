/*
 * XREFs of EngGetCurrentCodePage @ 0x1C0279640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngGetCurrentCodePage(PUSHORT OemCodePage, PUSHORT AnsiCodePage)
{
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
}
