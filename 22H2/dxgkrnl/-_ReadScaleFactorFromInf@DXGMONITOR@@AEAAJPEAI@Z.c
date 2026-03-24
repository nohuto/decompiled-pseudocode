/*
 * XREFs of ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C017EE54
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EF60 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadScaleFactorFromInf(DXGMONITOR *this, unsigned int *a2)
{
  int v3; // eax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-1Ch]
  int v20; // [rsp+58h] [rbp-18h]
  unsigned int v21; // [rsp+5Ch] [rbp-14h]

  *a2 = 0;
  DeviceRegKey = 0LL;
  v3 = *((_DWORD *)this + 10);
  DestinationString = 0LL;
  if ( (v3 & 0x10) == 0 )
    return 3221225635LL;
  v5 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 7), 2u, 0x20019u, &DeviceRegKey);
  v8 = v5;
  if ( v5 < 0 )
  {
    v13 = WdLogNewEntry5_WdTrace(v7, v6);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = v8;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    ResultLength = 0;
    v9 = ZwQueryValueKey(
           DeviceRegKey,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    v8 = v9;
    if ( v9 != -1073741772 )
    {
      if ( v9 >= 0 )
      {
        if ( v19 == 4 && v20 == 4 )
        {
          *a2 = v21;
          goto LABEL_5;
        }
        LODWORD(v8) = -1073741788;
        v14 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v14 + 24) = this;
        *(_QWORD *)(v14 + 32) = v19;
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v14 + 24) = this;
        *(_QWORD *)(v14 + 32) = v8;
      }
      WdLogEvent5_WdError(v14);
      goto LABEL_5;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = this;
  }
LABEL_5:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v8;
}
