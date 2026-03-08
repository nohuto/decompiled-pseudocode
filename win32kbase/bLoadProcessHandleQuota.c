/*
 * XREFs of bLoadProcessHandleQuota @ 0x1C008AE98
 * Callers:
 *     HmgCreate @ 0x1C002CDD0 (HmgCreate.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C008B288 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall bLoadProcessHandleQuota(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  int v3; // r8d
  int v4; // r8d
  int v5; // r9d
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v10; // [rsp+40h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v15; // [rsp+A4h] [rbp+3Bh]

  v1 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  *(_DWORD *)(v2 + 2376) = 10000;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    ResultLength = 0;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"GDIProcessHandleQuota");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v3 = v15;
      *(_DWORD *)(v2 + 2376) = v15;
      if ( v3 < 0 || (unsigned int)v3 > *(_DWORD *)(v2 + 1904) )
        *(_DWORD *)(v2 + 2376) = 10000;
      if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
      {
        v10 = 0x1000000LL;
        v8 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1C02C93D8,
          (unsigned int)&unk_1C0295686,
          v4,
          v5,
          (__int64)&v8,
          (__int64)&v10);
      }
    }
    v1 = 1;
    ZwClose(KeyHandle);
  }
  return v1;
}
