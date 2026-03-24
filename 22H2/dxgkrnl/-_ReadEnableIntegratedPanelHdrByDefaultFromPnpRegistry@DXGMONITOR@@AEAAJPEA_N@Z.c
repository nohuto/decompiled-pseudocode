/*
 * XREFs of ?_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z @ 0x1C02F62E0
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EF60 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry(DXGMONITOR *this, bool *a2)
{
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-1Ch]
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]

  DeviceRegKey = 0LL;
  *a2 = 0;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
    return 3221225635LL;
  v5 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 7), 2u, 0x20019u, &DeviceRegKey);
  v8 = v5;
  if ( v5 >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"EnableIntegratedPanelHdrByDefault");
    ResultLength = 0;
    v10 = ZwQueryValueKey(
            DeviceRegKey,
            &DestinationString,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    v8 = v10;
    if ( v10 != -1073741772 )
    {
      if ( v10 >= 0 )
      {
        if ( v18 == 4 && v19 == 4 )
        {
          *a2 = v20 != 0;
          goto LABEL_14;
        }
        LODWORD(v8) = -1073741788;
        v13 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v13 + 24) = this;
        *(_QWORD *)(v13 + 32) = v18;
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v13 + 24) = this;
        *(_QWORD *)(v13 + 32) = v8;
      }
      WdLogEvent5_WdError(v13);
      goto LABEL_14;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = this;
  }
  else
  {
    v9 = WdLogNewEntry5_WdTrace(v7, v6);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = v8;
  }
LABEL_14:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v8;
}
