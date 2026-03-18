/*
 * XREFs of ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00C1C88 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x1C0131BC0 (-MinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVC.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021EBEC (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x1C02250CC (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023D0DC (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C006696C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x1C00C0C0C (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C00C3000 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C00C3038 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C01A6410 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C021D388 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B904 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x1C023C86C (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 */

void __fastcall AdvancedWindowPos::xxxApplyWindowPos(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  char v4; // r9
  char v6; // si
  char v7; // dl
  const char *StateString; // rax
  __int64 v9; // r10
  char v10; // dl
  char v11; // r8
  __int64 v12; // r11
  int v13; // edx
  int v14; // ebx
  const struct tagRECT *v15; // rcx
  char v16; // r15
  int v17; // r14d
  int WindowState; // eax
  int v19; // r8d
  struct tagWND *v20; // r9
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // edi
  int v24; // edx
  int v25; // edx
  int v26; // r12d
  char v27; // dl
  char v28; // r8
  struct tagWND *v29; // rbx
  unsigned int v30; // r8d
  char v31; // dl
  _DWORD *v32; // rax
  struct tagRECT *v33; // r15
  int v34; // edx
  struct tagMONITOR *v35; // r8
  __int64 v36; // rdx
  unsigned int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct tagMONITOR *v42; // r8
  __int64 v43; // r9
  _OWORD *Prop; // r14
  char v45; // dl
  int v46; // r12d
  const struct tagRECT *v47; // rcx
  char v48; // dl
  char v49; // r8
  int v50; // edx
  struct tagMONITOR *v51; // r8
  __int64 v52; // r9
  struct _DEVICE_OBJECT *v53; // r10
  char v54; // dl
  char v55; // r8
  const char *v56; // rax
  __int64 v57; // r10
  char v58; // dl
  char v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rbx
  PDEVICE_OBJECT v63; // r14
  int v64; // eax
  const char *v65; // rax
  _DWORD *v66; // rcx
  char v67; // r8
  __int64 v68; // [rsp+40h] [rbp-C0h]
  __int64 v69; // [rsp+48h] [rbp-B8h]
  __int64 v70; // [rsp+50h] [rbp-B0h]
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int64 v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h]
  char v75; // [rsp+80h] [rbp-80h]
  unsigned __int8 v76; // [rsp+81h] [rbp-7Fh]
  char v77; // [rsp+82h] [rbp-7Eh]
  char v78; // [rsp+83h] [rbp-7Dh]
  int v79; // [rsp+84h] [rbp-7Ch]
  int v80; // [rsp+88h] [rbp-78h]
  int v81; // [rsp+90h] [rbp-70h]
  struct tagRECT *v82; // [rsp+98h] [rbp-68h]
  struct tagWND *v83; // [rsp+A0h] [rbp-60h]
  struct tagRECT v84; // [rsp+A0h] [rbp-60h]
  int v85; // [rsp+B0h] [rbp-50h]
  __int128 v87; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-30h]
  __int128 v89; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v90; // [rsp+E8h] [rbp-18h]
  _QWORD v91[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v92; // [rsp+108h] [rbp+8h]
  char v93; // [rsp+10Ch] [rbp+Ch]
  __int128 v94; // [rsp+110h] [rbp+10h]

  v4 = 0;
  if ( *((_QWORD *)this + 2) != gptiCurrent )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1293);
    v4 = 0;
  }
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    StateString = AdvancedWindowPos::GetStateString(*((_DWORD *)a2 + 2));
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(v9 + 24),
      v10,
      v11,
      (__int64)gFullLog,
      4u,
      4u,
      0x3Au,
      v12,
      *(_QWORD *)this,
      StateString);
    v4 = 0;
  }
  v13 = *((_DWORD *)a2 + 3);
  v76 = v13 & 1;
  v14 = v13 & 0x20;
  v85 = v13 & 0x10;
  v81 = v13 & 2;
  v80 = v13 & 8;
  if ( (v13 & 4) != 0 || (v75 = 0, (*((_DWORD *)a2 + 3) & 8) != 0) )
    v75 = 1;
  v15 = (const struct tagRECT *)((char *)a2 + 16);
  v82 = (struct tagRECT *)((char *)a2 + 16);
  if ( (v13 & 0x40) != 0 || (v16 = 1, IsRectEmptyInl(v15)) )
    v16 = v4;
  v77 = v16;
  if ( (v13 & 0x100) != 0 || (v78 = 1, IsRectEmptyInl(v15)) )
    v78 = v4;
  v17 = *((_DWORD *)a2 + 2);
  if ( v17 == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1322);
  WindowState = AdvancedWindowPos::GetWindowState(this);
  v21 = *((_DWORD *)a2 + 3);
  v79 = WindowState;
  v22 = (v21 & 0x200) << 7;
  v23 = v22 | 0x20;
  v24 = v21 & 0x80;
  if ( !v24 )
    v23 = v22;
  v25 = -v24;
  v26 = v25 != 0 ? 1048640 : 64;
  if ( v76 != (_BYTE)v20 )
  {
    v23 |= 0x10u;
    v26 |= 0x10u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v25) = (_BYTE)v20;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v19) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
    {
      LOBYTE(v19) = (_BYTE)v20;
    }
    if ( (_BYTE)v25 || (_BYTE)v19 )
    {
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v19,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        4,
        59,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      v20 = 0LL;
    }
    if ( v81 != (_DWORD)v20 )
    {
      v23 |= 0x40u;
      v26 |= 4u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v25) = (_BYTE)v20;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v19) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
      {
        LOBYTE(v19) = (_BYTE)v20;
      }
      if ( (_BYTE)v25 || (_BYTE)v19 )
      {
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          v19,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          60,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
        v20 = 0LL;
      }
    }
  }
  if ( v14 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v27 = (char)v20;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v28 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
    {
      v28 = (char)v20;
    }
    if ( v27 || v28 )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v27,
        v28,
        61LL,
        5u,
        4u,
        0x3Du,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        *(_QWORD *)this);
    xxxSetForegroundWindowWithOptions((__int64)this, 0x1Fu, 0, 0);
    v20 = 0LL;
  }
  v29 = v20;
  v83 = v20;
  if ( v75 != (_BYTE)v20 )
  {
    v30 = v16 ? 18 : *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
    v29 = (struct tagWND *)MonitorFromRect((__int64)v82, 2u, v30);
    v83 = v29;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v20 = 0LL;
      v31 = 0;
    }
    else
    {
      v31 = 1;
      v20 = 0LL;
    }
    if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = (_DWORD *)*((_QWORD *)v29 + 5);
      LODWORD(v69) = v32[8];
      LODWORD(v68) = v32[7];
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v31,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        4u,
        0x3Eu,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v68,
        v69,
        v32[9],
        v32[10],
        v32[9] - v68,
        v32[10] - v69);
      v20 = 0LL;
    }
  }
  v33 = (struct tagRECT *)v20;
  if ( v80 != (_DWORD)v20 )
  {
    v33 = v82;
    v23 |= 8u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v25) = (_BYTE)v20;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v19) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v20) )
    {
      LOBYTE(v19) = (_BYTE)v20;
    }
    if ( (_BYTE)v25 || (_BYTE)v19 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v19,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        4,
        63,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
  }
  v87 = 0LL;
  v88 = 0LL;
  ThreadLock(v29, &v87);
  v91[0] = v29;
  v91[1] = v33;
  v93 = 0;
  v91[2] = *(_QWORD *)a2;
  v92 = *((_DWORD *)a2 + 8);
  v94 = 0LL;
  if ( v17 == 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v34) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v35) = 0;
    }
    if ( (_BYTE)v34 || (_BYTE)v35 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        (_DWORD)v35,
        0,
        5,
        4,
        64,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    if ( v81 )
      v23 |= 0x40u;
    v36 = (unsigned int)v76 + 6;
LABEL_197:
    anonymous_namespace_::xxxAwpMinMaximizeEx(this, v36, v23, v91);
    goto LABEL_215;
  }
  if ( v17 == 1 )
  {
    v37 = v23 | 2;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v34) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v35) = 0;
    }
    if ( (_BYTE)v34 || (_BYTE)v35 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        (_DWORD)v35,
        0,
        5,
        4,
        65,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    if ( v75 )
    {
      v37 |= 4u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v34) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v35) = 0;
      }
      if ( (_BYTE)v34 || (_BYTE)v35 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          (_DWORD)v35,
          0,
          5,
          4,
          66,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      if ( !v80 )
        AdvancedWindowPos::MigrateCheckpoint(this, v29, v35, 0LL);
    }
    anonymous_namespace_::xxxAwpMinMaximizeEx(this, 3LL, v37, v91);
    if ( v80 )
    {
      Prop = (_OWORD *)GetProp((__int64)this, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, v41);
      if ( Prop )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (v45 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v45 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v42) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v42) = 0;
        }
        if ( v45 || (_BYTE)v42 )
        {
          LODWORD(v73) = v33->right - v33->left;
          LODWORD(v72) = v33->bottom;
          LODWORD(v71) = v33->right;
          LODWORD(v70) = v33->top;
          LODWORD(v69) = v33->left;
          WPP_RECORDER_AND_TRACE_SF_sdddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v45,
            (char)v42,
            (__int64)gFullLog,
            5u,
            4u,
            0x43u,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            "explicit",
            v69,
            v70,
            v71,
            v72,
            v73,
            v72 - v70);
          v29 = v83;
        }
        *Prop = *v33;
      }
      AdvancedWindowPos::MigrateCheckpoint(this, v29, v42, v43);
    }
  }
  else
  {
    v46 = v26 | 0x80000;
    v23 |= 0x80u;
    if ( v77 )
    {
      v46 |= 0x800000u;
      v23 |= 0x200u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v34) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v35) = 0;
      }
      if ( (_BYTE)v34 || (_BYTE)v35 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          (_DWORD)v35,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          68,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    }
    if ( v78 )
    {
      v46 |= 0x400000u;
      v23 |= 0x100u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v34) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v35) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v35) = 0;
      }
      if ( (_BYTE)v34 || (_BYTE)v35 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          (_DWORD)v35,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          69,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    }
    v47 = v82;
    v84 = *v82;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (v48 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v48 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v49 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v49 = 0;
    }
    if ( v48 || v49 )
    {
      LODWORD(v73) = v84.bottom - v84.top;
      LODWORD(v72) = v84.right - v84.left;
      LODWORD(v71) = HIDWORD(*(unsigned __int128 *)v82);
      LODWORD(v70) = *(_QWORD *)&v82->right;
      LODWORD(v69) = HIDWORD(*(_QWORD *)&v82->left);
      LODWORD(v68) = *v82;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v48,
        v49,
        (__int64)gFullLog,
        5u,
        4u,
        0x46u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v47 = v82;
    }
    if ( v79 )
    {
      if ( IsSemiMaximized(this) )
      {
        v23 |= 4u;
        if ( WPP_GLOBAL_Control == v53
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v50) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v50) = v52;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v51) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v52) )
        {
          LOBYTE(v51) = v52;
        }
        if ( (_BYTE)v50 || (_BYTE)v51 )
        {
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v50,
            (_DWORD)v51,
            (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            5,
            4,
            71,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
          v52 = 0LL;
          v53 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
        }
      }
      if ( v29 && v80 == (_DWORD)v52 )
      {
        if ( WPP_GLOBAL_Control == v53
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
          || (LOBYTE(v50) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v50) = v52;
        }
        LOBYTE(v51) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v50,
            (_DWORD)v51,
            (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
            4,
            4,
            72,
            (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
        AdvancedWindowPos::MigrateCheckpoint(this, v29, v51, v52);
        LOWORD(v52) = 0;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (v54 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v54 = v52;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v55 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v52) )
      {
        v55 = v52;
      }
      if ( v54 || v55 )
      {
        v56 = AdvancedWindowPos::GetStateString(v79);
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(v57 + 24),
          v58,
          v59,
          (__int64)gFullLog,
          5u,
          4u,
          0x49u,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          v56);
      }
      v36 = 9LL;
      goto LABEL_197;
    }
    if ( !IsRectEmptyInl(v47) )
    {
      v90 = 0LL;
      v89 = 0LL;
      if ( *(_QWORD *)a2 )
      {
        v61 = HMValidateHandleNoSecure(*(_QWORD *)a2, 1);
        LOWORD(v60) = 0;
        v62 = v61;
        if ( v61 )
        {
          ThreadLockAlways(v61, &v89);
          LOWORD(v60) = 0;
        }
      }
      else
      {
        v62 = v60;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v38) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v38) = v60;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v40) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v60) )
      {
        LOBYTE(v40) = v60;
      }
      if ( (_BYTE)v38 || (_BYTE)v40 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v38,
          v40,
          (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
          5,
          4,
          74,
          (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      xxxSetWindowPos(
        this,
        v62,
        (unsigned int)v84.left,
        (unsigned int)v84.top,
        v84.right - v84.left,
        v84.bottom - v84.top,
        v46);
      if ( v62 )
        ThreadUnlock1(v39, v38, v40);
    }
  }
LABEL_215:
  ThreadUnlock1(v39, v38, v40);
  v63 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v64 = AdvancedWindowPos::GetWindowState(this);
    v65 = AdvancedWindowPos::GetStateString(v64);
    v66 = (_DWORD *)*((_QWORD *)this + 5);
    LODWORD(v74) = v66[25] - v66[23];
    LODWORD(v73) = v66[24] - v66[22];
    LODWORD(v72) = v66[25];
    LODWORD(v71) = v66[24];
    LODWORD(v70) = v66[23];
    LODWORD(v69) = v66[22];
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      (__int64)v63->AttachedDevice,
      v6,
      v67,
      (__int64)gFullLog,
      4u,
      4u,
      0x4Bu,
      (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
      v65,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  if ( v85 )
    ShellWindowPos::NotifyPosAndStateApplied(this, v79, v82, v92);
}
