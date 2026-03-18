/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01F0AEC
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C01EA284 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C021F208 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct MOVESIZEDATA *a1, __int64 a2, __int64 a3, int a4)
{
  bool v5; // dl
  int v6; // r8d
  char v7; // dl
  char v8; // dl
  char v9; // dl
  int v10; // ebx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  if ( (*((_DWORD *)a1 + 50) & 2) != 0 )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        a4,
        4,
        1,
        17,
        (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
  }
  else
  {
    v6 = *((_DWORD *)a1 + 44);
    if ( v6 == 1 || v6 == 2 || v6 == 3 || v6 == 6 )
    {
      v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v8,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          1u,
          0x12u,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          v6);
      if ( IsWindowSubjectToShellSizingPolicy(*((struct tagWND **)a1 + 2)) )
      {
        v10 = *((_DWORD *)a1 + 44);
        ThreadLockAlways(*((_QWORD *)a1 + 2), &v15);
        CallShell::xxxWindowSizeStartingHandler(*((CallShell **)a1 + 2), (struct tagWND *)(unsigned int)(v10 + 9), v11);
        ThreadUnlock1(v13, v12, v14);
      }
      else
      {
        v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v9,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            20LL,
            4u,
            1u,
            0x14u,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            *((_QWORD *)a1 + 2));
      }
    }
    else
    {
      v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          1u,
          0x13u,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          v6);
    }
  }
}
