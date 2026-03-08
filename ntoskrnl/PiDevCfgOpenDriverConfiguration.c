/*
 * XREFs of PiDevCfgOpenDriverConfiguration @ 0x1408792B0
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x140878BA8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095C298 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 */

__int64 __fastcall PiDevCfgOpenDriverConfiguration(void *a1, const WCHAR *a2, HANDLE *a3)
{
  NTSTATUS v5; // ebx
  HANDLE v6; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  DestinationString.Buffer = L"Configurations";
  ObjectAttributes.RootDirectory = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_DWORD *)&DestinationString.Length = 1966108;
  ObjectAttributes.Attributes = 576;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v6 = KeyHandle;
    *(&ObjectAttributes.Attributes + 1) = 0;
    *a3 = 0LL;
    ObjectAttributes.RootDirectory = v6;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
