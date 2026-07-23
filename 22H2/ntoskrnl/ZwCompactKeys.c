/*
 * XREFs of ZwCompactKeys @ 0x1403FAD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Count);
}
