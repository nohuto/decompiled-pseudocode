/*
 * XREFs of ?GetTransform@IMonitorTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180105FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall IMonitorTarget::GetTransform(IMonitorTarget *this)
{
  return (const struct CMILMatrix *)&CMILMatrix::Identity;
}
