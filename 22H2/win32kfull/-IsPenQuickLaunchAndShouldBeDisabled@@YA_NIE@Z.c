/*
 * XREFs of ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x1C0014F98
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x1C001500C (-IsPenQuickLaunchHotKey@@YA_NIE@Z.c)
 *     Feature_QuickLaunchInvocation__private_ReportDeviceUsage @ 0x1C013AE0C (Feature_QuickLaunchInvocation__private_ReportDeviceUsage.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C02026D0 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 */

char __fastcall IsPenQuickLaunchAndShouldBeDisabled(unsigned int a1, unsigned __int8 a2)
{
  char v2; // di
  __int64 InvertedPenTime; // rbx

  v2 = 0;
  if ( IsPenQuickLaunchHotKey(a1, a2) )
  {
    Feature_QuickLaunchInvocation__private_ReportDeviceUsage();
    InvertedPenTime = RIMGetLastInvertedPenTime();
    if ( (unsigned int)((unsigned __int64)(1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - InvertedPenTime))
                      / gliQpcFreq) < 0xFA )
    {
      v2 = 1;
      TraceLoggingSuppressQuickLaunch();
    }
  }
  return v2;
}
