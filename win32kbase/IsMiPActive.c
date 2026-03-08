/*
 * XREFs of IsMiPActive @ 0x1C0155C14
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C007CF1C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     MiPCheckMsgFilter @ 0x1C00BA9F0 (MiPCheckMsgFilter.c)
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C00F2DE0 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0230DF0 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMiPActive(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( a2 != 1
    && !*(_QWORD *)(a1 + 608)
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 424) + 812LL) & 4) != 0 || (*(_DWORD *)(a1 + 1272) & 0x6000000) != 0) )
  {
    if ( !a2 )
      return 1LL;
    v2 = *(_DWORD *)(a2 + 100);
    if ( (v2 & 0x20) == 0 )
      return (~v2 & 0x8000000u) >> 27;
  }
  return 0LL;
}
