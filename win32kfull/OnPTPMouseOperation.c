/*
 * XREFs of OnPTPMouseOperation @ 0x1C01F7BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 OnPTPMouseOperation()
{
  return CPTPProcessor::ProcessMouseQueue();
}
