/*
 * XREFs of TppTerminateProcess @ 0x180112400
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x180112D28 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180112DAC (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TppTerminateProcess(NTSTATUS **a1)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, **a1);
}
