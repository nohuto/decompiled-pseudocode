void __fastcall xxxQueryShellForSizeCooperation(struct MOVESIZEDATA *a1, __int64 a2, __int64 a3, int a4)
{
  bool v5; // dl
  int v6; // r8d
  char v7; // dl
  char v8; // dl
  char v9; // dl
  int v10; // ebx
  int IsEnabledDeviceUsage; // eax
  CallShell *v12; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
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
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
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
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          v6);
      if ( IsWindowSubjectToShellSizingPolicy(*((struct tagWND **)a1 + 2)) )
      {
        v10 = *((_DWORD *)a1 + 44);
        IsEnabledDeviceUsage = Feature_1200431418__private_IsEnabledDeviceUsage();
        v12 = (CallShell *)*((_QWORD *)a1 + 2);
        if ( IsEnabledDeviceUsage )
        {
          ThreadLockAlways(v12, &v17);
          CallShell::xxxWindowSizeStartingHandler(
            *((CallShell **)a1 + 2),
            (struct tagWND *)(unsigned int)(v10 + 9),
            v13);
          ThreadUnlock1(v15, v14, v16);
        }
        else
        {
          CallShell::xxxWindowSizeStartingHandler(v12, (struct tagWND *)(unsigned int)(v10 + 9), 0);
        }
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
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
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
          (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
          v6);
    }
  }
}
