/*
 * XREFs of ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F69A4
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EF60 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C018464C (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveUsageOverridesToMonitorStore(DXGMONITOR *a1, int a2)
{
  __int64 result; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  __int64 v10; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-18h] BYREF
  BOOL Data; // [rsp+90h] [rbp+30h] BYREF
  BOOL v15; // [rsp+98h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"HMDDevicePresent");
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"SpecialUseDevicePresent");
  result = DXGMONITOR::_OpenMonitorDataStore(a1, 0LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    Data = a2 == 1;
    v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    v8 = v5;
    if ( v5 < 0 || (v15 = a2 == 2, v9 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &v15, 4u), v8 = v9, v9 < 0) )
    {
      v10 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v10 + 24) = a1;
      *(_QWORD *)(v10 + 32) = v8;
      WdLogEvent5_WdError(v10);
    }
    ZwClose(KeyHandle);
    return (unsigned int)v8;
  }
  return result;
}
