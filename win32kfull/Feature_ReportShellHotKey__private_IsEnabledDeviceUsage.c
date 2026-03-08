/*
 * XREFs of Feature_ReportShellHotKey__private_IsEnabledDeviceUsage @ 0x1C012C740
 * Callers:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003B140 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 *     xxxSetShellWindow @ 0x1C0092CAC (xxxSetShellWindow.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00975C4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z @ 0x1C00EDE60 (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01C1290 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     Feature_ReportShellHotKey__private_IsEnabledFallback @ 0x1C012C778 (Feature_ReportShellHotKey__private_IsEnabledFallback.c)
 */

__int64 Feature_ReportShellHotKey__private_IsEnabledDeviceUsage()
{
  if ( (Feature_ReportShellHotKey__private_featureState & 0x10) != 0 )
    return Feature_ReportShellHotKey__private_featureState & 1;
  else
    return Feature_ReportShellHotKey__private_IsEnabledFallback(
             (unsigned int)Feature_ReportShellHotKey__private_featureState,
             3LL);
}
