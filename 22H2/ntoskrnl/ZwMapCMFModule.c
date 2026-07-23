/*
 * XREFs of ZwMapCMFModule @ 0x1403FBC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&What);
}
