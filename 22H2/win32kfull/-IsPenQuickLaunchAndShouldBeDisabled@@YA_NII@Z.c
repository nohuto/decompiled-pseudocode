/*
 * XREFs of ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C010590C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0104F50 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C0105978 (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     Feature_QuickLaunchInvocation__private_ReportDeviceUsage @ 0x1C0167EC8 (Feature_QuickLaunchInvocation__private_ReportDeviceUsage.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C022523C (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 */

char __fastcall IsPenQuickLaunchAndShouldBeDisabled(unsigned int a1, unsigned int a2)
{
  char v2; // bl

  v2 = 0;
  if ( IsPenQuickLaunchHotKey(a1, a2) )
  {
    Feature_QuickLaunchInvocation__private_ReportDeviceUsage();
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - RIMGetLastInvertedPenTime()) < 0xFA )
    {
      v2 = 1;
      TraceLoggingSuppressQuickLaunch();
    }
  }
  return v2;
}
