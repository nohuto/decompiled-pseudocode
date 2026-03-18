/*
 * XREFs of ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01F81F0
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F5A90 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA328 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01F7834 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1C01F81B4 (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 */

char __fastcall CMouseProcessor::HittestWheelRoutingRequested(CMouseProcessor *this)
{
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  char v2; // dl

  MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
  v2 = 0;
  if ( MouseWheelForegroundThread )
    return anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting((__int64)MouseWheelForegroundThread) != 0;
  return v2;
}
