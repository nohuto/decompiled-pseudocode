/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x140413130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(Luid, v1);
}
