/*
 * XREFs of ZwInitializeRegistry @ 0x1403FBA40
 * Callers:
 *     NtInitializeRegistry @ 0x14078D400 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwInitializeRegistry(USHORT BootCondition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootCondition);
}
