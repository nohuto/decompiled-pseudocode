/*
 * XREFs of ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01FAD64
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F97F0 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01FA948 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1C01FAD28 (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
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
