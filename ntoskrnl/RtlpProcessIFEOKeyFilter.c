/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x14077F000
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14077EE60 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, __int64 a2, UNICODE_STRING *a3)
{
  int v3; // ebx
  ULONG Length; // edi
  void *v6; // rsi
  wchar_t *v8; // r14
  NTSTATUS result; // eax
  int v10; // ecx
  bool v11; // zf
  _BYTE *v12; // rax
  ULONG v13; // r13d
  NTSTATUS inited; // edi
  ULONG v15; // ecx
  NTSTATUS v16; // eax
  __int64 Pool2; // rax
  NTSTATUS v18; // eax
  HANDLE *v19; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v21; // [rsp+38h] [rbp-C8h]
  _BYTE *v22; // [rsp+40h] [rbp-C0h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v26; // [rsp+70h] [rbp-90h]
  HANDLE *v27; // [rsp+78h] [rbp-88h]
  UNICODE_STRING v28; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v31; // [rsp+C4h] [rbp-3Ch]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]

  v27 = a1;
  v3 = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  Length = 544;
  DestinationString = 0LL;
  v6 = 0LL;
  v21 = 544;
  memset(&ObjectAttributes, 0, 44);
  v8 = (wchar_t *)KeyValueInformation;
  v28 = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(
             *a1,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return v3;
    return result;
  }
  if ( v31 != 4 || v32 != 4 || !v33 )
    return 0;
  v10 = 1600;
  v11 = KeGetCurrentThread()->PreviousMode == 1;
  String2 = *a3;
  if ( !v11 )
    v10 = 576;
  v26 = v10;
  result = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\");
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      String2.Length -= 8;
      String2.MaximumLength -= 8;
      String2.Buffer += 4;
    }
    v12 = KeyValueInformation;
    v13 = 0;
    v22 = KeyValueInformation;
LABEL_18:
    inited = ZwEnumerateKey(*v27, v13, KeyBasicInformation, v12, Length, &ResultLength);
    if ( inited < 0 )
      goto LABEL_37;
    DestinationString.Length = *((_WORD *)v22 + 6);
    DestinationString.MaximumLength = *((_WORD *)v22 + 6);
    DestinationString.Buffer = (wchar_t *)(v22 + 16);
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = *v27;
    ObjectAttributes.Attributes = v26;
    ObjectAttributes.ObjectName = &DestinationString;
    inited = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( inited < 0 )
      goto LABEL_37;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
    if ( inited < 0 )
    {
      ZwClose(KeyHandle);
      goto LABEL_45;
    }
    v15 = v21;
    while ( 1 )
    {
      v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v8, v15, &ResultLength);
      inited = v16;
      if ( v16 == -2147483643 || v16 == -1073741789 )
      {
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        Pool2 = ExAllocatePool2(65LL, ResultLength, 1799976018LL);
        v6 = (void *)Pool2;
        if ( !Pool2 )
        {
          inited = -1073741801;
LABEL_33:
          if ( inited >= 0 )
          {
            if ( *((_DWORD *)v8 + 1) != 1
              || *((_DWORD *)v8 + 2) > 0xFFFEu
              || (v28.Length = v8[4] - 2,
                  v28.MaximumLength = v28.Length,
                  v28.Buffer = v8 + 6,
                  RtlCompareUnicodeString(&String2, &v28, 1u)) )
            {
              ZwClose(KeyHandle);
              ++v13;
              goto LABEL_43;
            }
          }
          else
          {
            ZwClose(KeyHandle);
            v18 = 0;
            if ( inited != -1073741772 )
              v18 = inited;
            inited = v18;
LABEL_37:
            ++v13;
            if ( inited >= 0 )
            {
LABEL_43:
              v12 = v22;
              Length = v21;
              goto LABEL_18;
            }
          }
LABEL_45:
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          if ( inited >= 0 )
          {
            v19 = v27;
            ZwClose(*v27);
            *v19 = KeyHandle;
          }
          if ( inited != -2147483622 )
            return inited;
          return v3;
        }
        v15 = ResultLength;
        v8 = (wchar_t *)Pool2;
        v21 = ResultLength;
        v22 = (_BYTE *)Pool2;
      }
      else
      {
        Pool2 = (__int64)v22;
        v15 = v21;
      }
      if ( inited != -2147483643 )
      {
        v22 = (_BYTE *)Pool2;
        v21 = v15;
        if ( inited != -1073741789 )
          goto LABEL_33;
      }
    }
  }
  return result;
}
