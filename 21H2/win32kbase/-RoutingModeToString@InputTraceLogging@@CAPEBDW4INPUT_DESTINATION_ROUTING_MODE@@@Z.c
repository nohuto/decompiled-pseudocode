/*
 * XREFs of ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01D3C70
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C0034E2C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C003880C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01D77F4 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RoutingModeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Default";
  v1 = a1 - 1;
  if ( !v1 )
    return "Observe";
  v2 = v1 - 1;
  if ( !v2 )
    return "ISM";
  if ( v2 == 1 )
    return "RouteToMT";
  return "UNKNOWN";
}
