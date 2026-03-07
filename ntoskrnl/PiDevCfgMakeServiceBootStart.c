__int64 __fastcall PiDevCfgMakeServiceBootStart(PCWSTR SourceString)
{
  NTSTATUS RegistryValue; // ebx
  char *v2; // rdi
  void *v3; // rcx
  unsigned int v4; // edx
  _WORD *v5; // rcx
  unsigned __int16 v6; // ax
  char *v7; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING Data; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+98h] [rbp+38h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  v12 = 4;
  KeyHandle = 0LL;
  P = 0LL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&Data.Length = 0LL;
  DestinationString = 0LL;
  Data.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RegistryValue = PipOpenServiceEnumKeys(&DestinationString, 0x2001Fu, &KeyHandle, 0LL, 0);
  if ( RegistryValue < 0 )
    goto LABEL_17;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Start", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_14;
  v2 = (char *)P;
  if ( !PnpValidateRegistryDword((__int64)P) )
  {
LABEL_4:
    RegistryValue = -1073741823;
    goto LABEL_15;
  }
  v12 = *(_DWORD *)&v2[*((unsigned int *)v2 + 2)];
  ExFreePoolWithTag(v3, 0);
  P = 0LL;
  if ( (v12 & 0xFFFFFFFB) == 0 )
    goto LABEL_17;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"ImagePath", 0, &P);
  if ( RegistryValue < 0 )
  {
LABEL_14:
    v2 = (char *)P;
  }
  else
  {
    v2 = (char *)P;
    if ( (unsigned int)(*((_DWORD *)P + 1) - 1) > 1
      || !PnpValidateStringData((__int64)P + *((unsigned int *)P + 2), *((_DWORD *)P + 3)) )
    {
      goto LABEL_4;
    }
    LODWORD(P) = 0;
    PnpRegSzToString(v5, v4, (int *)&P);
    v6 = *((_WORD *)v2 + 6);
    v7 = &v2[*((unsigned int *)v2 + 2)];
    String2.Length = (unsigned __int16)P;
    String2.Buffer = (wchar_t *)v7;
    String2.MaximumLength = v6;
    if ( RtlPrefixUnicodeString(&PiDevCfgSystemRoot, &String2, 1u) )
    {
      RtlInitUnicodeString(&Data, (PCWSTR)v7 + 12);
      *(_DWORD *)&DestinationString.Length = 1310738;
      DestinationString.Buffer = L"ImagePath";
      RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, *((_DWORD *)v2 + 1), Data.Buffer, Data.Length + 2);
      if ( RegistryValue < 0 )
        goto LABEL_15;
    }
    else if ( !RtlPrefixUnicodeString(&PiDevCfgSystem32, &String2, 1u) )
    {
      goto LABEL_4;
    }
    *(_DWORD *)&DestinationString.Length = 786442;
    DestinationString.Buffer = L"Start";
    v12 = 0;
    RegistryValue = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v12, 4u);
  }
LABEL_15:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
