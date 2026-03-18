/*
 * XREFs of ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 * Callees:
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     ??9?$RedirectedFielddmLogPixels@G@tagMONITOR@@QEBAEAEBG@Z @ 0x1C009B1A4 (--9-$RedirectedFielddmLogPixels@G@tagMONITOR@@QEBAEAEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00AE9B0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     IsImmersiveBand @ 0x1C00AEB40 (IsImmersiveBand.c)
 *     ?ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C00AF70C (-ShouldDeferRecalc@CRecalcProp@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z @ 0x1C00AF77C (-FindRestorableRecalcState@CRecalcProp@@QEAAPEAVCRecalcState@@PEBUtagWND@@@Z.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00AFA28 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?xxxMigrate@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AFC14 (-xxxMigrate@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?HasWindowMoved@CRecalcState@@QEBA_NAEBUtagRECT@@@Z @ 0x1C00B0B88 (-HasWindowMoved@CRecalcState@@QEBA_NAEBUtagRECT@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?IsRotation@CRecalcState@@QEBA_NXZ @ 0x1C015CB50 (-IsRotation@CRecalcState@@QEBA_NXZ.c)
 *     ?ReattachRecalcState@CRecalcProp@@AEAAXPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x1C023AF98 (-ReattachRecalcState@CRecalcProp@@AEAAXPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopology@@@Z @ 0x1C023B3FC (-xxxFullscreenRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopolog.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x1C023C13C (WPP_RECORDER_AND_TRACE_SF_qddddddd.c)
 */

__int64 __fastcall CRecalcProp::xxxProcessTopologyChange(CRecalcProp *a1, const struct tagWND *a2, _BYTE *a3)
{
  BOOL v5; // ebx
  char v6; // di
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  CRecalcState *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // edx
  __int64 v16; // r8
  int v17; // r9d
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  int v20; // edx
  char v21; // al
  __int64 v22; // rbx
  int v23; // r8d
  __int64 v24; // r13
  char v25; // r11
  char v26; // dl
  __int64 v27; // r10
  char v28; // dl
  char v29; // r11
  int v30; // edx
  int v31; // r8d
  struct CRecalcState *v32; // r15
  unsigned int v33; // ebx
  int v34; // eax
  const struct tagWND *v35; // rdx
  CRecalcState *v36; // rcx
  int v37; // [rsp+28h] [rbp-B1h]
  struct tagBWL *v38; // [rsp+40h] [rbp-99h]
  int WindowDpiLastNotify; // [rsp+48h] [rbp-91h]
  int v40; // [rsp+80h] [rbp-59h] BYREF
  struct tagBWL *v41; // [rsp+88h] [rbp-51h] BYREF
  struct CRecalcState *RestorableRecalcState; // [rsp+90h] [rbp-49h]
  CRecalcState *v43; // [rsp+A0h] [rbp-39h]
  _BYTE *v44; // [rsp+A8h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B0h] [rbp-29h] BYREF
  int *v46; // [rsp+D0h] [rbp-9h]
  __int64 v47; // [rsp+D8h] [rbp-1h]
  struct tagBWL **v48; // [rsp+E0h] [rbp+7h]
  __int64 v49; // [rsp+E8h] [rbp+Fh]

  v44 = a3;
  v5 = 0;
  RestorableRecalcState = 0LL;
  v6 = 1;
  if ( *a3 )
  {
    v5 = 1;
  }
  else
  {
    RestorableRecalcState = CRecalcProp::FindRestorableRecalcState(a1, a2);
    if ( RestorableRecalcState )
      v5 = (*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) != 0;
  }
  if ( (unsigned __int8)CRecalcProp::ShouldDeferRecalc(a2, v5) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)v7 || v6 )
    {
      LOBYTE(v8) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        v9,
        5,
        23,
        68,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
    return 0LL;
  }
  v11 = (CRecalcState *)*((_QWORD *)a1 + 3);
  v12 = *((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 3) = 0LL;
  v43 = v11;
  *((_QWORD *)v11 + 1) = v12;
  *((_QWORD *)a1 + 4) = v11;
  if ( (unsigned int)dword_1C032BE20 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C032BE20, 32LL) )
  {
    v41 = *(struct tagBWL **)a2;
    v13 = *((_QWORD *)v11 + 4);
    v49 = 8LL;
    v47 = 4LL;
    v14 = *(_DWORD *)(v13 + 4);
    v48 = &v41;
    v46 = &v40;
    v40 = v14;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032BE20, (int)&dword_1C02F1325, 0, 0, 4u, &v45);
  }
  if ( !CRecalcProp::IsWindowEligibleForRecalc(a2) )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v15) = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v19 = 69;
    goto LABEL_70;
  }
  if ( IsImmersiveBand((__int64)a2) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (v21 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v21 = 0;
    }
    LOBYTE(v40) = v21;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v20) = 0;
    }
    if ( v21 || (_BYTE)v20 )
    {
      v22 = *((_QWORD *)a2 + 5);
      LODWORD(v41) = 70;
      v23 = *(_DWORD *)(v22 + 96);
      LOBYTE(v23) = v20;
      LOBYTE(v20) = v40;
      v38 = *(struct tagBWL **)a2;
      WPP_RECORDER_AND_TRACE_SF_qddddddd(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        v23,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        5,
        v37,
        70);
    }
    v24 = MonitorFromRect((struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL), 0, *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL));
    if ( v24 )
    {
      LOWORD(v40) = GetWindowDpiLastNotify(a2);
      if ( tagMONITOR::RedirectedFielddmLogPixels<unsigned short>::operator!=(v24 + 137, &v40) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
          || (v25 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v25 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v26 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v26 = 0;
        }
        if ( v25 || v26 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(a2);
          LODWORD(v38) = *(unsigned __int16 *)(*(_QWORD *)(v24 + 40) + 60LL);
          WPP_RECORDER_AND_TRACE_SF_dd(
            *(_QWORD *)(v27 + 24),
            v29,
            v28,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            5u,
            0x17u,
            0x47u,
            (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
            v38,
            WindowDpiLastNotify);
        }
        v41 = 0LL;
        if ( (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)a2, v24, (__int64 *)&v41, 0) )
        {
          LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v30,
              v31,
              72,
              4,
              23,
              72,
              (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
              *(_QWORD *)a2);
          }
          xxxNotifyMonitorChanged(a2, (struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL), v41, 0);
        }
      }
    }
    v11 = v43;
    goto LABEL_71;
  }
  if ( !CRecalcState::HasWindowMoved(v11, (const struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL)) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        23,
        74,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        *(_QWORD *)a2,
        *(_DWORD *)(*((_QWORD *)v11 + 4) + 4LL));
    v32 = RestorableRecalcState;
    v33 = 2;
    if ( !RestorableRecalcState
      || (!*((_BYTE *)RestorableRecalcState + 61)
        ? (v34 = CRecalcState::xxxRestore(RestorableRecalcState, a2, v16))
        : (v34 = CRecalcState::xxxFullscreenRestore(RestorableRecalcState, a2, *((_QWORD *)v11 + 4))),
          v33 = v34 | 2,
          (v34 & 0x80u) == 0) )
    {
      v33 |= CRecalcState::xxxMigrate(v11, a2, v44);
    }
    if ( (v33 & 8) != 0 )
      CRecalcProp::ReattachRecalcState(a1, v35, v11);
    v36 = (CRecalcState *)*((_QWORD *)a1 + 3);
    if ( v36 && v36 != v11 && CRecalcState::HasWindowMoved(v36, (const struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL)) )
      *(_BYTE *)(*((_QWORD *)a1 + 3) + 60LL) = 1;
    goto LABEL_91;
  }
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v15) = 0;
  }
  LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = 73;
LABEL_70:
    WPP_RECORDER_AND_TRACE_SF_(
      v18->AttachedDevice,
      v15,
      v16,
      v17,
      3,
      23,
      v19,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
  }
LABEL_71:
  v32 = RestorableRecalcState;
  v33 = 1;
LABEL_91:
  if ( IsImmersiveBand((__int64)a2) || CRecalcState::IsRotation(v11) )
    v32 = v11;
  CRecalcProp::PruneRecalcStateList(a1, v32);
  return v33;
}
