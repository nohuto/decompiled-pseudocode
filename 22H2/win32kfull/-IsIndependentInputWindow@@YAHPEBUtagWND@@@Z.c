/*
 * XREFs of ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010D74
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0007E18 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     EditionPostDwmSpeedHitTest @ 0x1C00D0570 (EditionPostDwmSpeedHitTest.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01ABDC0 (EditionChangeForegroundQueueForMouseInput.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01AE34C (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C645C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C00424C0 (IsMessageOnlyWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall IsIndependentInputWindow(const struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1) )
    return (unsigned int)IsMessageOnlyWindow(a1) != 0;
  return v2;
}
