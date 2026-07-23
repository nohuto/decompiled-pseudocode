/*
 * XREFs of PopPowerSourceChangeCallback @ 0x1403AE610
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopGetSessionId @ 0x1406001C4 (PopGetSessionId.c)
 *     TtmIsEnabled @ 0x14066F144 (TtmIsEnabled.c)
 *     PopBroadcastSessionInfo @ 0x1407969A4 (PopBroadcastSessionInfo.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x1408EE374 (PopPowerAggregatorForceSessionSwitch.c)
 *     TtmNotifySessionDisplayBurst @ 0x1408FEB4C (TtmNotifySessionDisplayBurst.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerSourceChangeCallback(__int64 *a1, int *a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // r10
  unsigned int v7; // ebx
  __int64 v8; // rdx
  bool v9; // di
  __int64 v10; // r11
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rdx
  char v18; // al
  unsigned int SessionId; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  GUID v22; // [rsp+20h] [rbp-38h] BYREF
  int v23; // [rsp+30h] [rbp-28h]

  v23 = 0;
  v3 = *a1;
  v22 = 0LL;
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
  v8 = 1LL;
  v9 = 0;
  if ( !PopLidOpened )
    v9 = PopConsoleExternalDisplayConnected == 0;
  v10 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - v3;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == v3 )
    v10 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  if ( !v10 && PopPlatformAoAc )
  {
    v18 = v9;
    if ( *a2 == 1 )
      v18 = 1;
    v9 = v18;
    if ( PopDisableDisplayBurstOnPowerSourceChange )
      v9 = 1;
  }
  v11 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *a1;
  if ( !v11 )
    v11 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - a1[1];
  if ( !v11 )
  {
    if ( !v9 )
      v22 = GUID_BATTERY_COUNT;
    LOBYTE(v8) = !v9;
    v12 = v9 ? 46 : 16;
    v13 = v9 ? 49 : 16;
LABEL_17:
    if ( !(_BYTE)v8 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !v9 )
  {
    v12 = 5;
    v13 = 5;
    v22 = GUID_ACDC_POWER_SOURCE;
    goto LABEL_17;
  }
  v12 = 43;
  v22 = GUID_ACDC_DISPLAY_BURST_SUPPRESS;
  v13 = 28;
LABEL_18:
  v23 = *a2;
  PopBroadcastSessionInfo(0LL, 20LL, &v22);
LABEL_19:
  if ( v9 )
  {
    PopAcquirePolicyLock(v11, v8);
    PopPowerAggregatorForceSessionSwitch(v12);
    PopReleasePolicyLock(v21, v20);
  }
  else if ( (unsigned __int8)TtmIsEnabled(v11) )
  {
    SessionId = PopGetSessionId(v15, v14);
    TtmNotifySessionDisplayBurst(SessionId, v13);
  }
  return v7;
}
