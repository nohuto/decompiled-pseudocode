/*
 * XREFs of ReadIoMemRaw @ 0x1C0004968
 * Callers:
 *     AcpiPccRingDoorbell @ 0x1C0034340 (AcpiPccRingDoorbell.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ReadIoMemRaw(unsigned __int8 *a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // r9d

  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( a3 )
      {
        case 8:
          return __inbyte((unsigned __int16)a1);
        case 16:
          return __inword((unsigned __int16)a1);
        case 32:
          return __indword((unsigned __int16)a1);
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v4 = 12;
LABEL_17:
            LOBYTE(a2) = 2;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              a2,
              21,
              v4,
              (__int64)&WPP_cb83180b771632eba63c2d8b4b5a28e5_Traceguids,
              a3);
          }
          break;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 8:
        return *a1;
      case 16:
        return *(unsigned __int16 *)a1;
      case 32:
        return *(unsigned int *)a1;
      case 64:
        return *(_QWORD *)a1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 13;
      goto LABEL_17;
    }
  }
  return v3;
}
