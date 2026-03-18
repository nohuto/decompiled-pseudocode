/*
 * XREFs of Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139AA0
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010920 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013AB64 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 * Callees:
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback @ 0x1C0139AD8 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_featureState & 1;
  else
    return Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_featureState,
             3LL);
}
