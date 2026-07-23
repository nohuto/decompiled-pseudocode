/*
 * XREFs of ZwInitializeRegistry @ 0x1403FC5A0
 * Callers:
 *     NtInitializeRegistry @ 0x14078D6C0 (NtInitializeRegistry.c)
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
