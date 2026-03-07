__int64 __fastcall PipGetPersistentMemory(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        size_t *a6,
        void *a7,
        int a8)
{
  _WORD *Pool2; // r13
  size_t *v9; // rsi
  ULONG_PTR v10; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rbx
  _WORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  size_t *v20; // r12
  char v21; // r15
  struct _MDL *v22; // r14
  int DriverKsrGuid; // ebx
  unsigned int v24; // r15d
  __int64 v25; // rbx
  char v26; // al
  __int64 v27; // r15
  int v28; // eax
  void *v29; // rax
  unsigned __int64 v30; // r15
  unsigned __int64 *v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // r9
  __int64 v36; // r8
  unsigned int v37; // edx
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  size_t *v43; // rax
  void *v44; // r9
  size_t *v45; // rax
  size_t v46; // rcx
  size_t v47; // rdx
  __int64 v48; // r8
  unsigned int v49; // r15d
  char v51; // [rsp+30h] [rbp-79h] BYREF
  char v52; // [rsp+31h] [rbp-78h]
  unsigned int v53; // [rsp+34h] [rbp-75h] BYREF
  ULONG BugCheckOnFailure; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v55; // [rsp+3Ch] [rbp-6Dh]
  PVOID P; // [rsp+40h] [rbp-69h]
  size_t *v57; // [rsp+48h] [rbp-61h]
  int v58; // [rsp+50h] [rbp-59h]
  __int128 v59; // [rsp+58h] [rbp-51h] BYREF
  ULONG_PTR v60; // [rsp+68h] [rbp-41h]
  __int64 v61; // [rsp+70h] [rbp-39h]
  __int64 v62; // [rsp+78h] [rbp-31h]
  __int64 v63; // [rsp+80h] [rbp-29h]
  _DWORD *v64; // [rsp+88h] [rbp-21h]
  void *v65; // [rsp+90h] [rbp-19h]
  __int128 v66; // [rsp+98h] [rbp-11h] BYREF

  Pool2 = 0LL;
  v9 = a6;
  v64 = a5;
  v10 = a2;
  v63 = a3;
  v65 = a7;
  v62 = a4;
  v60 = a2;
  v57 = a6;
  v53 = 0;
  v66 = 0LL;
  if ( a2 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v12 || (*(_DWORD *)(v12 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v13 = *(_QWORD *)(v10 + 8);
      if ( v13 )
      {
        IoAddTriageDumpDataBlock(v13, (PVOID)(unsigned int)*(__int16 *)(v13 + 2));
        v14 = (_WORD *)(*(_QWORD *)(v10 + 8) + 56LL);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v10 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v10 + 8) + 56LL));
        }
      }
      v15 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
      if ( v15 )
      {
        v16 = (unsigned __int16 *)(v15 + 40);
        IoAddTriageDumpDataBlock(v15, (PVOID)0x388);
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v16 + 1), (PVOID)*v16);
        }
        v17 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 56LL);
        if ( *v17 )
        {
          IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 56LL));
        }
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 16LL);
        if ( v18 )
        {
          if ( *(_WORD *)(v18 + 56) )
          {
            IoAddTriageDumpDataBlock(v18 + 56, (PVOID)2);
            v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v10, 0LL, 0LL);
    }
  }
  P = 0LL;
  v20 = 0LL;
  v51 = 0;
  BugCheckOnFailure = 0;
  v21 = 0;
  v22 = 0LL;
  DriverKsrGuid = PipGetDriverKsrGuid(a1, (__int64)&v66);
  if ( DriverKsrGuid >= 0 )
  {
    v59 = 0LL;
    DriverKsrGuid = KsrEnumeratePersistedMemory(&v66, PipEnumeratePersistedMemory, &v59);
    if ( DriverKsrGuid >= 0 )
    {
      if ( !DWORD2(v59) )
        return (unsigned int)-1073741772;
      *(_QWORD *)&v59 = ExAllocatePool2(64LL, 8LL * DWORD2(v59), 1634758224LL);
      if ( !(_QWORD)v59 )
        return (unsigned int)-1073741670;
      DriverKsrGuid = KsrEnumeratePersistedMemory(&v66, PipEnumeratePersistedMemory, &v59);
      if ( DriverKsrGuid < 0 )
        return (unsigned int)DriverKsrGuid;
      v55 = 0;
      if ( DWORD2(v59) )
      {
        v58 = a8;
        while ( 1 )
        {
          Pool2 = 0LL;
          if ( v21 )
            goto LABEL_72;
          v24 = v55;
          v61 = *(_QWORD *)(v59 + 8LL * v55);
          v25 = v61;
          KsrQueryMetadata(&v66, v61, 0LL, 0LL, &BugCheckOnFailure);
          Pool2 = (_WORD *)ExAllocatePool2(64LL, BugCheckOnFailure, 1634758224LL);
          if ( !Pool2 )
            goto LABEL_82;
          DriverKsrGuid = KsrQueryMetadata(&v66, v25, Pool2, BugCheckOnFailure, &BugCheckOnFailure);
          if ( DriverKsrGuid < 0 )
            goto LABEL_72;
          if ( BugCheckOnFailure < 2 )
          {
LABEL_81:
            DriverKsrGuid = -1073741637;
            goto LABEL_72;
          }
          if ( *Pool2 == 2 )
          {
            DriverKsrGuid = PipMatchPersistentMemory(v10, v63, v62, (_DWORD)Pool2, 0, (__int64)&v51);
            if ( DriverKsrGuid < 0 )
              goto LABEL_72;
            v52 = v51;
            if ( !v51 )
              goto LABEL_60;
            PipUnpackMetadata((__int64)Pool2, 0LL, v64);
            v26 = v52;
          }
          else
          {
            if ( *Pool2 != 1 )
              goto LABEL_81;
            DriverKsrGuid = PipMatchPersistentMemoryV1(v10, Pool2, 0LL, &v51);
            if ( DriverKsrGuid < 0 )
              goto LABEL_72;
            v26 = v51;
            v52 = v51;
          }
          if ( !v26 )
            goto LABEL_60;
          v27 = v61;
          v28 = KsrClaimPersistedMemory(&v66, v61, 0LL, 0LL, 0, &v53);
          DriverKsrGuid = v28;
          if ( v28 != -1073741789 && v28 < 0 )
            goto LABEL_72;
          v29 = (void *)ExAllocatePool2(64LL, 8LL * v53, 1634758224LL);
          P = v29;
          if ( !v29 )
          {
LABEL_82:
            DriverKsrGuid = -1073741670;
            goto LABEL_72;
          }
          DriverKsrGuid = KsrClaimPersistedMemory(&v66, v27, v29, v53, 0, &v53);
          if ( DriverKsrGuid < 0 )
            goto LABEL_72;
          v30 = 0LL;
          if ( v53 )
          {
            v31 = (unsigned __int64 *)P;
            v32 = v53;
            do
            {
              v33 = *v31++;
              v30 = (v33 >> 40) + (unsigned int)v30;
              --v32;
            }
            while ( v32 );
            v10 = v60;
          }
          v34 = ExAllocatePool2(64LL, 8 * v30 + 48, 1634758224LL);
          v22 = (struct _MDL *)v34;
          if ( !v34 )
            goto LABEL_72;
          *(_QWORD *)v34 = 0LL;
          v35 = (_QWORD *)(v34 + 48);
          *(_QWORD *)(v34 + 32) = 0LL;
          v36 = 0LL;
          *(_DWORD *)(v34 + 44) = 0;
          *(_DWORD *)(v34 + 40) = (_DWORD)v30 << 12;
          *(_WORD *)(v34 + 10) = 2;
          *(_WORD *)(v34 + 8) = 8 * (v30 + 6);
          v37 = v53;
          if ( v53 )
          {
            v38 = P;
            do
            {
              v39 = v38[v36];
              v40 = v39 >> 40;
              v41 = v39 & 0xFFFFFFFFFFLL;
              if ( (_DWORD)v40 )
              {
                v42 = (unsigned int)v40;
                do
                {
                  *v35++ = v41++;
                  --v42;
                }
                while ( v42 );
                v37 = v53;
              }
              v36 = (unsigned int)(v36 + 1);
            }
            while ( (unsigned int)v36 < v37 );
            v10 = v60;
          }
          v43 = (size_t *)MmMapLockedPagesSpecifyCache(v22, 0, MmCached, 0LL, 0, 0x40000010u);
          v20 = v43;
          if ( !v43 )
          {
            DriverKsrGuid = -1073741670;
            goto LABEL_75;
          }
          v44 = v65;
          if ( !v65 )
          {
            v9 = v57;
            DriverKsrGuid = -1073741789;
            *v57 = *v43;
            goto LABEL_70;
          }
          v45 = v57;
          v46 = *v20;
          v47 = *v57;
          *v57 = *v20;
          if ( v47 < v46 )
          {
            DriverKsrGuid = -1073741789;
            v9 = v45;
            goto LABEL_70;
          }
          memmove(v44, v20 + 1, *v20);
          if ( (v58 & 1) == 0 )
          {
            v24 = v55;
LABEL_60:
            v49 = v24 + 1;
            v55 = v49;
            if ( !v22 )
              goto LABEL_62;
            goto LABEL_61;
          }
          MmUnmapLockedPages(v20, v22);
          LOBYTE(v48) = 1;
          v20 = 0LL;
          KsrFreePersistedMemoryBlock(&v66, v61, v48);
          v49 = ++v55;
LABEL_61:
          ExFreePoolWithTag(v22, 0x61706E50u);
          v22 = 0LL;
LABEL_62:
          ExFreePoolWithTag(Pool2, 0x61706E50u);
          Pool2 = 0LL;
          if ( P )
          {
            ExFreePoolWithTag(P, 0x61706E50u);
            P = 0LL;
          }
          if ( v49 >= DWORD2(v59) )
          {
            v9 = v57;
LABEL_70:
            if ( v52 )
              goto LABEL_72;
            break;
          }
          v21 = v52;
        }
      }
      *v9 = 0LL;
      DriverKsrGuid = -1073741772;
LABEL_72:
      if ( v20 )
        MmUnmapLockedPages(v20, v22);
      if ( v22 )
LABEL_75:
        ExFreePoolWithTag(v22, 0x61706E50u);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x61706E50u);
      if ( P )
        ExFreePoolWithTag(P, 0x61706E50u);
    }
  }
  return (unsigned int)DriverKsrGuid;
}
