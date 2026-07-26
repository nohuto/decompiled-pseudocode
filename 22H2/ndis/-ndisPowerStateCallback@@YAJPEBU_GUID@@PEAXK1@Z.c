/*
 * XREFs of ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0020D00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C012CA8C (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

__int64 __fastcall ndisPowerStateCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v11 = 0;
  if ( Value && ValueLength >= 4 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0xADu,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        *Value);
    v7 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
      v7 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
    if ( !v7 )
    {
      v8 = (_BYTE)ndisAcOnLine == 1;
      if ( *Value && (unsigned int)(*Value - 1) <= 1 )
      {
        ndisAcOnLine = 0;
      }
      else
      {
        v4 = 1;
        ndisAcOnLine = 1;
      }
      v11 = v4;
      if ( v4 != v8 )
        ndisNotifyMiniports(0LL, NdisDevicePnPEventRemoved, &v11, (unsigned int)Context);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = *Value;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0xAEu,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        v10);
    }
  }
  return 0LL;
}
