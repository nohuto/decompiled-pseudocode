/*
 * XREFs of HaliInitPnpDriver @ 0x14081AF30
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 */

__int64 HaliInitPnpDriver()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  v1[0] = 2228256LL;
  v1[1] = L"\\Driver\\ACPI_HAL";
  return IoCreateDriver(v1, HalpDriverEntry);
}
