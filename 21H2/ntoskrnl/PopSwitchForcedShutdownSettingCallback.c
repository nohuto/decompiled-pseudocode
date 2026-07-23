/*
 * XREFs of PopSwitchForcedShutdownSettingCallback @ 0x1403CF630
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopSwitchForcedShutdownSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock(a1, a2);
  v9 = *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 == *a1 )
    v9 = *(_QWORD *)GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data4 - a1[1];
  if ( !v9 && a3 == 4 && a2 )
  {
    byte_140C23364 = *a2 != 0;
    v6 = 0;
  }
  PopReleasePolicyLock(v8, v7);
  return v6;
}
