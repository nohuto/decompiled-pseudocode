/*
 * XREFs of CmpAddAliasEntry @ 0x140B94C88
 * Callers:
 *     CmpCreateHardwareProfiles @ 0x140B50B04 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1403BEBCC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     CmpAddDockingInfo @ 0x140B50F94 (CmpAddDockingInfo.c)
 */

__int64 __fastcall CmpAddAliasEntry(void *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-B8h] BYREF
  int Data; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  char v15; // [rsp+A0h] [rbp-60h] BYREF

  ObjectAttributes.RootDirectory = a1;
  KeyHandle = 0LL;
  Handle = 0LL;
  Data = 0;
  Disposition = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpStrAliasString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v6 == -1073741772 )
    v6 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      ++v5;
      DestinationString.Buffer = (wchar_t *)&v15;
      RtlUnicodeStringPrintf(&DestinationString, L"%04d", v5);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v6 = v7;
      if ( v7 < 0 )
        break;
      ZwClose(Handle);
      if ( v5 >= 0xC8 )
        goto LABEL_9;
    }
    if ( v7 != -1073741772 )
      goto LABEL_11;
LABEL_9:
    v6 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( v6 >= 0 )
    {
      CmpAddDockingInfo((__int64)Handle, a2);
      Data = a3;
      v6 = ZwSetValueKey(Handle, (PUNICODE_STRING)&CmpStrProfileNumberString, 0, 4u, &Data, 4u);
      goto LABEL_12;
    }
LABEL_11:
    Handle = 0LL;
LABEL_12:
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    KeyHandle = 0LL;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
