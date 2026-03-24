/*
 * XREFs of ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C0105C5C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C0105CC8 (-IsPenQuickLaunchHotKey@@YA_NII@Z.c)
 *     Feature_QuickLaunchInvocation__private_ReportDeviceUsage @ 0x1C0168698 (Feature_QuickLaunchInvocation__private_ReportDeviceUsage.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C02257FC (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
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
