/*
 * XREFs of ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01F5338
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F5A90 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01F7834 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C01F816C (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1C01F81B4 (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 */

bool __fastcall CMouseProcessor::AppCompatWheelRoutingRequested(CMouseProcessor *this)
{
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  char v2; // bl
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rdx
  char HasThreadRequestedHittestMouseWheelRouting; // al
  char v6; // dl

  MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
  v2 = 0;
  v3 = MouseWheelForegroundThread;
  if ( MouseWheelForegroundThread )
  {
    LOBYTE(v4) = (unsigned __int8)anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(MouseWheelForegroundThread) != 0;
    HasThreadRequestedHittestMouseWheelRouting = anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(
                                                   v3,
                                                   v4);
    if ( v6 )
    {
      if ( HasThreadRequestedHittestMouseWheelRouting )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4766);
      else
        v2 = 1;
    }
    LOBYTE(MouseWheelForegroundThread) = v2;
  }
  return (char)MouseWheelForegroundThread;
}
