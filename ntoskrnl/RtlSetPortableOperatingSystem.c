/*
 * XREFs of RtlSetPortableOperatingSystem @ 0x1405A7DD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteRegistryValue @ 0x14069EDB0 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall RtlSetPortableOperatingSystem(char a1)
{
  BOOL ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = a1 != 0;
  return RtlWriteRegistryValue(2u, 0LL, L"PortableOperatingSystem", 4u, &ValueData, 4u);
}
