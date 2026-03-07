__int64 __fastcall IoReserveKsrPersistentMemoryEx(
        struct _MDL *a1,
        ULONG_PTR a2,
        size_t a3,
        _WORD *a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r14
  unsigned int v18; // r15d
  void *v19; // r13
  int DriverKsrGuid; // edi
  unsigned int v21; // eax
  int v22; // r13d
  int PersistentMemory; // eax
  struct _MDL *PagesForMdl; // rax
  PVOID v26; // rax
  __int64 Pool2; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  void *v30; // rdx
  size_t v31; // r8
  struct _MDL *v32; // rdi
  struct _MDL *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-6Dh]
  unsigned int v37; // [rsp+48h] [rbp-69h]
  PVOID P; // [rsp+50h] [rbp-61h]
  struct _MDL *v39; // [rsp+58h] [rbp-59h]
  size_t Size; // [rsp+60h] [rbp-51h]
  void *Src; // [rsp+68h] [rbp-49h]
  _WORD *v42; // [rsp+70h] [rbp-41h]
  __int64 v43; // [rsp+78h] [rbp-39h] BYREF
  __int64 v44; // [rsp+80h] [rbp-31h] BYREF
  _QWORD *v45; // [rsp+88h] [rbp-29h]
  __int128 v46; // [rsp+90h] [rbp-21h] BYREF

  v45 = a8;
  v43 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v35 = 0;
  v42 = a4;
  Size = a3;
  v39 = a1;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  if ( a2 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( !v9 || (*(_DWORD *)(v9 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
      {
        IoAddTriageDumpDataBlock(v10, (PVOID)(unsigned int)*(__int16 *)(v10 + 2));
        v11 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
        }
      }
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
      if ( v12 )
      {
        v13 = (unsigned __int16 *)(v12 + 40);
        IoAddTriageDumpDataBlock(v12, (PVOID)0x388);
        if ( *v13 )
        {
          IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), (PVOID)*v13);
        }
        v14 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        }
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        if ( v15 )
        {
          if ( *(_WORD *)(v15 + 56) )
          {
            IoAddTriageDumpDataBlock(v15 + 56, (PVOID)2);
            v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
    }
    a1 = v39;
  }
  v17 = 0LL;
  Src = 0LL;
  v18 = 0;
  v37 = 0;
  P = 0LL;
  v19 = 0LL;
  v36 = 0;
  if ( !PnpKsrEnabled )
    return (unsigned int)-1073741637;
  if ( a7 )
    return (unsigned int)-1073741582;
  DriverKsrGuid = PipGetDriverKsrGuid(a1, &v46);
  if ( DriverKsrGuid < 0 )
    return (unsigned int)DriverKsrGuid;
  if ( !a2 )
  {
LABEL_33:
    v22 = 1;
    PersistentMemory = PipGetPersistentMemory(v39, a2, Size, v42, 0LL, &v44, 0LL, 1);
    DriverKsrGuid = PersistentMemory;
    if ( PersistentMemory == -1073741772 )
    {
      DriverKsrGuid = 0;
    }
    else if ( PersistentMemory < 0 )
    {
      goto LABEL_38;
    }
    Size = (a6 + 4103) & 0xFFFFFFFFFFFFF000uLL;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, Size, MmCached, 0x14u);
    v39 = PagesForMdl;
    if ( PagesForMdl )
    {
      v26 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
      P = v26;
      if ( v26 )
      {
        memset(v26, 0, Size);
        v36 = 2 * v18 + 24;
        Pool2 = ExAllocatePool2(64LL, v36, 1634758224LL);
        v28 = Pool2;
        if ( !Pool2 )
          goto LABEL_38;
        *(_WORD *)Pool2 = 2;
        *(_QWORD *)(Pool2 + 8) = a6;
        *(_DWORD *)(Pool2 + 20) = a5;
        if ( v42 )
          *(_WORD *)(Pool2 + 16) = *v42;
        v29 = ExAllocatePool2(64LL, 56LL, 1634758224LL);
        v17 = (_QWORD *)v29;
        if ( v29 )
        {
          *(_QWORD *)(v29 + 40) = P;
          *(_QWORD *)(v29 + 8) = v39;
          *(_QWORD *)(v29 + 48) = v28;
          *(_OWORD *)(v29 + 16) = v46;
          if ( a2 )
          {
            v30 = Src;
            v31 = 2 * v37;
            *(_DWORD *)(v28 + 4) = 2 * v37;
            memmove((void *)(v28 + 24), v30, v31);
            v22 = 2;
          }
          v32 = v39;
          v33 = v39;
          *(_DWORD *)v17 = v22;
          KsrMdlToMemoryRuns(v33, 0LL, 0LL, &v35);
          v34 = ExAllocatePool2(64LL, 8LL * v35, 1634758224LL);
          v19 = (void *)v34;
          if ( v34 )
          {
            DriverKsrGuid = KsrMdlToMemoryRuns(v32, v34, v35, &v35);
            if ( DriverKsrGuid >= 0 )
            {
              DriverKsrGuid = KsrPersistMemoryWithMetadata(&v46, v19, v35, v28, v36, &v43);
              if ( DriverKsrGuid >= 0 )
              {
                v17[4] = v43;
                *v45 = v17;
                v17 = 0LL;
              }
            }
          }
          else
          {
            DriverKsrGuid = -1073741670;
          }
          goto LABEL_39;
        }
      }
    }
    DriverKsrGuid = -1073741670;
LABEL_38:
    v19 = 0LL;
    goto LABEL_39;
  }
  if ( Size )
  {
    Src = *(void **)(Size + 8);
    if ( !Src )
      return (unsigned int)-1073741811;
    v21 = *(unsigned __int16 *)Size;
    if ( !(_WORD)v21 )
      return (unsigned int)-1073741811;
    v18 = v21 >> 1;
    goto LABEL_32;
  }
  DriverKsrGuid = PipGetDeviceObjectLocation(a2);
  if ( DriverKsrGuid >= 0 )
  {
    v18 = v36;
    Src = P;
LABEL_32:
    v37 = v18;
    goto LABEL_33;
  }
LABEL_39:
  if ( v17 )
    ExFreePoolWithTag(v17, 0x61706E50u);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x61706E50u);
  return (unsigned int)DriverKsrGuid;
}
