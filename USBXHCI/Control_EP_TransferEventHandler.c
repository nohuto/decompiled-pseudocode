/*
 * XREFs of Control_EP_TransferEventHandler @ 0x1C0006810
 * Callers:
 *     <none>
 * Callees:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006840 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0042974 (Control_ProcessTransferEventWithED0.c)
 */

__int64 __fastcall Control_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Control_ProcessTransferEventWithED1();
  else
    return Control_ProcessTransferEventWithED0();
}
