__int64 __fastcall IopSymlinkQueryEnabledClasses(PCWSTR SourceString)
{
  __int32 v1; // ebx
  NTSTATUS v2; // esi
  unsigned __int16 v3; // di
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING v8; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v9[2]; // [rsp+68h] [rbp-39h]
  UNICODE_STRING v10; // [rsp+70h] [rbp-31h] BYREF
  int v11; // [rsp+80h] [rbp-21h]
  UNICODE_STRING v12; // [rsp+88h] [rbp-19h] BYREF
  int v13; // [rsp+98h] [rbp-9h]
  UNICODE_STRING v14; // [rsp+A0h] [rbp-1h] BYREF
  int v15; // [rsp+B0h] [rbp+Fh]
  _BYTE KeyValueInformation[12]; // [rsp+B8h] [rbp+17h] BYREF
  int v17; // [rsp+C4h] [rbp+23h]

  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v1 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v2 = IopOpenRegistryKey(&KeyHandle, 0LL, &DestinationString, 0x20019u, 0);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&v8, L"SymlinkLocalToLocalEvaluation");
    v9[0] = 1;
    RtlInitUnicodeString(&v10, L"SymlinkLocalToRemoteEvaluation");
    v11 = 2;
    RtlInitUnicodeString(&v12, L"SymlinkRemoteToRemoteEvaluation");
    v13 = 8;
    RtlInitUnicodeString(&v14, L"SymlinkRemoteToLocalEvaluation");
    v3 = 0;
    v15 = 4;
    while ( 1 )
    {
      v2 = ZwQueryValueKey(
             KeyHandle,
             (UNICODE_STRING *)((char *)&v8 + 24 * v3),
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
      if ( v2 < 0 )
        break;
      if ( v17 )
        v1 += v9[6 * v3];
      if ( ++v3 >= 4u )
      {
        _InterlockedExchange(&IopSymlinkEnabledTypes, v1);
        break;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
