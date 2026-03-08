/*
 * XREFs of PopSwitchForcedShutdownSettingCallback @ 0x1403B0670
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopSwitchForcedShutdownSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock(a1, a2);
  v7 = *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_ENABLE_SWITCH_FORCED_SHUTDOWN.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    byte_140C3D4C4 = *a2 != 0;
    v6 = 0;
  }
  PopReleasePolicyLock();
  return v6;
}
