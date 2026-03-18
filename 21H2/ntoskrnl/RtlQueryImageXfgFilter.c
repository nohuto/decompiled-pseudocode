/*
 * XREFs of RtlQueryImageXfgFilter @ 0x1405E3B04
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405EE7E0 (RtlCheckXfgFailureInformation.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     RtlpOpenImageFileOptionsKey @ 0x1409B5C20 (RtlpOpenImageFileOptionsKey.c)
 *     RtlpOpenSystemSessionKey @ 0x1409B5C38 (RtlpOpenSystemSessionKey.c)
 */

__int64 __fastcall RtlQueryImageXfgFilter(_WORD *a1, UNICODE_STRING *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v7; // eax
  NTSTATUS inited; // ebx
  NTSTATUS v9; // eax
  char PreviousMode; // cl
  ULONG v12; // eax
  __int64 v13; // rax
  __int64 v14; // r13
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-F8h] BYREF
  int v18; // [rsp+34h] [rbp-F4h]
  int v19; // [rsp+38h] [rbp-F0h]
  HANDLE Handle; // [rsp+40h] [rbp-E8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-E0h] BYREF
  int v22; // [rsp+50h] [rbp-D8h]
  __int64 v23; // [rsp+58h] [rbp-D0h]
  __int64 v24; // [rsp+60h] [rbp-C8h]
  _BYTE *v25; // [rsp+68h] [rbp-C0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-88h] BYREF
  UNICODE_STRING ValueName; // [rsp+B0h] [rbp-78h] BYREF
  __int128 KeyValueInformation; // [rsp+C0h] [rbp-68h] BYREF
  int v30; // [rsp+D0h] [rbp-58h]
  wchar_t pszDest[12]; // [rsp+D8h] [rbp-50h] BYREF

  v23 = a4;
  v24 = a4;
  v25 = a5;
  DestinationString = 0LL;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  v30 = 0;
  memset(&ObjectAttributes, 0, 44);
  ValueName = 0LL;
  v19 = 0;
  v18 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  *a5 = 0;
  if ( *a1 )
    v7 = RtlpOpenImageFileOptionsKey(a1, a2, &KeyHandle);
  else
    v7 = RtlpOpenSystemSessionKey(a1, &KeyHandle);
  inited = v7;
  if ( v7 < 0 )
    goto LABEL_11;
  inited = RtlInitUnicodeStringEx(&DestinationString, L"UseXfgFilter");
  if ( inited < 0 )
    goto LABEL_11;
  v9 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength);
  inited = v9;
  if ( v9 < 0 )
  {
LABEL_7:
    if ( v9 == -1073741772 || v9 == -1073741789 || v9 == -2147483643 )
    {
LABEL_10:
      inited = 0;
      goto LABEL_11;
    }
    goto LABEL_11;
  }
  if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation) )
    goto LABEL_10;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = KeyHandle;
  v12 = 1600;
  if ( PreviousMode != 1 )
    v12 = 576;
  ObjectAttributes.Attributes = v12;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  inited = ZwOpenKey(&Handle, 1u, &ObjectAttributes);
  if ( inited >= 0 )
  {
    v13 = RtlImageNtHeader(a3);
    if ( v13 )
    {
      v18 = *(_DWORD *)(v13 + 8);
      v19 = *(_DWORD *)(v13 + 88);
    }
    else
    {
      inited = -1073741701;
      v22 = -1073741701;
    }
    v14 = v23;
    if ( inited >= 0 )
    {
      v15 = ZwQueryValueKey(
              Handle,
              (PUNICODE_STRING)&stru_14000A7A0,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x14u,
              &ResultLength);
      inited = v15;
      if ( v15 != -1073741772 )
      {
        if ( v15 < 0 )
          goto LABEL_11;
        if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || HIDWORD(KeyValueInformation) != v18 )
          goto LABEL_29;
      }
      v16 = ZwQueryValueKey(
              Handle,
              (PUNICODE_STRING)&stru_14000A790,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x14u,
              &ResultLength);
      inited = v16;
      if ( v16 != -1073741772 )
      {
        if ( v16 < 0 )
          goto LABEL_11;
        if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || HIDWORD(KeyValueInformation) != v19 )
        {
LABEL_29:
          inited = -1073741275;
          goto LABEL_11;
        }
      }
      RtlStringCbPrintfW(pszDest, 0x12uLL, L"%08llX", v14);
      inited = RtlInitUnicodeStringEx(&ValueName, pszDest);
      if ( inited >= 0 )
      {
        v9 = ZwQueryValueKey(Handle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
        inited = v9;
        if ( v9 >= 0 )
        {
          if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation) )
            goto LABEL_10;
          *a5 = 1;
          goto LABEL_11;
        }
        goto LABEL_7;
      }
    }
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
