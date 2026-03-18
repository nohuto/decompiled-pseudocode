/*
 * XREFs of RtlGetPersistedStateLocation @ 0x140782DD0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     PopOpenThermalLoggingKey @ 0x1403DBE38 (PopOpenThermalLoggingKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x140642A44 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     PiGetStateRootPath @ 0x1406DF520 (PiGetStateRootPath.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406E295C (KGetAppModelStateSeparatedRegKeyPath.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1406F1A04 (RtlpGetTimeZoneInfoHandle.c)
 *     IopGetPersistedStateLocation @ 0x1407443F8 (IopGetPersistedStateLocation.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140782C4C (WmipGetGuidSecurityDescriptor.c)
 *     PopOpenPersistedRegistryKey @ 0x140828F18 (PopOpenPersistedRegistryKey.c)
 *     PopInitHiberPersistedRegValues @ 0x14082902C (PopInitHiberPersistedRegValues.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     IopUpdateSecureDeviceClassState @ 0x14084D3DC (IopUpdateSecureDeviceClassState.c)
 *     EtwpInitializeAutoLoggers @ 0x140851328 (EtwpInitializeAutoLoggers.c)
 *     SpRegOpenRedirectedKey @ 0x14085E1D0 (SpRegOpenRedirectedKey.c)
 *     ExpUuidLoadSequenceNumber @ 0x14085F064 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x14085F1D0 (ExpUuidSaveSequenceNumber.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140862E50 (WmipSaveGuidSecurityDescriptor.c)
 *     CmpRecordShutdownStopTime @ 0x140911EA8 (CmpRecordShutdownStopTime.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14095CDBC (PiDrvDbQuerySyncNodesUpdated.c)
 *     PopInitializePowerButtonHold @ 0x140B034C0 (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140B2F180 (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlGetPersistedStateLocation(
        PCWSTR SourceString,
        const WCHAR *a2,
        _WORD *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  _DWORD *PoolWithTag; // rdi
  signed int v11; // ebx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  const void *v16; // rdx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  unsigned int v19; // esi
  ULONG Length; // ebx
  NTSTATUS v21; // eax
  unsigned __int64 v22; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  PoolWithTag = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a4 > 1 )
    return 3221225713LL;
  if ( byte_140C4EF1E )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A38D50[2 * (int)a4];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140C4EF1E = 1;
    }
    else
    {
      if ( v17 < 0 )
        goto LABEL_5;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v11 = v18;
      if ( v18 != -1073741772 )
      {
        if ( v18 < 0 )
          goto LABEL_5;
        if ( !a2 )
          a2 = L"TargetNtPath";
        RtlInitUnicodeString(&DestinationString, a2);
        v19 = a6;
        Length = a6 + 16;
        if ( a6 + 16 >= a6 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x70657373u);
          if ( !PoolWithTag )
          {
            v11 = -1073741801;
            goto LABEL_5;
          }
          v21 = ZwQueryValueKey(
                  Handle,
                  &DestinationString,
                  KeyValuePartialInformation,
                  PoolWithTag,
                  Length,
                  &ResultLength);
          v11 = v21;
          if ( v21 < 0 )
          {
            if ( v21 != -2147483643 )
              goto LABEL_5;
          }
          else if ( PoolWithTag[1] != 1 )
          {
            v11 = -1073741788;
            goto LABEL_5;
          }
          v15 = PoolWithTag[2];
          ResultLength = v15;
          if ( v21 >= 0 && *((_WORD *)PoolWithTag + ((unsigned __int64)v15 >> 1) + 5) )
          {
            v22 = v15 + 2;
            ResultLength = v22;
            v15 += 2;
            if ( v19 < (unsigned int)v22 )
            {
              v11 = -2147483643;
            }
            else
            {
              *((_WORD *)PoolWithTag + (v22 >> 1) + 5) = 0;
              v15 = ResultLength;
            }
          }
          if ( a7 )
            *a7 = v15;
          if ( v11 < 0 )
            goto LABEL_5;
          v16 = PoolWithTag + 3;
          goto LABEL_19;
        }
LABEL_31:
        v11 = -1073741675;
        goto LABEL_5;
      }
    }
  }
  if ( a3 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a3[v13] );
    v14 = v13 + 1;
    v15 = 2 * v14;
    ResultLength = 2 * v14;
    if ( 2 * v14 >= v14 )
    {
      v11 = a6 < v15 ? 0x80000005 : 0;
      if ( a7 )
        *a7 = v15;
      if ( v15 > a6 )
        goto LABEL_5;
      v16 = a3;
LABEL_19:
      memmove(a5, v16, v15);
      goto LABEL_5;
    }
    goto LABEL_31;
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v11;
}
