__int64 __fastcall MiAllocatePartitionPhysicalPages(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int16 a5,
        unsigned int a6)
{
  unsigned __int16 *v6; // r13
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // r14d
  int v15; // r15d
  unsigned int v16; // edi
  unsigned int *v17; // r12
  unsigned __int64 v18; // rax
  BOOL v19; // ecx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // r14
  unsigned int v24; // r12d
  unsigned __int8 IsZeroed; // r9
  BOOL v26; // r14d
  __int64 i; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r14
  unsigned __int8 v33; // di
  __int64 v34; // rdi
  int updated; // edi
  __int64 v36; // rax
  __int64 v37; // rdi
  unsigned int v38; // r14d
  bool v39; // cf
  __int64 v40; // r10
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 PagesForMdl; // rax
  unsigned int *v44; // r12
  int v45; // eax
  unsigned int v46; // [rsp+58h] [rbp-79h] BYREF
  int v47; // [rsp+5Ch] [rbp-75h]
  unsigned int v48; // [rsp+60h] [rbp-71h]
  __int64 v49; // [rsp+68h] [rbp-69h]
  int v50; // [rsp+70h] [rbp-61h] BYREF
  int v51; // [rsp+74h] [rbp-5Dh]
  unsigned __int64 v52; // [rsp+78h] [rbp-59h] BYREF
  unsigned int *v53; // [rsp+80h] [rbp-51h]
  unsigned __int64 v54; // [rsp+88h] [rbp-49h]
  __int64 v55; // [rsp+90h] [rbp-41h]
  __int64 v56; // [rsp+98h] [rbp-39h]
  int v57; // [rsp+A0h] [rbp-31h]
  int v58; // [rsp+A4h] [rbp-2Dh]
  __int64 v59; // [rsp+A8h] [rbp-29h]
  __int64 v60; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-19h]
  _OWORD v62[2]; // [rsp+C0h] [rbp-11h] BYREF
  unsigned int v63[14]; // [rsp+E0h] [rbp+Fh] BYREF

  v6 = MiSystemPartition;
  v52 = 0LL;
  if ( a1 )
    v6 = a1;
  v9 = 0x100000;
  v58 = a5 & 0x400;
  memset(v62, 0, sizeof(v62));
  v10 = 1048577;
  if ( (a5 & 0x400) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 4) & 0x20) == 0 )
      v9 = 1048577;
    v10 = v9;
  }
  v11 = v10;
  LODWORD(v11) = v10 | 0x8000;
  v51 = a5 & 4;
  v49 = 0LL;
  v12 = 0LL;
  if ( (a5 & 4) == 0 )
    v11 = v10;
  v13 = a5 & 0x200;
  v48 = v11;
  if ( (a5 & 0x200) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources((unsigned __int64)v6, a3, 0LL, 0) < 0 )
      return 3221225626LL;
    v11 = v48;
    v12 = 0LL;
  }
  v15 = 1;
  v16 = a4;
  v57 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v17 = (unsigned int *)(qword_140C65718 + 4LL * a4 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v53 = v17;
    v59 = (__int64)&v17[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v17 = 0LL;
    v53 = 0LL;
    v59 = 4LL;
  }
  v55 = 0x40000LL;
  while ( 1 )
  {
    v18 = a3 - v12;
    v54 = a3 - v12;
    if ( a3 - v12 < 0x200 )
      goto LABEL_54;
    v19 = 1;
    if ( (a5 & 0x60) == 0 )
      v19 = v18 < 0x40000;
    v46 = v19;
    v47 = 0;
    if ( v13 )
    {
      v20 = a5 & 0x800;
      v46 = v20;
      while ( 1 )
      {
        v21 = v20
            ? MiGetHugeBadRangeFromNode((__int64)v6, v16)
            : MiGetHugeRangeFromNode((__int64)v6, v16, (v11 & 1) == 0, 0LL);
        if ( (v21 & 0x3FFFFF) != 0 )
          break;
        v53 = ++v17;
        if ( v17 == (unsigned int *)v59 )
          goto LABEL_53;
        v16 = *v17;
        v20 = v46;
        LOBYTE(v11) = v48;
      }
      v23 = (unsigned __int64)(v21 & 0x3FFFFF) << 18;
      v24 = 0;
      v46 = 0;
      IsZeroed = MiHugeRangeIsZeroed(v22, v21);
      v47 = IsZeroed;
    }
    else
    {
      v26 = (a5 & 0x580) == 0;
      for ( i = MiFindLargeNodePage((__int64)v6, v16, (int *)&v46, v26, v11, 1, 1u);
            ;
            i = MiFindLargeNodePage((__int64)v6, *v17, (int *)&v46, v26, v48, 1, 1u) )
      {
        v61 = i;
        if ( i )
          break;
        v53 = ++v17;
        if ( v17 == (unsigned int *)v59 )
          goto LABEL_53;
        v16 = *v17;
      }
      v24 = v46;
      v28 = 0xAAAAAAAAAAAAAAABuLL;
      v23 = 0xAAAAAAAAAAAAAAABuLL * ((i + 0x220000000000LL) >> 4);
      if ( (*(_DWORD *)(i + 16) & 0x3E0LL) == 0 )
      {
        v47 = 1;
LABEL_35:
        IsZeroed = 1;
        goto LABEL_36;
      }
      if ( (v48 & 1) == 0 )
      {
        v50 = 0;
        v60 = 0LL;
        v56 = 0LL;
        if ( v46 <= 1
          && !(unsigned int)MiSelectEngine(v16, 0, &v50, v63)
          && v50 == v16
          && (unsigned int)MiAllocateAcceleratorDescriptor(0LL, v50, v31, &v60) )
        {
          v56 = v60 + 32;
        }
        MiZeroLargePage(v28, v61, v24, 1u);
        v47 = 1;
        if ( !v56 )
          goto LABEL_35;
        MiDeleteAcceleratorDescriptor(v56);
      }
      IsZeroed = v47;
    }
LABEL_36:
    v29 = MiLargePageSizes[v24];
    if ( !(unsigned int)MiAddRangeToPartitionTree(&v52, v23, v29, IsZeroed) )
      break;
    v13 = a5 & 0x200;
    if ( v6 == MiSystemPartition && (a5 & 0x200) == 0 )
      _InterlockedExchangeAdd64(&qword_140C69630, v29);
    v30 = a3;
    v12 = v29 + v49;
    v49 = v12;
    if ( v12 == a3 )
      goto LABEL_62;
    v17 = v53;
    v11 = v48;
  }
  if ( (a5 & 0x200) != 0 )
  {
    v32 = qword_140C67A70;
    v33 = MiLockHugePfn(qword_140C67A70);
    MiInsertHugeRangeInList(0LL, 0LL, 2 * v47);
    MiUnlockHugePfn(v32, v33);
LABEL_53:
    v13 = a5 & 0x200;
    v18 = v54;
    v12 = v49;
LABEL_54:
    v34 = 0LL;
    goto LABEL_55;
  }
  v36 = MiFreeMdlPageRun(v23, v29, v47, 0LL);
  v12 = v49;
  v34 = v36;
  v18 = v54;
  v13 = 0;
LABEL_55:
  v30 = a3;
  if ( v12 != a3 )
  {
    if ( v13 )
    {
      updated = -1073741801;
LABEL_84:
      MiFreePartitionTree((__int16 *)v6, &v52, 1, 1);
      return (unsigned int)updated;
    }
    MiReleaseNonPagedResources((__int64)v6, v18 - v34, v12);
    if ( (a5 & 0xA2) != 0 || v34 )
    {
LABEL_81:
      updated = -1073741670;
      goto LABEL_84;
    }
    v12 = v49;
    v30 = a3;
  }
LABEL_62:
  v37 = 0LL;
  v38 = v48 & 1 | (2 * (v57 ^ 1) + 0x400000) | 0x10;
  v39 = v51 != 0;
  v51 = -v51;
  v40 = -(__int64)v39 & 0x100000000LL;
  v56 = v40;
  if ( (a5 & 0x10) != 0 )
  {
    v38 = v48 & 1 | (2 * (v57 ^ 1) + 0x400000) | 0x50;
    v37 = 0x200000LL;
    v41 = 0x40000LL;
  }
  else
  {
    if ( (a5 & 0x40) != 0 )
    {
      v38 = v48 & 1 | (2 * (v57 ^ 1) + 0x400000) | 0x50;
      v41 = 512LL;
      v37 = 0x200000LL;
    }
    else if ( (a5 & 0x100) != 0 )
    {
      v38 = v48 & 1 | (2 * (v57 ^ 1) + 0x400000) | 0x50;
      v41 = 0x40000LL;
      v37 = 0x40000000LL;
    }
    else
    {
      v41 = 0xFFFFFLL;
    }
    v55 = v41;
  }
  if ( v12 != v30 )
  {
    while ( 1 )
    {
      v42 = v30 - v12;
      if ( v42 > v41 )
        v42 = v41;
      PagesForMdl = MiAllocatePagesForMdl(
                      (int)v6,
                      v40,
                      -1LL,
                      v37,
                      v42 << 12,
                      1,
                      a4,
                      v38,
                      (__int64)KeGetCurrentThread()->ApcState.Process,
                      0LL);
      v44 = (unsigned int *)PagesForMdl;
      if ( PagesForMdl )
      {
        if ( !(unsigned int)MiAddMdlToPartitionTree((__int64)&v52, PagesForMdl, v38) )
        {
          MiFreePagesFromMdl((ULONG_PTR)v44, 0);
          ExFreePoolWithTag(v44, 0);
          goto LABEL_81;
        }
        v49 += (unsigned __int64)v44[10] >> 12;
        ExFreePoolWithTag(v44, 0);
      }
      else
      {
        if ( (v38 & 0x40) == 0 )
          goto LABEL_81;
        v38 = v38 & 0xFFFFFF9F | 0x20;
      }
      v12 = v49;
      v30 = a3;
      if ( v49 == a3 )
        break;
      v40 = v56;
      v41 = v55;
    }
  }
  v45 = a5 & 0x200;
  if ( (a5 & 0x200) == 0 )
  {
    updated = MiUpdatePartitionLargePfnBitMap(a2, &v52, v12, v11);
    if ( updated < 0 )
      goto LABEL_84;
    v12 = v49;
    v45 = 0;
  }
  *(_QWORD *)&v62[0] = &v52;
  if ( v58 )
    v15 = 33;
  DWORD2(v62[1]) = v15;
  *(_OWORD *)((char *)v62 + 8) = 0LL;
  if ( v6 != (unsigned __int16 *)a2 )
  {
    v15 |= 2u;
    DWORD2(v62[1]) = v15;
  }
  if ( (a5 & 8) != 0 )
  {
    v15 |= 4u;
    DWORD2(v62[1]) = v15;
  }
  if ( v45 )
  {
    v15 |= 0x10u;
    DWORD2(v62[1]) = v15;
  }
  if ( (*((_DWORD *)v6 + 1) & 0x80u) != 0 )
    DWORD2(v62[1]) = v15 | 0x400;
  return (unsigned int)MiInsertPartitionPages((__int16 *)v6, a2, (__int64)v62, v12, a6);
}
