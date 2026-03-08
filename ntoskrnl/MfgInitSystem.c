/*
 * XREFs of MfgInitSystem @ 0x140B71EB4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x140413E50 (ZwDeleteKey.c)
 *     ZwOpenKeyEx @ 0x140414830 (ZwOpenKeyEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall MfgInitSystem(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS inited; // ebx
  unsigned __int16 v3; // ax
  void *Pool2; // rax
  __int64 v6; // rax
  HANDLE v7; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES KeyHandle_8; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR pszDest[256]; // [rsp+B8h] [rbp-50h] BYREF

  qword_140C31710 = 0LL;
  ExpManufacturingInformation = 0LL;
  v1 = *(_QWORD *)(a1 + 240);
  inited = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  memset(&KeyHandle_8, 0, 44);
  ValueName = 0LL;
  v7 = 0LL;
  KeyHandle = 0LL;
  v3 = *(_WORD *)(v1 + 2840);
  if ( !v3 )
    return (unsigned int)inited;
  if ( v3 >= 0x80u )
    return (unsigned int)-1073741811;
  DWORD2(ExpManufacturingInformation) = *(_DWORD *)(v1 + 2840);
  Pool2 = (void *)ExAllocatePool2(256LL, WORD5(ExpManufacturingInformation), 0x5067664Du);
  qword_140C31710 = Pool2;
  if ( Pool2 )
  {
    inited = RtlStringCbCopyW(
               (NTSTRSAFE_PWSTR)Pool2,
               WORD5(ExpManufacturingInformation),
               *(NTSTRSAFE_PCWSTR *)(v1 + 2848));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlStringCbPrintfW(
               pszDest,
               0x200uLL,
               L"%s%s",
               L"\\registry\\machine\\",
               L"System\\CurrentControlSet\\Control\\ManufacturingMode\\");
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_22;
    KeyHandle_8.Length = 48;
    KeyHandle_8.RootDirectory = 0LL;
    KeyHandle_8.ObjectName = &DestinationString;
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &KeyHandle_8);
    if ( inited < 0 )
      goto LABEL_22;
    KeyHandle_8.Attributes = 576;
    KeyHandle_8.Length = 48;
    KeyHandle_8.RootDirectory = KeyHandle;
    KeyHandle_8.ObjectName = (PUNICODE_STRING)((char *)&ExpManufacturingInformation + 8);
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&Handle, 0xF003Fu, &KeyHandle_8);
    if ( inited < 0 )
      goto LABEL_22;
    ZwClose(Handle);
    LODWORD(ExpManufacturingInformation) = ExpManufacturingInformation | 1;
    RtlInitUnicodeStringEx(&ValueName, L"LastProfile");
    inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, qword_140C31710, WORD5(ExpManufacturingInformation));
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"Current");
    if ( inited < 0 )
      goto LABEL_22;
    KeyHandle_8.RootDirectory = KeyHandle;
    KeyHandle_8.Length = 48;
    KeyHandle_8.ObjectName = &DestinationString;
    KeyHandle_8.Attributes = 832;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKeyEx(&v7, 0xF003Fu, &KeyHandle_8, 8u) >= 0 )
    {
      inited = ZwDeleteKey(v7);
      if ( inited < 0 )
        goto LABEL_22;
      ZwClose(v7);
      v7 = 0LL;
    }
    inited = ZwCreateKey(&v7, 0xF003Fu, &KeyHandle_8, 0, 0LL, 3u, 0LL);
    if ( inited >= 0 )
    {
      inited = RtlStringCbPrintfW(
                 pszDest,
                 0x200uLL,
                 L"%s%s%wZ",
                 L"\\registry\\machine\\",
                 L"System\\CurrentControlSet\\Control\\ManufacturingMode\\",
                 (char *)&ExpManufacturingInformation + 8);
      if ( inited >= 0 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( pszDest[v6] );
        inited = ZwSetValueKey(v7, &CmSymbolicLinkValueName, 0, 6u, pszDest, 2 * v6);
      }
    }
    goto LABEL_22;
  }
  inited = -1073741670;
LABEL_22:
  if ( v7 )
    ZwClose(v7);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
