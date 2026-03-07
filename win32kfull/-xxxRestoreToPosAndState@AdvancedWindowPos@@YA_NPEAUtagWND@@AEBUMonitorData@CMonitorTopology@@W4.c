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
  int v24; // r8d
  struct tagWND *v25; // rax
  LONG *v26; // r13
  struct tagWND *v27; // rax
  char v28; // r9
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
  _OWORD *v42; // rax
  PDEVICE_OBJECT v43; // rcx
  char v44; // dl
  const char *v45; // rax
  char v46; // r13
  __int128 v47; // xmm6
  int WindowState; // ebx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v49; // r8
  struct _DEVICE_OBJECT *v50; // r11
  bool v51; // r11
  char v52; // dl
  const char *v53; // rax
  __int64 v54; // r10
  char v55; // dl
  char v56; // r11
  PDEVICE_OBJECT v57; // rsi
  char v58; // r15
  int v59; // eax
  const char *v60; // rax
  _DWORD *v61; // rcx
  __int64 v63; // [rsp+48h] [rbp-C0h]
  __int64 v64; // [rsp+50h] [rbp-B8h]
  __int64 v65; // [rsp+58h] [rbp-B0h]
  __int64 v66; // [rsp+60h] [rbp-A8h]
  __int64 v67; // [rsp+68h] [rbp-A0h]
  __int64 v68; // [rsp+70h] [rbp-98h]
  __int64 v69; // [rsp+78h] [rbp-90h]
  struct AdvancedWindowPos::WINDOWPOSANDSTATE *v70; // [rsp+90h] [rbp-78h] BYREF
  int *v71; // [rsp+98h] [rbp-70h]
  struct tagMONITOR *v72; // [rsp+A0h] [rbp-68h]
  __int128 v73; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v74; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-40h]
  __m128i v76; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-28h] BYREF
  int v78; // [rsp+E8h] [rbp-20h]
  int v79; // [rsp+ECh] [rbp-1Ch]
  __int128 v80; // [rsp+F0h] [rbp-18h]
  int v81; // [rsp+100h] [rbp-8h]
  struct tagRECT v82; // [rsp+108h] [rbp+0h] BYREF

  v8 = a4;
  v71 = a7;
  v9 = (__int64 *)a2;
  v76.m128i_i64[0] = a2;
  LODWORD(v70) = a3;
  *(_QWORD *)&v73 = a5;
  MonitorFromId = CMonitorTopology::GetMonitorFromId(
                    (const struct CMonitorTopology::MonitorId *)(a2 + 44),
                    a2,
                    a3,
                    (int)a4);
  v72 = MonitorFromId;
  v11 = WPP_GLOBAL_Control;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
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
    StateString = AdvancedWindowPos::GetStateString((int)v70);
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      (__int64)v11->AttachedDevice,
      v19,
      v20,
      (__int64)gFullLog,
      4u,
      0x19u,
      0x32u,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      StateString,
      v17,
      v16,
      v23,
      v15,
      v21,
      v22);
    v9 = (__int64 *)v76.m128i_i64[0];
    MonitorFromId = v72;
  }
  v74 = 0LL;
  v75 = 0LL;
  ThreadLock(MonitorFromId, &v74);
  v24 = (int)v70;
  if ( (_DWORD)v70 == 3 || !(_DWORD)v70 )
  {
    v25 = anonymous_namespace_::xxxNormalizeRect(
            (struct tagWND *)&v76,
            (struct tagRECT *)a1,
            v8,
            (__int64)MonitorFromId,
            (CMonitorTopology::MonitorData *)v9,
            32);
    v24 = (int)v70;
    *(_OWORD *)v8 = *(_OWORD *)v25;
  }
  v26 = (LONG *)v73;
  if ( ((v24 - 1) & 0xFFFFFFFD) == 0 )
  {
    v27 = anonymous_namespace_::xxxNormalizeRect(
            (struct tagWND *)&v76,
            (struct tagRECT *)a1,
            (LONG *)v73,
            (__int64)MonitorFromId,
            (CMonitorTopology::MonitorData *)v9,
            32);
    v24 = (int)v70;
    *(_OWORD *)v73 = *(_OWORD *)v27;
  }
  v28 = 0;
  if ( v24 != 3 )
    goto LABEL_23;
  v29 = *(_OWORD *)v8;
  v30 = *((_WORD *)v9 + 20);
  v76 = 0LL;
  v31 = (__int64 *)CMonitorTopology::MonitorData::LogicalWorkArea(
                     (CMonitorTopology::MonitorData *)v9,
                     &v82,
                     (const struct tagWND *)a1);
  v32 = v9 + 3;
  v33 = v71;
  v73 = v29;
  v34 = CallShell::xxxMigrateWindowHandler(
          (struct tagRECT *)a1,
          0,
          v31,
          v32,
          v30,
          (struct tagWND *)&v73,
          (__int64)MonitorFromId,
          &v76,
          (int *)&v70,
          v71);
  v24 = (int)v70;
  if ( v34 )
  {
    if ( (_DWORD)v70 == 3 )
    {
      v28 = 1;
      *(__m128i *)v8 = v76;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (v35 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v35 = 0;
      }
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v68) = v8[3] - v8[1];
        LODWORD(v67) = v8[2] - *v8;
        LODWORD(v66) = v8[3];
        LODWORD(v65) = v8[2];
        LODWORD(v64) = v8[1];
        LODWORD(v63) = *v8;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v35,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          0x19u,
          0x33u,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
        v24 = (int)v70;
        v28 = 1;
        MonitorFromId = v72;
LABEL_23:
        v33 = v71;
        goto LABEL_24;
      }
      MonitorFromId = v72;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (v44 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v44 = 0;
      }
      if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = "maximized";
        if ( (_DWORD)v70 != 1 )
          v45 = "restored";
        WPP_RECORDER_AND_TRACE_SF_s(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v44,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          0x19u,
          0x34u,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v45);
        v24 = (int)v70;
      }
      a6 |= 0x10u;
      v28 = 0;
      *(_OWORD *)v8 = *(_OWORD *)v26;
    }
  }
  else
  {
    v28 = 0;
  }
LABEL_24:
  if ( v24 != 3 )
  {
    if ( v24 == 1 )
      v8 = v26;
    v47 = *(_OWORD *)v8;
    WindowState = AdvancedWindowPos::GetWindowState((const struct tagWND *)a1);
    v51 = WPP_GLOBAL_Control != v50
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v52 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v52 = 0;
    }
    if ( v51 || v52 )
    {
      v53 = AdvancedWindowPos::GetStateString(WindowState);
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(v54 + 24),
        v56,
        v55,
        (__int64)gFullLog,
        5u,
        0x19u,
        0x38u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v53);
      v49 = (const struct AdvancedWindowPos::WINDOWPOSANDSTATE *)(unsigned int)v70;
    }
    v79 = a6;
    v81 = *v33;
    v77 = 0LL;
    v78 = (int)v49;
    v80 = v47;
    AdvancedWindowPos::xxxApplyWindowPos((AdvancedWindowPos *)a1, (struct tagWND *)&v77, v49);
    if ( WindowState == 3 )
      NotifyShell::ArrangementCompleted((_QWORD *)a1, (unsigned int)*v33, 2LL);
    goto LABEL_80;
  }
  if ( !v28 )
  {
    v36 = *WindowMargins::ReduceRect(
             &v82,
             (struct tagRECT *)a1,
             (const struct tagWND *)v8,
             (const struct tagRECT *)*(unsigned __int16 *)(*((_QWORD *)MonitorFromId + 5) + 60LL));
    v37 = *(_QWORD *)(a1 + 40);
    *(struct tagRECT *)v8 = v36;
    LogicalToPhysicalDPIRect(v8, v8, *(unsigned int *)(v37 + 288), 0LL);
  }
  Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
  if ( Prop )
    *(_DWORD *)(Prop + 48) &= 0xFFFFFFE5;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v39 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v39 = 0;
  }
  if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v68) = v8[3] - v8[1];
    LODWORD(v67) = v8[2] - *v8;
    LODWORD(v66) = v8[3];
    LODWORD(v65) = v8[2];
    LODWORD(v64) = v8[1];
    LODWORD(v63) = *v8;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v39,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x19u,
      0x35u,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  if ( WindowArrangement::xxxSetSnapArrangementPos(a1, (__int64)v8, 2, *v71) )
  {
    v42 = (_OWORD *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
    if ( v42 )
    {
      *v42 = *(_OWORD *)v26;
      v43 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
        || (LOBYTE(v40) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v40) = 0;
      }
      LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v68) = v26[3] - v26[1];
        LODWORD(v67) = v26[2] - *v26;
        LODWORD(v66) = v26[3];
        LODWORD(v65) = v26[2];
        LODWORD(v64) = v26[1];
        LODWORD(v63) = *v26;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v40,
          v41,
          (__int64)gFullLog,
          4u,
          0x19u,
          0x36u,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
      }
    }
LABEL_80:
    v46 = 1;
    goto LABEL_81;
  }
  v43 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
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
      23,
      55,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
  v46 = 0;
LABEL_81:
  v57 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
    || (v58 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v58 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( v58 || v12 )
  {
    v59 = AdvancedWindowPos::GetWindowState((const struct tagWND *)a1);
    v60 = AdvancedWindowPos::GetStateString(v59);
    v61 = *(_DWORD **)(a1 + 40);
    LODWORD(v69) = v61[25] - v61[23];
    LODWORD(v68) = v61[24] - v61[22];
    LODWORD(v67) = v61[25];
    LODWORD(v66) = v61[24];
    LODWORD(v65) = v61[23];
    LODWORD(v64) = v61[22];
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      (__int64)v57->AttachedDevice,
      v58,
      v12,
      (__int64)gFullLog,
      5u,
      0x19u,
      0x39u,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v60,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  ThreadUnlock1(v43, v40, v41);
  return v46;
}
