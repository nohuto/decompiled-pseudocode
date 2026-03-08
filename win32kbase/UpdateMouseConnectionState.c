/*
 * XREFs of UpdateMouseConnectionState @ 0x1C0031898
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0031AA0 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     IsMouseDeviceOnIgnoreList @ 0x1C0031278 (IsMouseDeviceOnIgnoreList.c)
 *     WPP_RECORDER_AND_TRACE_SF_l @ 0x1C0031A10 (WPP_RECORDER_AND_TRACE_SF_l.c)
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 */

__int64 __fastcall UpdateMouseConnectionState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PDEVICE_OBJECT v19; // rcx
  __int64 result; // rax

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16840) + 1320LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  v10 = 1;
  v12 = *(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 16840);
  for ( i = **(_QWORD **)(v12 + 1328); i; i = *(_QWORD *)(i + 56) )
  {
    if ( !*(_BYTE *)(i + 48)
      && !*(_WORD *)(i + 880)
      && (*(_DWORD *)(i + 184) & 0x400) == 0
      && (!(unsigned int)RIMIsRunningOnDesktop(v12, v11) || !IsMouseDeviceOnIgnoreList(i, v14, v15)) )
    {
      v4 = 1;
      break;
    }
  }
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v19 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v10 = 0;
  }
  LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = v10;
    WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, v16, v17, v18);
  }
  result = SGDGetUserSessionState(v19, v16, v17, v18);
  *(_DWORD *)(result + 16820) = (16 * v4) | *(_DWORD *)(result + 16820) & 0xFFFFFFEF;
  return result;
}
