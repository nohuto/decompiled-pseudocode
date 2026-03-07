__int64 __fastcall DrvDbGetDriverDatabaseMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int RegValueMappedProperty; // ebx
  __int64 v12; // r15
  int v13; // r10d
  __int64 v14; // r9
  __int64 **v15; // rdx
  __int64 *v16; // r8
  unsigned int v17; // edx
  __int64 (**v18)[3]; // r8
  __int64 *v19; // r9
  unsigned int v20; // edx
  __int64 (**v21)[3]; // r8
  __int64 *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 (**v25)[3]; // r12
  __int64 v26; // rdi
  HANDLE v27; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  void *v34; // rcx
  unsigned int v35; // edx
  size_t v36; // r8
  const wchar_t *v37; // rdx
  int DatabaseNode; // eax
  int v39; // eax
  __int64 v40; // rax
  _BYTE *v41; // rdx
  bool v42; // cf
  __int64 v43; // rax
  __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  size_t v51; // rax
  __int64 v52; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Handle = 0LL;
  v52 = 0LL;
  *a5 = 0;
  *a8 = 0;
  RegValueMappedProperty = 0;
  v12 = 0LL;
  if ( !wcsicmp(a2, L"*") )
  {
    RegValueMappedProperty = -1073741637;
    goto LABEL_23;
  }
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 == 2 )
  {
    v30 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v30 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v30 )
    {
      *a5 = 18;
      v33 = -1LL;
      do
        ++v33;
      while ( a2[v33] );
      v34 = a6;
      v35 = 2 * v33 + 2;
      *a8 = v35;
      if ( a6 && a7 >= v35 )
      {
        v36 = v35;
        v37 = a2;
LABEL_51:
        memmove(v34, v37, v36);
        goto LABEL_23;
      }
      goto LABEL_52;
    }
  }
  v14 = 0LL;
  v15 = off_140C04380;
  do
  {
    v16 = *v15;
    if ( *((_DWORD *)*v15 + 4) == v13 )
    {
      v31 = *v16 - *(_QWORD *)a4;
      if ( *v16 == *(_QWORD *)a4 )
        v31 = v16[1] - *(_QWORD *)(a4 + 8);
      if ( !v31 )
      {
        DatabaseNode = DrvDbFindDatabaseNode(a1, a2, &v52, v14);
        RegValueMappedProperty = DatabaseNode;
        if ( DatabaseNode < 0 )
          goto LABEL_23;
        v39 = *(_DWORD *)(a4 + 16);
        if ( v39 == 5 )
        {
          v40 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Loaded;
          if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Loaded )
            v40 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
          if ( v40 )
            goto LABEL_23;
          v41 = a6;
          *a5 = 17;
          *a8 = 1;
          if ( !a6 || !a7 )
            goto LABEL_52;
          v42 = *(_QWORD *)(v52 + 96) != 0LL;
        }
        else
        {
          switch ( v39 )
          {
            case 6:
              v43 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Selected;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Selected )
                v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v43 )
                goto LABEL_23;
              *a5 = 17;
              *a8 = 1;
              if ( a6 && a7 )
              {
                *a6 = (*(_QWORD *)(a1 + 48) != v52) - 1;
                goto LABEL_23;
              }
              goto LABEL_52;
            case 7:
              v44 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Disabled;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Disabled )
                v44 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v44 )
                goto LABEL_23;
              v41 = a6;
              *a5 = 17;
              *a8 = 1;
              if ( !a6 || !a7 )
                goto LABEL_52;
              v45 = *(_DWORD *)(v52 + 64) & 4;
              break;
            case 11:
              v46 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_AccessMask;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_AccessMask )
                v46 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v46 )
                goto LABEL_23;
              *a5 = 7;
              *a8 = 4;
              if ( a6 && a7 >= 4 )
              {
                *(_DWORD *)a6 = *(_DWORD *)(a1 + 12);
                goto LABEL_23;
              }
              goto LABEL_52;
            case 15:
              v47 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_LoadStatus;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_LoadStatus )
                v47 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v47 )
                goto LABEL_23;
              *a5 = 24;
              *a8 = 4;
              if ( a6 && a7 >= 4 )
              {
                *(_DWORD *)a6 = *(_DWORD *)(v52 + 160);
                goto LABEL_23;
              }
              goto LABEL_52;
            case 23:
              v48 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_Extended;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_Extended )
                v48 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v48 )
                goto LABEL_23;
              v41 = a6;
              *a5 = 17;
              *a8 = 1;
              if ( !a6 || !a7 )
                goto LABEL_52;
              v45 = *(_DWORD *)(v52 + 64) & 0x10;
              break;
            case 24:
              v49 = *(_QWORD *)a4 - DEVPKEY_DriverDatabase_ParentNode;
              if ( *(_QWORD *)a4 == DEVPKEY_DriverDatabase_ParentNode )
                v49 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
              if ( v49 )
                goto LABEL_23;
              v50 = v52;
              if ( !*(_QWORD *)(v52 + 32) )
              {
                RegValueMappedProperty = -1073741772;
                goto LABEL_23;
              }
              *a5 = 18;
              v51 = (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(v50 + 32) + 16LL) + 2;
              *a8 = v51;
              v34 = a6;
              if ( a6 && a7 >= (unsigned int)v51 )
              {
                v36 = v51;
                v37 = *(const wchar_t **)(*(_QWORD *)(v50 + 32) + 24LL);
                goto LABEL_51;
              }
LABEL_52:
              RegValueMappedProperty = -1073741789;
              goto LABEL_23;
            default:
              goto LABEL_23;
          }
          v42 = v45 != 0;
        }
        *v41 = -v42;
        goto LABEL_23;
      }
    }
    v14 = (unsigned int)(v14 + 1);
    ++v15;
  }
  while ( (unsigned int)v14 < 8 );
  v17 = 0;
  v18 = &off_140004B90;
  while ( 1 )
  {
    v19 = (__int64 *)*v18;
    if ( LODWORD((**v18)[2]) == v13 )
    {
      v23 = *v19 - *(_QWORD *)a4;
      if ( *v19 == *(_QWORD *)a4 )
        v23 = v19[1] - *(_QWORD *)(a4 + 8);
      if ( !v23 )
        break;
    }
    ++v17;
    v18 += 5;
    if ( v17 >= 0xC )
      goto LABEL_9;
  }
  v24 = 5LL * v17;
  v25 = &off_140004B90 + 5 * v17;
  if ( v25 )
  {
    v26 = a1;
    goto LABEL_18;
  }
LABEL_9:
  v20 = 0;
  v21 = &off_140004D70;
  while ( 1 )
  {
    v22 = (__int64 *)*v21;
    if ( LODWORD((**v21)[2]) == v13 )
    {
      v32 = *v22 - *(_QWORD *)a4;
      if ( *v22 == *(_QWORD *)a4 )
        v32 = v22[1] - *(_QWORD *)(a4 + 8);
      if ( !v32 )
        break;
    }
    ++v20;
    v21 += 5;
    if ( v20 >= 4 )
      goto LABEL_109;
  }
  v25 = &off_140004D70 + 5 * v20;
  if ( !v25 )
  {
LABEL_109:
    RegValueMappedProperty = -1073741802;
    goto LABEL_23;
  }
  v26 = a1;
  RegValueMappedProperty = DrvDbFindDatabaseNode(a1, a2, &v52, v22);
  if ( RegValueMappedProperty < 0 )
    goto LABEL_23;
  v12 = v52;
LABEL_18:
  if ( a3 && (!v12 || (*(_DWORD *)(v12 + 64) & 0x10) == 0)
    || (!v12 || (*(_DWORD *)(v12 + 64) & 0x10) == 0
      ? (v29 = DrvDbOpenDriverDatabaseRegKey(v26, a2, 1LL, 0LL, &Handle, 0LL))
      : (v29 = DrvDbOpenObjectRegKey(v26, *(_QWORD *)(v26 + 40), 1, (_DWORD)a2, 1, 0, (__int64)&Handle, 0LL, 0LL)),
        RegValueMappedProperty = v29,
        v29 >= 0) )
  {
    v27 = a3;
    if ( Handle )
      v27 = Handle;
    RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v24, v27, v25, a5, a6, a7, a8);
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
