/*
 * XREFs of _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C00FE99C
 * Callers:
 *     CheckAllowForeground @ 0x1C007AD80 (CheckAllowForeground.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00FEB18 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

char __fastcall anonymous_namespace_::HasLegacyForegroundActivateRight(__int64 a1)
{
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  int v3; // r8d
  char v4; // bl
  _QWORD *v5; // rcx
  unsigned int v6; // edx
  char v7; // di
  int v8; // edx
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)&v10, (struct _EX_PUSH_LOCK *)&unk_1C03377D0);
  ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a1);
  v4 = 0;
  v5 = &unk_1C0336080;
  v6 = 0;
  v7 = 1;
  while ( *v5 != ProcessInheritedFromUniqueProcessId )
  {
    ++v6;
    v5 += 2;
    if ( v6 >= 5 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v7 = 0;
      }
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 11;
        LOBYTE(v8) = v7;
        LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          11,
          (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
          ProcessInheritedFromUniqueProcessId);
      }
      goto LABEL_10;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      10,
      (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
      ProcessInheritedFromUniqueProcessId);
  }
  v4 = 1;
LABEL_10:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
