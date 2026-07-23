/*
 * XREFs of NtLoadDriver @ 0x140780700
 * Callers:
 *     <none>
 * Callees:
 *     IopLoadDriverImage @ 0x140399778 (IopLoadDriverImage.c)
 */

NTSTATUS __cdecl NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopLoadDriverImage(DriverServiceName);
}
