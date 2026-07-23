/*
 * XREFs of RtlGetPersistedStateLocation @ 0x1406B87A0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6D30 (PipUpdateDeviceProducts.c)
 *     PopOpenThermalLoggingKey @ 0x1403CC25C (PopOpenThermalLoggingKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA840 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x14069F120 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406B88F8 (WmipGetGuidSecurityDescriptor.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x140714474 (RtlpGetTimeZoneInfoHandle.c)
 *     IopGetPersistedStateLocation @ 0x140736030 (IopGetPersistedStateLocation.c)
 *     PiGetStateRootPath @ 0x1407811FC (PiGetStateRootPath.c)
 *     SshpQueryRegistryValues @ 0x140791780 (SshpQueryRegistryValues.c)
 *     EtwpInitializeAutoLoggers @ 0x140795E44 (EtwpInitializeAutoLoggers.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407BDFF4 (IopUpdateSecureDeviceClassState.c)
 *     ExpUuidLoadSequenceNumber @ 0x1407CF5AC (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x1407CF714 (ExpUuidSaveSequenceNumber.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407D2F74 (WmipSaveGuidSecurityDescriptor.c)
 *     CmpRecordShutdownStopTime @ 0x14086BFE0 (CmpRecordShutdownStopTime.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B6B44 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PopInitializePowerButtonHold @ 0x140A3FAB4 (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140A724AC (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F9D00 (ZwQueryValueKey.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *PoolWithTag; // rdi
  NTSTATUS v11; // ebx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  PCWSTR v16; // rdx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  ULONG v19; // esi
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
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  if ( byte_140C4C5A9 )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140984448[2 * StateLocationType];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140C4C5A9 = 1;
    }
    else
    {
      if ( v17 < 0 )
        goto LABEL_5;
      RtlInitUnicodeString(&DestinationString, SourceID);
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
        if ( !CustomValue )
          CustomValue = L"TargetNtPath";
        RtlInitUnicodeString(&DestinationString, CustomValue);
        v19 = BufferLengthIn;
        Length = BufferLengthIn + 16;
        if ( BufferLengthIn + 16 >= BufferLengthIn )
        {
          PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, Length, 0x70657373u);
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
          else if ( *((_DWORD *)PoolWithTag + 1) != 1 )
          {
            v11 = -1073741788;
            goto LABEL_5;
          }
          v15 = *((_DWORD *)PoolWithTag + 2);
          ResultLength = v15;
          if ( v21 >= 0 && PoolWithTag[((unsigned __int64)v15 >> 1) + 5] )
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
              PoolWithTag[(v22 >> 1) + 5] = 0;
              v15 = ResultLength;
            }
          }
          if ( BufferLengthOut )
            *BufferLengthOut = v15;
          if ( v11 < 0 )
            goto LABEL_5;
          v16 = PoolWithTag + 6;
          goto LABEL_19;
        }
LABEL_31:
        v11 = -1073741675;
        goto LABEL_5;
      }
    }
  }
  if ( DefaultPath )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( DefaultPath[v13] );
    v14 = v13 + 1;
    v15 = 2 * v14;
    ResultLength = 2 * v14;
    if ( 2 * v14 >= v14 )
    {
      v11 = BufferLengthIn < v15 ? 0x80000005 : 0;
      if ( BufferLengthOut )
        *BufferLengthOut = v15;
      if ( v15 > BufferLengthIn )
        goto LABEL_5;
      v16 = DefaultPath;
LABEL_19:
      memmove(TargetPath, v16, v15);
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
  return v11;
}
