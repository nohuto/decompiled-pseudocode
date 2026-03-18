/*
 * XREFs of InitModuleAllocations @ 0x1C00BD5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 result; // rax

  FastGetProfileDword(0LL, 2LL, L"USERExtraInstrumentations");
  gdwExtraInstrumentations |= 1u;
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
