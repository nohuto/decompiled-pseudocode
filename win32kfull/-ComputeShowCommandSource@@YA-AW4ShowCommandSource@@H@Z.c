__int64 __fastcall ComputeShowCommandSource(int a1)
{
  unsigned int v2; // esi
  PDEVICE_OBJECT v3; // rcx
  char v4; // dl
  char v5; // r8
  unsigned __int16 v6; // r9
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  char v14; // dl
  char v15; // dl

  v2 = 2;
  if ( a1 > 8 )
  {
    v8 = a1 - 9;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( !v9 )
      {
LABEL_10:
        v3 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v4 = 0;
        }
        v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v2;
        v6 = 11;
LABEL_17:
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)v3->AttachedDevice,
          v4,
          v5,
          (__int64)gFullLog,
          4u,
          0x16u,
          v6,
          (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
          a1,
          v2);
        return v2;
      }
      v10 = v9 - 4;
      if ( !v10 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 || (v13 = v12 - 1) == 0 || (unsigned int)(v13 - 1) < 2 )
      {
        v3 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v4 = 0;
        }
        v2 = 3;
        v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v2;
        v6 = 12;
        goto LABEL_17;
      }
      goto LABEL_26;
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
LABEL_26:
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 175);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
          || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v14 = 0;
        }
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v14,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0x16u,
            0xDu,
            (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
            a1,
            0);
        return 0LL;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
    || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v15 = 0;
  }
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v15,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x16u,
      0xAu,
      (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
      a1,
      4);
  return 4LL;
}
