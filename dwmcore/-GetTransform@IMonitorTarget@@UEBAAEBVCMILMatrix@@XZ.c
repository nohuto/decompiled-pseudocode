/*
 * XREFs of ?GetTransform@IMonitorTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1801054A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall IMonitorTarget::GetTransform(IMonitorTarget *this)
{
  return (const struct CMILMatrix *)&CMILMatrix::Identity;
}
