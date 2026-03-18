/*
 * XREFs of ScsiLogSenseRequest @ 0x1C00206FC
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     LogSenseInformationalExceptions @ 0x1C001C6EC (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C001C858 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C001C8D4 (LogSenseTemperature.c)
 */

__int64 __fastcall ScsiLogSenseRequest(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  __int64 v5; // rdx

  if ( (a3[1] & 1) == 0 && (a3[2] & 0xC0) == 0x40 )
  {
    LOBYTE(a4) = a3[2] & 0x3F;
    if ( (unsigned __int8)a4 <= 0x2Fu )
    {
      v5 = 0x800000002001LL;
      if ( _bittest64(&v5, a4) )
      {
        if ( !a3[3] )
        {
          switch ( (_BYTE)a4 )
          {
            case 0:
              return LogSenseSupportedLogPages(a1, a2);
            case 0xD:
              return LogSenseTemperature(a1, a2);
            case 0x2F:
              return LogSenseInformationalExceptions(a1, a2);
          }
        }
      }
    }
  }
  NVMeSetSenseData(a2, 6, 5, 0x24u);
  return 3238002694LL;
}
