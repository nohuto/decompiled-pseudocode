/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C017F394
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005187C (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C017D8AC (rimObsAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RIMHidTLCActive @ 0x1C00557C4 (RIMHidTLCActive.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C00564A0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0057904 (WPP_RECORDER_SF_DD.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00AC134 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00AC210 (RIMFreeHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00AC2AC (RIMSearchHidTLCInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  __int16 v3; // r12
  __int16 v4; // r15
  __int64 *v5; // rax
  int v6; // edx
  _DWORD *v7; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  int v12; // edx
  __int64 v13; // [rsp+28h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 108) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 23, 53, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
    return 0LL;
  }
  v3 = *(_WORD *)(a1 + 116);
  v4 = *(_WORD *)(a1 + 112);
  v5 = RIMSearchHidTLCInfo(v4, v3);
  v7 = v5;
  if ( a2 )
  {
    if ( v5 )
      goto LABEL_15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_DD(
        (_DWORD)gBaseLog,
        v6,
        23,
        54,
        (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
        v4,
        v3);
    }
    v7 = RIMAllocateAndLinkHidTLCInfo(v4, v3);
  }
  if ( v7 )
  {
LABEL_15:
    v9 = v7[7];
    if ( a2 )
    {
      v10 = v9 + 1;
      v7[7] = v10;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_23:
        CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
        if ( !v7[5] && !(unsigned int)RIMHidTLCActive(v7) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = 4;
            WPP_RECORDER_SF_DD(
              (_DWORD)gBaseLog,
              v12,
              23,
              58,
              (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids,
              v4,
              v3);
          }
          RIMFreeHidTLCInfo((__int64)v7);
        }
        return 0LL;
      }
      v11 = 56;
    }
    else
    {
      if ( !v9 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1015);
        v9 = v7[7];
      }
      v10 = v9 - 1;
      v7[7] = v10;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v11 = 57;
    }
    LODWORD(v13) = v10;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d((_DWORD)gBaseLog, v6, 23, v11, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids, v13);
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 2, 23, 55, (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1003);
  return 3221225626LL;
}
