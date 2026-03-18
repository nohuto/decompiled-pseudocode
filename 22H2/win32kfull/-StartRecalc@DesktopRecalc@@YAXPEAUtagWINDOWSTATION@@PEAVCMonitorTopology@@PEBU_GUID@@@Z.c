/*
 * XREFs of ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00C03E0
 * Callers:
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C00BFD54 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1C00BFF48 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C02260B4 (-OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?TraceLoggingStartingRecalc@@YAXW4_StartRecalcReason@@IIIPEBU_GUID@@HH@Z @ 0x1C003E7AC (-TraceLoggingStartingRecalc@@YAXW4_StartRecalcReason@@IIIPEBU_GUID@@HH@Z.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ @ 0x1C00C0158 (-ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ @ 0x1C00C022C (-ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdD @ 0x1C00C0300 (WPP_RECORDER_AND_TRACE_SF_sdD.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C21FC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C00C3840 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0226010 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall DesktopRecalc::StartRecalc(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        struct CMonitorTopology *a3,
        const struct _GUID *a4)
{
  struct CMonitorTopology *v4; // rdi
  unsigned int v5; // esi
  int v6; // edx
  __int64 v7; // r8
  char v8; // bl
  int v9; // edi
  char v10; // dl
  int v11; // edi
  char v12; // dl
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  DesktopRecalcSettings *Timer_high; // rcx
  __int64 v16; // r14
  const char *v17; // rdx
  __int64 i; // rbx
  int ShouldSaveAndRestorePreviousRecalcInfos; // ebx
  DesktopRecalcSettings *v20; // rcx
  bool v21; // al
  int v22; // r9d
  const char *v23; // rax
  int v24; // [rsp+20h] [rbp-60h]
  int v25; // [rsp+28h] [rbp-58h]
  int v26; // [rsp+30h] [rbp-50h]
  int v27; // [rsp+38h] [rbp-48h]
  __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+40h] BYREF
  struct CMonitorTopology *v32; // [rsp+D0h] [rbp+50h]
  __int64 v33; // [rsp+D8h] [rbp+58h] BYREF

  v32 = a3;
  v31 = (__int64)this;
  LOBYTE(v33) = 0;
  v4 = a2;
  v5 = this == 0LL ? 2 : 0;
  v8 = 1;
  if ( (unsigned int)UserIsDisconnectConnection(this, a2, a3, a4) )
  {
    if ( !DesktopRecalc::pmrLastConnected )
    {
      DesktopRecalc::pmrLastConnected = v4;
      _InterlockedAdd((volatile signed __int32 *)v4, 1u);
      v9 = *((_DWORD *)DesktopRecalc::pmrLastConnected + 1);
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          7u,
          0x5Bu,
          (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
          *((_DWORD *)DesktopRecalc::pmrLastConnected + 1));
      if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
      {
        LODWORD(v31) = v9;
        v33 = (__int64)"Disconnect";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (int)&dword_1C0359080,
          (__int64)&v31,
          (__int64)&v33);
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = v8;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (unsigned int)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        4,
        7,
        92,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
    return;
  }
  if ( DesktopRecalc::pmrLastConnected )
  {
    v11 = *((_DWORD *)DesktopRecalc::pmrLastConnected + 1);
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        7u,
        0x5Du,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *((_DWORD *)DesktopRecalc::pmrLastConnected + 1));
    if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
    {
      LODWORD(v28) = v11;
      v30 = (__int64)"Reconnect";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)&dword_1C0359080,
        (__int64)&v28,
        (__int64)&v30);
    }
    v4 = DesktopRecalc::pmrLastConnected;
    DesktopRecalc::pmrLastConnected = 0LL;
    LOBYTE(v33) = 1;
    if ( DesktopRecalc::enableSessionDisconnectBehavior )
    {
      v5 = 1;
      v13 = WPP_GLOBAL_Control;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_51;
      v14 = 94;
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_51;
      v14 = 95;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      v6,
      v7,
      v14,
      4,
      7,
      v14,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
  }
LABEL_51:
  LODWORD(v29) = CMonitorTopology::CompareToCurrent(v4, 0LL, v7);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (Timer_high = (DesktopRecalcSettings *)HIDWORD(WPP_GLOBAL_Control->Timer),
        ((unsigned __int8)Timer_high & 0x40) == 0)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v8 = 0;
  }
  if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = v31;
  }
  else
  {
    v16 = v31;
    v17 = "for mode change";
    if ( !v31 )
      v17 = "for SPI_SETWORKAREA";
    WPP_RECORDER_AND_TRACE_SF_sdD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      v24,
      v25,
      v26,
      v27,
      v17);
  }
  if ( v16 )
  {
    for ( i = *(_QWORD *)(v16 + 16); i; i = *(_QWORD *)(i + 32) )
      DesktopRecalc::StartRecalcForDesktop(i, v4, v5);
  }
  else
  {
    DesktopRecalc::StartRecalcForDesktop(*(_QWORD *)(gptiCurrent + 456LL), v4, v5);
  }
  ShouldSaveAndRestorePreviousRecalcInfos = DesktopRecalcSettings::ShouldSaveAndRestorePreviousRecalcInfos(Timer_high);
  v21 = DesktopRecalcSettings::ShouldMinimizeOnMonitorRemove(v20);
  TraceLoggingStartingRecalc(
    v16 == 0,
    (unsigned int)v29,
    *((_DWORD *)v4 + 2),
    *(_DWORD *)*gpDispInfo,
    (__int64)v32,
    v21,
    ShouldSaveAndRestorePreviousRecalcInfos);
  if ( (unsigned int)dword_1C0359080 > 4 && tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
  {
    if ( v16 )
      v23 = "Mode Change";
    else
      v23 = "SPI_SETWORKAREA";
    v29 = (__int64)v23;
    LODWORD(v31) = v22;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C0359080,
      (__int64)&v31,
      (__int64)&v29);
  }
  if ( (_BYTE)v33 && _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    Win32FreePool(v4);
}
