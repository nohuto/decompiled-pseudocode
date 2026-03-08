/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x1409F57C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403DA170 (wcscat_s.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     NtNotifyChangeKey @ 0x1406B4D70 (NtNotifyChangeKey.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtOpenKey @ 0x140758B00 (NtOpenKey.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpWatchLicenseInfoWork(__int64 a1)
{
  char v2; // si
  HANDLE v3; // rcx
  int v4; // eax
  int Key; // eax
  unsigned int v6; // r15d
  __int64 Pool2; // r14
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  unsigned int i; // edx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  NTSTATUS result; // eax
  SIZE_T BugCheckParameter4; // [rsp+20h] [rbp-99h]
  size_t Size; // [rsp+28h] [rbp-91h]
  size_t Sizea; // [rsp+28h] [rbp-91h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  __int64 v26; // [rsp+60h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-51h]
  HANDLE v28; // [rsp+70h] [rbp-49h] BYREF
  int v29; // [rsp+78h] [rbp-41h]
  int v30; // [rsp+7Ch] [rbp-3Dh]
  __int64 v31; // [rsp+80h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+90h] [rbp-29h]
  int v34; // [rsp+94h] [rbp-25h]
  __int128 v35; // [rsp+98h] [rbp-21h]
  UNICODE_STRING v36; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v38; // [rsp+C8h] [rbp+Fh]
  __int128 v39; // [rsp+D8h] [rbp+1Fh]

  v28 = 0LL;
  v2 = 0;
  v37 = 0LL;
  LODWORD(v26) = 0;
  v38 = 0LL;
  Handle = 0LL;
  v39 = 0LL;
  v30 = 0;
  DestinationString = 0LL;
  v34 = 0;
  v36 = 0LL;
  if ( !ExpSetupModeDetected )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 16));
    v3 = *(HANDLE *)a1;
    p_DestinationString = &DestinationString;
    v31 = 0LL;
    v35 = 0LL;
    v29 = 48;
    v33 = 576;
    NtClose(v3);
    v4 = NtOpenKey();
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    Key = NtQueryKey(*(HANDLE *)a1, 2u, (unsigned __int64)&v37, 0x30u, (unsigned int *)&v26);
    if ( Key < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, Key, 0LL, 0LL);
    v6 = 2 * DWORD2(v38) + 56;
    if ( v6 < DWORD2(v38) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v38) + 16) )
      v2 = 1;
    Pool2 = ExAllocatePool2(64LL, v6, 544826699LL);
    if ( !Pool2 || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10 + 32) );
    v11 = 2 * (WORD4(v38) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v38) )
      goto LABEL_19;
    v12 = v11;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v8 + 2 * v13 + 32) );
    if ( v11 < v13 )
      goto LABEL_19;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9 + 32) );
    if ( v11 < (unsigned __int64)DWORD2(v38) + v9 )
    {
LABEL_19:
      v2 = 1;
      v12 = v11;
    }
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, v12, 544826699LL);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&v36, L"ConcurrentLimit");
    LODWORD(Size) = 4;
    v14 = NtSetValueKey(*(_QWORD *)a1, &v36, 0, 4u, (struct _PRIVILEGE_SET *)(a1 + 8), Size);
    if ( v14 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v14, 0LL, 0LL);
    v15 = 0;
    for ( i = 0; ; i = v15 )
    {
      LODWORD(BugCheckParameter4) = v6;
      v20 = NtEnumerateKey(*(HANDLE *)a1, i, 0, (volatile void *)Pool2, BugCheckParameter4, &v26);
      if ( v20 == -2147483622 )
        break;
      if ( v20 >= 0 )
      {
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          *(const wchar_t **)(a1 + 16));
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, L"\\");
        wcscat_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          (const wchar_t *)(Pool2 + 16));
        v17 = -1LL;
        do
          ++v17;
        while ( DestinationString.Buffer[v17] );
        v29 = 48;
        DestinationString.Length = 2 * v17;
        v31 = 0LL;
        p_DestinationString = &DestinationString;
        v33 = 576;
        v35 = 0LL;
        v18 = NtOpenKey();
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v18, 0LL, 0LL);
        LODWORD(Sizea) = 4;
        v19 = NtSetValueKey((__int64)Handle, &v36, 0, 4u, (struct _PRIVILEGE_SET *)(a1 + 8), Sizea);
        if ( v19 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v19, 0LL, 0LL);
        NtClose(Handle);
      }
      ++v15;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  result = NtNotifyChangeKey(
             *(void **)a1,
             0LL,
             (void (__stdcall *)(POPLOCK))(a1 + 24),
             1LL,
             (NTSTATUS *)(a1 + 56),
             0x10000005u,
             1,
             (volatile void *)(a1 + 72),
             4,
             1);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !ExpSetupModeDetected )
  {
    result = PsCreateSystemThreadEx(
               (__int64)&v28,
               0x1FFFFF,
               0LL,
               0LL,
               0LL,
               (__int64)ExpExpirationThread,
               3221226090LL,
               0LL,
               0LL);
    if ( result >= 0 )
      return ZwClose(v28);
  }
  return result;
}
