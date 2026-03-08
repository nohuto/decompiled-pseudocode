/*
 * XREFs of ?_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z @ 0x1C01E9128
 * Callers:
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0148F26 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall Edgy::_GetDWordFromRegistry(
        Edgy *this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  unsigned int v5; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v13; // [rsp+94h] [rbp+3Bh]
  int v14; // [rsp+98h] [rbp+3Fh]
  int v15; // [rsp+9Ch] [rbp+43h]

  DestinationString = 0LL;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Edgy");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"forcelegacy");
    ResultLength = 20;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v13 == 4
      && v14 == 4 )
    {
      v5 = 1;
      *(_DWORD *)a3 = v15;
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
