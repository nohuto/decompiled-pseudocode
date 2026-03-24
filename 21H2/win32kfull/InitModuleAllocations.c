/*
 * XREFs of InitModuleAllocations @ 0x1C01341E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C01342E4 (-InitLogQMsg@@YAXXZ.c)
 *     Feature_AtomicCheckFailure__private_ReportDeviceUsage @ 0x1C0166E4C (Feature_AtomicCheckFailure__private_ReportDeviceUsage.c)
 *     InitQMiPTrace @ 0x1C01E1DD4 (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 result; // rax

  InitLogQMsg();
  FastGetProfileDword(0LL, 2LL, L"USERPostMortemLogging");
  if ( (gdwPostMortemLogging & 1) != 0 )
    InitQMiPTrace(v0);
  if ( (gdwPostMortemLogging & 2) != 0 )
  {
    gdwAtomicCheckLogSize = 12;
    gpAtomickCheckStacks = Win32AllocPoolZInit(768LL, 1297118037LL);
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
  {
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = (PVOID)Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations");
  Feature_AtomicCheckFailure__private_ReportDeviceUsage(v1);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
