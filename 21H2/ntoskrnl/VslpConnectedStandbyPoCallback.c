/*
 * XREFs of VslpConnectedStandbyPoCallback @ 0x140890780
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslpConnectedStandbyPoCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  char v9; // al
  _DWORD v11[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v11, 0, 0x68uLL);
  v6 = *(_QWORD *)&SettingGuid->Data1;
  v7 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v7 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( v7 )
  {
    v8 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - v6;
    if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == v6 )
      v8 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)SettingGuid->Data4;
    if ( v8 )
      return -1073741637;
    v11[6] = 2;
  }
  else
  {
    v11[6] = 1;
  }
  v9 = v11[2];
  if ( *Value )
    v9 = 1;
  LOBYTE(v11[2]) = v9;
  return VslpEnterIumSecureMode(2u, 60, 0, (__int64)v11);
}
