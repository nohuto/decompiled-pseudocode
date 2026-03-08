/*
 * XREFs of DrvDbSetDriverDatabaseMappedProperty @ 0x1407FFABC
 * Callers:
 *     DrvDbCreateDatabaseNode @ 0x14081DF10 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDispatchDriverDatabase @ 0x140864BE0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140A6B0E0 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x1407FF984 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1407FFCCC (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x140865658 (DrvDbOpenObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140865BC0 (DrvDbLoadDatabaseNode.c)
 *     DrvDbUnloadDatabaseNode @ 0x140865E78 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x1408661B4 (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbSetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        const WCHAR *SourceString,
        unsigned int a7)
{
  __int64 (**v7)[3]; // r13
  int DatabaseNode; // esi
  __int64 v12; // r12
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // r10d
  __int64 **v16; // r8
  __int64 *v17; // r9
  unsigned int v18; // edx
  __int64 (**v19)[3]; // r9
  int v20; // r10d
  __int64 *v21; // r8
  unsigned int v22; // edx
  __int64 (**v23)[3]; // r8
  __int64 *v24; // r9
  __int64 v25; // rcx
  HANDLE v26; // rcx
  int v27; // eax
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  struct _KTHREAD *v38; // rax
  __int64 v39; // rbx
  int v40; // eax
  struct _ERESOURCE *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v48; // rdi
  UNICODE_STRING v49; // xmm0
  __int64 v50; // [rsp+50h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  LODWORD(v7) = 0;
  Handle = 0LL;
  v50 = 0LL;
  DatabaseNode = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  v13 = wcsicmp(a2, L"*");
  v14 = *(_DWORD *)(a4 + 16);
  if ( v13 )
  {
    if ( v14 == 2 )
    {
      v34 = *(_QWORD *)a4 - DEVPKEY_NODE;
      if ( *(_QWORD *)a4 == DEVPKEY_NODE )
        v34 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v34 )
      {
LABEL_60:
        DatabaseNode = -1073741790;
        goto LABEL_30;
      }
    }
    v15 = 0;
    v16 = off_140C04380;
    while ( 1 )
    {
      v17 = *v16;
      if ( *((_DWORD *)*v16 + 4) == v14 )
      {
        v35 = *v17 - *(_QWORD *)a4;
        if ( *v17 == *(_QWORD *)a4 )
          v35 = v17[1] - *(_QWORD *)(a4 + 8);
        if ( !v35 )
          break;
      }
      ++v15;
      ++v16;
      if ( v15 >= 8 )
      {
        v18 = 0;
        v19 = &off_140004B90;
        v20 = *(_DWORD *)(a4 + 16);
        while ( 1 )
        {
          v21 = (__int64 *)*v19;
          if ( LODWORD((**v19)[2]) == v20 )
          {
            v45 = *v21 - *(_QWORD *)a4;
            if ( *v21 == *(_QWORD *)a4 )
              v45 = v21[1] - *(_QWORD *)(a4 + 8);
            if ( !v45 )
              break;
          }
          ++v18;
          v19 += 5;
          if ( v18 >= 0xC )
            goto LABEL_9;
        }
        v7 = &off_140004B90 + 5 * v18;
        if ( v7 )
          goto LABEL_19;
LABEL_9:
        v22 = (unsigned int)v7;
        v23 = &off_140004D70;
        while ( 1 )
        {
          v24 = (__int64 *)*v23;
          if ( LODWORD((**v23)[2]) == v20 )
          {
            v25 = *v24 - *(_QWORD *)a4;
            if ( *v24 == *(_QWORD *)a4 )
              v25 = v24[1] - *(_QWORD *)(a4 + 8);
            if ( !v25 )
              break;
          }
          ++v22;
          v23 += 5;
          if ( v22 >= 4 )
            goto LABEL_126;
        }
        v7 = &off_140004D70 + 5 * v22;
        if ( !v7 )
        {
LABEL_126:
          DatabaseNode = -1073741802;
          goto LABEL_30;
        }
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v50, v24);
        if ( DatabaseNode < 0 )
          goto LABEL_30;
        v12 = v50;
LABEL_19:
        if ( a5 != *((_DWORD *)v7 + 2) && a5 )
          goto LABEL_45;
        v26 = a3;
        if ( a3 )
          goto LABEL_25;
        if ( v12 )
          v27 = DrvDbOpenObjectRegKey(a1, *(_QWORD *)(a1 + 40), 1, (_DWORD)a2, 2, 1, (__int64)&Handle, 0LL, 0LL);
        else
          v27 = DrvDbOpenDriverDatabaseRegKey((_QWORD *)a1, a2, 2u, 0, (__int64)&Handle, 0LL);
        DatabaseNode = v27;
        if ( v27 >= 0 )
        {
          v26 = 0LL;
LABEL_25:
          if ( Handle )
            v26 = Handle;
          DatabaseNode = DrvDbSetRegValueMappedProperty(v26, v26, v7, a5, SourceString, a7);
          if ( DatabaseNode >= 0 && v50 && (*(_DWORD *)(v50 + 64) & 0x10) != 0 && *(_DWORD *)(a4 + 16) == 14 )
          {
            v46 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_RegistryPath;
            if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_RegistryPath )
              v46 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v46 && a5 )
            {
              if ( a7 >= 2 && SourceString && !SourceString[((unsigned __int64)a7 >> 1) - 1] )
              {
                if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
                {
                  DatabaseNode = -1073741670;
                  goto LABEL_30;
                }
                CurrentThread = KeGetCurrentThread();
                v48 = v50;
                --CurrentThread->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v48 + 152), 1u);
                RtlFreeUnicodeString((PUNICODE_STRING)(v48 + 48));
                v49 = DestinationString;
                *(_DWORD *)(v48 + 40) = 0;
                *(UNICODE_STRING *)(v48 + 48) = v49;
                v41 = *(struct _ERESOURCE **)(v48 + 152);
                goto LABEL_125;
              }
              goto LABEL_45;
            }
          }
        }
        goto LABEL_30;
      }
    }
    DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v50, v17);
    if ( DatabaseNode < 0 )
      goto LABEL_30;
    v36 = *(_DWORD *)(a4 + 16);
    switch ( v36 )
    {
      case 5:
        v37 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
          v37 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v37 )
          goto LABEL_30;
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( (*(_DWORD *)(v50 + 64) & 1) != 0 )
            goto LABEL_60;
          v38 = KeGetCurrentThread();
          v39 = v50;
          --v38->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v39 + 152), 1u);
          if ( *(_BYTE *)SourceString == 0xFF )
            v40 = DrvDbLoadDatabaseNode(a1, v39);
          else
            v40 = DrvDbUnloadDatabaseNode(a1, v39);
          v41 = *(struct _ERESOURCE **)(v39 + 152);
          DatabaseNode = v40;
LABEL_125:
          ExReleaseResourceLite(v41);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_30;
        }
        goto LABEL_45;
      case 6:
        v42 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
          v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v42 )
          goto LABEL_30;
        if ( a5 != 17 || a7 != 1 || !SourceString )
          goto LABEL_45;
        if ( *(_BYTE *)SourceString == 0xFF )
        {
          *(_QWORD *)(a1 + 48) = v50;
          goto LABEL_30;
        }
        if ( v50 != *(_QWORD *)(a1 + 48) )
        {
          v30 = v50 == 0;
          goto LABEL_43;
        }
        goto LABEL_44;
      case 7:
        v43 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
        if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
          v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v43 )
          goto LABEL_30;
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
            *(_DWORD *)(v50 + 64) |= 4u;
          else
            *(_DWORD *)(v50 + 64) &= ~4u;
          goto LABEL_30;
        }
        goto LABEL_45;
    }
    if ( v36 != 11 )
      goto LABEL_30;
    v44 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
    if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
      v44 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v44 )
      goto LABEL_30;
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_45;
    if ( v50 != *(_QWORD *)(a1 + 32) )
      goto LABEL_60;
    v32 = *(_DWORD *)SourceString;
    goto LABEL_54;
  }
  if ( v14 != 6 )
  {
    if ( v14 == 11 )
    {
      v31 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
      if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
        v31 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v31 )
      {
        if ( a5 == 7 && a7 == 4 && SourceString )
        {
          v32 = *(_DWORD *)SourceString;
LABEL_54:
          v33 = v32 & 0xD0000000;
          *(_DWORD *)(a1 + 12) = v33;
          if ( v33 == 0x10000000 )
            *(_DWORD *)(a1 + 12) = -805306368;
          goto LABEL_30;
        }
LABEL_45:
        DatabaseNode = -1073741811;
        goto LABEL_30;
      }
    }
LABEL_56:
    DatabaseNode = -1073741637;
    goto LABEL_30;
  }
  v29 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
  if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
    v29 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v29 )
    goto LABEL_56;
  if ( a5 != 17 || a7 != 1 || !SourceString )
    goto LABEL_45;
  v30 = *(_BYTE *)SourceString == 0xFF;
LABEL_43:
  if ( v30 )
LABEL_44:
    *(_QWORD *)(a1 + 48) = 0LL;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DatabaseNode;
}
