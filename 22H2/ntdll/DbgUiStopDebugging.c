/*
 * XREFs of DbgUiStopDebugging @ 0x1800CCAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
