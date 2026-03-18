/*
 * XREFs of OnPTPMouseOperation @ 0x1C02125B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 OnPTPMouseOperation()
{
  return CPTPProcessor::ProcessMouseQueue();
}
