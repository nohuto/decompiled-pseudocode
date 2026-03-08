/*
 * XREFs of PopPowerSourceChangeCallback @ 0x140380CA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     PopGetSessionId @ 0x14081016C (PopGetSessionId.c)
 *     PopBroadcastSessionInfo @ 0x1408294F4 (PopBroadcastSessionInfo.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140990844 (PopPowerAggregatorForceSessionSwitch.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A1344 (TtmNotifySessionDisplayBurst.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerSourceChangeCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // r10
  unsigned int v7; // ebx
  bool v8; // di
  __int64 v9; // r11
  __int64 v10; // rcx
  GUID v11; // xmm0
  unsigned int v12; // esi
  unsigned int v13; // ebp
  unsigned int SessionId; // eax
  unsigned int v15; // r14d
  __int64 v17; // rdx
  char v18; // al
  GUID v19; // [rsp+28h] [rbp-40h] BYREF
  int v20; // [rsp+38h] [rbp-30h]

  v20 = 0;
  v3 = *a1;
  v19 = 0LL;
  v6 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - v3;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == v3 )
    v6 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v17 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - v3;
    if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == v3 )
      v17 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - a1[1];
    if ( v17 )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  v8 = 0;
  if ( !PopLidOpened )
    v8 = PopConsoleExternalDisplayConnected == 0;
  v9 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - v3;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == v3 )
    v9 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  if ( !v9 && PopPlatformAoAc )
  {
    v18 = v8;
    if ( *a2 == 1 )
      v18 = 1;
    v8 = v18;
    if ( PopDisableDisplayBurstOnPowerSourceChange )
      v8 = 1;
  }
  v10 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *a1;
  if ( !v10 )
    v10 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - a1[1];
  if ( v10 )
  {
    if ( v8 )
    {
      v11 = GUID_ACDC_DISPLAY_BURST_SUPPRESS;
      v12 = 43;
      v13 = 28;
    }
    else
    {
      v11 = GUID_ACDC_POWER_SOURCE;
      v12 = 5;
      v13 = 5;
    }
    v19 = v11;
  }
  else
  {
    if ( !v8 )
      v19 = GUID_BATTERY_COUNT;
    v12 = v8 ? 46 : 16;
    v13 = v8 ? 49 : 16;
    if ( v8 )
      goto LABEL_20;
  }
  v20 = *a2;
  PopBroadcastSessionInfo(0LL, 20LL, &v19);
LABEL_20:
  SessionId = PopGetSessionId();
  v15 = SessionId;
  if ( v8 )
  {
    PopAcquirePolicyLock();
    PopPowerAggregatorForceSessionSwitch(v12);
    PopReleasePolicyLock();
  }
  else if ( SessionId != -1 && (unsigned __int8)TtmIsEnabled() )
  {
    TtmNotifySessionDisplayBurst(v15, v13);
  }
  return v7;
}
