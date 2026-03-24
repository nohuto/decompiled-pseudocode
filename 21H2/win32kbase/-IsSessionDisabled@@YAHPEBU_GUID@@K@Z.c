/*
 * XREFs of ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00B1500
 * Callers:
 *     WinSqmStartSession @ 0x1C00B12C0 (WinSqmStartSession.c)
 *     ?RegisterWinSqmProvider@@YAKXZ @ 0x1C00B146C (-RegisterWinSqmProvider@@YAKXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 __fastcall IsSessionDisabled(const struct _GUID *Source1, ULONG Value)
{
  unsigned int v4; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+7h] BYREF
  int v12; // [rsp+A0h] [rbp+17h]
  char v13; // [rsp+A8h] [rbp+1Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  v12 = 0;
  String = 0LL;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\DisabledSessions\\");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( !Source1 || RtlCompareMemory(Source1, &unk_1C020EFC8, 0x10uLL) == 16 )
    {
      RtlInitUnicodeString(&String, L"GlobalSession");
    }
    else
    {
      String.MaximumLength = 16;
      String.Buffer = (PWSTR)&v13;
      if ( RtlIntegerToUnicodeString(Value, 0xAu, &String) < 0 )
        goto LABEL_2;
    }
    if ( ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      v4 = 1;
  }
LABEL_2:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
