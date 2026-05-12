/*
 * XREFs of RaidPowerSettingCallback @ 0x1C00328A0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0013DF4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00194F0 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C002A994 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C002CCEC (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C002CD0C (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterSystemPowerHintsEnabled @ 0x1C00304B0 (RaidAdapterSystemPowerHintsEnabled.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003EDD4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C0051B60 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0051FB4 (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        _QWORD *Context)
{
  char v5; // r14
  __int64 v6; // rcx
  int SystemPowerHint; // eax
  char v8; // cl
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r9
  char v14; // al
  int SystemPowerResumeLatency; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // r9
  int v20; // r14d
  __int64 v21; // rcx
  int v22; // eax
  char v23; // al
  char v24; // r9
  char v25; // dl
  char v26; // r10
  __int64 v27; // rcx
  char v28; // dl
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int128 v33; // xmm0
  unsigned __int64 v34; // [rsp+40h] [rbp-40h] BYREF
  __int128 v35; // [rsp+48h] [rbp-38h]
  unsigned int *v36; // [rsp+58h] [rbp-28h]
  int v37; // [rsp+60h] [rbp-20h]
  int v38; // [rsp+64h] [rbp-1Ch]
  int v39; // [rsp+68h] [rbp-18h]
  int v40; // [rsp+6Ch] [rbp-14h]
  __int64 v41; // [rsp+70h] [rbp-10h]

  v38 = 0;
  v41 = 0LL;
  if ( *SettingGuid == *(_OWORD *)&GUID_LOW_POWER_EPOCH )
  {
    if ( (_DWORD)ValueLength == 4 && Value )
    {
      v5 = *(_BYTE *)Value;
      if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12)
        || !RaidAdapterSystemPowerHintsEnabled(Context) )
      {
        return 0LL;
      }
      SystemPowerHint = RaidAdapterGetSystemPowerHint(v6);
      RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      v39 = 1;
      v40 = 16;
      if ( v5 != 1 )
      {
        if ( v5 )
          return 0LL;
        v14 = *((_BYTE *)Context + 108);
        if ( v14 >= 0 )
          return 0LL;
        *((_BYTE *)Context + 108) = v14 & 0x7F;
        LODWORD(v41) = RaidAdapterGetSystemPowerHint((__int64)Context);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v41);
        HIDWORD(v41) = SystemPowerResumeLatency;
        if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            v17,
            v16,
            v18,
            *((_DWORD *)Context + 14),
            v16,
            v19,
            v18,
            SystemPowerResumeLatency);
        StorpCSExitTelemetry(Context);
        goto LABEL_42;
      }
      v8 = *((_BYTE *)Context + 108);
      if ( v8 >= 0 )
      {
        *((_BYTE *)Context + 108) = v8 | 0x80;
        LODWORD(v41) = RaidAdapterGetSystemPowerHint((__int64)Context);
        v9 = RaidAdapterGetSystemPowerResumeLatency(v41);
        HIDWORD(v41) = v9;
        if ( StorEtwLoggingEnabled )
        {
          if ( (byte_1C0069841 & 1) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(v11, v10, v12, *((_DWORD *)Context + 14), v10, v13, v12, v9);
        }
        StorpCSEntryTelemetry(Context);
        goto LABEL_42;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1
    && *((_QWORD *)SettingGuid + 1) == *(_QWORD *)GUID_DISK_MAX_POWER.Data4 )
  {
    v34 = *Value;
    if ( v34 <= 0x64 )
    {
      LOBYTE(ValueLength) = 1;
      RaidAdapterSetMaxOperationalPower(Context, &v34, ValueLength, 1LL);
    }
    return 0LL;
  }
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1
    && *((_QWORD *)SettingGuid + 1) == *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 )
  {
    if ( (_DWORD)ValueLength != 4 || !Value )
      return 3221225485LL;
    v20 = *Value;
    if ( (*((_BYTE *)Context + 111) & 1) == (*Value != 0)
      || !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12)
      || !RaidAdapterSystemPowerHintsEnabled(Context) )
    {
      return 0LL;
    }
    v22 = RaidAdapterGetSystemPowerHint(v21);
    v23 = RaidAdapterGetSystemPowerResumeLatency(v22);
    v25 = *((_BYTE *)Context + 111);
    v26 = v23;
    v39 = 1;
    LOBYTE(v27) = v25 & 1;
    v40 = 16;
    if ( v20 )
    {
      if ( !(_BYTE)v27 )
      {
        v28 = v25 | 1;
LABEL_33:
        *((_BYTE *)Context + 111) = v28;
        LODWORD(v41) = RaidAdapterGetSystemPowerHint((__int64)Context);
        v29 = RaidAdapterGetSystemPowerResumeLatency(v41);
        v31 = v29;
        HIDWORD(v41) = v29;
LABEL_37:
        if ( StorEtwLoggingEnabled && (byte_1C0069841 & 1) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(v27, v30, v31, *((_DWORD *)Context + 14), v24, v26, v30, v31);
        goto LABEL_42;
      }
    }
    else if ( (_BYTE)v27 )
    {
      v28 = v25 & 0xFE;
      goto LABEL_33;
    }
    v31 = HIDWORD(v41);
    v30 = (unsigned int)v41;
    goto LABEL_37;
  }
  v33 = *SettingGuid;
  v36 = Value;
  v37 = ValueLength;
  v35 = v33;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 5) )
LABEL_42:
    RaCallMiniportAdapterControl((__int64)(Context + 40));
  return 0LL;
}
