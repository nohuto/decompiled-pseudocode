/*
 * XREFs of ZwAcceptConnectPort @ 0x1403F9A60
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407AD7F0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 ZwAcceptConnectPort()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
