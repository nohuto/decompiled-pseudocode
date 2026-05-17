/*
 * XREFs of TppTerminateProcess @ 0x180112400
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x180112D28 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180112DAC (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}
