__int64 __fastcall DrvDbCreateDatabaseNode(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        int a4,
        PCWSTR SourceString,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  int v10; // ebx
  __int64 v12; // rdi
  __int64 *v13; // r14
  wchar_t *Pool2; // rbp
  __int64 v15; // rax
  struct _ERESOURCE *v16; // rax
  int v17; // ebx
  __int64 *v18; // rcx
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  int v25; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle[8]; // [rsp+58h] [rbp-40h] BYREF

  v10 = a4;
  Handle[0] = 0LL;
  v25 = 0;
  v12 = 0LL;
  *a9 = 0LL;
  if ( (a6 & 0x30) == 0x30 )
    return (unsigned int)-1073741811;
  v13 = (__int64 *)(a1 + 32);
  if ( (a6 & 1) != 0 )
  {
    if ( *v13 )
      return (unsigned int)-1073741811;
  }
  if ( (a6 & 0x20) != 0 && (v21 = *(_QWORD *)(a1 + 40)) != 0 && v21 != *v13 )
    return (unsigned int)-1073741811;
  if ( SourceString )
  {
    Pool2 = (wchar_t *)SourceString;
    goto LABEL_7;
  }
  v22 = -1LL;
  do
    ++v22;
  while ( a2[v22] );
  v23 = (unsigned int)(2 * v22 + 68);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v23, 1111770192LL);
  if ( !Pool2 )
  {
LABEL_39:
    v17 = -1073741801;
    goto LABEL_22;
  }
  v17 = RtlStringCchPrintfExW(
          Pool2,
          v23 >> 1,
          0LL,
          0LL,
          0x800u,
          L"%ws\\%ws\\%ws",
          L"\\REGISTRY\\MACHINE",
          a2,
          L"DriverDatabase");
  if ( v17 >= 0 )
  {
    v10 = a4;
LABEL_7:
    v15 = ExAllocatePool2(256LL, 168LL, 1111770192LL);
    v12 = v15;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 68) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(v15 + 32) = a3;
      *(_QWORD *)(v15 + 80) = a7;
      *(_QWORD *)(v15 + 88) = a8;
      *(_DWORD *)(v15 + 72) = 0x10000;
      *(_DWORD *)(v15 + 64) = a6;
      *(_DWORD *)(v15 + 40) = v10;
      if ( RtlCreateUnicodeString((PUNICODE_STRING)(v15 + 16), a2)
        && RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 48), Pool2)
        && (v16 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1111770192LL), (*(_QWORD *)(v12 + 152) = v16) != 0LL) )
      {
        v17 = ExInitializeResourceLite(v16);
        if ( v17 < 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v12 + 152), 0);
          *(_QWORD *)(v12 + 152) = 0LL;
        }
        else
        {
          if ( (a6 & 0x20) == 0 )
          {
            v18 = *(__int64 **)(a1 + 24);
            if ( *v18 != a1 + 16 )
              __fastfail(3u);
            *(_QWORD *)v12 = a1 + 16;
            *(_QWORD *)(v12 + 8) = v18;
            *v18 = v12;
            *(_QWORD *)(a1 + 24) = v12;
          }
          if ( (a6 & 0x10) == 0
            || (v24 = *(_QWORD *)(a1 + 40)) == 0
            || (v17 = DrvDbOpenObjectRegKey(a1, v24, 1, (_DWORD)a2, 0x2000000, 1, (__int64)Handle, (__int64)&v25, 0LL),
                v17 >= 0)
            && (v25 != 1
             || (v17 = DrvDbSetDriverDatabaseMappedProperty(
                         a1,
                         a2,
                         Handle[0],
                         (__int64)&DEVPKEY_DriverDatabase_RegistryPath,
                         0x12u,
                         *(const WCHAR **)(v12 + 56),
                         (unsigned int)*(unsigned __int16 *)(v12 + 48) + 2),
                 v17 >= 0)) )
          {
            if ( (a6 & 0x20) != 0 )
              *(_QWORD *)(a1 + 40) = v12;
            if ( (a6 & 1) != 0 )
            {
              v19 = *(_QWORD *)(a1 + 40) == 0LL;
              *v13 = v12;
              if ( v19 )
                *(_QWORD *)(a1 + 40) = v12;
            }
            *a9 = v12;
            v12 = 0LL;
          }
        }
      }
      else
      {
        v17 = -1073741670;
      }
      goto LABEL_22;
    }
    goto LABEL_39;
  }
LABEL_22:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 80) = 0LL;
    DrvDbDestroyDatabaseNode(a1, v12);
  }
  if ( Pool2 && Pool2 != SourceString )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v17;
}
