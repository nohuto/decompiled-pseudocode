/*
 * XREFs of RIMInitialize @ 0x1C006C2B0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     RIMReadPowerRegistrySettings @ 0x1C006C3D4 (RIMReadPowerRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C006C794 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C006C9A0 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C006CC44 (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C02554A8 = 0LL;
  gObListLock = 0LL;
  qword_1C0255428 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C02554C8 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C02554B8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C0255438 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C0255468 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  qword_1C0255478 = (__int64)&qword_1C0255470;
  qword_1C0255470 = (__int64)&qword_1C0255470;
  qword_1C0255488 = (__int64)&qword_1C0255480;
  qword_1C0255480 = (__int64)&qword_1C0255480;
  RawInputManagerObject::bTouchInputAllowed = 1;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C0255498 = 0LL;
  RIMReadPowerRegistrySettings();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
