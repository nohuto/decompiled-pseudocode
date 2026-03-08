/*
 * XREFs of VslpConnectedStandbyPoCallback @ 0x140940680
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslpConnectedStandbyPoCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  _DWORD v10[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x68uLL);
  v6 = *(_QWORD *)&SettingGuid->Data1;
  v7 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v7 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v7 )
  {
    v10[6] = 1;
LABEL_9:
    LOBYTE(v10[2]) = *Value != 0;
    return VslpEnterIumSecureMode(2u, 62, 0, (__int64)v10);
  }
  v8 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - v6;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == v6 )
    v8 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v8 )
  {
    v10[6] = 2;
    goto LABEL_9;
  }
  return 3221225659LL;
}
