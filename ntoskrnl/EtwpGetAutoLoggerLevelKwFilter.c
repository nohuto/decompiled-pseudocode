/*
 * XREFs of EtwpGetAutoLoggerLevelKwFilter @ 0x14084F194
 * Callers:
 *     EtwpGetAutoLoggerProviderFilter @ 0x1407FDD44 (EtwpGetAutoLoggerProviderFilter.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpGetAutoLoggerLevelKwFilter(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  WCHAR *v8; // rbx
  __int64 v9; // r12
  wchar_t *Pool2; // rax
  WCHAR *v11; // rdi
  NTSTATUS v12; // ecx
  HANDLE v13; // rax
  unsigned int v14; // esi
  wchar_t *v15; // rax
  HANDLE v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-48h]
  _QWORD v31[148]; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = -1LL;
  KeyHandle = 0LL;
  v5 = -1LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v8 = 0LL;
  DestinationString = 0LL;
  do
    ++v5;
  while ( *(_WORD *)(a1 + 2 * v5) );
  v9 = (unsigned int)(2 * v5 + 40);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9, 1350005829LL);
  v11 = Pool2;
  if ( !Pool2 )
    goto LABEL_11;
  v12 = RtlStringCbPrintfW(Pool2, (unsigned int)v9, L"%ws\\StackLevelKwFilter", a1);
  if ( v12 )
    goto LABEL_10;
  RtlInitUnicodeString(&DestinationString, v11);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v13 = KeyHandle;
  if ( v12 < 0 )
    v13 = 0LL;
  KeyHandle = v13;
  if ( a2 )
  {
    do
      ++v4;
    while ( *(_WORD *)(a2 + 2 * v4) );
    v14 = 2 * v4 + 40;
    v15 = (wchar_t *)ExAllocatePool2(256LL, v14, 1350005829LL);
    v8 = v15;
    if ( !v15 )
      goto LABEL_11;
    v12 = RtlStringCbPrintfW(v15, v14, L"%ws\\StackLevelKwFilter", a2);
    if ( v12 )
      goto LABEL_10;
    RtlInitUnicodeString(&DestinationString, v8);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    v16 = Handle;
    if ( v12 < 0 )
      v16 = 0LL;
    Handle = v16;
  }
  if ( !KeyHandle && !Handle )
  {
LABEL_10:
    if ( v12 >= 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v17 = ExAllocatePool2(256LL, 24LL, 1350005829LL);
  *a3 = (PVOID)v17;
  v18 = v17;
  if ( !v17 )
    goto LABEL_11;
  memset(v31, 0, 0x498uLL);
  v24 = v18;
  LODWORD(v31[4]) = 11;
  v23 = 11;
  v31[3] = &v23;
  LODWORD(v31[11]) = 11;
  v31[2] = L"MatchAnyKeyword";
  v25 = 11;
  v31[10] = &v25;
  v31[0] = EtwpQueryRegistryCallback;
  v31[9] = L"MatchAllKeyword";
  v26 = v18 + 8;
  v31[17] = &v27;
  v31[16] = L"Level";
  v28 = v18 + 16;
  v31[24] = &v29;
  v31[23] = L"FilterIn";
  v31[7] = EtwpQueryRegistryCallback;
  v31[14] = EtwpQueryRegistryCallback;
  LODWORD(v31[18]) = 4;
  v27 = 4;
  v31[21] = EtwpQueryRegistryCallback;
  LODWORD(v31[25]) = 4;
  v29 = 4;
  v30 = v18 + 17;
  if ( (int)RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, v31, 0LL) < 0 )
  {
LABEL_11:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
    goto LABEL_13;
  }
  if ( Handle )
  {
    v31[5] = *a3;
    v31[12] = v31[5] + 8LL;
    v31[19] = v31[5] + 16LL;
    v31[26] = v31[5] + 17LL;
    RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, v31, 0LL);
  }
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
