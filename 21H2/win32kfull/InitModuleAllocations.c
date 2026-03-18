/*
 * XREFs of InitModuleAllocations @ 0x1C011FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C011FC5C (-InitLogQMsg@@YAXXZ.c)
 *     InitQMiPTrace @ 0x1C01DCD2C (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 result; // rax

  InitLogQMsg();
  FastGetProfileDword(0LL, 2LL, L"USERPostMortemLogging", (unsigned int)gdwPostMortemLogging, &gdwPostMortemLogging);
  if ( (gdwPostMortemLogging & 1) != 0 )
    InitQMiPTrace();
  if ( (gdwPostMortemLogging & 4) != 0 )
  {
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations", gdwExtraInstrumentations, gdwExtraInstrumentations);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
