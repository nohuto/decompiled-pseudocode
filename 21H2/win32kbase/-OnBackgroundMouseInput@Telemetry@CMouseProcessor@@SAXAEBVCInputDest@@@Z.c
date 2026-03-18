/*
 * XREFs of ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C003D444
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033DD0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033FF0 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     CitBackgroundMouseInput @ 0x1C003D488 (CitBackgroundMouseInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::Telemetry::OnBackgroundMouseInput(const struct CInputDest *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct tagTHREADINFO *ThreadInfo; // rax

  if ( CInputDest::DoesBelongToForeground((__int64)this, 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  ThreadInfo = CInputDest::GetThreadInfo(this);
  if ( ThreadInfo )
    CitBackgroundMouseInput(*((_QWORD *)ThreadInfo + 53));
}
