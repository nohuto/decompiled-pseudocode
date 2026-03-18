/*
 * XREFs of ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRecalcOption@@@Z @ 0x1C015CD50
 * Callers:
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C01222F0 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@W4StartRecalcOption@@@Z @ 0x1C015CB60 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C023AEE8 (-OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?TraceLoggingStartingRecalc@@YAIW4_StartRecalcReason@@IIIPEBU_GUID@@@Z @ 0x1C00CA030 (-TraceLoggingStartingRecalc@@YAIW4_StartRecalcReason@@IIIPEBU_GUID@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdD @ 0x1C010DF34 (WPP_RECORDER_AND_TRACE_SF_sdD.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015CF00 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C023AA94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

char __fastcall DesktopRecalc::StartRecalc(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  char v8; // dl
  const char *v9; // r9
  __int64 i; // rbx
  char result; // al
  int v12; // r9d
  const char *v13; // rax
  int v14; // [rsp+20h] [rbp-68h]
  int v15; // [rsp+28h] [rbp-60h]
  int v16; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+98h] [rbp+10h] BYREF

  v7 = CMonitorTopology::CompareToCurrent(a2, a2, a3);
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = "for mode change";
    if ( !a1 )
      v9 = "for SPI_SETWORKAREA";
    WPP_RECORDER_AND_TRACE_SF_sdD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      v14,
      v15,
      v16,
      v17,
      v9);
  }
  if ( a1 )
  {
    for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 32) )
      DesktopRecalc::StartRecalcForDesktop(i, a2, a4);
  }
  else
  {
    DesktopRecalc::StartRecalcForDesktop(*(_QWORD *)(gptiCurrent + 456LL), a2, a4);
  }
  result = TraceLoggingStartingRecalc(a1 == 0, v7, *(_DWORD *)(a2 + 8), *(_DWORD *)*gpDispInfo);
  if ( (unsigned int)dword_1C032BE20 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_1C032BE20, 32LL);
    if ( result )
    {
      if ( a1 )
        v13 = "Mode Change";
      else
        v13 = "SPI_SETWORKAREA";
      v19 = (__int64)v13;
      LODWORD(v18) = v12;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
               (int)&dword_1C032BE20,
               (__int64)&v18,
               (__int64)&v19);
    }
  }
  return result;
}
