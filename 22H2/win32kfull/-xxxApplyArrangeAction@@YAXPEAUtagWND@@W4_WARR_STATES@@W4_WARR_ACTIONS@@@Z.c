/*
 * XREFs of ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C01EB73C
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EBB54 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00C115C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00C3EC4 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C01EAE7C (-UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x1C01F2834 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C023D940 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall xxxApplyArrangeAction(struct tagWND *a1, struct tagWND *a2, int a3)
{
  int v3; // ebp
  const char *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  CMonitorTopology *v8; // rbx
  char v9; // bl
  char v10; // bl
  int v11; // edi
  bool v12; // bl
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebp
  bool v17; // bl
  int v18; // edx
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]
  int v21; // [rsp+A0h] [rbp+18h] BYREF
  struct CMonitorTopology *v22; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  switch ( a3 )
  {
    case 0:
      v16 = 2;
      if ( (unsigned int)((_DWORD)a2 - 1) <= 2 )
        v16 = 6;
      v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 106;
        LOBYTE(v18) = v17;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, v18, a3, (_DWORD)WPP_GLOBAL_Control);
      }
      v15 = v16;
      v14 = 3LL;
      goto LABEL_64;
    case 1:
      v11 = 0;
      if ( (unsigned int)((_DWORD)a2 - 1) <= 2 )
        v11 = 4;
      v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 107;
        LOBYTE(v13) = v12;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, v13, a3, (_DWORD)WPP_GLOBAL_Control);
      }
      v14 = 6LL;
      v15 = v11 | gdwPUDFlags & 0x10000u;
LABEL_64:
      xxxMinMaximize((__int64)a1, v14, v15);
      return;
    case 2:
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control,
          4u,
          4u,
          0x6Cu,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          *(_QWORD *)a1);
      xxxSysCommand(a1, 61730, 0LL);
      break;
    case 3:
      v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control,
          4u,
          4u,
          0x6Du,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          *(_QWORD *)a1);
      AdvancedWindowPos::xxxVerticalMaximize((struct tagRECT *)a1, a2);
      break;
    default:
      if ( (unsigned int)(a3 - 6) <= 1 )
      {
        LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v5 = "Right";
          if ( a3 != 6 )
            v5 = "Left";
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, (_DWORD)v5);
        }
        v6 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
        if ( v3 == 6 )
        {
          v7 = *(_QWORD *)(v6 + 96);
          if ( v7 == gpDispInfo + 144LL )
            v7 = *(_QWORD *)(gpDispInfo + 144LL);
        }
        else
        {
          v7 = *(_QWORD *)(v6 + 104);
          if ( v7 == gpDispInfo + 144LL )
            v7 = *(_QWORD *)(gpDispInfo + 152LL);
        }
        v20 = 0LL;
        v19 = 0LL;
        _InterlockedAdd((volatile signed __int32 *)qword_1C035E338, 1u);
        v8 = qword_1C035E338;
        v22 = qword_1C035E338;
        if ( qword_1C035E338 )
          PushW32ThreadLock(
            (__int64)qword_1C035E338,
            &v19,
            (__int64)_lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_);
        v21 = 0;
        AdvancedWindowPos::xxxMigrateWindow(a1, v7 - 96, (__int64)v8, 0, &v21);
        CMonitorTopology::UnlockAndRelease(&v22, (struct _TL *)&v19);
      }
      break;
  }
}
