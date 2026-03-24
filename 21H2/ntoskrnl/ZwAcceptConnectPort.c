/*
 * XREFs of ZwAcceptConnectPort @ 0x1403FA3E0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1407AD3B0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 ZwAcceptConnectPort()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
