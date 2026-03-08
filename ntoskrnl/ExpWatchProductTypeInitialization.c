/*
 * XREFs of ExpWatchProductTypeInitialization @ 0x140B64AFC
 * Callers:
 *     ExInitSystemPhase2 @ 0x140B64A84 (ExInitSystemPhase2.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403D5ED0 (wcsncmp.c)
 *     wcscat_s @ 0x1403DA170 (wcscat_s.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     NtNotifyChangeKey @ 0x1406B4D70 (NtNotifyChangeKey.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     NtOpenKey @ 0x140758B00 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x14084AD48 (ExpGetNtProductTypeFromLicenseValue.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ExpLicenseWatchInitWorker @ 0x140B64F94 (ExpLicenseWatchInitWorker.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B6505C (ExpUpdateProductSuiteTypeInRegistry.c)
 */

char ExpWatchProductTypeInitialization()
{
  __int64 v0; // rcx
  PVOID v1; // rsi
  int v2; // eax
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  NTSTATUS v8; // eax
  unsigned __int64 Pool2; // rax
  int v10; // eax
  size_t v11; // r8
  int v12; // eax
  __int64 v14; // rax
  char v15; // r14
  __int64 v16; // rax
  HANDLE v17; // r12
  int Key; // eax
  unsigned int v19; // r15d
  __int64 v20; // rsi
  bool v21; // di
  ULONG_PTR v22; // r14
  _DWORD *v23; // r13
  ULONG_PTR v24; // r8
  unsigned int v25; // edx
  unsigned int i; // r14d
  __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // eax
  int v30; // eax
  wchar_t *v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  PVOID *Objectb; // [rsp+20h] [rbp-E0h]
  PVOID *Objectc; // [rsp+20h] [rbp-E0h]
  PVOID *Objectd; // [rsp+20h] [rbp-E0h]
  PVOID *Objecte; // [rsp+20h] [rbp-E0h]
  PVOID *Objectf; // [rsp+20h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  PVOID v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h]
  __int128 v50; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING v53; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v54; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-20h]
  __int128 v56; // [rsp+F0h] [rbp-10h]
  __int128 v57; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v58[12]; // [rsp+110h] [rbp+10h] BYREF
  int v59; // [rsp+11Ch] [rbp+1Ch]

  v0 = MmWriteableSharedUserData;
  v46 = 48LL;
  v49 = 576LL;
  DestinationString = 0LL;
  LODWORD(BugCheckParameter2) = 0;
  *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
  v1 = 0LL;
  Handle = 0LL;
  v43 = 0LL;
  ExpSetupModeDetected = 0;
  v57 = 0LL;
  ExpSystemSetupInProgress = 0;
  ExpGetNtProductTypeFromLicenseValue((_DWORD *)(v0 + 612));
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v47 = 0LL;
  p_DestinationString = &DestinationString;
  v50 = 0LL;
  v2 = NtOpenKey();
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v2, 0LL, 0LL);
  v45 = 0LL;
  v3 = ObReferenceObjectByHandle(ExpSetupKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v45, 0LL);
  v4 = v45;
  if ( v3 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v3, 0LL, 0LL);
  RtlInitUnicodeString(&v43, L"SetupType");
  LODWORD(Object) = 72;
  v5 = NtQueryValueKey(
         ExpSetupKey,
         &v43,
         2u,
         (unsigned __int64)v58,
         (size_t)Object,
         (unsigned int *)&BugCheckParameter2);
  if ( v5 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v5, 0LL, 0LL);
  if ( v59 == 1 || v59 == 4 )
  {
    ExpSetupModeDetected = 1;
    *(_BYTE *)(MmWriteableSharedUserData + 616) = 0;
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v4 = 0LL;
  }
  RtlInitUnicodeString(&v43, L"SystemSetupInProgress");
  LODWORD(Objecta) = 72;
  v6 = NtQueryValueKey(
         ExpSetupKey,
         &v43,
         2u,
         (unsigned __int64)v58,
         (size_t)Objecta,
         (unsigned int *)&BugCheckParameter2);
  if ( v6 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v6, 0LL, 0LL);
  if ( v59 == 1 )
    ExpSystemSetupInProgress = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpControlKey = v4;
    return 1;
  }
  qword_140C31430 = (__int64)ExpWatchProductTypeWork;
  qword_140C31438 = 0LL;
  ExpWatchProductTypeWorkItem = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  LODWORD(v46) = 48;
  p_DestinationString = &DestinationString;
  v47 = 0LL;
  LODWORD(v49) = 576;
  v50 = 0LL;
  v7 = NtOpenKey();
  if ( v7 < 0 )
  {
    if ( !ExpSetupModeDetected )
      KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    if ( !ExpSetupModeDetected )
    {
      v45 = 0LL;
      v8 = ObReferenceObjectByHandle(ExpProductTypeKey, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v45, 0LL);
      v1 = v45;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    ExpControlKey = v4;
    qword_140C31458 = v1;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&v43, L"ProductType");
    Pool2 = ExAllocatePool2(256LL, 0x22uLL, 0x2079654Bu);
    ExpProductTypeValueInfo = Pool2;
    if ( Pool2 )
    {
      LODWORD(Objectb) = 34;
      v10 = NtQueryValueKey(ExpProductTypeKey, &v43, 2u, Pool2, (size_t)Objectb, (unsigned int *)&BugCheckParameter2);
      if ( v10 < 0 )
      {
        if ( !ExpSetupModeDetected )
          KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v10, 0LL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&v43, L"ProductSuite");
        LODWORD(Objectc) = 16;
        if ( (unsigned int)NtQueryValueKey(
                             ExpProductTypeKey,
                             &v43,
                             2u,
                             (unsigned __int64)&v57,
                             (size_t)Objectc,
                             (unsigned int *)&BugCheckParameter2) != -2147483643 )
          goto LABEL_18;
        LODWORD(BugCheckParameter2) = BugCheckParameter2 + 16;
        qword_140C709C8 = (PVOID)ExAllocatePool2(256LL, (unsigned int)BugCheckParameter2, 0x2079654Bu);
        if ( !qword_140C709C8 )
          KeBugCheckEx(0x9Au, 0x14uLL, (unsigned int)BugCheckParameter2, 2uLL, 0LL);
        LODWORD(Objectd) = BugCheckParameter2;
        if ( (int)NtQueryValueKey(
                    ExpProductTypeKey,
                    &v43,
                    2u,
                    (unsigned __int64)qword_140C709C8,
                    (size_t)Objectd,
                    (unsigned int *)&BugCheckParameter2) >= 0
          || (ExFreePoolWithTag(qword_140C709C8, 0), qword_140C709C8 = 0LL, !ExpSetupModeDetected) )
        {
LABEL_18:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)(ExpProductTypeValueInfo + 12), v11)
            && (_DWORD)InitSafeBootMode == 3
            && !ExpSetupModeDetected )
          {
            v14 = MmWriteableSharedUserData;
            *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
            *(_DWORD *)(v14 + 612) = 3;
          }
          v12 = NtNotifyChangeKey(
                  ExpProductTypeKey,
                  0LL,
                  (void (__stdcall *)(POPLOCK))&ExpWatchProductTypeWorkItem,
                  1LL,
                  ExpProductTypeIoSb,
                  0x10000005u,
                  0,
                  &ExpProductTypeChangeBuffer,
                  4,
                  1);
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            LODWORD(v46) = 48;
            p_DestinationString = &DestinationString;
            v47 = 0LL;
            LODWORD(v49) = 576;
            v50 = 0LL;
            if ( (int)NtOpenKey() >= 0 )
            {
              LODWORD(v44) = 0;
              v54 = 0LL;
              v15 = 0;
              v16 = -1LL;
              v55 = 0LL;
              v56 = 0LL;
              v43 = 0LL;
              v53 = 0LL;
              do
                ++v16;
              while ( aRegistryMachin_163[v16] );
              v43.Length = 2 * (v16 + 64);
              v43.MaximumLength = v43.Length;
              v43.Buffer = (wchar_t *)ExAllocatePool2(64LL, v43.Length, 0x2079654Bu);
              if ( !v43.Buffer )
                KeBugCheckEx(0x9Au, 0x14uLL, v43.Length, 3uLL, 0LL);
              v17 = Handle;
              Key = NtQueryKey(Handle, 2u, (unsigned __int64)&v54, 0x30u, (unsigned int *)&v44);
              if ( Key < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, Key, 1uLL, 0LL);
              v19 = 2 * DWORD2(v55) + 56;
              if ( v19 < DWORD2(v55) || v19 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v55) + 16) )
                v15 = 1;
              v20 = ExAllocatePool2(64LL, v19, 0x2079654Bu);
              if ( !v20 || v15 )
                KeBugCheckEx(0x9Au, 0x14uLL, v19, 4uLL, 0LL);
              LODWORD(v45) = DWORD2(v56) + 32;
              v21 = (unsigned int)(DWORD2(v56) + 32) < DWORD2(v56);
              v22 = (unsigned int)(DWORD2(v56) + 32);
              v23 = (_DWORD *)ExAllocatePool2(64LL, v22, 0x2079654Bu);
              if ( !v23 || v21 )
                KeBugCheckEx(0x9Au, 0x14uLL, v22, 5uLL, 0LL);
              ExpLicenseInfoCount = DWORD1(v55);
              v24 = 80LL * DWORD1(v55);
              if ( v24 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v24, 6uLL, 0LL);
              ExpLicenseInfo = ExAllocatePool2(64LL, (unsigned int)v24, 0x2079654Bu);
              if ( !ExpLicenseInfo )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * (unsigned int)ExpLicenseInfoCount, 6uLL, 0LL);
              RtlInitUnicodeString(&v53, L"ConcurrentLimit");
              v25 = 0;
              for ( i = 0; ; v25 = i )
              {
                LODWORD(Objecte) = v19;
                v34 = NtEnumerateKey(v17, v25, 0, (volatile void *)v20, (SIZE_T)Objecte, &v44);
                if ( v34 == -2147483622 )
                  break;
                if ( v34 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v34, 0LL, 0LL);
                *(_WORD *)(v20 + 2 * ((unsigned __int64)*(unsigned int *)(v20 + 12) >> 1) + 16) = 0;
                wcscpy_s(
                  v43.Buffer,
                  (unsigned __int64)v43.MaximumLength >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(v43.Buffer, (unsigned __int64)v43.MaximumLength >> 1, L"\\");
                wcscat_s(v43.Buffer, (unsigned __int64)v43.MaximumLength >> 1, (const wchar_t *)(v20 + 16));
                v27 = -1LL;
                do
                  ++v27;
                while ( v43.Buffer[v27] );
                v47 = 0LL;
                v43.Length = 2 * v27;
                LODWORD(v46) = 48;
                p_DestinationString = &v43;
                LODWORD(v49) = 576;
                v50 = 0LL;
                v28 = 80LL * i;
                v29 = NtOpenKey();
                if ( v29 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v29, 1uLL, 0LL);
                LODWORD(Objectf) = (_DWORD)v45;
                v30 = NtQueryValueKey(
                        *(HANDLE *)(v28 + ExpLicenseInfo),
                        &v53,
                        2u,
                        (unsigned __int64)v23,
                        (size_t)Objectf,
                        (unsigned int *)&v44);
                if ( v30 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v30, 2uLL, 0LL);
                v31 = (wchar_t *)ExAllocatePool2(64LL, v43.Length, 0x2079654Bu);
                *(_QWORD *)(v28 + ExpLicenseInfo + 16) = v31;
                if ( !v31 )
                  KeBugCheckEx(0x9Au, 0x14uLL, v43.Length, 7uLL, 0LL);
                wcscpy_s(v31, (unsigned __int64)v43.Length >> 1, v43.Buffer);
                v32 = v28 + ExpLicenseInfo;
                *(_DWORD *)(v32 + 8) = v23[3];
                *(_QWORD *)(v32 + 48) = v32;
                *(_QWORD *)(v32 + 24) = 0LL;
                *(_QWORD *)(v32 + 40) = ExpWatchLicenseInfoWork;
                v33 = NtNotifyChangeKey(
                        *(void **)v32,
                        0LL,
                        (void (__stdcall *)(POPLOCK))(v32 + 24),
                        1LL,
                        (NTSTATUS *)(v32 + 56),
                        0x10000005u,
                        1,
                        (volatile void *)(v32 + 72),
                        4,
                        1);
                if ( v33 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v33, 1uLL, 0LL);
                ++i;
              }
              ExFreePoolWithTag((PVOID)v20, 0);
              ExFreePoolWithTag(v23, 0);
              ExFreePoolWithTag(v43.Buffer, 0);
              NtClose(v17);
            }
            return 1;
          }
          if ( !ExpSetupModeDetected )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v12, 0LL, 0LL);
        }
      }
    }
  }
  return 0;
}
