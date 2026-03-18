/*
 * XREFs of ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01FAA48
 * Callers:
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0042514 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F9E20 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CWheelEvent::GetWheelMessage(
        CMouseProcessor::CWheelEvent *this,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 7);
  if ( !v3 )
    return 522LL;
  if ( v3 != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  return 526LL;
}
