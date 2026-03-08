/*
 * XREFs of ZwAcceptConnectPort @ 0x140412350
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1408254BC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

__int64 ZwAcceptConnectPort()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
