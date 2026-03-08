/*
 * XREFs of RecreateTouchInjectionDevices @ 0x1C00F6290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RecreateTouchInjectionDevices()
{
  __int64 result; // rax

  result = 1LL;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
  return result;
}
