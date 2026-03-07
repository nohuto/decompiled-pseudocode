__int64 __fastcall PiDrvDbSetupNodeHive(__int64 a1, const WCHAR *a2)
{
  char v3; // r12
  _DWORD *v5; // rsi
  NTSTATUS appended; // ebx
  NTSTATUS v7; // eax
  unsigned __int16 Length; // r14
  unsigned __int16 i; // cx
  __int64 v11; // r14
  unsigned __int16 v12; // bx
  __int64 v13; // r14
  int v14; // eax
  UNICODE_STRING Destination; // [rsp+58h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+108h] [rbp+77h] BYREF

  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v3 = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  Destination = 0LL;
  String1 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  if ( !wcsicmp(a2, L"SYSTEM") )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 32);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( appended < 0 )
      goto LABEL_14;
    v5 = (_DWORD *)(a1 + 64);
    goto LABEL_8;
  }
  v5 = (_DWORD *)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
  {
    Destination.Length = 0;
    Destination.MaximumLength = DestinationString.Length + 38;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(DestinationString.Length + 38));
    if ( Destination.Buffer )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\MACHINE\\");
      if ( appended < 0 )
        goto LABEL_14;
      appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
      if ( appended < 0 )
        goto LABEL_14;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      appended = v7;
      if ( v7 != -1073741772 )
      {
        if ( v7 < 0 )
          goto LABEL_14;
LABEL_8:
        if ( (*(_DWORD *)(a1 + 492) & 2) != 0 && !wcsicmp(a2, L"SOFTWARE") )
          PnpSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 24),
            7u,
            *(_QWORD *)(a1 + 72),
            0LL,
            (__int64)DEVPKEY_DriverDatabase_SoftwareRegistryPath,
            18,
            (__int64)Destination.Buffer,
            Destination.Length + 2,
            0);
        appended = PiDrvDbResolveNodeFilePaths(a1, KeyHandle);
        if ( appended >= 0 && (*v5 & 8) != 0 )
          appended = PiDrvDbOverlayNodeHive(a1, a2, KeyHandle);
        goto LABEL_14;
      }
LABEL_46:
      appended = 0;
      goto LABEL_14;
    }
LABEL_21:
    appended = -1073741670;
    goto LABEL_14;
  }
  if ( !CmIsStateSeparationEnabled() )
    goto LABEL_46;
  Length = DestinationString.Length;
  UnicodeString.Length = 0;
  UnicodeString.MaximumLength = *(_WORD *)(a1 + 50) + DestinationString.Length;
  UnicodeString.Buffer = (wchar_t *)ExpAllocateStringRoutine(UnicodeString.MaximumLength);
  if ( !UnicodeString.Buffer )
    goto LABEL_21;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, (PCUNICODE_STRING)(a1 + 48));
  if ( appended >= 0 )
  {
    for ( i = UnicodeString.Length; i > 2u; UnicodeString.Length = i )
    {
      if ( UnicodeString.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
        break;
      i -= 2;
    }
    appended = RtlAppendUnicodeStringToString(&UnicodeString, &DestinationString);
    if ( appended >= 0 )
    {
      Destination.MaximumLength = *(_WORD *)(a1 + 34) + Length;
      Destination.Length = 0;
      Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
      if ( !Destination.Buffer )
        goto LABEL_21;
      appended = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(a1 + 32));
      if ( appended < 0 )
        goto LABEL_14;
      RtlInitUnicodeString(&String1, L"DRIVERS");
      v11 = String1.Length;
      v12 = Destination.Length;
      if ( Destination.Length > (unsigned __int64)String1.Length + 2 )
      {
        if ( RtlSuffixUnicodeString(&String1, &Destination, 1u) )
        {
          v12 = Destination.Length;
          if ( Destination.Buffer[(((unsigned __int64)Destination.Length - v11) >> 1) - 1] != 92 )
          {
            Destination.Length -= v11;
            goto LABEL_40;
          }
        }
        else
        {
          v12 = Destination.Length;
        }
      }
      RtlInitUnicodeString(&String1, L"SYSTEM");
      v13 = String1.Length;
      if ( v12 > (unsigned __int64)String1.Length + 2
        && RtlSuffixUnicodeString(&String1, &Destination, 1u)
        && Destination.Buffer[(((unsigned __int64)Destination.Length - v13) >> 1) - 1] != 92 )
      {
        Destination.Length -= v13;
      }
LABEL_40:
      appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
      if ( appended < 0 )
        goto LABEL_14;
      v14 = PiDrvDbLoadHive(&Destination, &UnicodeString, 0x2000LL, &KeyHandle);
      appended = v14;
      if ( v14 != -1073741772 )
      {
        if ( v14 < 0 )
          goto LABEL_14;
        if ( (*(_DWORD *)(a1 + 492) & 2) == 0 || wcsicmp(a2, L"SOFTWARE") )
          v3 = 1;
        goto LABEL_8;
      }
      goto LABEL_46;
    }
  }
LABEL_14:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v3 )
    PiDrvDbUnloadHive(&Destination, 0LL);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&Destination);
  return (unsigned int)appended;
}
