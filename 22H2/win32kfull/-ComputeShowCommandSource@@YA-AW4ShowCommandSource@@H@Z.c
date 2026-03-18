/*
 * XREFs of ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1C0224CF8
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0026FA0 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00BFCAC (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ComputeShowCommandSource(int a1)
{
  unsigned int v2; // esi
  char v3; // dl
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char v11; // dl
  char v12; // dl
  char v13; // dl

  v2 = 2;
  if ( a1 > 8 )
  {
    v5 = a1 - 9;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( !v6 )
      {
LABEL_10:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v3 = 0;
        }
        if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v3,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0xCu,
            0xBu,
            (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
            a1,
            2);
        return v2;
      }
      v7 = v6 - 4;
      if ( !v7 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 || (unsigned int)(v10 - 1) < 2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v12 = 0;
        }
        v2 = 3;
        if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v12,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0xCu,
            0xCu,
            (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
            a1,
            3);
        return v2;
      }
      goto LABEL_25;
    }
  }
  else if ( a1 != 8 )
  {
    if ( !a1 )
      goto LABEL_10;
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        goto LABEL_10;
      if ( a1 != 3 && a1 != 4 && a1 != 5 )
      {
        if ( (unsigned int)(a1 - 6) <= 1 )
          goto LABEL_10;
LABEL_25:
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 175);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v11 = 0;
        }
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v11,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0xCu,
            0xDu,
            (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
            a1,
            0);
        return 0LL;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v13 = 0;
  }
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0xCu,
      0xAu,
      (__int64)&WPP_67a872cf75f534f2f256062cf7c6c37b_Traceguids,
      a1,
      4);
  return 4LL;
}
