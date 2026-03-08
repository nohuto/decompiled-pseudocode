/*
 * XREFs of ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00F954C
 * Callers:
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C00F75D8 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1C00F7820 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C0228DAC (-OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?TraceLoggingStartingRecalc@@YAXW4_StartRecalcReason@@IIIPEBU_GUID@@HH@Z @ 0x1C00F885C (-TraceLoggingStartingRecalc@@YAXW4_StartRecalcReason@@IIIPEBU_GUID@@HH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdD @ 0x1C00F908C (WPP_RECORDER_AND_TRACE_SF_sdD.c)
 *     ?ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ @ 0x1C00F916C (-ShouldMinimizeOnMonitorRemove@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ @ 0x1C00F9240 (-ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FC43C (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C00FF304 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage @ 0x1C012F280 (Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall DesktopRecalc::StartRecalc(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        struct CMonitorTopology *a3,
        const struct _GUID *a4)
{
  struct CMonitorTopology *v4; // rdi
  unsigned int v6; // esi
  int v7; // edx
  __int64 v8; // r8
  char v9; // bl
  int v10; // edi
  char v11; // dl
  int v12; // edi
  char v13; // dl
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  DesktopRecalcSettings *v16; // rcx
  DesktopRecalc *v17; // r14
  const char *v18; // rdx
  __int64 i; // rbx
  int ShouldSaveAndRestorePreviousRecalcInfos; // ebx
  DesktopRecalcSettings *v21; // rcx
  bool v22; // al
  int v23; // r9d
  const char *v24; // rax
  int v25; // [rsp+20h] [rbp-60h]
  int v26; // [rsp+28h] [rbp-58h]
  int v27; // [rsp+30h] [rbp-50h]
  int v28; // [rsp+38h] [rbp-48h]
  __int64 v29; // [rsp+60h] [rbp-20h] BYREF
  __int64 v30; // [rsp+68h] [rbp-18h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h] BYREF
  __int64 v32; // [rsp+78h] [rbp-8h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+58h] BYREF

  v4 = a2;
  LOBYTE(v35) = 0;
  v6 = 0;
  if ( (unsigned int)Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage(this, a2, a3, a4) && !this )
    v6 = 2;
  v9 = 1;
  if ( (unsigned int)UserIsDisconnectConnection() )
  {
    if ( !DesktopRecalc::pmrLastConnected )
    {
      DesktopRecalc::pmrLastConnected = v4;
      _InterlockedAdd((volatile signed __int32 *)v4, 1u);
      v10 = *((_DWORD *)DesktopRecalc::pmrLastConnected + 1);
      v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v11,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          0x17u,
          0x5Bu,
          (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
          *((_DWORD *)DesktopRecalc::pmrLastConnected + 1));
      if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 32LL) )
      {
        LODWORD(v35) = v10;
        v30 = (__int64)"Disconnect";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (int)&dword_1C035C080,
          (__int64)&v35,
          (__int64)&v30);
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = v9;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        (unsigned int)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        4,
        23,
        92,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    }
    return;
  }
  if ( DesktopRecalc::pmrLastConnected )
  {
    v12 = *((_DWORD *)DesktopRecalc::pmrLastConnected + 1);
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v13,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0x17u,
        0x5Du,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *((_DWORD *)DesktopRecalc::pmrLastConnected + 1));
    if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 32LL) )
    {
      LODWORD(v29) = v12;
      v31 = (__int64)"Reconnect";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)&dword_1C035C080,
        (__int64)&v29,
        (__int64)&v31);
    }
    v4 = DesktopRecalc::pmrLastConnected;
    DesktopRecalc::pmrLastConnected = 0LL;
    LOBYTE(v35) = 1;
    if ( DesktopRecalc::enableSessionDisconnectBehavior )
    {
      v6 = 1;
      v14 = WPP_GLOBAL_Control;
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v15 = 94;
    }
    else
    {
      v14 = WPP_GLOBAL_Control;
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_54;
      v15 = 95;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v7,
      v8,
      v15,
      4,
      23,
      v15,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
  }
LABEL_54:
  LODWORD(v30) = CMonitorTopology::CompareToCurrent(v4, 0LL, v8);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v9 = 0;
  }
  if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = this;
  }
  else
  {
    v17 = this;
    v18 = "for mode change";
    if ( !this )
      v18 = "for SPI_SETWORKAREA";
    WPP_RECORDER_AND_TRACE_SF_sdD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      v25,
      v26,
      v27,
      v28,
      v18);
  }
  if ( v17 )
  {
    for ( i = *((_QWORD *)v17 + 2); i; i = *(_QWORD *)(i + 32) )
      DesktopRecalc::StartRecalcForDesktop(i, v4, v6);
  }
  else
  {
    DesktopRecalc::StartRecalcForDesktop(*(_QWORD *)(gptiCurrent + 456LL), v4, v6);
  }
  ShouldSaveAndRestorePreviousRecalcInfos = DesktopRecalcSettings::ShouldSaveAndRestorePreviousRecalcInfos(v16);
  v22 = DesktopRecalcSettings::ShouldMinimizeOnMonitorRemove(v21);
  TraceLoggingStartingRecalc(
    v17 == 0LL,
    (unsigned int)v30,
    *((_DWORD *)v4 + 2),
    *(_DWORD *)*gpDispInfo,
    (__int64)a3,
    v22,
    ShouldSaveAndRestorePreviousRecalcInfos);
  if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 32LL) )
  {
    if ( v17 )
      v24 = "Mode Change";
    else
      v24 = "SPI_SETWORKAREA";
    v32 = (__int64)v24;
    LODWORD(v30) = v23;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C035C080,
      (__int64)&v30,
      (__int64)&v32);
  }
  if ( (_BYTE)v35 && _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    Win32FreePool(v4);
}
