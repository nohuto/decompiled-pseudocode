/*
 * XREFs of RIMInitialize @ 0x1C0056920
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     RIMInitOneCoreEditionData @ 0x1C0056A44 (RIMInitOneCoreEditionData.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C0056AC8 (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C0056CD4 (rimLoadImage.c)
 *     ?vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ @ 0x1C0056FAC (-vInitRIMPnpThreadDelayBugCheckConfig@@YAXXZ.c)
 */

__int64 RIMInitialize()
{
  __int64 result; // rax

  vInitRIMPnpThreadDelayBugCheckConfig();
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C029A168 = 0LL;
  gObListLock = 0LL;
  qword_1C029A118 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C029A188 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C029A178 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C029A128 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  qword_1C029A198 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  qword_1C029A1A8 = (__int64)&qword_1C029A1A0;
  qword_1C029A1A0 = (__int64)&qword_1C029A1A0;
  qword_1C029A1B8 = (__int64)&qword_1C029A1B0;
  qword_1C029A1B0 = (__int64)&qword_1C029A1B0;
  RawInputManagerObject::bTouchInputAllowed = 1;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C029A158 = 0LL;
  RIMInitOneCoreEditionData();
  result = 0LL;
  gbRIMInitialized = 1;
  return result;
}
