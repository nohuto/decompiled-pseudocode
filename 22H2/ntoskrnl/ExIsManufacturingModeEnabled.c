/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x14068F4B0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B40180 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
