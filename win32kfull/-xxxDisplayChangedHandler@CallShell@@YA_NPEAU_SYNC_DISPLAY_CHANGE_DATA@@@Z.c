bool __fastcall CallShell::xxxDisplayChangedHandler(
        CallShell *this,
        struct _SYNC_DISPLAY_CHANGE_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // r14
  __int64 v5; // r8
  char v6; // bl
  const char *v7; // rdx
  struct tagWND *v9; // r15
  char v10; // bl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  const char *v19; // rax
  __int128 v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v5 && *(_QWORD *)(v5 + 280) && (v9 = *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 192LL)) != 0LL )
  {
    v10 = 1;
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        a4,
        4u,
        0x17u,
        0x27u,
        (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
        v9);
    v23 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    ThreadLock(v9, &v20);
    if ( xxxSendTransformableMessageTimeout(
           v9,
           0x344u,
           0LL,
           (__int128 *)this,
           2u,
           0xC8u,
           (unsigned __int64 *)&v23,
           1,
           1) )
    {
      ThreadUnlock1(v13, v12, v14);
      v18 = v23;
    }
    else
    {
      ThreadUnlock1(v13, v12, v14);
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          v17,
          2,
          23,
          40,
          (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids);
      }
      v18 = 0LL;
      v23 = 0LL;
    }
    v4 = v18 == 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v10 = 0;
    }
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = "Success";
      if ( !v4 )
        v19 = "Failure";
      WPP_RECORDER_AND_TRACE_SF_s(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0x17u,
        0x29u,
        (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
        v19);
    }
  }
  else
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( v5 )
      {
        v7 = "!HasIAMThread";
        if ( *(_QWORD *)(v5 + 280) )
          v7 = "!FPostTray";
      }
      else
      {
        v7 = "null";
      }
      WPP_RECORDER_AND_TRACE_SF_qs(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0x17u,
        0x2Bu,
        (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
        v5,
        v7);
    }
  }
  return v4;
}
