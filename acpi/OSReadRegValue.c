/*
 * XREFs of OSReadRegValue @ 0x1C008E6A0
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C004A534 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIInitGlobalHeapSize @ 0x1C00878B8 (ACPIInitGlobalHeapSize.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3DC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C008D69C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C008D920 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     ACPIInitShutdownNotification @ 0x1C00936A0 (ACPIInitShutdownNotification.c)
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 *     ACPIThermalGetParameter @ 0x1C00959A4 (ACPIThermalGetParameter.c)
 *     AcpiDiagInitialize @ 0x1C00A71E8 (AcpiDiagInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00A8998 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitializeAMLI @ 0x1C00A92D4 (ACPIInitializeAMLI.c)
 *     AMLIInitialize @ 0x1C00AAAB0 (AMLIInitialize.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00149A0 (WPP_RECORDER_SF_DD.c)
 *     OSOpenHandle @ 0x1C008DF10 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  int v8; // edx
  int v9; // ebx
  NTSTATUS v11; // eax
  int v12; // edx
  NTSTATUS v13; // eax
  int v14; // edx
  unsigned int v15; // r13d
  WCHAR *Pool2; // rdi
  ULONG Length; // ebx
  int v18; // edx
  NTSTATUS v19; // eax
  int v20; // edx
  unsigned int v21; // eax
  const WCHAR *v22; // r15
  ULONG v23; // ecx
  unsigned int v24; // ebx
  ULONG v25; // esi
  NTSTATUS v26; // eax
  int v27; // edx
  int v28; // edx
  PULONG ResultLength; // [rsp+28h] [rbp-48h]
  NTSTATUS v30; // [rsp+40h] [rbp-30h]
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  ULONG v34; // [rsp+A8h] [rbp+38h] BYREF

  Handle = 0LL;
  v34 = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  if ( a2 )
  {
    Handle = a2;
  }
  else
  {
    v9 = OSOpenHandle(
           "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
           0LL,
           (__int64)&Handle);
    if ( v9 < 0 || !Handle )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          11,
          19,
          (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
          v9);
      }
      return (unsigned int)v9;
    }
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v11 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  v9 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        11,
        20,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        v11);
    }
    if ( !a2 )
      ZwClose(Handle);
    return (unsigned int)v9;
  }
  v13 = ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &v34);
  v15 = -2147483643;
  v9 = v13;
  if ( v13 != -2147483643 && v13 != -1073741789 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(ResultLength) = v13;
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        11,
        21,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        ResultLength);
    }
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(Handle);
    if ( v9 >= 0 )
      return (unsigned int)-1073741823;
    return (unsigned int)v9;
  }
  while ( 1 )
  {
    if ( v9 != -2147483643 )
    {
      Pool2 = 0LL;
      if ( v9 != -1073741789 )
        goto LABEL_34;
    }
    Length = v34;
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, v34, 1299211073LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(ResultLength) = v34;
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          22,
          22,
          (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
          ResultLength);
      }
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(Handle);
      return 3221225626LL;
    }
    v19 = ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformationAlign64, Pool2, Length, &v34);
    v9 = v19;
    if ( v19 != -2147483643 && v19 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( v19 >= 0 )
  {
LABEL_34:
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(Handle);
    if ( *(_DWORD *)Pool2 == 1 || *(_DWORD *)Pool2 == 7 )
    {
      v22 = Pool2 + 4;
      v23 = (v34 - 8) >> 1;
      v24 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          v25 = v23--;
          if ( !v22[v23] )
            break;
          if ( !v23 )
            goto LABEL_54;
        }
        do
        {
          if ( !*v22 )
            break;
          RtlInitUnicodeString(&ValueName, v22);
          v26 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
          v30 = v26;
          if ( v26 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(ResultLength) = v26;
              LOBYTE(v27) = 2;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                v27,
                22,
                24,
                (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
                ResultLength);
              v26 = v30;
            }
            v15 = v26;
            goto LABEL_66;
          }
          v24 += DestinationString.MaximumLength;
          if ( *a4 >= v24 )
          {
            memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
            a3 += DestinationString.MaximumLength;
          }
          RtlFreeAnsiString(&DestinationString);
          v25 -= ValueName.Length >> 1;
          v22 += (unsigned __int64)ValueName.Length >> 1;
          if ( *(_DWORD *)Pool2 == 7 )
          {
            if ( !v25 )
              break;
            ++v22;
            --v25;
          }
        }
        while ( v25 );
        if ( v24 )
          goto LABEL_56;
      }
LABEL_54:
      v24 = 1;
      if ( *a4 )
        *a3++ = 0;
LABEL_56:
      if ( *(_DWORD *)Pool2 == 7 && *a4 >= ++v24 )
        *a3 = 0;
      ExFreePoolWithTag(Pool2, 0);
      if ( *a4 >= v24 )
      {
        *a4 = v24;
        return 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = 2;
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v28,
          11,
          25,
          (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
          *a4,
          v24);
      }
      *a4 = v24;
    }
    else
    {
      v21 = *((_DWORD *)Pool2 + 1);
      if ( *a4 >= v21 )
      {
        memmove(a3, Pool2 + 4, v21);
        *a4 = *((_DWORD *)Pool2 + 1);
        ExFreePoolWithTag(Pool2, 0);
        return 0LL;
      }
      *a4 = v21;
LABEL_66:
      ExFreePoolWithTag(Pool2, 0);
    }
    return v15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(ResultLength) = v19;
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      21,
      23,
      (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
      ResultLength);
  }
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(Handle);
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}
