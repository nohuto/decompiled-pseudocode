__int64 __fastcall ACPIPepPowerSettingChangeCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        char *Context)
{
  char *v4; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  v4 = Context + 160;
  ExAcquireFastMutex((PFAST_MUTEX)(Context + 184));
  v10 = *(_QWORD *)&SettingGuid->Data1;
  v11 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v11 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v11 && ValueLength == 4 && Value )
  {
    v12 = 3LL;
LABEL_13:
    LOBYTE(v9) = *Value != 0;
    goto LABEL_30;
  }
  v13 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - v10;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == v10 )
    v13 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v13 && ValueLength == 4 && Value )
  {
    v12 = 2LL;
    goto LABEL_13;
  }
  v14 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - v10;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == v10 )
    v14 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v14 && ValueLength == 4 && Value )
  {
    *((_DWORD *)v4 + 25) = *Value;
  }
  else
  {
    v15 = *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 - v10;
    if ( *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 == v10 )
      v15 = *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4 - *(_QWORD *)SettingGuid->Data4;
    if ( !v15 && ValueLength == 4 && Value )
      *((_DWORD *)v4 + 26) = *Value;
  }
  if ( *((_DWORD *)v4 + 25) || (LOBYTE(v9) = 1, *((_DWORD *)v4 + 26) != 2) )
    LOBYTE(v9) = 0;
  v12 = 1LL;
LABEL_30:
  if ( (unsigned __int8)PepPromoteNextNotificationState(Context, v12, v9, 0LL) )
    ACPIPepQueueWorker(v4);
  ExReleaseFastMutex((PFAST_MUTEX)(v4 + 24));
  return 0LL;
}
