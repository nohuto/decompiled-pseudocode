/*
 * XREFs of RtlGetPersistedStateLocation @ 0x14069ADC0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     PopOpenThermalLoggingKey @ 0x1403AB30C (PopOpenThermalLoggingKey.c)
 *     RtlpGetPersistedRegistryLocation @ 0x14040BFA8 (RtlpGetPersistedRegistryLocation.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060D690 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     WmipGetGuidSecurityDescriptor @ 0x14069AC40 (WmipGetGuidSecurityDescriptor.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1407736C4 (RtlpGetTimeZoneInfoHandle.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x140797AB4 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PopOpenPersistedRegistryKey @ 0x14080FB6C (PopOpenPersistedRegistryKey.c)
 *     PopInitHiberPersistedRegValues @ 0x14080FC80 (PopInitHiberPersistedRegValues.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     IopUpdateSecureDeviceClassState @ 0x14083B398 (IopUpdateSecureDeviceClassState.c)
 *     IopGetPersistedStateLocation @ 0x14083B86C (IopGetPersistedStateLocation.c)
 *     EtwpInitializeAutoLoggers @ 0x14083C56C (EtwpInitializeAutoLoggers.c)
 *     SpRegOpenRedirectedKey @ 0x140859F40 (SpRegOpenRedirectedKey.c)
 *     ExpUuidLoadSequenceNumber @ 0x14085B194 (ExpUuidLoadSequenceNumber.c)
 *     ExpUuidSaveSequenceNumber @ 0x14085B300 (ExpUuidSaveSequenceNumber.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14085BE20 (WmipSaveGuidSecurityDescriptor.c)
 *     PiGetStateRootPath @ 0x14086F420 (PiGetStateRootPath.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14096DD70 (PiDrvDbQuerySyncNodesUpdated.c)
 *     CmpRecordShutdownStopTime @ 0x140A0EA18 (CmpRecordShutdownStopTime.c)
 *     PopInitializePowerButtonHold @ 0x140B47194 (PopInitializePowerButtonHold.c)
 *     EtwpInitializeSecurity @ 0x140B70760 (EtwpInitializeSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  _DWORD *Pool2; // rdi
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
  Pool2 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a4 > 1 )
    return 3221225713LL;
  if ( byte_140C64635 )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_140A75E30[2 * (int)a4];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v17;
    if ( v17 == -1073741772 )
    {
      byte_140C64635 = 1;
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
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, Length, 1885696883LL);
          if ( !Pool2 )
          {
            v11 = -1073741801;
            goto LABEL_5;
          }
          v21 = ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
          v11 = v21;
          if ( v21 < 0 )
          {
            if ( v21 != -2147483643 )
              goto LABEL_5;
          }
          else if ( Pool2[1] != 1 )
          {
            v11 = -1073741788;
            goto LABEL_5;
          }
          v15 = Pool2[2];
          ResultLength = v15;
          if ( v21 >= 0 && *((_WORD *)Pool2 + ((unsigned __int64)v15 >> 1) + 5) )
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
              *((_WORD *)Pool2 + (v22 >> 1) + 5) = 0;
              v15 = ResultLength;
            }
          }
          if ( a7 )
            *a7 = v15;
          if ( v11 < 0 )
            goto LABEL_5;
          v16 = Pool2 + 3;
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
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
