__int64 __fastcall ScsiLogSenseRequest(__int64 a1, __int64 a2, _BYTE *a3, unsigned __int64 a4)
{
  __int64 v4; // r10

  v4 = a2;
  if ( (a3[1] & 1) == 0 && (a3[2] & 0xC0) == 0x40 )
  {
    LOBYTE(a4) = a3[2] & 0x3F;
    if ( (unsigned __int8)a4 <= 0x2Fu )
    {
      a2 = 0x800000002001LL;
      if ( _bittest64(&a2, a4) )
      {
        if ( !a3[3] )
        {
          switch ( (_BYTE)a4 )
          {
            case 0:
              return LogSenseSupportedLogPages(a1, v4);
            case 0xD:
              return LogSenseTemperature(a1, v4);
            case 0x2F:
              return LogSenseInformationalExceptions(a1, v4);
          }
        }
      }
    }
  }
  LOBYTE(a4) = 36;
  LOBYTE(a3) = 5;
  LOBYTE(a2) = 6;
  NVMeSetSenseData(v4, a2, a3, a4);
  return 3238002694LL;
}
