/*
 * XREFs of IsMiPActive @ 0x1C003C2F4
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     MiPCheckMsgFilter @ 0x1C00A70C0 (MiPCheckMsgFilter.c)
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C01CE330 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01FC54C (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPActive(__int64 a1, __int64 a2)
{
  return a2 != 1
      && !*(_QWORD *)(a1 + 608)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 424) + 820LL) & 4) != 0 || (*(_DWORD *)(a1 + 1256) & 0x6000000) != 0)
      && (!a2 || (*(_DWORD *)(a2 + 100) & 0x20) == 0);
}
