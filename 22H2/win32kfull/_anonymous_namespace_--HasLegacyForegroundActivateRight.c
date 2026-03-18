/*
 * XREFs of _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C00AC170
 * Callers:
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C00E3878 (_anonymous_namespace_--CheckAllowForeground.c)
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00AC2EC (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

char __fastcall anonymous_namespace_::HasLegacyForegroundActivateRight(__int64 a1)
{
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  __int64 v3; // r8
  char v4; // bl
  _QWORD *v5; // rcx
  unsigned int v6; // edx
  char v7; // di
  int v8; // edx
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)&v10, (struct _EX_PUSH_LOCK *)&unk_1C035F3C8);
  ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a1);
  v4 = 0;
  v5 = qword_1C035E1C0;
  v6 = 0;
  v7 = 1;
  while ( *v5 != ProcessInheritedFromUniqueProcessId )
  {
    ++v6;
    v5 += 3;
    if ( v6 >= 5 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v7 = 0;
      }
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 11;
        LOBYTE(v8) = v7;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v3,
          (_DWORD)gFullLog,
          4,
          2,
          11,
          (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
          ProcessInheritedFromUniqueProcessId);
      }
      goto LABEL_17;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v3,
      (_DWORD)gFullLog,
      4,
      2,
      10,
      (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
      ProcessInheritedFromUniqueProcessId);
  v4 = 1;
LABEL_17:
  ExReleasePushLockSharedEx(v10, 0LL, v3);
  KeLeaveCriticalRegion();
  return v4;
}
