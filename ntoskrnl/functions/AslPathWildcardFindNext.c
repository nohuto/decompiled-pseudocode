__int64 __fastcall AslPathWildcardFindNext(wchar_t *a1, __int64 a2, unsigned __int64 *a3)
{
  _WORD *FileInformation; // r15
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int16 *v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // kr10_8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  NTSTATUS v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r15
  size_t v29; // r12
  size_t v30; // rsi
  void *v31; // r14
  PVOID PoolWithTag; // rax
  void *v33; // rbx
  int v34; // eax
  _WORD *v35; // r14
  bool v36; // zf
  int matched; // eax
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rsi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // r12
  size_t v46; // r14
  void *v47; // r15
  PVOID v48; // rax
  void *v49; // rbx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  size_t v52; // rdx
  wchar_t *v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  wchar_t *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  char *v59; // r8
  wchar_t v60; // r9
  char *v61; // rax
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-9h] BYREF
  UNICODE_STRING v64; // [rsp+88h] [rbp+7h] BYREF
  __int128 v65; // [rsp+98h] [rbp+17h]
  _WORD *v67; // [rsp+F0h] [rbp+6Fh]

  if ( a3 == (unsigned __int64 *)-1LL )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v67 = AslAlloc((__int64)a1, 0x268uLL);
  FileInformation = v67;
  if ( !v67 )
    return (unsigned int)-1073741801;
  v7 = a3[4];
  if ( !v7 )
  {
LABEL_80:
    v6 = -2147483642;
    goto LABEL_81;
  }
  v8 = a3[4];
  while ( 1 )
  {
    v6 = -1073741675;
    v9 = v7 - 1;
    v10 = 0LL;
    if ( v9 < v8
      && ((v12 = v9, v11 = a3[3] * v9, !is_mul_ok(a3[3], v12))
       || (v13 = a3[7], v10 = (unsigned __int16 *)(v13 + v11), v13 + v11 < v13))
      || !v10 )
    {
      AslLogCallPrintf(1LL);
      v6 = -1073741595;
      goto LABEL_103;
    }
    if ( *((_QWORD *)v10 + 3) )
      break;
    AslLogCallPrintf(1LL);
LABEL_26:
    v19 = a3[4];
    if ( !v19 )
      goto LABEL_78;
    v14 = v19 - 1;
    v15 = a3[3] * (v19 - 1);
    if ( !is_mul_ok(a3[3], v14) || (v16 = a3[7], v17 = v16 + v15, v16 + v15 < v16) || !v17 )
    {
      AslLogCallPrintf(1LL);
LABEL_78:
      AslLogCallPrintf(1LL);
      goto LABEL_79;
    }
    AslpPathWildcardFreeMatchNode(v17);
    v20 = a3[4];
    v21 = v20 - 1;
    if ( !v20 )
      goto LABEL_79;
    v22 = a3[3];
    v23 = v22 * v21;
    if ( !is_mul_ok(v22, v21) )
      goto LABEL_79;
    v24 = a3[7];
    if ( v24 + v23 < v24 )
      goto LABEL_79;
    memset((void *)(v24 + v23), 0, a3[3]);
    v25 = a3[4] - 1;
    a3[4] = v25;
    if ( v25 <= 0x10 )
      goto LABEL_79;
    v26 = a3[5];
    v27 = a3[3];
    if ( v27 * v26 < 0x400 )
      goto LABEL_79;
    if ( v25 >= v26 >> 2 )
      goto LABEL_79;
    v28 = v26 >> 1;
    v29 = v26 * v27;
    if ( !is_mul_ok(v26, v27) )
      goto LABEL_79;
    v30 = v28 * v27;
    if ( !is_mul_ok(v28, v27) )
      goto LABEL_79;
    v31 = (void *)a3[7];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28 * v27, 0x72615452u);
    v33 = PoolWithTag;
    if ( !v31 )
    {
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v30);
      if ( !v33 )
        goto LABEL_79;
      goto LABEL_45;
    }
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v30);
      if ( v29 >= v30 )
        v29 = v30;
      memmove(v33, v31, v29);
      ExFreePoolWithTag(v31, 0x72615452u);
LABEL_45:
      a3[7] = (unsigned __int64)v33;
      a3[5] = v28;
    }
LABEL_79:
    v7 = a3[4];
    FileInformation = v67;
    v8 = v7;
    if ( !v7 )
      goto LABEL_80;
  }
  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 2));
  v18 = ZwQueryDirectoryFile(
          *((HANDLE *)v10 + 3),
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          FileInformation,
          0x268u,
          FileBothDirectoryInformation,
          1u,
          &DestinationString,
          0);
  if ( v18 < 0 )
  {
    if ( v18 != -2147483642 && v18 != -1073741809 )
    {
      AslLogCallPrintf(1LL);
      AslLogCallPrintf(2LL);
    }
    goto LABEL_26;
  }
  v34 = *((_DWORD *)FileInformation + 15);
  v35 = FileInformation + 47;
  if ( v34 == 4 )
  {
    if ( *v35 == 46 )
    {
      v36 = FileInformation[48] == 46;
LABEL_51:
      if ( v36 )
        goto LABEL_79;
    }
  }
  else if ( v34 == 2 )
  {
    v36 = *v35 == 46;
    goto LABEL_51;
  }
  matched = AslpPathWildcardAllocMatchNode(
              &v64,
              (PCUNICODE_STRING)v10,
              FileInformation + 47,
              *((_DWORD *)FileInformation + 15));
  if ( matched != -1073741197 )
  {
    if ( matched == -1073741565 || matched == -1073741638 )
      goto LABEL_79;
    if ( matched < 0 )
      goto LABEL_78;
    v38 = a3[4];
    v39 = a3[5];
    if ( v38 >= v39 )
    {
      v40 = v38 + 1;
      if ( v38 + 1 <= v39 )
      {
        v6 = -1073741811;
        goto LABEL_103;
      }
      v41 = a3[6] - 1;
      v42 = v40 + v41;
      if ( v40 + v41 < v40 )
        goto LABEL_103;
      v43 = a3[3];
      v44 = v42 & ~v41;
      v45 = v39 * v43;
      if ( is_mul_ok(v39, v43) )
      {
        v46 = v44 * v43;
        if ( is_mul_ok(v44, v43) )
        {
          v47 = (void *)a3[7];
          v48 = ExAllocatePoolWithTag(PagedPool, v44 * v43, 0x72615452u);
          v49 = v48;
          if ( v47 )
          {
            if ( !v48 )
              goto LABEL_65;
            memset(v48, 0, v46);
            if ( v45 < v46 )
              v46 = v45;
            memmove(v49, v47, v46);
            ExFreePoolWithTag(v47, 0x72615452u);
          }
          else
          {
            if ( v48 )
              memset(v48, 0, v46);
            if ( !v49 )
            {
LABEL_65:
              v6 = -1073741801;
              goto LABEL_66;
            }
          }
          a3[7] = (unsigned __int64)v49;
          v6 = 0;
          a3[5] = v44;
LABEL_66:
          FileInformation = v67;
        }
      }
      if ( v6 )
        goto LABEL_103;
      v6 = -1073741675;
    }
    if ( !is_mul_ok(a3[3], v38) )
      goto LABEL_103;
    v50 = a3[7];
    v51 = v50 + a3[3] * v38;
    if ( v51 < v50 )
      goto LABEL_103;
    *(UNICODE_STRING *)v51 = v64;
    *(_OWORD *)(v51 + 16) = v65;
    ++a3[4];
    goto LABEL_79;
  }
  v6 = RtlStringCbCopyNW(a1, 0x208uLL, *((STRSAFE_PCNZWCH *)v10 + 1), *v10);
  if ( v6 >= 0 )
  {
    if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)*v10 >> 1) - 2) == 92 )
      goto LABEL_100;
    v52 = 260LL;
    v53 = a1;
    v54 = 260LL;
    do
    {
      if ( !*v53 )
        break;
      ++v53;
      --v54;
    }
    while ( v54 );
    v55 = (260 - v54) & -(__int64)(v54 != 0);
    v6 = v54 == 0 ? 0xC000000D : 0;
    if ( v54 )
    {
      v56 = &a1[v55];
      v57 = 260 - v55;
      if ( 260 != v55 )
      {
        v58 = 1LL;
        v59 = (char *)((char *)L"\\" - (char *)v56);
        do
        {
          if ( !v58 )
            break;
          v60 = *(_WORD *)&v59[(_QWORD)v56];
          if ( !v60 )
            break;
          *v56 = v60;
          --v58;
          ++v56;
          --v57;
        }
        while ( v57 );
      }
      v61 = (char *)(v56 - 1);
      if ( v57 )
        v61 = (char *)v56;
      v52 = -v57;
      v6 = v52 == 0 ? 0x80000005 : 0;
      *(_WORD *)v61 = 0;
    }
    if ( v6 >= 0 )
    {
LABEL_100:
      v6 = RtlStringCbCatNW(a1, v52, FileInformation + 47, *((unsigned int *)FileInformation + 15));
      if ( v6 >= 0 )
      {
        v6 = 0;
        goto LABEL_81;
      }
    }
  }
LABEL_103:
  AslLogCallPrintf(1LL);
LABEL_81:
  ExFreePoolWithTag(FileInformation, 0x74705041u);
  return (unsigned int)v6;
}
