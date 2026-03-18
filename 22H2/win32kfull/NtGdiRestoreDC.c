/*
 * XREFs of NtGdiRestoreDC @ 0x1C00ACB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiRestoreDC()
{
  return GreRestoreOwnedDC();
}
