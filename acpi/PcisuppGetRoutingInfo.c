__int64 __fastcall PcisuppGetRoutingInfo(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  PVOID v4; // rbx
  int v5; // edi
  NTSTATUS v6; // eax
  PVOID P; // [rsp+30h] [rbp-89h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-81h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  __int128 v10; // [rsp+48h] [rbp-71h]
  __int64 v11; // [rsp+58h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp-49h] BYREF
  int v14; // [rsp+74h] [rbp-45h]
  unsigned int v15; // [rsp+78h] [rbp-41h]
  char v16[116]; // [rsp+7Ch] [rbp-3Dh] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  v11 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  v10 = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Routing Info", 1LL, &KeyHandle);
  if ( (int)result < 0 )
    return result;
  if ( OSGetRegistryValue(KeyHandle, L"Flags", &P) < 0 )
  {
    v4 = P;
  }
  else
  {
    if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
      BYTE12(v10) = *((_BYTE *)P + 8);
    ExFreePoolWithTag(P, 0);
    v4 = 0LL;
    P = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"LinkNode");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x78u,
         &ResultLength) < 0
    || v14 != 3
    || ResultLength >= 0x78
    || v15 + 12 >= 0x78 )
  {
    *(_QWORD *)&v10 = 0LL;
    v6 = OSGetRegistryValue(KeyHandle, L"StaticVector", &P);
    v4 = P;
    v5 = v6;
    if ( v6 < 0 )
      goto LABEL_21;
    if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
      DWORD2(v10) = *((_DWORD *)P + 2);
    goto LABEL_20;
  }
  if ( v15 <= 0x6B )
  {
    v16[v15] = 0;
    v5 = LinkNodeFindByName(v16, &v11);
    if ( v5 < 0 )
      goto LABEL_21;
    DWORD2(v10) = 0;
    *(_QWORD *)&v10 = v11;
LABEL_20:
    *a2 = v10;
    goto LABEL_21;
  }
  v5 = -1073741789;
LABEL_21:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ZwClose(KeyHandle);
  return (unsigned int)v5;
}
