/*
 * XREFs of PipUpdateDeviceProducts @ 0x140389620
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryBootTimeValues @ 0x1402E3FEC (KeQueryBootTimeValues.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     _PnpCtxRegCreateTree @ 0x140687A74 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x140687FD0 (_PnpCtxRegCreateKey.c)
 *     RtlGetPersistedStateLocation @ 0x14069ADC0 (RtlGetPersistedStateLocation.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14081D410 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14081D44C (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegCloseKey @ 0x1408653B4 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x14086617C (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumValue @ 0x140866444 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1408665AC (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegDeleteValue @ 0x140A5DEB8 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x140A5DEF4 (_PnpCtxRegSetValue.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PipUpdateDeviceProducts(void *a1)
{
  unsigned int v1; // esi
  PVOID v2; // rbx
  void *v3; // rdi
  void *v4; // r15
  void *v5; // r12
  int v6; // ebx
  int v7; // ecx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  int v10; // r13d
  unsigned int v11; // esi
  int v12; // r14d
  __int64 v13; // rcx
  void *v14; // r13
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+50h] [rbp-51h] BYREF
  void *v22; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+60h] [rbp-41h]
  __int64 v24; // [rsp+68h] [rbp-39h] BYREF
  int v25; // [rsp+70h] [rbp-31h] BYREF
  int v26; // [rsp+74h] [rbp-2Dh] BYREF
  __int64 v27; // [rsp+78h] [rbp-29h] BYREF
  LARGE_INTEGER v28; // [rsp+80h] [rbp-21h] BYREF
  __int64 v29; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-11h] BYREF
  unsigned int v31; // [rsp+94h] [rbp-Dh] BYREF
  int v32; // [rsp+98h] [rbp-9h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-1h] BYREF
  void *Pool2; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+Fh] BYREF
  wchar_t Str1[8]; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  P = a1;
  v2 = a1;
  v28.QuadPart = 0LL;
  v35 = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  Pool2 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v33 = 0LL;
  LODWORD(v20) = 0;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v21 = 0;
  v22 = 0LL;
  if ( (int)PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 15LL, &Pool2) < 0
    || (unsigned int)PnpCtxRegOpenKey(0, (_DWORD)Pool2, (unsigned int)L"Current\\ProductIds", 0, 131097, (__int64)&v33) == -1073741772
    || (unsigned int)RtlGetPersistedStateLocation(L"DynamicInstalledProducts", 0LL, 0, (__int64)&v20) != -2147483643 )
  {
    v14 = 0LL;
    goto LABEL_36;
  }
  v6 = v20;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v20, 1852403792LL);
  v4 = Pool2;
  if ( !Pool2 )
    goto LABEL_72;
  if ( (int)RtlGetPersistedStateLocation(L"DynamicInstalledProducts", Pool2, v6, (__int64)&v20) < 0 )
    goto LABEL_72;
  if ( (unsigned int)PnpCtxRegCreateTree(0, 0, (_DWORD)v4, 0, 131103, 0LL, (__int64)&v29, 0LL) )
    goto LABEL_72;
  KeQueryBootTimeValues(&v20, &v28, &v35);
  v28.QuadPart -= v35;
  if ( (unsigned int)PnpCtxRegQueryInfoKey(v7, v29, (unsigned int)&v30, (unsigned int)&v25, 0LL, 0LL, 0LL) )
    goto LABEL_72;
  v9 = v30;
  if ( !v30 )
    goto LABEL_22;
  v10 = v25 + 1;
  v5 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v25 + 1), 1852403792LL);
  if ( !v5 )
  {
LABEL_72:
    v14 = 0LL;
    goto LABEL_35;
  }
  if ( !v9 )
    goto LABEL_22;
  do
  {
    v25 = v10;
    if ( v24 )
    {
      PnpCtxRegCloseKey();
      v24 = 0LL;
    }
    if ( (int)PnpCtxRegEnumKey(v8, v29, v1, v5, &v25) >= 0
      && (int)PnpCtxRegOpenKey(0, v29, (_DWORD)v5, 0, 131103, (__int64)&v24) >= 0 )
    {
      LODWORD(v20) = 14;
      if ( (int)PnpCtxRegQueryValue(v8, v24, L"Source", &v21, Str1, &v20) >= 0
        && v21 == 1
        && (_DWORD)v20 == 14
        && !wcsicmp(Str1, L"SMBIOS") )
      {
        LODWORD(v20) = 0;
        if ( (unsigned int)PnpCtxRegQueryValue(v8, v33, v5, 0LL, 0LL, &v20) == -1073741772 )
        {
          if ( v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          LODWORD(v20) = 0;
          v16 = PnpCtxRegQueryValue(v8, v24, L"Version", &v21, v3, &v20);
          if ( v16 == -1073741789 )
          {
            v17 = v20;
            v3 = (void *)ExAllocatePool2(256LL, (unsigned int)v20, 1852403792LL);
            if ( !v3 )
            {
LABEL_66:
              PnpCtxRegSetValue(v8, v24, L"DeactivationTime", 3LL, &v28, 8);
              if ( v3 )
                PnpCtxRegSetValue(v18, v24, L"DeactivationVersion", 1LL, v3, v17);
              PnpCtxRegDeleteValue(v18, v24, L"Version");
              goto LABEL_20;
            }
            v16 = PnpCtxRegQueryValue(v8, v24, L"Version", &v21, v3, &v20);
          }
          if ( v16 == -1073741772 )
            goto LABEL_20;
          v17 = v20;
          if ( (v16 < 0 || v21 != 1 || (unsigned int)v20 < 2) && v3 )
          {
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
          }
          goto LABEL_66;
        }
      }
    }
LABEL_20:
    ++v1;
  }
  while ( v1 < v9 );
  v4 = Pool2;
LABEL_22:
  if ( (unsigned int)PnpCtxRegQueryInfoKey(v8, v33, 0, 0, (__int64)&v31, (__int64)&v26, 0LL) || (v11 = v31) == 0 )
  {
    v14 = v22;
  }
  else
  {
    v12 = v26 + 1;
    v14 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v26 + 1), 1852403792LL);
    if ( v14 )
    {
      v15 = 0;
      if ( v11 )
      {
        do
        {
          v26 = v12;
          if ( v27 )
          {
            PnpCtxRegCloseKey();
            v27 = 0LL;
          }
          if ( (int)PnpCtxRegEnumValue(v13, v33, v15, v14, &v26, 0LL, 0LL, 0LL) >= 0
            && (int)PnpCtxRegCreateKey(0, v29, (_DWORD)v14, 0, 131078, 0LL, (__int64)&v27, (__int64)&v32) >= 0 )
          {
            if ( v32 == 1 )
              PnpCtxRegSetValue(v13, v27, L"CreationTime", 3LL, &v28, 8);
            LODWORD(v20) = 0;
            if ( (unsigned int)PnpCtxRegQueryValue(v13, v27, L"Version", 0LL, 0LL, &v20) == -1073741772
              && (int)PnpCtxRegSetValue(v13, v27, L"Version", 1LL, L"0.0.0.0", 16) >= 0 )
            {
              PnpCtxRegSetValue(v13, v27, L"ActivationTime", 3LL, &v28, 8);
              PnpCtxRegSetValue(v19, v27, L"Source", 1LL, L"SMBIOS", 14);
            }
          }
          ++v15;
        }
        while ( v15 < v11 );
        v4 = Pool2;
      }
    }
  }
LABEL_35:
  v2 = P;
LABEL_36:
  if ( v27 )
    PnpCtxRegCloseKey();
  if ( v33 )
    PnpCtxRegCloseKey();
  if ( v24 )
    PnpCtxRegCloseKey();
  if ( v29 )
    PnpCtxRegCloseKey();
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
