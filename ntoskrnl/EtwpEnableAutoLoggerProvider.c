/*
 * XREFs of EtwpEnableAutoLoggerProvider @ 0x1407FD3E8
 * Callers:
 *     EtwpEnumerateKeyProviders @ 0x1407FD288 (EtwpEnumerateKeyProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x14069EDB0 (RtlWriteRegistryValue.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     RtlNtStatusToDosError @ 0x140755BE0 (RtlNtStatusToDosError.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     EtwpEnableTrace @ 0x1407FDA88 (EtwpEnableTrace.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1407FDD44 (EtwpGetAutoLoggerProviderFilter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnableAutoLoggerProvider(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  WCHAR *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  wchar_t *Pool2; // rax
  WCHAR *v14; // r15
  __int64 v15; // rbx
  NTSTATUS RegistryValues; // eax
  const WCHAR *v17; // rdx
  __int64 v18; // rdi
  WCHAR *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r10d
  __int64 v23; // rcx
  UNICODE_STRING *v24; // rdi
  __int64 *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  wchar_t *v30; // rax
  NTSTATUS v31; // eax
  HANDLE v32; // rcx
  size_t Size; // [rsp+60h] [rbp-B0h]
  size_t v34; // [rsp+70h] [rbp-A0h]
  size_t v35; // [rsp+80h] [rbp-90h]
  HANDLE Handle; // [rsp+90h] [rbp-80h] BYREF
  int v37; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+9Ch] [rbp-74h] BYREF
  int v39; // [rsp+A0h] [rbp-70h] BYREF
  char v40[4]; // [rsp+A4h] [rbp-6Ch] BYREF
  ULONG ValueData; // [rsp+A8h] [rbp-68h] BYREF
  size_t v42; // [rsp+ACh] [rbp-64h] BYREF
  int v43; // [rsp+B4h] [rbp-5Ch] BYREF
  __int64 v44; // [rsp+B8h] [rbp-58h]
  __int64 v45; // [rsp+C0h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+D0h] [rbp-40h]
  __int64 v48; // [rsp+D8h] [rbp-38h] BYREF
  PVOID Src; // [rsp+E0h] [rbp-30h] BYREF
  PVOID v50; // [rsp+E8h] [rbp-28h] BYREF
  PVOID P; // [rsp+F0h] [rbp-20h] BYREF
  PVOID v52; // [rsp+F8h] [rbp-18h] BYREF
  int v53[2]; // [rsp+100h] [rbp-10h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-8h] BYREF
  UNICODE_STRING v55; // [rsp+138h] [rbp+28h] BYREF
  __int64 v56[2]; // [rsp+148h] [rbp+38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+158h] [rbp+48h] BYREF
  GUID Guid; // [rsp+168h] [rbp+58h] BYREF
  UNICODE_STRING UnicodeString[4]; // [rsp+180h] [rbp+70h] BYREF
  int v60; // [rsp+1C0h] [rbp+B0h] BYREF
  int *v61; // [rsp+1C8h] [rbp+B8h]
  int v62; // [rsp+1D0h] [rbp+C0h] BYREF
  int *v63; // [rsp+1D8h] [rbp+C8h]
  int v64; // [rsp+1E0h] [rbp+D0h] BYREF
  char *v65; // [rsp+1E8h] [rbp+D8h]
  int v66; // [rsp+1F0h] [rbp+E0h] BYREF
  unsigned int *v67; // [rsp+1F8h] [rbp+E8h]
  int v68; // [rsp+200h] [rbp+F0h] BYREF
  __int64 *v69; // [rsp+208h] [rbp+F8h]
  int v70; // [rsp+210h] [rbp+100h] BYREF
  __int64 *v71; // [rsp+218h] [rbp+108h]
  _QWORD v72[148]; // [rsp+310h] [rbp+200h] BYREF

  v44 = a5;
  v47 = a2;
  *(_QWORD *)v53 = a1;
  v37 = 0;
  v8 = 0LL;
  *(_DWORD *)v40 = 0;
  DestinationString = 0LL;
  v38 = 0;
  v39 = 0;
  v45 = 0LL;
  v48 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Src = 0LL;
  v43 = 0;
  v55 = 0LL;
  v50 = 0LL;
  P = 0LL;
  v42 = 0LL;
  v52 = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset(v72, 0, 0x498uLL);
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v9 = -1LL;
  *(_OWORD *)v56 = 0LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(a4 + 2 * v10) );
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = (unsigned int)(2 * (v11 + v10) + 4);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v12, 1350005829LL);
  v14 = Pool2;
  v15 = 4LL;
  if ( !Pool2 )
    goto LABEL_31;
  if ( RtlStringCbPrintfW(Pool2, (unsigned int)v12, L"%ws\\%ws", a4, a3) )
    goto LABEL_31;
  RtlInitUnicodeString(&v55, v14);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v55;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) < 0 )
    goto LABEL_31;
  if ( v44 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v44 + 2 * v28) );
    do
      ++v9;
    while ( a3[v9] );
    v29 = (unsigned int)(2 * (v9 + v28) + 4);
    v30 = (wchar_t *)ExAllocatePool2(256LL, v29, 1350005829LL);
    v8 = v30;
    if ( !v30 )
      goto LABEL_31;
    if ( !RtlStringCbPrintfW(v30, (unsigned int)v29, L"%ws\\%ws", v44, a3) )
    {
      RtlInitUnicodeString(&v55, v8);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v55;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v31 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
      v32 = Handle;
      if ( v31 < 0 )
        v32 = 0LL;
      Handle = v32;
    }
  }
  LODWORD(v72[4]) = 4;
  v72[0] = &EtwpQueryRegistryCallback;
  v72[7] = &EtwpQueryRegistryCallback;
  v72[3] = &v60;
  v72[14] = &EtwpQueryRegistryCallback;
  v72[2] = L"Enabled";
  v72[21] = &EtwpQueryRegistryCallback;
  v61 = &v37;
  v72[28] = &EtwpQueryRegistryCallback;
  v72[10] = &v62;
  v72[9] = L"EnableProperty";
  v63 = &v39;
  v72[17] = &v64;
  v72[16] = L"EnableLevel";
  v65 = v40;
  v72[24] = &v66;
  v72[23] = L"EnableFlags";
  v67 = &v38;
  v72[31] = &v68;
  v72[30] = L"MatchAnyKeyword";
  v69 = &v45;
  v72[38] = &v70;
  v72[37] = L"MatchAllKeyword";
  LODWORD(v72[32]) = 11;
  v68 = 11;
  v72[35] = &EtwpQueryRegistryCallback;
  LODWORD(v72[39]) = 11;
  v70 = 11;
  v71 = &v48;
  v60 = 4;
  LODWORD(v72[11]) = 4;
  v62 = 4;
  LODWORD(v72[18]) = 4;
  v64 = 4;
  LODWORD(v72[25]) = 4;
  v66 = 4;
  RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, v72, 0LL);
  if ( RegistryValues < 0 )
    goto LABEL_72;
  v17 = (const WCHAR *)Handle;
  if ( Handle && !a6 )
  {
    LODWORD(v72[6]) = 4;
    v72[5] = &v37;
    LODWORD(v72[13]) = 4;
    v72[12] = &v39;
    LODWORD(v72[20]) = 4;
    v72[19] = v40;
    LODWORD(v72[27]) = 4;
    v72[26] = &v38;
    v72[33] = &v45;
    v72[40] = &v48;
    LODWORD(v72[34]) = 8;
    LODWORD(v72[41]) = 8;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, v72, 0LL);
    if ( RegistryValues >= 0 )
    {
      v17 = (const WCHAR *)Handle;
      goto LABEL_11;
    }
LABEL_72:
    ValueData = RtlNtStatusToDosError(RegistryValues);
LABEL_27:
    v17 = (const WCHAR *)Handle;
    goto LABEL_28;
  }
LABEL_11:
  if ( v37 )
  {
    v44 = 0LL;
    v18 = v47;
    v19 = v8;
    if ( a6 )
      v19 = 0LL;
    Guid = 0LL;
    if ( v47 )
      LOWORD(v44) = v47;
    else
      LOWORD(v44) = -1;
    EtwpGetAutoLoggerProviderFilter(v14, v19, UnicodeString, v56, &Src, &v43, &v50, (char *)&v42 + 4, &P, &v42, &v52);
    RegistryValues = RtlGUIDFromString(&DestinationString, &Guid);
    if ( RegistryValues >= 0 )
    {
      v20 = *(_QWORD *)&Guid.Data1 - 0x4FA775A3E02A841CLL;
      if ( *(_QWORD *)&Guid.Data1 == 0x4FA775A3E02A841CLL )
        v20 = *(_QWORD *)Guid.Data4 - 0x237F9BCF09AEC8AFLL;
      if ( !v20 )
        goto LABEL_54;
      v21 = *(_QWORD *)&Guid.Data1 - s_ProviderThreatInt;
      if ( *(_QWORD *)&Guid.Data1 == s_ProviderThreatInt )
        v21 = *(_QWORD *)Guid.Data4 - 0x44D38D4D0F04D8F1LL;
      if ( v21 )
      {
        v22 = v53[0];
      }
      else
      {
LABEL_54:
        v22 = v53[0];
        if ( *(_QWORD *)v53 != EtwpHostSiloState )
          goto LABEL_31;
        if ( (unsigned int)v18 < *(_DWORD *)(*(_QWORD *)v53 + 16LL) )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53 + 456LL) + 8 * v18);
          if ( (v27 & 1) == 0 )
          {
            if ( *(_QWORD *)(v27 + 160) )
              goto LABEL_31;
            _InterlockedOr((volatile signed __int32 *)(v27 + 816), 0x4000u);
          }
        }
      }
      v23 = v45;
      if ( !v45 )
      {
        v23 = v38;
        v45 = v38;
      }
      LODWORD(v34) = HIDWORD(v42);
      LODWORD(v35) = v42;
      LODWORD(Size) = v43;
      RegistryValues = EtwpEnableTrace(
                         v22,
                         (int)&Guid,
                         0,
                         v44,
                         1,
                         v40[0],
                         v23,
                         v48,
                         v39,
                         (__int64)UnicodeString,
                         (__int64)v56,
                         Src,
                         Size,
                         v50,
                         v34,
                         P,
                         v35,
                         (__int64)v52);
      if ( RegistryValues >= 0 )
        goto LABEL_27;
    }
    goto LABEL_72;
  }
LABEL_28:
  if ( !v17 )
    v17 = (const WCHAR *)KeyHandle;
  RtlWriteRegistryValue(0x40000000u, v17, L"Status", 4u, &ValueData, 4u);
LABEL_31:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v50 )
    ExFreePoolWithTag(v50, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  v24 = UnicodeString;
  do
  {
    RtlFreeUnicodeString(v24++);
    --v15;
  }
  while ( v15 );
  v25 = v56;
  v26 = 2LL;
  do
  {
    if ( *v25 )
      ExFreePoolWithTag((PVOID)*v25, 0);
    ++v25;
    --v26;
  }
  while ( v26 );
}
