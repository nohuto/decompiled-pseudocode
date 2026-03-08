/*
 * XREFs of KiConvertToGuiThread @ 0x14041B920
 * Callers:
 *     KiSystemCall64 @ 0x14042B100 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140776D40 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
