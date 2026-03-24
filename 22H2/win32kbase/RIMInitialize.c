/*
 * XREFs of RIMInitialize @ 0x1C006CD60
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029A770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     RIMReadPowerRegistrySettings @ 0x1C006CE84 (RIMReadPowerRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C006D244 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C006D450 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C006D6F4 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C02544E8 = 0LL;
  gObListLock = 0LL;
  qword_1C0254458 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C02544C8 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C02544D8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C0254488 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C0254498 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  qword_1C02544A8 = (__int64)&qword_1C02544A0;
  qword_1C02544A0 = (__int64)&qword_1C02544A0;
  qword_1C02544B8 = (__int64)&qword_1C02544B0;
  qword_1C02544B0 = (__int64)&qword_1C02544B0;
  RawInputManagerObject::bTouchInputAllowed = 1;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C02544F8 = 0LL;
  RIMReadPowerRegistrySettings();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
