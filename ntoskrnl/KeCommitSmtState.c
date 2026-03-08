/*
 * XREFs of KeCommitSmtState @ 0x1403ADB24
 * Callers:
 *     CmpAcceptBoot @ 0x14079A058 (CmpAcceptBoot.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

int KeCommitSmtState()
{
  int result; // eax
  int v1; // ecx
  int Data; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+2Fh] BYREF
  int v8; // [rsp+98h] [rbp+3Fh]

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ResultLength = 0;
  Data = 0;
  v8 = 0;
  ValueName.Buffer = L"FeatureSettings";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement;
  KeyValueInformation = 0LL;
  *(_QWORD *)&ValueName.Length = 2097182LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result < 0 )
    goto LABEL_7;
  result = ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result == -1073741772 )
  {
    v1 = 0;
  }
  else
  {
    if ( result < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
      goto LABEL_7;
    v1 = HIDWORD(KeyValueInformation);
  }
  Data = v1 ^ (KiFeatureSettings ^ v1) & 0x1C0000;
  result = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
LABEL_7:
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
