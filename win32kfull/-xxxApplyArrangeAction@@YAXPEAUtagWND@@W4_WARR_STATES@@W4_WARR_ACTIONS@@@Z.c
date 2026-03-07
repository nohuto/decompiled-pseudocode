void __fastcall xxxApplyArrangeAction(struct tagWND *a1, struct tagWND *a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // r9
  const char *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  CMonitorTopology *v9; // rbx
  char v10; // bl
  char v11; // bl
  int v12; // edi
  bool v13; // bl
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ebp
  bool v18; // bl
  int v19; // edx
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp-28h]
  int v22; // [rsp+A0h] [rbp+18h] BYREF
  struct CMonitorTopology *v23; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a3;
  switch ( (_DWORD)a3 )
  {
    case 0:
      v17 = 2;
      if ( (unsigned int)((_DWORD)a2 - 1) <= 2 )
        v17 = 6;
      v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 108;
        LOBYTE(v19) = v18;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, v19, a3, (_DWORD)WPP_GLOBAL_Control);
      }
      v16 = v17;
      v15 = 3LL;
      goto LABEL_64;
    case 1:
      v12 = 0;
      if ( (unsigned int)((_DWORD)a2 - 1) <= 2 )
        v12 = 4;
      v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 109;
        LOBYTE(v14) = v13;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, v14, a3, (_DWORD)WPP_GLOBAL_Control);
      }
      v15 = 6LL;
      v16 = v12 | gdwPUDFlags & 0x10000u;
LABEL_64:
      xxxMinMaximize((__int64)a1, v15, v16);
      return;
    case 2:
      v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v11,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control,
          4u,
          0x19u,
          0x6Eu,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          *(_QWORD *)a1);
      xxxSysCommand(a1, 61730, 0LL);
      break;
    case 3:
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control,
          4u,
          0x19u,
          0x6Fu,
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          *(_QWORD *)a1);
      AdvancedWindowPos::xxxVerticalMaximize((struct tagRECT *)a1, a2);
      break;
    default:
      v5 = (unsigned int)(a3 - 6);
      if ( (unsigned int)v5 <= 1 )
      {
        LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = "Right";
          if ( v3 != 6 )
            v6 = "Left";
          WPP_RECORDER_AND_TRACE_SF_sq(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, a3, (_DWORD)v6);
        }
        v7 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), a2, a3, v5);
        if ( v3 == 6 )
        {
          v8 = *(_QWORD *)(v7 + 96);
          if ( v8 == gpDispInfo + 144LL )
            v8 = *(_QWORD *)(gpDispInfo + 144LL);
        }
        else
        {
          v8 = *(_QWORD *)(v7 + 104);
          if ( v8 == gpDispInfo + 144LL )
            v8 = *(_QWORD *)(gpDispInfo + 152LL);
        }
        v21 = 0LL;
        v20 = 0LL;
        _InterlockedAdd((volatile signed __int32 *)qword_1C0361320, 1u);
        v9 = qword_1C0361320;
        v23 = qword_1C0361320;
        if ( qword_1C0361320 )
          PushW32ThreadLock(
            (__int64)qword_1C0361320,
            &v20,
            (__int64)_lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_);
        v22 = 0;
        AdvancedWindowPos::xxxMigrateWindow(a1, v8 - 96, (__int64)v9, 0, &v22);
        CMonitorTopology::UnlockAndRelease(&v23, (struct _TL *)&v20);
      }
      break;
  }
}
