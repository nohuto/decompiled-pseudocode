/*
 * XREFs of _anonymous_namespace_::HasLegacyForegroundActivateRight @ 0x1C00E446C
 * Callers:
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C003D0C4 (_anonymous_namespace_--CheckAllowForeground.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00E45E8 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

char __fastcall anonymous_namespace_::HasLegacyForegroundActivateRight(__int64 a1)
{
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  __int64 v3; // r8
  char v4; // bl
  _QWORD *v5; // rcx
  unsigned int v6; // edx
  char v7; // di
  char v8; // dl
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)&v10, (struct _EX_PUSH_LOCK *)&unk_1C0362418);
  ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a1);
  v4 = 0;
  v5 = qword_1C03611B0;
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
        WPP_RECORDER_AND_TRACE_SF_D(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          v3,
          (__int64)gFullLog,
          4u,
          2u,
          0xBu,
          (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
          ProcessInheritedFromUniqueProcessId);
      goto LABEL_17;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v8 = 0;
  }
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v3,
      (__int64)gFullLog,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
      ProcessInheritedFromUniqueProcessId);
  v4 = 1;
LABEL_17:
  ExReleasePushLockSharedEx(v10, 0LL, v3);
  KeLeaveCriticalRegion();
  return v4;
}
