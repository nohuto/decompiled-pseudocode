/*
 * XREFs of WriteIoMemRaw @ 0x1C00344E8
 * Callers:
 *     AcpiPccRingDoorbell @ 0x1C0034340 (AcpiPccRingDoorbell.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 */

char __fastcall WriteIoMemRaw(_BYTE *a1, int a2, int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  int v5; // r9d
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  LOBYTE(v4) = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( a3 )
      {
        case 8:
          LOBYTE(v4) = a4;
          __outbyte((unsigned __int16)a1, a4);
          break;
        case 16:
          LOBYTE(v4) = a4;
          __outword((unsigned __int16)a1, a4);
          break;
        case 32:
          LOBYTE(v4) = a4;
          __outdword((unsigned __int16)a1, a4);
          break;
        default:
          v4 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v5 = 14;
LABEL_17:
            LOBYTE(a2) = 2;
            LOBYTE(v4) = WPP_RECORDER_SF_d(
                           WPP_GLOBAL_Control->DeviceExtension,
                           a2,
                           21,
                           v5,
                           (__int64)&WPP_cb83180b771632eba63c2d8b4b5a28e5_Traceguids,
                           a3);
            return (char)v4;
          }
          break;
      }
    }
    return (char)v4;
  }
  switch ( a3 )
  {
    case 8:
      *a1 = a4;
      goto LABEL_22;
    case 16:
      *(_WORD *)a1 = a4;
      goto LABEL_22;
    case 32:
      *(_DWORD *)a1 = a4;
      goto LABEL_22;
    case 64:
      *(_QWORD *)a1 = a4;
LABEL_22:
      _InterlockedOr(v7, 0);
      return (char)v4;
  }
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 15;
    goto LABEL_17;
  }
  return (char)v4;
}
