/*
 * XREFs of DrvDbGetDriverPackageMappedProperty @ 0x140864F88
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x140864E40 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A6924C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140A69588 (DrvDbGetDriverPackageSignerScore.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140244A08 (RtlStringCchCopyExW.c)
 *     wcsrchr @ 0x1403D5F90 (wcsrchr.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     _PnpCtxRegOpenKey @ 0x14081D410 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140824EA0 (_PnpCtxRegEnumKeyWithCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1408653CC (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140865658 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140865F5C (DrvDbGetRegValueMappedProperty.c)
 *     _PnpCtxRegQueryValue @ 0x14086617C (_PnpCtxRegQueryValue.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140A69588 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140A695E4 (DrvDbGetObjectDatabaseNodeName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedProperty(
        __int64 *a1,
        const wchar_t *a2,
        HANDLE a3,
        __int64 a4,
        __int64 (**a5)[3],
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        unsigned int *a8)
{
  _DWORD *v8; // r13
  unsigned int *v10; // r15
  unsigned int v11; // r8d
  __int64 *v12; // r10
  int v13; // ecx
  int DriverPackageMappedProperty; // ebx
  __int64 (**j)[3]; // r11
  __int64 *v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 (**v21)[3]; // rsi
  int RegValueMappedProperty; // eax
  __int64 v24; // rcx
  wchar_t *v25; // r14
  HANDLE v26; // rdx
  int v27; // eax
  NTSTRSAFE_PWSTR v28; // rcx
  unsigned int v29; // eax
  size_t v30; // r8
  wchar_t *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  char v35; // dl
  NTSTRSAFE_PWSTR v36; // rax
  char v37; // al
  NTSTRSAFE_PWSTR v38; // r9
  int ObjectDatabaseNodeName; // eax
  __int64 v40; // rax
  int v41; // r8d
  int v42; // r8d
  int v43; // eax
  int v44; // eax
  NTSTRSAFE_PWSTR v45; // rcx
  __int64 v46; // rax
  wchar_t *Pool2; // rax
  int v48; // r8d
  int v49; // eax
  __int64 v50; // rcx
  int v51; // r8d
  int v52; // edx
  int v53; // r8d
  unsigned __int64 v54; // r9
  wchar_t *v55; // rdx
  unsigned __int64 i; // rcx
  __int64 v57; // r10
  int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // rax
  wchar_t *v61; // rax
  wchar_t *v62; // r9
  __int64 v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // eax
  bool v68; // zf
  __int64 v69; // rax
  __int64 v70; // r8
  unsigned int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rdx
  NTSTRSAFE_PWSTR v74; // rcx
  unsigned int v75; // eax
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rax
  HANDLE v79; // r8
  wchar_t *v80; // rcx
  unsigned int pcchRemaining; // [rsp+28h] [rbp-79h]
  HANDLE Handle; // [rsp+58h] [rbp-49h] BYREF
  wchar_t v83[2]; // [rsp+60h] [rbp-41h] BYREF
  wchar_t v84[2]; // [rsp+64h] [rbp-3Dh] BYREF
  wchar_t *v85; // [rsp+68h] [rbp-39h] BYREF
  int v86; // [rsp+70h] [rbp-31h] BYREF
  NTSTRSAFE_PWSTR v87; // [rsp+78h] [rbp-29h] BYREF
  __int128 v88; // [rsp+80h] [rbp-21h] BYREF
  __int64 v89; // [rsp+90h] [rbp-11h]
  HANDLE v90; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v91; // [rsp+A0h] [rbp-1h]
  wchar_t v94; // [rsp+100h] [rbp+5Fh] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0;
  v90 = 0LL;
  v12 = a1;
  v91 = 0LL;
  *(_DWORD *)a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  Handle = 0LL;
  v89 = 0LL;
  DriverPackageMappedProperty = 0;
  LODWORD(v85) = 0;
  *(_DWORD *)v84 = 0;
  *(_DWORD *)v83 = 0;
  v86 = 0;
  v87 = 0LL;
  LOBYTE(v94) = 0;
  v88 = 0LL;
  switch ( v13 )
  {
    case 2:
      v32 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v32 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v32 )
      {
        v38 = pszDest;
        pcchRemaining = a7 >> 1;
        *v8 = 18;
        ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(v12, 2LL, a2, v38, pcchRemaining, v10);
        DriverPackageMappedProperty = ObjectDatabaseNodeName;
        if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
          *v10 *= 2;
        goto LABEL_26;
      }
      goto LABEL_10;
    case 18:
      v40 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurable;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurable )
        v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v40 )
      {
        if ( a3 )
        {
          v41 = (int)a3;
        }
        else
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                          (_DWORD)v12,
                                          (_DWORD)a2,
                                          1,
                                          0,
                                          (__int64)&Handle,
                                          0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_26;
          v41 = (int)Handle;
          LODWORD(v12) = (_DWORD)a1;
        }
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        (int)v12,
                                        (int)a2,
                                        v41,
                                        (int)&DEVPKEY_DriverPackage_ConfigurableOverride,
                                        (__int64)v8,
                                        pszDest,
                                        a7,
                                        (__int64)v10);
        if ( (int)(DriverPackageMappedProperty + 0x80000000) < 0 || DriverPackageMappedProperty == -1073741789 )
          goto LABEL_26;
        v42 = (int)Handle;
        if ( a3 )
          v42 = (int)a3;
        v43 = DrvDbGetDriverPackageMappedProperty(
                (int)a1,
                (int)a2,
                v42,
                (int)&DEVPKEY_DriverPackage_ConfigurableFlags,
                (__int64)v8,
                v84,
                4,
                (__int64)v10);
        DriverPackageMappedProperty = v43;
        if ( v43 != -1073741789 )
        {
          if ( v43 < 0 )
            goto LABEL_26;
          if ( *v8 == 7 && *v10 == 4 )
          {
            v44 = *(_DWORD *)v84;
          }
          else
          {
            v44 = -1;
            *(_DWORD *)v84 = -1;
          }
          goto LABEL_98;
        }
        goto LABEL_94;
      }
      goto LABEL_10;
    case 33:
      v46 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_FamilyId;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_FamilyId )
        v46 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v46 )
      {
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                          (_DWORD)v12,
                                          (_DWORD)a2,
                                          1,
                                          0,
                                          (__int64)&Handle,
                                          0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_26;
        }
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, 1042LL, 1111770192LL);
        v85 = Pool2;
        v25 = Pool2;
        if ( Pool2 )
        {
          v48 = (int)Handle;
          if ( a3 )
            v48 = (int)a3;
          v49 = DrvDbGetDriverPackageMappedProperty(
                  (int)a1,
                  (int)a2,
                  v48,
                  (int)&DEVPKEY_DriverPackage_ProviderName,
                  (__int64)v8,
                  Pool2,
                  1042,
                  (__int64)v10);
          DriverPackageMappedProperty = v49;
          if ( v49 != -1073741789 )
          {
            if ( v49 < 0 )
              goto LABEL_43;
            if ( *v8 == 18 && *v10 - 2 <= 0x206 )
            {
              v50 = (*v10 >> 1) - 1;
              v91 = (unsigned int)v50;
              if ( !v25[v50] )
              {
                v51 = (int)Handle;
                v52 = 2 * v50;
                LODWORD(a8) = 2 * v50;
                if ( a3 )
                  v51 = (int)a3;
                LODWORD(a5) = 1040 - v52;
                v87 = &v25[(unsigned int)v50 + 1];
                DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                                (int)a1,
                                                (int)a2,
                                                v51,
                                                (int)&DEVPKEY_DriverPackage_OriginalInfName,
                                                (__int64)v8,
                                                v87,
                                                1040 - v52,
                                                (__int64)v10);
                if ( DriverPackageMappedProperty == -1073741275 )
                {
                  v53 = (int)Handle;
                  if ( a3 )
                    v53 = (int)a3;
                  DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                                  (int)a1,
                                                  (int)a2,
                                                  v53,
                                                  (int)&DEVPKEY_DriverPackage_DriverInfName,
                                                  (__int64)v8,
                                                  v87,
                                                  (int)a5,
                                                  (__int64)v10);
                }
                if ( DriverPackageMappedProperty == -1073741789 )
                {
                  DriverPackageMappedProperty = -1073741595;
                }
                else if ( DriverPackageMappedProperty >= 0 )
                {
                  if ( *v8 == 18 && *v10 - 2 <= 0x206 )
                  {
                    v25 = v85;
                    v54 = v91;
                    v55 = v85;
                    v85[v91] = 45;
                    for ( i = *v55; (_WORD)i; i = *v55 )
                    {
                      if ( (unsigned __int16)i <= 0x3Au && (v57 = 0x400200100000000LL, _bittest64(&v57, i))
                        || (_WORD)i == 126 )
                      {
                        *v55 = 95;
                      }
                      ++v55;
                    }
                    v58 = (_DWORD)a8 + 2;
                    v25[v54] = 45;
                    *v8 = 18;
                    v59 = *v10 + v58;
                    *v10 = v59;
                    v28 = pszDest;
                    if ( pszDest && a7 >= v59 )
                    {
                      v30 = v59;
                      v31 = v25;
                      goto LABEL_42;
                    }
LABEL_202:
                    DriverPackageMappedProperty = -1073741789;
                    goto LABEL_43;
                  }
                  DriverPackageMappedProperty = -1073741823;
                }
                v25 = v85;
                goto LABEL_43;
              }
            }
LABEL_203:
            DriverPackageMappedProperty = -1073741823;
            goto LABEL_43;
          }
LABEL_201:
          DriverPackageMappedProperty = -1073741595;
          goto LABEL_43;
        }
LABEL_122:
        DriverPackageMappedProperty = -1073741801;
        goto LABEL_26;
      }
      goto LABEL_10;
    case 42:
      v60 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_UniqueId;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_UniqueId )
        v60 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v60 )
        goto LABEL_10;
      v61 = wcsrchr(a2, 0x5Fu);
      v62 = v61;
      if ( !v61 )
      {
        DriverPackageMappedProperty = -1073741773;
        goto LABEL_26;
      }
      v63 = -1LL;
      do
        ++v63;
      while ( v61[v63 + 1] );
      *v8 = 18;
      v64 = *v10 + 2 + 2 * v63;
      *v10 = v64;
      if ( pszDest && a7 >= v64 )
      {
        memmove(pszDest, v62 + 1, v64);
        goto LABEL_26;
      }
LABEL_147:
      DriverPackageMappedProperty = -1073741789;
      goto LABEL_26;
    case 29:
      v65 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Configurations;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Configurations )
        v65 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v65 )
      {
LABEL_155:
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                          (_DWORD)v12,
                                          (_DWORD)a2,
                                          1,
                                          0,
                                          (__int64)&Handle,
                                          0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_26;
          a3 = Handle;
          v12 = a1;
        }
        v67 = PnpCtxRegOpenKey(*v12, (__int64)a3, (__int64)L"Configurations", 0, 9u, (__int64)&v90);
        DriverPackageMappedProperty = v67;
        if ( v67 == -1073741772 )
          goto LABEL_175;
        if ( v67 < 0 )
          goto LABEL_26;
        v68 = *(_DWORD *)(a4 + 16) == 30;
        *(_WORD *)((char *)&v89 + 1) = 0;
        BYTE3(v89) = 0;
        *(_QWORD *)&v88 = pszDest;
        HIDWORD(v88) = 0;
        HIDWORD(v89) = 0;
        if ( !v68 )
          goto LABEL_164;
        v69 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
          v69 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        LOBYTE(v89) = 1;
        if ( v69 )
LABEL_164:
          LOBYTE(v89) = 0;
        if ( pszDest )
          DWORD2(v88) = a7 >> 1;
        else
          DWORD2(v88) = 0;
        DriverPackageMappedProperty = PnpCtxRegEnumKeyWithCallback(
                                        *a1,
                                        v90,
                                        (__int64)DrvDbGetConfigurationSubKeyCallback,
                                        (__int64)&v88);
        if ( DriverPackageMappedProperty < 0 )
        {
          if ( v89 < 0 )
            DriverPackageMappedProperty = HIDWORD(v89);
          goto LABEL_26;
        }
        if ( !HIDWORD(v88) )
        {
LABEL_175:
          DriverPackageMappedProperty = -1073741275;
          goto LABEL_26;
        }
        v70 = v88;
        v71 = HIDWORD(v88) + 1;
        DriverPackageMappedProperty = HIDWORD(v89);
        *v8 = 8210;
        HIDWORD(v88) = v71;
        *v10 = 2 * v71;
        if ( v70 && 2 * (unsigned __int64)v71 <= a7 )
        {
          *(_WORD *)(v70 + 2LL * (v71 - 1)) = 0;
          goto LABEL_26;
        }
        goto LABEL_147;
      }
      break;
  }
  switch ( v13 )
  {
    case 30:
      v66 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_ConfigurationScopes;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_ConfigurationScopes )
        v66 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v66 )
        break;
      goto LABEL_155;
    case 32:
      v72 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_DriverPackageId;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_DriverPackageId )
        v72 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v72 )
      {
        *v8 = 18;
        v73 = -1LL;
        do
          ++v73;
        while ( a2[v73] );
        v74 = pszDest;
        v75 = 2 * v73 + 2;
        *v10 = v75;
        if ( v74 && a7 >= v75 )
          memmove(v74, a2, v75);
        else
          return (unsigned int)-1073741789;
        return (unsigned int)DriverPackageMappedProperty;
      }
      break;
    case 38:
      v33 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Integrated;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Integrated )
        v33 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v33 )
      {
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                          (_DWORD)v12,
                                          0,
                                          2,
                                          (_DWORD)a2,
                                          1,
                                          0,
                                          (__int64)&Handle,
                                          0LL,
                                          (__int64)&v87);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_26;
          LODWORD(a3) = (_DWORD)Handle;
          LODWORD(v12) = (_DWORD)a1;
        }
        v34 = DrvDbGetDriverPackageMappedProperty(
                (int)v12,
                (int)a2,
                (int)a3,
                (int)&DEVPKEY_DriverPackage_Inbox,
                (__int64)v8,
                &v94,
                1,
                (__int64)v10);
        DriverPackageMappedProperty = v34;
        if ( v34 == -1073741789 )
          goto LABEL_94;
        if ( v34 == -1073741275 )
        {
          DriverPackageMappedProperty = 0;
          LOBYTE(v94) = 0;
          v35 = 0;
        }
        else
        {
          if ( v34 < 0 )
            goto LABEL_26;
          if ( *v8 == 17 && *v10 == 1 )
          {
            v35 = v94;
          }
          else
          {
            v35 = -1;
            LOBYTE(v94) = -1;
          }
          if ( v35 )
          {
            if ( !Handle )
            {
              DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                              (_DWORD)a1,
                                              0,
                                              2,
                                              (_DWORD)a2,
                                              1,
                                              0,
                                              (__int64)&Handle,
                                              0LL,
                                              (__int64)&v87);
              if ( DriverPackageMappedProperty < 0 )
                goto LABEL_26;
              v35 = v94;
            }
            v37 = v35;
            if ( (v87[32] & 0x10) != 0 )
              v37 = 0;
            v35 = v37;
            LOBYTE(v94) = v37;
          }
        }
        v36 = pszDest;
        *v8 = 17;
        *v10 = 1;
        if ( !v36 || !a7 )
        {
LABEL_74:
          DriverPackageMappedProperty = -1073741789;
          goto LABEL_26;
        }
        *(_BYTE *)v36 = v35;
        goto LABEL_26;
      }
      break;
    case 40:
      v76 = *(_QWORD *)a4 - DEVPKEY_DriverPackage_Primitive;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverPackage_Primitive )
        v76 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v76 )
      {
        if ( !a3 )
        {
          DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                          (_DWORD)v12,
                                          (_DWORD)a2,
                                          1,
                                          0,
                                          (__int64)&Handle,
                                          0LL);
          if ( DriverPackageMappedProperty < 0 )
            goto LABEL_26;
          LODWORD(a3) = (_DWORD)Handle;
          LODWORD(v12) = (_DWORD)a1;
        }
        v77 = DrvDbGetDriverPackageMappedProperty(
                (int)v12,
                (int)a2,
                (int)a3,
                (int)&DEVPKEY_DriverPackage_PrimitiveFlags,
                (__int64)v8,
                v83,
                4,
                (__int64)v10);
        DriverPackageMappedProperty = v77;
        if ( v77 != -1073741789 )
        {
          if ( v77 == -1073741275 )
          {
            DriverPackageMappedProperty = 0;
          }
          else
          {
            if ( v77 < 0 )
              goto LABEL_26;
            if ( *v8 == 7 && *v10 == 4 )
            {
              v44 = *(_DWORD *)v83;
              goto LABEL_98;
            }
          }
          v44 = -1;
          *(_DWORD *)v83 = -1;
LABEL_98:
          v45 = pszDest;
          *v8 = 17;
          *v10 = 1;
          if ( v45 && a7 )
          {
            *(_BYTE *)v45 = (v44 != 0) - 1;
            goto LABEL_26;
          }
          goto LABEL_74;
        }
LABEL_94:
        DriverPackageMappedProperty = -1073741595;
        goto LABEL_26;
      }
      break;
  }
LABEL_10:
  for ( j = &off_140004640; ; j += 5 )
  {
    v18 = (__int64 *)*j;
    if ( LODWORD((**j)[2]) == v13 )
    {
      v19 = *v18 - *(_QWORD *)a4;
      if ( *v18 == *(_QWORD *)a4 )
        v19 = v18[1] - *(_QWORD *)(a4 + 8);
      if ( !v19 )
        break;
    }
    if ( ++v11 >= 0x22 )
      return (unsigned int)-1073741802;
  }
  a5 = &off_140004640 + 5 * v11;
  if ( !a5 )
    return (unsigned int)-1073741802;
  if ( a3 )
  {
    v20 = v91;
LABEL_21:
    v21 = a5;
    if ( !*((_DWORD *)a5 + 8) )
    {
      if ( a3 )
        v20 = (unsigned __int64)a3;
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v20, v20, a5, v8, pszDest, a7, v10);
      DriverPackageMappedProperty = RegValueMappedProperty;
      if ( RegValueMappedProperty != -1073741275
        && (RegValueMappedProperty && RegValueMappedProperty != -1073741789 || *v8 != 18 || *v10 != 2)
        || *(_DWORD *)(a4 + 16) != 7 )
      {
        goto LABEL_26;
      }
      v78 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
        v78 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( v78 )
        goto LABEL_26;
      v79 = Handle;
      if ( a3 )
        v79 = a3;
      if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v79, &v86) < 0 || v86 != 218103811 )
        goto LABEL_26;
      v80 = pszDest;
      DriverPackageMappedProperty = 0;
      *v8 = 18;
      *v10 = 36;
      if ( v80 && a7 >= 0x24 )
      {
        RtlStringCchCopyExW(v80, (unsigned __int64)a7 >> 1, L"Microsoft Windows", 0LL, 0LL, 0x800u);
        goto LABEL_26;
      }
      goto LABEL_74;
    }
    LODWORD(a5) = 48;
    v25 = (wchar_t *)ExAllocatePool2(256LL, 48LL, 1111770192LL);
    if ( v25 )
    {
      v26 = Handle;
      if ( a3 )
        v26 = a3;
      v27 = PnpCtxRegQueryValue(v24, v26, L"Version", &v85, v25, &a5);
      DriverPackageMappedProperty = v27;
      if ( v27 == -1073741772 )
      {
        DriverPackageMappedProperty = -1073741275;
        goto LABEL_43;
      }
      if ( v27 != -1073741789 )
      {
        if ( v27 < 0 )
        {
LABEL_43:
          ExFreePoolWithTag(v25, 0);
          goto LABEL_26;
        }
        if ( (_DWORD)v85 == 3 && (_DWORD)a5 == 48 )
        {
          v28 = pszDest;
          *v8 = *((_DWORD *)v21 + 2);
          v29 = *((_DWORD *)v21 + 8);
          *v10 = v29;
          if ( v28 && a7 >= v29 )
          {
            v30 = *((unsigned int *)v21 + 8);
            v31 = (wchar_t *)((char *)v25 + *((unsigned int *)v21 + 7));
LABEL_42:
            memmove(v28, v31, v30);
            goto LABEL_43;
          }
          goto LABEL_202;
        }
        goto LABEL_203;
      }
      goto LABEL_201;
    }
    goto LABEL_122;
  }
  DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey((_DWORD)v12, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL);
  if ( DriverPackageMappedProperty >= 0 )
  {
    v20 = (unsigned __int64)Handle;
    goto LABEL_21;
  }
LABEL_26:
  if ( v90 )
    ZwClose(v90);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DriverPackageMappedProperty;
}
