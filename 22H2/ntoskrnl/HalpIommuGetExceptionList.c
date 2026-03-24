/*
 * XREFs of HalpIommuGetExceptionList @ 0x1404CBEAC
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x1409AA2C8 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
