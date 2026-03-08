/*
 * XREFs of RtlQueryImageXfgFilter @ 0x1405A4CF4
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405AF650 (RtlCheckXfgFailureInformation.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     RtlpOpenImageFileOptionsKey @ 0x1409B5E50 (RtlpOpenImageFileOptionsKey.c)
 *     RtlpOpenSystemSessionKey @ 0x1409B5E68 (RtlpOpenSystemSessionKey.c)
 */

__int64 __fastcall RtlQueryImageXfgFilter(_WORD *a1, UNICODE_STRING *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v7; // eax
  NTSTATUS inited; // ebx
  NTSTATUS v10; // eax
  char PreviousMode; // cl
  ULONG v12; // eax
  __int64 v13; // rax
  __int64 v14; // r13
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-E0h] BYREF
  int v19; // [rsp+40h] [rbp-D8h]
  int v20; // [rsp+44h] [rbp-D4h]
  HANDLE Handle; // [rsp+48h] [rbp-D0h] BYREF
  int v22; // [rsp+50h] [rbp-C8h]
  __int64 v23; // [rsp+58h] [rbp-C0h]
  __int64 v24; // [rsp+60h] [rbp-B8h]
  _BYTE *v25; // [rsp+68h] [rbp-B0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-78h] BYREF
  __int128 KeyValueInformation; // [rsp+B0h] [rbp-68h] BYREF
  int v29; // [rsp+C0h] [rbp-58h]
  wchar_t pszDest[12]; // [rsp+C8h] [rbp-50h] BYREF

  v23 = a4;
  v24 = a4;
  v25 = a5;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  v29 = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  v20 = 0;
  v19 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  *a5 = 0;
  if ( *a1 )
    v7 = RtlpOpenImageFileOptionsKey(a1, a2, &KeyHandle);
  else
    v7 = RtlpOpenSystemSessionKey(a1, &KeyHandle);
  inited = v7;
  if ( v7 < 0 )
    goto LABEL_10;
  if ( ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_14000ABB0,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL
    && HIDWORD(KeyValueInformation) )
  {
    *a5 = 1;
LABEL_9:
    inited = 0;
    goto LABEL_10;
  }
  if ( !a2 || !a3 )
    goto LABEL_9;
  v10 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&stru_14000ABE0,
          KeyValuePartialInformation,
          &KeyValueInformation,
          0x14u,
          &ResultLength);
  inited = v10;
  if ( v10 < 0 )
  {
LABEL_18:
    if ( v10 == -1073741772 || v10 == -1073741789 || v10 == -2147483643 )
      goto LABEL_9;
    goto LABEL_10;
  }
  if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation) )
    goto LABEL_9;
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
      v19 = *(_DWORD *)(v13 + 8);
      v20 = *(_DWORD *)(v13 + 88);
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
              (PUNICODE_STRING)&stru_14000ABD0,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x14u,
              &ResultLength);
      inited = v15;
      if ( v15 != -1073741772 )
      {
        if ( v15 < 0 )
          goto LABEL_10;
        if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || HIDWORD(KeyValueInformation) != v19 )
          goto LABEL_35;
      }
      v16 = ZwQueryValueKey(
              Handle,
              (PUNICODE_STRING)&stru_14000ABA0,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x14u,
              &ResultLength);
      inited = v16;
      if ( v16 != -1073741772 )
      {
        if ( v16 < 0 )
          goto LABEL_10;
        if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || HIDWORD(KeyValueInformation) != v20 )
        {
LABEL_35:
          inited = -1073741275;
          goto LABEL_10;
        }
      }
      RtlStringCbPrintfW(pszDest, 0x12uLL, L"%08llX", v14);
      inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
      if ( inited >= 0 )
      {
        v10 = ZwQueryValueKey(
                Handle,
                &DestinationString,
                KeyValuePartialInformation,
                &KeyValueInformation,
                0x14u,
                &ResultLength);
        inited = v10;
        if ( v10 >= 0 )
        {
          if ( *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL || !HIDWORD(KeyValueInformation) )
            goto LABEL_9;
          *a5 = 1;
          goto LABEL_10;
        }
        goto LABEL_18;
      }
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
