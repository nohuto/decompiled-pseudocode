/*
 * XREFs of ?xxxMigrate@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AFC14
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetMigrateMonitor@AdvancedWindowPos@@YAPEAUtagMONITOR@@PEBUtagWND@@AEBUtagRECT@@AEBVCMonitorTopology@@PEA_N@Z @ 0x1C00B0174 (-GetMigrateMonitor@AdvancedWindowPos@@YAPEAUtagMONITOR@@PEBUtagWND@@AEBUtagRECT@@AEBVCMonitorTop.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 *     ?IsWindowEligibleForMinimize@CRecalcState@@CA_NPEBUtagWND@@@Z @ 0x1C011F5B4 (-IsWindowEligibleForMinimize@CRecalcState@@CA_NPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

__int64 __fastcall CRecalcState::xxxMigrate(__int64 *a1, AdvancedWindowPos *a2, _BYTE *a3)
{
  _BYTE *v3; // r13
  AdvancedWindowPos *v4; // r14
  char v6; // bl
  unsigned int v7; // esi
  BOOL v8; // r12d
  __int128 *v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  const struct tagWND *v14; // rdx
  struct tagMONITOR *MigrateMonitor; // rdx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v16; // r8
  __int64 v17; // r9
  void *v18; // rdx
  __int128 v20; // xmm0
  PDEVICE_OBJECT v21; // rcx
  int v22; // edx
  char v23; // di
  int v24; // r8d
  int v25; // r9d
  void *v26; // r8
  bool *v27; // [rsp+20h] [rbp-59h]
  char v28[8]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v29; // [rsp+58h] [rbp-21h] BYREF
  __int64 v30; // [rsp+68h] [rbp-11h] BYREF
  int v31; // [rsp+70h] [rbp-9h]
  int v32; // [rsp+74h] [rbp-5h]
  __int128 v33; // [rsp+78h] [rbp-1h]
  int v34; // [rsp+88h] [rbp+Fh]

  v3 = a3;
  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      29,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      *(_QWORD *)v4,
      *(_DWORD *)(a1[4] + 4));
  v7 = 0;
  v8 = *v3 != 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, AdvancedWindowPos *, _BYTE *))(*a1 + 8))(a1, a2, a3) )
    v9 = (__int128 *)((char *)a1 + 44);
  else
    v9 = (__int128 *)(*((_QWORD *)v4 + 5) + 88LL);
  v10 = *v9;
  v11 = *a1;
  v29 = v10;
  v12 = (*(__int64 (__fastcall **)(__int64 *))(v11 + 16))(a1);
  if ( !v12 )
    v12 = (__int64)(a1 + 2);
  v13 = *((_QWORD *)v4 + 5);
  v14 = (const struct tagWND *)&v29;
  v28[0] = 0;
  if ( (*(_BYTE *)(v13 + 31) & 0x20) != 0 )
    v14 = (const struct tagWND *)v12;
  MigrateMonitor = AdvancedWindowPos::GetMigrateMonitor(
                     v4,
                     v14,
                     (const struct tagRECT *)a1[4],
                     (const struct CMonitorTopology *)v28,
                     v27);
  if ( !MigrateMonitor )
  {
    if ( !v28[0] )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids;
        LOBYTE(v18) = v6;
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v18,
          (_DWORD)v16,
          v17,
          4,
          23,
          30,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
      }
      return 0LL;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(MigrateMonitor) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(MigrateMonitor) = 0;
    }
    if ( (_BYTE)MigrateMonitor || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)MigrateMonitor,
        (_DWORD)v16,
        (unsigned int)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        4,
        23,
        31,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
    if ( !*v3 && CRecalcState::IsWindowEligibleForMinimize(v4) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(MigrateMonitor) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)MigrateMonitor,
          (_DWORD)v16,
          v17,
          4,
          23,
          32,
          (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
      }
      v20 = *(_OWORD *)((char *)a1 + 44);
      v30 = 0LL;
      v31 = 2;
      v33 = v20;
      v32 = 19;
      v34 = 0;
      AdvancedWindowPos::xxxApplyWindowPos(v4, (struct tagWND *)&v30, v16);
      return 12LL;
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(MigrateMonitor) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(MigrateMonitor) = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)MigrateMonitor || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)MigrateMonitor,
        (_DWORD)v16,
        (unsigned int)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        4,
        23,
        33,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    v7 = 20;
    GetDispInfo(v21, MigrateMonitor, v16, v17);
  }
  v23 = anonymous_namespace_::xxxMigrateWindow(v4, a1[4], v8, (__int64)(v3 + 4));
  if ( (v23 & 1) != 0 )
  {
    v7 |= 0x20u;
    LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v24) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v24) = 0;
    }
    if ( (_BYTE)v22 || (_BYTE)v24 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v24,
        (unsigned int)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        5,
        23,
        34,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  }
  if ( (v23 & 6) != 0 )
  {
    v7 |= 0x40u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v24) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v24) = 0;
    }
    if ( (_BYTE)v22 || (_BYTE)v24 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v24,
        (unsigned int)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        5,
        23,
        35,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  }
  if ( (v23 & 8) != 0 )
  {
    v3[8] = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v22) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)v22 || v6 )
    {
      v26 = &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids;
      LOBYTE(v26) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        (_DWORD)v26,
        v25,
        5,
        23,
        36,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
  }
  return v7;
}
