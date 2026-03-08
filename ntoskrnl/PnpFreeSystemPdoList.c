/*
 * XREFs of PnpFreeSystemPdoList @ 0x1407856C0
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpFreePdoDeviceList @ 0x1407856D8 (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall PnpFreeSystemPdoList(void *a1)
{
  return PiPnpFreePdoDeviceList(a1);
}
