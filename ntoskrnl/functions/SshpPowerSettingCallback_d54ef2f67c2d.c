__int64 __fastcall SshpPowerSettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  char v5; // bl

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4;
  if ( !v4 )
  {
    v5 = *Value != 0;
    if ( v5 != SshpIdleResiliencyEngaged )
    {
      SshpSetCollectionActive((ULONG_PTR)&SshpBlockerCollections, *Value != 0);
      SshpIdleResiliencyEngaged = v5;
    }
  }
  return 0LL;
}
