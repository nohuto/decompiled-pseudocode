/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x1403FB1C0
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
