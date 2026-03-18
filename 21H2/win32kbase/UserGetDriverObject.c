/*
 * XREFs of UserGetDriverObject @ 0x1C00D8290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDRIVER_OBJECT UserGetDriverObject()
{
  return gpWin32kDriverObject;
}
