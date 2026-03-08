/*
 * XREFs of HalpIommuGetExceptionList @ 0x140513048
 * Callers:
 *     IvtProcessDeviceExceptions @ 0x140A95E14 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     <none>
 */

__int64 *HalpIommuGetExceptionList()
{
  return &HalpIommuExceptionList;
}
