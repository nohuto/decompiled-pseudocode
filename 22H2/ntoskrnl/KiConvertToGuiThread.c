/*
 * XREFs of KiConvertToGuiThread @ 0x140423CB0
 * Callers:
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1407C6820 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
