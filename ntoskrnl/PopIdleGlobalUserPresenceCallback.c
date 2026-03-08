/*
 * XREFs of PopIdleGlobalUserPresenceCallback @ 0x1407F8050
 * Callers:
 *     <none>
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14036D07C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopIdleGlobalUserPresenceCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4;
  if ( !v4 && Value && ValueLength == 4 )
  {
    v5 = *Value;
    PopAcquirePolicyLock((_DWORD)SettingGuid);
    if ( !v5 )
    {
      PopIdleCancelAoAcDozeS4Timer(2u);
      qword_140C3CDB8 = 0LL;
      qword_140C3CE20 = 0LL;
      dword_140C3C9B0 = 0;
    }
    PopReleasePolicyLock(v7, v6, v8);
  }
  return 0LL;
}
