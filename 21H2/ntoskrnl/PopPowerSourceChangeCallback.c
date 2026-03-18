/*
 * XREFs of PopPowerSourceChangeCallback @ 0x1403C10B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopBroadcastSessionInfo @ 0x140828EBC (PopBroadcastSessionInfo.c)
 *     PopGetSessionId @ 0x14082926C (PopGetSessionId.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140995B08 (PopPowerAggregatorForceSessionSwitch.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A4584 (TtmNotifySessionDisplayBurst.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
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
  GUID v12; // xmm0
  unsigned int v13; // esi
  unsigned int v14; // ebp
  unsigned int SessionId; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  GUID v24; // [rsp+20h] [rbp-38h] BYREF
  int v25; // [rsp+30h] [rbp-28h]

  v25 = 0;
  v3 = *a1;
  v24 = 0LL;
  v6 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - v3;
  if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == v3 )
    v6 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v20 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - v3;
    if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == v3 )
      v20 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - a1[1];
    if ( v20 )
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
    v21 = v9;
    if ( *a2 == 1 )
      v21 = 1;
    v9 = v21;
    if ( PopDisableDisplayBurstOnPowerSourceChange )
      v9 = 1;
  }
  v11 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *a1;
  if ( !v11 )
    v11 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - a1[1];
  if ( v11 )
  {
    if ( v9 )
    {
      v12 = GUID_ACDC_DISPLAY_BURST_SUPPRESS;
      v13 = 43;
      v14 = 28;
    }
    else
    {
      v12 = GUID_ACDC_POWER_SOURCE;
      v13 = 5;
      v14 = 5;
    }
    v24 = v12;
  }
  else
  {
    if ( !v9 )
      v24 = GUID_BATTERY_COUNT;
    v13 = v9 ? 46 : 16;
    v14 = v9 ? 49 : 16;
    if ( v9 )
      goto LABEL_20;
  }
  v25 = *a2;
  PopBroadcastSessionInfo(0LL, 20LL, &v24);
LABEL_20:
  SessionId = PopGetSessionId(v11, v8);
  v18 = SessionId;
  if ( v9 )
  {
    PopAcquirePolicyLock(v17, v16);
    PopPowerAggregatorForceSessionSwitch(v13);
    PopReleasePolicyLock(v23, v22);
  }
  else if ( SessionId != -1 && (unsigned __int8)TtmIsEnabled(v17, v16) )
  {
    TtmNotifySessionDisplayBurst(v18, v14);
  }
  return v7;
}
