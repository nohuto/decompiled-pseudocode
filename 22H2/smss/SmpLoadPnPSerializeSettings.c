/*
 * XREFs of SmpLoadPnPSerializeSettings @ 0x140005238
 * Callers:
 *     SmscMain @ 0x140003F5C (SmscMain.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 */

__int64 SmpLoadPnPSerializeSettings()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  int v3; // eax
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  int v7; // [rsp+40h] [rbp-19h] BYREF
  const wchar_t *v8; // [rsp+48h] [rbp-11h]
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v12; // [rsp+94h] [rbp+3Bh]
  int v13; // [rsp+9Ch] [rbp+43h]

  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  v8 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v7 = 7209068;
  ValueName.Buffer = L"BootOptions";
  *(_DWORD *)&ValueName.Length = 1572886;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v1 = v0;
  if ( v0 >= 0 )
  {
    v2 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    v1 = v2;
    if ( v2 >= 0 )
    {
      v3 = SmpSerializeBoot;
      if ( v12 == 4 )
        v3 = v13;
      SmpSerializeBoot = v3;
    }
    else
    {
      SmpInitProgressByLine = 1432;
      SmpInitReturnStatus = v2;
      SmpInitLastCall = (__int64)NtQueryValueKey;
    }
  }
  else
  {
    SmpInitProgressByLine = 1414;
    SmpInitReturnStatus = v0;
    SmpInitLastCall = (__int64)NtOpenKey;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v1;
}
