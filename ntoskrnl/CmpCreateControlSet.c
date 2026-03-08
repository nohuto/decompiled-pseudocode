/*
 * XREFs of CmpCreateControlSet @ 0x140B5107C
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 *     CmpCreateExtendedControlSets @ 0x140B51D50 (CmpCreateExtendedControlSets.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1403BEBCC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpCreateControlSet(__int64 a1, char a2)
{
  NTSTATUS ValueKey; // ebx
  NTSTATUS v5; // eax
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+44h] [rbp-BCh] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v11; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  ULONG ResultLength[4]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v16[256]; // [rsp+130h] [rbp+30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  ResultLength[0] = 0;
  Disposition = 0;
  DestinationString.Buffer = (wchar_t *)v16;
  KeyHandle = 0LL;
  v11 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  Data = 0;
  ValueKey = RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%ws", a1);
  if ( ValueKey >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ValueKey = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( ValueKey >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpSelectString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&v11, 0x20019u, &ObjectAttributes);
      ValueKey = v5;
      if ( v5 == -1073741772 )
      {
        if ( !a2 )
          goto LABEL_10;
        ValueKey = ZwCreateKey(&v11, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( ValueKey < 0 )
          goto LABEL_10;
        Data = 1;
        ValueKey = ZwSetValueKey(v11, (PUNICODE_STRING)&CmpCurrentString, 0, 4u, &Data, 4u);
        if ( ValueKey < 0 )
          goto LABEL_10;
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        DestinationString.Buffer = (wchar_t *)v16;
        RtlUnicodeStringPrintf(&DestinationString, L"ControlSet%03d", Data);
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ValueKey = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( ValueKey < 0 )
          goto LABEL_10;
        ZwClose(Handle);
        Handle = 0LL;
      }
      else if ( v5 < 0 )
      {
        goto LABEL_10;
      }
      if ( !Data )
      {
        ValueKey = ZwQueryValueKey(
                     v11,
                     (PUNICODE_STRING)&CmpCurrentString,
                     KeyValueFullInformation,
                     KeyValueInformation,
                     0x80u,
                     ResultLength);
        if ( ValueKey < 0 )
          goto LABEL_10;
        Data = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
      }
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ValueKey = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
      if ( ValueKey >= 0 )
      {
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        DestinationString.Buffer = (wchar_t *)v16;
        RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%ws\\ControlSet%03d", a1, Data);
        ValueKey = ZwSetValueKey(
                     Handle,
                     &CmSymbolicLinkValueName,
                     0,
                     6u,
                     DestinationString.Buffer,
                     DestinationString.Length);
      }
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( v11 )
    ZwClose(v11);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)ValueKey;
}
