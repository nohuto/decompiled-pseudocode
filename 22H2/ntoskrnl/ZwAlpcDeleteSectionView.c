/*
 * XREFs of ZwAlpcDeleteSectionView @ 0x1403FAA60
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
