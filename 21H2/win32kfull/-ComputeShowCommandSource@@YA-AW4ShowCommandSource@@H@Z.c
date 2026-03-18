/*
 * XREFs of ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1C009BAB4
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0069E3C (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

__int64 __fastcall ComputeShowCommandSource(int a1)
{
  int v1; // edx

  v1 = 1;
  if ( a1 <= 7 )
  {
    if ( a1 < 6 && a1 )
    {
      if ( a1 == 1 )
        goto LABEL_7;
      if ( a1 != 2 )
      {
        if ( a1 > 2 )
          goto LABEL_7;
        goto LABEL_35;
      }
    }
    goto LABEL_14;
  }
  if ( a1 <= 9 )
  {
LABEL_7:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v1) = 0;
    }
    if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v1,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        22,
        10,
        (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
        a1,
        4);
    return 4LL;
  }
  if ( a1 == 11 )
  {
LABEL_14:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v1) = 0;
    }
    if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v1,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        22,
        11,
        (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
        a1,
        2);
    return 2LL;
  }
  if ( (unsigned int)(a1 - 15) > 5 )
  {
LABEL_35:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v1) = 0;
    }
    if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v1,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        22,
        13,
        (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
        a1,
        0);
    return 0LL;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(v1) = 0;
  }
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      22,
      12,
      (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
      a1,
      3);
  return 3LL;
}
