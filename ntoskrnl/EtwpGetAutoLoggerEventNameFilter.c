/*
 * XREFs of EtwpGetAutoLoggerEventNameFilter @ 0x14084A370
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
 *     RtlUnicodeToUTF8N @ 0x1407A3750 (RtlUnicodeToUTF8N.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpGetAutoLoggerEventNameFilter(__int64 a1, __int64 a2, __int64 a3, PVOID *a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  WCHAR *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r13
  wchar_t *Pool2; // rax
  WCHAR *v14; // r14
  NTSTATUS v15; // ecx
  NTSTATUS v16; // eax
  __int64 v17; // r13
  HANDLE v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  wchar_t *v21; // rax
  HANDLE v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  const WCHAR *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned __int16 Length; // r8
  unsigned int v30; // ecx
  CHAR *v31; // rcx
  __int16 v32; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UTF8StringActualByteCount[2]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+108h] [rbp+8h]
  _QWORD v52[148]; // [rsp+200h] [rbp+100h] BYREF

  v39 = a2;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v6 = -1LL;
  *a4 = 0LL;
  *a5 = 0;
  v7 = -1LL;
  *(_QWORD *)UTF8StringActualByteCount = a1;
  KeyHandle = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  memset(&ObjectAttributes, 0, 32);
  v32 = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  do
    ++v7;
  while ( *(_WORD *)(a3 + 2 * v7) );
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a1 + 2 * v11) );
  v12 = (unsigned int)(2 * (v11 + v7) + 4);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v12, 1350005829LL);
  v14 = Pool2;
  if ( Pool2 )
  {
    v15 = RtlStringCbPrintfW(Pool2, (unsigned int)v12, L"%ws\\%ws", *(_QWORD *)UTF8StringActualByteCount, a3);
    if ( v15 )
      goto LABEL_12;
    RtlInitUnicodeString(&DestinationString, v14);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v17 = v39;
    v15 = v16;
    v18 = KeyHandle;
    if ( v15 < 0 )
      v18 = 0LL;
    KeyHandle = v18;
    if ( v39 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_WORD *)(a3 + 2 * v19) );
      do
        ++v6;
      while ( *(_WORD *)(v39 + 2 * v6) );
      v20 = (unsigned int)(2 * (v6 + v19) + 4);
      v21 = (wchar_t *)ExAllocatePool2(256LL, v20, 1350005829LL);
      v10 = v21;
      if ( !v21 )
        goto LABEL_13;
      v15 = RtlStringCbPrintfW(v21, (unsigned int)v20, L"%ws\\%ws", v17, a3);
      if ( v15 )
        goto LABEL_12;
      RtlInitUnicodeString(&DestinationString, v10);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v22 = Handle;
      if ( v15 < 0 )
        v22 = 0LL;
      Handle = v22;
    }
    if ( !KeyHandle && !Handle )
    {
LABEL_12:
      if ( v15 >= 0 )
        goto LABEL_15;
      goto LABEL_13;
    }
    *a5 = 4096;
    v23 = ExAllocatePool2(256LL, 4096LL, 1350005829LL);
    *a4 = (PVOID)v23;
    v24 = v23;
    if ( v23 )
    {
      memset(v52, 0, 0x498uLL);
      v41 = v24;
      v52[0] = EtwpQueryRegistryCallback;
      LODWORD(v52[4]) = 11;
      v52[3] = &v40;
      v40 = 11;
      v52[2] = L"MatchAnyKeyword";
      LODWORD(v52[11]) = 11;
      v52[10] = &v42;
      v52[9] = L"MatchAllKeyword";
      v43 = v24 + 8;
      v52[17] = &v44;
      v52[16] = L"Level";
      v45 = v24 + 16;
      v52[24] = &v46;
      v52[23] = L"FilterIn";
      v47 = v24 + 17;
      v52[31] = &v48;
      v52[30] = L"NameCount";
      v49 = v24 + 18;
      v42 = 11;
      v52[38] = &v50;
      v52[7] = EtwpQueryRegistryCallback;
      v52[37] = L"Names";
      v52[40] = &v32;
      v52[14] = EtwpQueryRegistryCallback;
      LODWORD(v52[18]) = 4;
      v44 = 4;
      v52[21] = EtwpQueryRegistryCallback;
      LODWORD(v52[25]) = 4;
      v46 = 4;
      v52[28] = EtwpQueryRegistryCallback;
      LODWORD(v52[32]) = 4;
      v48 = 4;
      v52[35] = EtwpQueryRegistryCallback;
      p_UnicodeString = &UnicodeString;
      LODWORD(v52[39]) = 1;
      v50 = 1;
      if ( (int)RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, v52, 0LL) >= 0 )
      {
        v25 = (const WCHAR *)Handle;
        if ( Handle )
        {
          v26 = 2LL;
          v52[5] = *a4;
          v52[12] = v52[5] + 8LL;
          v52[19] = v52[5] + 16LL;
          v27 = v52[5] + 17LL;
          v28 = &v52[26];
          do
          {
            *v28 = v27++;
            v28 += 7;
            --v26;
          }
          while ( v26 );
          v52[40] = UnicodeString.Buffer;
          LODWORD(v52[41]) = UnicodeString.Length;
          RtlpQueryRegistryValues(0x40000000LL, v25, v52, 0LL);
        }
        Length = UnicodeString.Length;
        v30 = 0;
        if ( (UnicodeString.Length & 0xFFFE) != 0 )
        {
          do
          {
            if ( UnicodeString.Buffer[v30] == 59 )
            {
              UnicodeString.Buffer[v30] = 0;
              Length = UnicodeString.Length;
            }
            ++v30;
          }
          while ( v30 < Length >> 1 );
        }
        v31 = (char *)*a4 + 20;
        UTF8StringActualByteCount[0] = *a5 - 20;
        v15 = RtlUnicodeToUTF8N(
                v31,
                UTF8StringActualByteCount[0],
                UTF8StringActualByteCount,
                UnicodeString.Buffer,
                Length + 2);
        if ( !v15 )
        {
          *a5 = UTF8StringActualByteCount[0] + 20;
          goto LABEL_15;
        }
        goto LABEL_12;
      }
    }
  }
LABEL_13:
  *a5 = 0;
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, 0);
    *a4 = 0LL;
  }
LABEL_15:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  RtlFreeUnicodeString(&UnicodeString);
}
