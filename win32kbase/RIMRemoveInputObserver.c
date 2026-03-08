/*
 * XREFs of RIMRemoveInputObserver @ 0x1C01A7B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RIMRemoveInputObserver(void *a1, KPROCESSOR_MODE a2)
{
  return ObCloseHandle(a1, a2);
}
