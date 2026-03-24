/*
 * XREFs of KiConvertToGuiThread @ 0x1404021A0
 * Callers:
 *     KiSystemCall64 @ 0x140411000 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140683840 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
