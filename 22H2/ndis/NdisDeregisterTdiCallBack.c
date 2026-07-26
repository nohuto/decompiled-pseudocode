/*
 * XREFs of NdisDeregisterTdiCallBack @ 0x1C008AEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void NdisDeregisterTdiCallBack(void)
{
  ndisTdiRegisterCallback = 0LL;
  ndisTdiPnPHandler = 0LL;
}
