/*
 * XREFs of ZwAlpcDeleteSectionView @ 0x1403FB5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
