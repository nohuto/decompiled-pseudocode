/*
 * XREFs of Isoch_EP_TransferEventHandler @ 0x1C0001E90
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044CF4 (Isoch_ProcessTransferEventWithED0.c)
 */

__int64 __fastcall Isoch_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Isoch_ProcessTransferEventWithED1();
  else
    return Isoch_ProcessTransferEventWithED0();
}
