/*
 * XREFs of ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000FFD0
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0007CC8 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPostDwmSpeedHitTest @ 0x1C00A2AE0 (EditionPostDwmSpeedHitTest.c)
 *     xxxTrackMouseMove @ 0x1C00BD950 (xxxTrackMouseMove.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01ACF90 (EditionChangeForegroundQueueForMouseInput.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01AF53C (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C75BC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0049E70 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00967C0 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall IsIndependentInputWindow(const struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1) )
    return (unsigned int)IsMessageOnlyWindow(a1) != 0;
  return v2;
}
