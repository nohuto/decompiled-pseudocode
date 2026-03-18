/*
 * XREFs of ?PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0077A00
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1C0079FF0 (NtUserNotifyProcessCreate.c)
 *     EditionPushProcessLaunchForegroundPolicy @ 0x1C007A420 (EditionPushProcessLaunchForegroundPolicy.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C007B748 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddDs @ 0x1C0118C60 (WPP_RECORDER_AND_TRACE_SF_ddDs.c)
 */

void __fastcall ForegroundLaunch::PushProcessLaunchForegroundPolicy(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // r8d
  bool v5; // di
  int v6; // edx
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rcx
  unsigned int v11; // r13d
  unsigned int v12; // eax
  bool v13; // di
  __int64 v14; // rdx
  int v15; // eax
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // [rsp+30h] [rbp-78h]
  char v18; // [rsp+40h] [rbp-68h]
  __int128 v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+BCh] [rbp+14h]
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+20h] BYREF

  v20 = HIDWORD(a2);
  v2 = a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v22, (struct _EX_PUSH_LOCK *)&unk_1C03377D0);
  if ( v2 == 4 )
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
      LOBYTE(v6) = v5;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        13,
        (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
        a1);
    }
    v7 = dword_1C0336078;
    v8 = 2LL * (unsigned int)dword_1C0336078;
    *((_QWORD *)&unk_1C0336080 + v8) = a1;
    *((_QWORD *)&unk_1C0336080 + v8 + 1) = 4LL;
    dword_1C0336078 = (v7 + 1) % 5u;
  }
  else
  {
    LockProcessByClientId(a1, &Object);
    if ( Object )
    {
      v10 = (__int64 *)&unk_1C03360D0;
      v11 = 15;
      v12 = 5;
      v13 = 1;
      while ( 1 )
      {
        v14 = *v10;
        if ( *v10 )
        {
          if ( v14 == a1 )
          {
            v16 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
            {
              v13 = 0;
            }
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v18 = a1;
              v17 = 15;
              goto LABEL_53;
            }
            goto LABEL_31;
          }
        }
        else
        {
          v11 = v12;
        }
        ++v12;
        v10 += 2;
        if ( v12 >= 0xF )
        {
          LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_ddDs(WPP_GLOBAL_Control->AttachedDevice, v14, v9, (unsigned int)"Added");
          }
          if ( v11 >= 0xF )
          {
            if ( v20 == 1 )
            {
              v16 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
              {
                v13 = 0;
              }
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v14) = 18;
                goto LABEL_44;
              }
            }
          }
          else
          {
            v15 = 0;
            if ( v20 == 1 )
            {
              LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v14,
                  v9,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  2,
                  17,
                  (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
                  a1);
              PsSetProcessPriorityByClass(Object, 1LL, v9);
              v15 = 1;
            }
            *(_QWORD *)&v19 = a1;
            *((_QWORD *)&v19 + 1) = __PAIR64__(v15, v2);
            *((_OWORD *)&unk_1C0336080 + v11) = v19;
          }
          goto LABEL_31;
        }
      }
    }
    v16 = WPP_GLOBAL_Control;
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = 14;
LABEL_44:
      v18 = a1;
      v17 = v14;
LABEL_53:
      LOBYTE(v14) = v13;
      WPP_RECORDER_AND_TRACE_SF_D(
        v16->AttachedDevice,
        v14,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        2,
        v17,
        (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
        v18);
LABEL_31:
      if ( Object )
        ObfDereferenceObject(Object);
    }
  }
  ExReleasePushLockExclusiveEx(v22, 0LL);
  KeLeaveCriticalRegion();
}
