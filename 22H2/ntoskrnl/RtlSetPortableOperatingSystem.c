/*
 * XREFs of RtlSetPortableOperatingSystem @ 0x1405888F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteRegistryValue @ 0x1406978F0 (RtlWriteRegistryValue.c)
 */

NTSTATUS __cdecl RtlSetPortableOperatingSystem(BOOLEAN IsPortable)
{
  BOOL ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = IsPortable != 0;
  return RtlWriteRegistryValue(2u, 0LL, L"PortableOperatingSystem", 4u, &ValueData, 4u);
}
