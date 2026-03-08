/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x140865BC0
 * Callers:
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407FF984 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407FFABC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenContext @ 0x14081D690 (DrvDbOpenContext.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1408658F8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _PnpCtxRegCreateTree @ 0x140687A74 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1406D3680 (_PnpCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1407FF728 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbUnloadDatabaseNode @ 0x140865E78 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140A6B0E0 (DrvDbInitializeDatabaseNodeVersion.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbLoadDatabaseNode(__int64 a1, __int64 a2)
{
  int v2; // eax
  int CachedContextBaseKey; // ebx
  __int64 v4; // r15
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, __int64, __int64 *, _QWORD); // r13
  int v8; // eax
  void **v9; // r14
  int v10; // eax
  int v11; // eax
  PVOID v12; // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // r8
  int *v18; // r12
  const wchar_t *v19; // rdx
  int DriverDatabaseMappedProperty; // eax
  unsigned int *v21; // r15
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // edx
  __int64 v26; // rcx
  int v27; // ecx
  void **v28; // [rsp+30h] [rbp-20h]
  __int64 v29; // [rsp+38h] [rbp-18h]
  __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+48h] [rbp-8h]
  int v32; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 64);
  CachedContextBaseKey = 0;
  P = 0LL;
  v4 = 0LL;
  v30 = 0LL;
  v33 = 0;
  v6 = 0LL;
  v34 = 0LL;
  v32 = 1;
  if ( (v2 & 0x21) == 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64 *, _QWORD))(a2 + 80);
    if ( v6 )
    {
      v30 = a2 + 96;
      v8 = v6(a1, *(_QWORD *)(a2 + 24), 1LL, 1LL, &v30, *(_QWORD *)(a2 + 88));
      if ( v8 == -1073741822 )
      {
        v6 = 0LL;
      }
      else if ( v8 < 0 )
      {
        CachedContextBaseKey = v8;
LABEL_8:
        v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 *, _QWORD, void **, __int64))v6)(
                a1,
                *(_QWORD *)(a2 + 24),
                1LL,
                2LL,
                &v30,
                *(_QWORD *)(a2 + 88),
                v28,
                v29);
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 && !CachedContextBaseKey )
          CachedContextBaseKey = v11;
        goto LABEL_9;
      }
    }
    v9 = (void **)(a2 + 96);
    if ( !*(_QWORD *)(a2 + 96) )
    {
      v25 = *(_DWORD *)(a2 + 40);
      if ( v25 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)a1, v25, (__int64)&v34);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_7;
        v4 = v34;
      }
      v26 = *(_QWORD *)a1 ? *(_QWORD *)(*(_QWORD *)a1 + 224LL) : 0LL;
      CachedContextBaseKey = SysCtxRegOpenKey(v26, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000u, a2 + 96);
      if ( CachedContextBaseKey < 0 )
      {
LABEL_7:
        if ( !v6 )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
LABEL_6:
    v10 = *(_DWORD *)(a2 + 64);
    if ( (v10 & 8) != 0 )
      goto LABEL_7;
    v17 = *v9;
    v18 = (int *)(a2 + 68);
    v19 = *(const wchar_t **)(a2 + 24);
    *(_DWORD *)(a2 + 64) = v10 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     a1,
                                     v19,
                                     v17,
                                     (__int64)DEVPKEY_DriverDatabase_Version,
                                     &v32,
                                     (_BYTE *)(a2 + 68),
                                     4u,
                                     &v33);
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v27 = *(_DWORD *)(a1 + 8);
      if ( (unsigned int)(v27 - 1) <= 0xFFFFFFFD )
      {
        *v18 = v27;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_27:
        v21 = (unsigned int *)(a2 + 72);
        CachedContextBaseKey = DrvDbGetDriverDatabaseMappedProperty(
                                 a1,
                                 *(const wchar_t **)(a2 + 24),
                                 *v9,
                                 (__int64)DEVPKEY_DriverDatabase_SchemaVersion,
                                 &v32,
                                 (_BYTE *)(a2 + 72),
                                 4u,
                                 &v33);
        if ( CachedContextBaseKey < 0 )
        {
          *v21 = 0;
          CachedContextBaseKey = 0;
        }
        else if ( v32 != 7 || v33 != 4 )
        {
          *v21 = -1;
        }
        v22 = *v18;
        if ( *v18
          && (v22 == -1 || (v23 = v22 & 0xFFFF0000, v23 < 0x6020000) || v23 > (*(_DWORD *)(a1 + 8) & 0xFFFF0000))
          || (v24 = *v21, *v21 == -1)
          || v24 >= 0x10001 && HIWORD(v24) != 1 )
        {
          DrvDbUnloadDatabaseNode(a1, a2);
          *(_DWORD *)(a2 + 64) |= 4u;
          CachedContextBaseKey = -1073740697;
        }
        goto LABEL_7;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v32 != 7 || v33 != 4 )
        *v18 = -1;
      goto LABEL_27;
    }
    *v18 = 0;
    goto LABEL_27;
  }
  v9 = (void **)(a2 + 96);
  if ( *(_QWORD *)(a2 + 96) )
    goto LABEL_9;
  v14 = *(_DWORD *)(a2 + 40);
  if ( v14 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)a1, v14, (__int64)&v34);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_9;
    v4 = v34;
  }
  if ( *(_QWORD *)a1 )
    v15 = *(_QWORD *)(*(_QWORD *)a1 + 224LL);
  else
    v15 = 0LL;
  v16 = SysCtxRegOpenKey(v15, v4, *(_QWORD *)(a2 + 56), 0, 0x2000000u, (__int64)v9);
  CachedContextBaseKey = v16;
  if ( v16 != -1073741772 )
  {
    if ( v16 < 0 )
      goto LABEL_9;
    goto LABEL_6;
  }
  P = (PVOID)DrvDbGetSecurityDescriptor();
  if ( !P )
  {
    CachedContextBaseKey = -1073741595;
    goto LABEL_9;
  }
  v29 = 0LL;
  v28 = v9;
  CachedContextBaseKey = PnpCtxRegCreateTree(*(_QWORD *)a1);
  if ( CachedContextBaseKey >= 0 )
  {
    DrvDbInitializeDatabaseNodeVersion(a1, a2);
    goto LABEL_6;
  }
LABEL_9:
  v12 = P;
  *(_DWORD *)(a2 + 160) = CachedContextBaseKey;
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)CachedContextBaseKey;
}
