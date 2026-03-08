/*
 * XREFs of ?GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z @ 0x1C00422E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxDriver *__fastcall FxDriver::GetFxDriver(_DRIVER_OBJECT *DriverObject)
{
  return *(FxDriver **)IoGetDriverObjectExtension(DriverObject, FxDriver::GetFxDriver);
}
