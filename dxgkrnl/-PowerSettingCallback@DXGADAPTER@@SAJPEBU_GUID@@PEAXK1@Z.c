/*
 * XREFs of ?PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C01E86C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001CCF4 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 */

__int64 __fastcall DXGADAPTER::PowerSettingCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        KSPIN_LOCK *Context)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_MONITOR_POWER_ON.Data4;
  if ( !v4 )
    DXGADAPTER::NotifyPrimaryMonitorPowerChange(Context, *Value != 0);
  return 0LL;
}
