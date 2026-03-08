/*
 * XREFs of IoSetSystemPartition @ 0x1409444D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     IopCreateRegistryKeyEx @ 0x14078BB90 (IopCreateRegistryKeyEx.c)
 */

NTSTATUS __stdcall IoSetSystemPartition(PUNICODE_STRING VolumeNameString)
{
  HANDLE v2; // rbx
  int v3; // edi
  int v4; // eax
  ULONG DataSize; // eax
  wchar_t *Data; // [rsp+20h] [rbp-69h]
  HANDLE v8; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  int v13; // [rsp+90h] [rbp+7h] BYREF
  int v14; // [rsp+94h] [rbp+Bh]
  int v15; // [rsp+98h] [rbp+Fh]
  int v16; // [rsp+9Ch] [rbp+13h]
  int v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A4h] [rbp+1Bh]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]

  v2 = 0LL;
  v8 = 0LL;
  ValueName = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    ValueName.Buffer = (wchar_t *)&v13;
    v13 = 6619219;
    v14 = 7667828;
    v15 = 112;
    *(_DWORD *)&ValueName.Length = 786442;
    v4 = IopCreateRegistryKeyEx(&v8, KeyHandle, &ValueName, 0xF003Fu, 0, 0LL);
    v2 = v8;
    v3 = v4;
    if ( v4 >= 0 )
    {
      DataSize = VolumeNameString->Length + 2;
      v13 = 7929939;
      Data = VolumeNameString->Buffer;
      v14 = 7602291;
      v15 = 7143525;
      v16 = 6357072;
      v17 = 7602290;
      v18 = 7602281;
      v19 = 7274601;
      v20 = 110;
      *(_DWORD *)&ValueName.Length = 2097182;
      v3 = ZwSetValueKey(v8, &ValueName, 0, 1u, Data, DataSize);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ZwClose(v2);
  return v3;
}
