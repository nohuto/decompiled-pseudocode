/*
 * XREFs of GetEasTimeout @ 0x1C00EBBB4
 * Callers:
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00EBB24 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 GetEasTimeout()
{
  int v0; // edi
  int v1; // ebx
  unsigned int v2; // esi
  int v3; // r14d
  void *KeyHandle; // [rsp+38h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp+37h] BYREF
  int v10; // [rsp+8Ch] [rbp+3Bh]
  int v11; // [rsp+90h] [rbp+3Fh]
  __int64 v12; // [rsp+94h] [rbp+43h]

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength = 0;
  v1 = -1;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\EAS\\Policies");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"7");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v10 == 4
      && v11 == 4
      && (_DWORD)v12 )
    {
      v1 = v12;
      v0 = 1;
    }
    ZwClose(KeyHandle);
  }
  v2 = v1;
  v3 = v1;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"InactivityTimeoutSecs");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v10 == 4
      && v11 == 4 )
    {
      if ( (_DWORD)v12 )
      {
        v1 = v12;
        v0 = 1;
        if ( (unsigned int)v12 >= v2 )
          v1 = v3;
      }
    }
    ZwClose(KeyHandle);
  }
  return v1 & (unsigned int)-(v0 != 0);
}
