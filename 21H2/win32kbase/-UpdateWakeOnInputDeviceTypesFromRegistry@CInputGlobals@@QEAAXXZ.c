/*
 * XREFs of ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x1C00DCB30
 * Callers:
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C0053C48 (--0CInputGlobals@@AEAA@XZ.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C00839C4 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(CInputGlobals *this)
{
  __int64 v2; // r8
  char *v3; // rbx
  __int64 v4; // rdi
  const WCHAR *v5; // rdx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp+37h] BYREF
  int v15; // [rsp+9Ch] [rbp+3Bh]
  int v16; // [rsp+A0h] [rbp+3Fh]
  int v17; // [rsp+A4h] [rbp+43h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *((_DWORD *)this + 25) = 46;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\INPUT");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ResultLength = 0;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"WakeOnInputDeviceTypes");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v15 == 4
      && v16 == 4 )
    {
      *((_DWORD *)this + 25) = v17;
    }
    ZwClose(KeyHandle);
  }
  KeyHandle = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(8u, 131097LL, v2);
  if ( KeyHandle )
  {
    v3 = (char *)&unk_1C028DC80;
    v4 = 5LL;
    do
    {
      v5 = (const WCHAR *)*((_QWORD *)v3 + 1);
      ResultLength = 0;
      ValueName = 0LL;
      RtlInitUnicodeString(&ValueName, v5);
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
        && v15 == 4
        && v16 == 4 )
      {
        v6 = *(_DWORD *)v3;
        v7 = *((_DWORD *)this + 25);
        if ( v17 )
          v8 = v7 | v6;
        else
          v8 = v7 & ~v6;
        *((_DWORD *)this + 25) = v8;
      }
      v3 += 16;
      --v4;
    }
    while ( v4 );
    ZwClose(KeyHandle);
  }
}
