/*
 * XREFs of ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023D0DC
 * Callers:
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0226760 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C0226E7C (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x1C00C0C0C (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z @ 0x1C00C1800 (-GetMonitorFromId@CMonitorTopology@@SAPEAUtagMONITOR@@AEBUMonitorId@1@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00C190C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C00C3000 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C00C3038 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00C3A18 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A6410 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C01F3150 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021CE30 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C021E2F8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

char __fastcall AdvancedWindowPos::xxxRestoreToPosAndState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        LONG *a4,
        __int64 a5,
        int a6,
        int *a7)
{
  LONG *v8; // r15
  __int64 *v9; // rdi
  struct tagMONITOR *MonitorFromId; // rsi
  PDEVICE_OBJECT v11; // r13
  char v12; // r14
  char v13; // dl
  _DWORD *v14; // rax
  int v15; // ebx
  int v16; // esi
  int v17; // edi
  const char *StateString; // rax
  char v19; // dl
  char v20; // r8
  int v21; // r9d
  int v22; // r10d
  int v23; // r11d
  __int64 v24; // r9
  int v25; // r8d
  struct tagWND *v26; // rax
  LONG *v27; // r13
  struct tagWND *v28; // rax
  __int128 v29; // xmm6
  unsigned __int16 v30; // bx
  __int64 *v31; // rax
  __int64 *v32; // r9
  int *v33; // rdi
  char v34; // al
  char v35; // dl
  struct tagRECT v36; // xmm0
  __int64 v37; // rax
  __int64 Prop; // rax
  char v39; // dl
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  _OWORD *v43; // rax
  PDEVICE_OBJECT v44; // rcx
  char v45; // dl
  const char *v46; // rax
  char v47; // r13
  __int128 v48; // xmm6
  int WindowState; // ebx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v50; // r8
  struct _DEVICE_OBJECT *v51; // r11
  bool v52; // r11
  char v53; // dl
  const char *v54; // rax
  __int64 v55; // r10
  char v56; // dl
  char v57; // r11
  __int64 v58; // r9
  PDEVICE_OBJECT v59; // rsi
  char v60; // r15
  int v61; // eax
  const char *v62; // rax
  _DWORD *v63; // rcx
  __int64 v65; // [rsp+48h] [rbp-C0h]
  __int64 v66; // [rsp+50h] [rbp-B8h]
  __int64 v67; // [rsp+58h] [rbp-B0h]
  __int64 v68; // [rsp+60h] [rbp-A8h]
  __int64 v69; // [rsp+68h] [rbp-A0h]
  __int64 v70; // [rsp+70h] [rbp-98h]
  __int64 v71; // [rsp+78h] [rbp-90h]
  struct AdvancedWindowPos::WINDOWPOSANDSTATE *v72; // [rsp+90h] [rbp-78h] BYREF
  int *v73; // [rsp+98h] [rbp-70h]
  struct tagMONITOR *v74; // [rsp+A0h] [rbp-68h]
  __int128 v75; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v76; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-40h]
  __m128i v78; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-28h] BYREF
  int v80; // [rsp+E8h] [rbp-20h]
  int v81; // [rsp+ECh] [rbp-1Ch]
  __int128 v82; // [rsp+F0h] [rbp-18h]
  int v83; // [rsp+100h] [rbp-8h]
  struct tagRECT v84; // [rsp+108h] [rbp+0h] BYREF

  v8 = a4;
  v73 = a7;
  v9 = (__int64 *)a2;
  v78.m128i_i64[0] = a2;
  LODWORD(v72) = a3;
  *(_QWORD *)&v75 = a5;
  MonitorFromId = CMonitorTopology::GetMonitorFromId(
                    (const struct CMonitorTopology::MonitorId *)(a2 + 44),
                    a2,
                    a3,
                    (int)a4);
  v74 = MonitorFromId;
  v11 = WPP_GLOBAL_Control;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v13 = 0;
  }
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (_DWORD *)*((_QWORD *)MonitorFromId + 5);
    v15 = v14[14];
    v16 = v14[12];
    v17 = v14[11];
    StateString = AdvancedWindowPos::GetStateString((int)v72);
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      (__int64)v11->AttachedDevice,
      v19,
      v20,
      (__int64)gFullLog,
      4u,
      4u,
      0x32u,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      StateString,
      v17,
      v16,
      v23,
      v15,
      v21,
      v22);
    v9 = (__int64 *)v78.m128i_i64[0];
    MonitorFromId = v74;
  }
  v76 = 0LL;
  v77 = 0LL;
  ThreadLock(MonitorFromId, &v76);
  v25 = (int)v72;
  if ( (_DWORD)v72 == 3 || !(_DWORD)v72 )
  {
    v26 = anonymous_namespace_::xxxNormalizeRect(
            (struct tagWND *)&v78,
            (struct tagRECT *)a1,
            v8,
            (__int64)MonitorFromId,
            (CMonitorTopology::MonitorData *)v9,
            32);
    v25 = (int)v72;
    *(_OWORD *)v8 = *(_OWORD *)v26;
  }
  v27 = (LONG *)v75;
  if ( ((v25 - 1) & 0xFFFFFFFD) == 0 )
  {
    v28 = anonymous_namespace_::xxxNormalizeRect(
            (struct tagWND *)&v78,
            (struct tagRECT *)a1,
            (LONG *)v75,
            (__int64)MonitorFromId,
            (CMonitorTopology::MonitorData *)v9,
            32);
    v25 = (int)v72;
    *(_OWORD *)v75 = *(_OWORD *)v28;
  }
  LOBYTE(v24) = 0;
  if ( v25 != 3 )
    goto LABEL_23;
  v29 = *(_OWORD *)v8;
  v30 = *((_WORD *)v9 + 20);
  v78 = 0LL;
  v31 = (__int64 *)CMonitorTopology::MonitorData::LogicalWorkArea(
                     (CMonitorTopology::MonitorData *)v9,
                     &v84,
                     (const struct tagWND *)a1);
  v32 = v9 + 3;
  v33 = v73;
  v75 = v29;
  v34 = CallShell::xxxMigrateWindowHandler(
          (struct tagRECT *)a1,
          0,
          v31,
          v32,
          v30,
          (struct tagWND *)&v75,
          (__int64)MonitorFromId,
          &v78,
          (int *)&v72,
          v73);
  v25 = (int)v72;
  if ( v34 )
  {
    if ( (_DWORD)v72 == 3 )
    {
      LOBYTE(v24) = 1;
      *(__m128i *)v8 = v78;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (v35 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v35 = 0;
      }
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v70) = v8[3] - v8[1];
        LODWORD(v69) = v8[2] - *v8;
        LODWORD(v68) = v8[3];
        LODWORD(v67) = v8[2];
        LODWORD(v66) = v8[1];
        LODWORD(v65) = *v8;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v35,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          4u,
          0x33u,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
        v25 = (int)v72;
        LOBYTE(v24) = 1;
        MonitorFromId = v74;
LABEL_23:
        v33 = v73;
        goto LABEL_24;
      }
      MonitorFromId = v74;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (v45 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v45 = 0;
      }
      if ( v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v46 = "maximized";
        if ( (_DWORD)v72 != 1 )
          v46 = "restored";
        WPP_RECORDER_AND_TRACE_SF_s(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v45,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          4u,
          0x34u,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v46);
        v25 = (int)v72;
      }
      a6 |= 0x10u;
      LOBYTE(v24) = 0;
      *(_OWORD *)v8 = *(_OWORD *)v27;
    }
  }
  else
  {
    LOBYTE(v24) = 0;
  }
LABEL_24:
  if ( v25 != 3 )
  {
    if ( v25 == 1 )
      v8 = v27;
    v48 = *(_OWORD *)v8;
    WindowState = AdvancedWindowPos::GetWindowState((const struct tagWND *)a1);
    v52 = WPP_GLOBAL_Control != v51
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v53 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v53 = 0;
    }
    if ( v52 || v53 )
    {
      v54 = AdvancedWindowPos::GetStateString(WindowState);
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(v55 + 24),
        v57,
        v56,
        (__int64)gFullLog,
        5u,
        4u,
        0x38u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v54);
      v50 = (const struct AdvancedWindowPos::WINDOWPOSANDSTATE *)(unsigned int)v72;
    }
    v81 = a6;
    v83 = *v33;
    v79 = 0LL;
    v80 = (int)v50;
    v82 = v48;
    AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v79, v50);
    if ( WindowState == 3 )
      NotifyShell::ArrangementCompleted((_QWORD *)a1, (unsigned int)*v33, 2LL, v58);
    goto LABEL_80;
  }
  if ( !(_BYTE)v24 )
  {
    v36 = *WindowMargins::ReduceRect(
             &v84,
             (struct tagRECT *)a1,
             (const struct tagWND *)v8,
             (const struct tagRECT *)*(unsigned __int16 *)(*((_QWORD *)MonitorFromId + 5) + 60LL));
    v37 = *(_QWORD *)(a1 + 40);
    *(struct tagRECT *)v8 = v36;
    LogicalToPhysicalDPIRect(v8, v8, *(unsigned int *)(v37 + 288), 0LL);
  }
  Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, v24);
  if ( Prop )
    *(_DWORD *)(Prop + 48) &= 0xFFFFFFE5;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (v39 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v39 = 0;
  }
  if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v70) = v8[3] - v8[1];
    LODWORD(v69) = v8[2] - *v8;
    LODWORD(v68) = v8[3];
    LODWORD(v67) = v8[2];
    LODWORD(v66) = v8[1];
    LODWORD(v65) = *v8;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v39,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      4u,
      0x35u,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  if ( WindowArrangement::xxxSetSnapArrangementPos(a1, (__int64)v8, 2, *v73) )
  {
    v43 = (_OWORD *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, v42);
    if ( v43 )
    {
      *v43 = *(_OWORD *)v27;
      v44 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v40) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v40) = 0;
      }
      LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v70) = v27[3] - v27[1];
        LODWORD(v69) = v27[2] - *v27;
        LODWORD(v68) = v27[3];
        LODWORD(v67) = v27[2];
        LODWORD(v66) = v27[1];
        LODWORD(v65) = *v27;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v40,
          v41,
          (__int64)gFullLog,
          4u,
          4u,
          0x36u,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
      }
    }
LABEL_80:
    v47 = 1;
    goto LABEL_81;
  }
  v44 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v40) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v40) = 0;
  }
  LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v40,
      v41,
      (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      2,
      7,
      55,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
  v47 = 0;
LABEL_81:
  v59 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (v60 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v60 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( v60 || v12 )
  {
    v61 = AdvancedWindowPos::GetWindowState((const struct tagWND *)a1);
    v62 = AdvancedWindowPos::GetStateString(v61);
    v63 = *(_DWORD **)(a1 + 40);
    LODWORD(v71) = v63[25] - v63[23];
    LODWORD(v70) = v63[24] - v63[22];
    LODWORD(v69) = v63[25];
    LODWORD(v68) = v63[24];
    LODWORD(v67) = v63[23];
    LODWORD(v66) = v63[22];
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      (__int64)v59->AttachedDevice,
      v60,
      v12,
      (__int64)gFullLog,
      5u,
      4u,
      0x39u,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v62,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  ThreadUnlock1(v44, v40, v41);
  return v47;
}
