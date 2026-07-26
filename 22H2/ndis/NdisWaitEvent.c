/*
 * XREFs of NdisWaitEvent @ 0x1C00391D0
 * Callers:
 *     ?ndisLegacyProtocolPauseRestartHandler@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT@@@Z @ 0x1C0097A14 (-ndisLegacyProtocolPauseRestartHandler@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall NdisWaitEvent(PNDIS_EVENT Event, UINT MsToWait)
{
  unsigned __int8 CurrentIrql; // al
  LARGE_INTEGER *Timeout; // rax
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  Timeout = 0LL;
  if ( MsToWait )
  {
    Timeout = (LARGE_INTEGER *)&v5;
    v5 = -10000LL * (int)MsToWait;
  }
  return KeWaitForSingleObject(Event, Executive, 0, 0, Timeout) == 0;
}
