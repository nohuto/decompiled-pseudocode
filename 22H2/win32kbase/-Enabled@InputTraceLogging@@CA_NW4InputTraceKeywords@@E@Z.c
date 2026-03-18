/*
 * XREFs of ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C005361C
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0003C9C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0055BE0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C005808C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C00A3588 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0138810 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1C01CC61C (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C01D2BA8 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@_KHAEBVCInputDest@@AEBUtag.c)
 *     ?SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1C01D2D70 (-SendFrameToUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@KAEBUtagMANIPULATION_.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01D7274 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C01DC368 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     ?DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z @ 0x1C01F6794 (-DequeueUserModeInput@Mouse@InputTraceLogging@@SAX_KPEBVCInputDest@@@Z.c)
 *     ?QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z @ 0x1C01FABA4 (-QueueUserModeInput@Mouse@InputTraceLogging@@SAX_KAEBVCInputDest@@@Z.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01FAF70 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 *     ?SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z @ 0x1C01FB150 (-SetSystemCapture@Mouse@InputTraceLogging@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 */

bool __fastcall InputTraceLogging::Enabled(int a1)
{
  char v1; // r8

  v1 = 0;
  if ( dword_1C0289810 )
    return (unsigned __int8)tlgKeywordOn(&dword_1C0289810, a1) != 0;
  return v1;
}
