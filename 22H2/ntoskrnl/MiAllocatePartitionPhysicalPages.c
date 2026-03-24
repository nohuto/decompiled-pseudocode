/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x1408DA9C8
 * Callers:
 *     MiReleasePartitionHugeIoSpace @ 0x1405337C8 (MiReleasePartitionHugeIoSpace.c)
 *     MmManagePartitionMoveMemory @ 0x1408DBB30 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MiFreeMdlPageRun @ 0x140280378 (MiFreeMdlPageRun.c)
 *     MiReleaseNonPagedResources @ 0x1402E9CE0 (MiReleaseNonPagedResources.c)
 *     MiZeroLargePage @ 0x14030E918 (MiZeroLargePage.c)
 *     MiAllocatePagesForMdl @ 0x140354954 (MiAllocatePagesForMdl.c)
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 *     MiFindLargeNodePage @ 0x1403947D0 (MiFindLargeNodePage.c)
 *     MiGetHugeRangeFromNode @ 0x140532994 (MiGetHugeRangeFromNode.c)
 *     MiHugeRangeIsZeroed @ 0x1405332B8 (MiHugeRangeIsZeroed.c)
 *     MiInsertHugeRangeInList @ 0x140533548 (MiInsertHugeRangeInList.c)
 *     MiAddMdlToPartitionTree @ 0x140560FC0 (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x1405610AC (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14056227C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140562480 (MiInsertPartitionPages.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408DB7C8 (MiUpdatePartitionLargePfnBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(
        ULONG_PTR *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6)
{
  int v6; // eax
  ULONG_PTR *v7; // r10
  unsigned int v8; // esi
  unsigned __int64 v9; // r11
  int HugeRangeFromNode; // edi
  unsigned __int64 v11; // r14
  int v12; // eax
  int v13; // ecx
  int v14; // r13d
  int v15; // ebx
  unsigned __int64 v17; // r12
  BOOL v18; // ecx
  int v19; // r15d
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rbx
  BOOL IsZeroed; // eax
  int v25; // r9d
  __int64 LargeNodePage; // rax
  unsigned __int64 v27; // r13
  BOOL v28; // eax
  __int64 v29; // r9
  __int64 v30; // r15
  unsigned __int64 v31; // rdi
  int updated; // ebx
  __int64 v33; // rax
  char v34; // r12
  __int64 v35; // rbx
  int v36; // edi
  unsigned int v37; // edi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 PagesForMdl; // rax
  unsigned int *v41; // r15
  __int64 v42; // r8
  int v43; // edi
  unsigned __int64 v44; // rsi
  __int32 v45; // eax
  ULONG_PTR *v46; // [rsp+40h] [rbp-59h]
  int v47; // [rsp+48h] [rbp-51h]
  int v48; // [rsp+4Ch] [rbp-4Dh]
  unsigned __int64 v49; // [rsp+50h] [rbp-49h] BYREF
  __int64 v50; // [rsp+58h] [rbp-41h]
  __int64 v51; // [rsp+60h] [rbp-39h]
  unsigned int v52; // [rsp+68h] [rbp-31h]
  unsigned __int64 v53; // [rsp+70h] [rbp-29h]
  __m256i v54; // [rsp+78h] [rbp-21h] BYREF
  BOOL v55; // [rsp+F0h] [rbp+57h] BYREF
  unsigned __int64 v56; // [rsp+F8h] [rbp+5Fh]
  unsigned __int64 v57; // [rsp+100h] [rbp+67h]
  int v58; // [rsp+108h] [rbp+6Fh]

  v57 = a3;
  v56 = a2;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = &MiSystemPartition;
  v8 = a4;
  v52 = a4;
  v9 = a3;
  v49 = 0LL;
  HugeRangeFromNode = 0;
  v50 = 0LL;
  if ( a1 )
    v7 = a1;
  v11 = 0LL;
  v46 = v7;
  v48 = a5 & 4;
  v12 = ((v6 & 0x40) == 0) | 0x100000;
  v13 = v12 | 0x8000;
  *(_OWORD *)v54.m256i_i8 = 0LL;
  if ( (a5 & 4) == 0 )
    v13 = v12;
  v14 = v13 | 0x4000;
  *(_OWORD *)&v54.m256i_u64[2] = 0LL;
  if ( (a5 & 0x12) != 0 )
    v14 = v13;
  v15 = a5 & 0x200;
  v58 = v15;
  v47 = v14;
  if ( (a5 & 0x200) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources(v7, a3, 0LL, 0) < 0 )
      return 3221225626LL;
    v7 = v46;
    v9 = v57;
  }
  v51 = 0x40000LL;
  while ( 1 )
  {
    v17 = v9 - v11;
    v53 = v9 - v11;
    if ( v9 - v11 < 0x200 )
      goto LABEL_39;
    v18 = 1;
    if ( (a5 & 0x60) == 0 )
      v18 = v17 < 0x40000;
    HugeRangeFromNode &= 0xFFFC0000;
    v55 = v18;
    v19 = 0;
    if ( v15 )
    {
      v20 = 0;
      if ( KeNumberNodes )
      {
        do
        {
          HugeRangeFromNode = MiGetHugeRangeFromNode(v46, v20, (v14 & 1) == 0);
          if ( (*(_QWORD *)&HugeRangeFromNode & 0x3FFFFLL) != 0 || (a5 & 1) == 0 )
            break;
          v21 = v20 + 1;
          v22 = 0;
          if ( v21 != (unsigned __int16)KeNumberNodes )
            v22 = v21;
          v20 = v22 + 1;
        }
        while ( v20 < (unsigned __int16)KeNumberNodes );
        v8 = v52;
        v17 = v53;
        v9 = v57;
      }
      if ( (HugeRangeFromNode & 0x3FFFF) == 0 )
        goto LABEL_38;
      v23 = (unsigned __int64)(HugeRangeFromNode & 0x3FFFF) << 18;
      v55 = 0;
      IsZeroed = MiHugeRangeIsZeroed(HugeRangeFromNode);
      v19 = v25;
      LOBYTE(v19) = IsZeroed;
    }
    else
    {
      LargeNodePage = MiFindLargeNodePage((__int64)v7, v8, (unsigned int *)&v55, 1, v14, 1u, 1u);
      if ( !LargeNodePage )
      {
        v9 = v57;
        goto LABEL_39;
      }
      v23 = (LargeNodePage + 0x58000000000LL) / 48;
      if ( (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) != 0 )
      {
        if ( (v14 & 1) != 0 )
          goto LABEL_30;
        MiZeroLargePage(LargeNodePage, v55);
      }
      v19 = 1;
    }
LABEL_30:
    v27 = MiLargePageSizes[v55];
    v28 = MiAddRangeToPartitionTree(&v49, v23, v27, v19);
    v29 = 0LL;
    if ( !v28 )
      break;
    v7 = v46;
    v15 = v58;
    if ( v46 == &MiSystemPartition && !v58 )
      _InterlockedExchangeAdd64(&qword_140C4EFB8, v27);
    v9 = v57;
    v11 += v27;
    if ( v11 == v57 )
      goto LABEL_48;
    v14 = v47;
  }
  if ( v58 )
  {
    MiInsertHugeRangeInList(HugeRangeFromNode, v19, 0LL);
    v9 = v57;
LABEL_38:
    v15 = v58;
LABEL_39:
    v30 = v50;
    goto LABEL_40;
  }
  v33 = MiFreeMdlPageRun(v23, v27, v19);
  v9 = v57;
  v30 = v33;
  v15 = v58;
LABEL_40:
  if ( v11 == v9 )
  {
    LODWORD(v7) = (_DWORD)v46;
    v29 = 0LL;
  }
  else
  {
    v31 = (unsigned __int64)v46;
    if ( v15 || (MiReleaseNonPagedResources((__int64)v46, v17 - v30), (a5 & 0xA2) != 0) || (v29 = 0LL, v30) )
    {
      updated = -1073741670;
      goto LABEL_74;
    }
    v9 = v57;
    LODWORD(v7) = (_DWORD)v46;
  }
LABEL_48:
  v34 = a5;
  v35 = 0LL;
  v36 = v47 & 1 | 2;
  if ( (a5 & 1) != 0 )
    v36 = v47 & 1;
  v37 = v36 | 0x10;
  if ( (a5 & 0x10) != 0 )
  {
    v37 |= 0x40u;
    v35 = 0x200000LL;
    v38 = 0x40000LL;
  }
  else
  {
    if ( (a5 & 0x40) != 0 )
    {
      v37 |= 0x40u;
      v38 = 512LL;
      v35 = 0x200000LL;
    }
    else if ( (a5 & 0x100) != 0 )
    {
      v37 |= 0x40u;
      v38 = 0x40000LL;
      v35 = 0x40000000LL;
    }
    else
    {
      v38 = 1048574LL;
    }
    v51 = v38;
  }
  if ( v11 == v9 )
  {
LABEL_71:
    v43 = v58;
    v44 = v56;
    if ( !v58 )
    {
      updated = MiUpdatePartitionLargePfnBitMap(v56, &v49, a3, v29);
      if ( updated < 0 )
        goto LABEL_73;
    }
    v54.m256i_i64[0] = (__int64)&v49;
    v45 = 3;
    *(_OWORD *)&v54.m256i_u64[1] = 0LL;
    if ( (v34 & 8) != 0 )
      v45 = 7;
    v54.m256i_i32[6] = v45;
    if ( v43 )
      v54.m256i_i32[6] = v45 | 0x10;
    return (unsigned int)MiInsertPartitionPages((unsigned __int64)v46, v44, (__int64)&v54, v11, a6);
  }
  while ( 2 )
  {
    v39 = v38;
    if ( v9 - v11 <= v38 )
      v39 = v9 - v11;
    PagesForMdl = MiAllocatePagesForMdl((int)v7, -(__int64)(v48 != 0) & 0x100000000LL, -1LL, v35, v39 << 12, 1, v8, v37);
    v41 = (unsigned int *)PagesForMdl;
    if ( !PagesForMdl )
    {
      if ( (v37 & 0x40) == 0 )
        goto LABEL_70;
      v37 = v37 & 0xFFFFFF9F | 0x20;
      goto LABEL_67;
    }
    if ( (unsigned int)MiAddMdlToPartitionTree((__int64)&v49, PagesForMdl, v37) )
    {
      v11 += (unsigned __int64)v41[10] >> 12;
      ExFreePoolWithTag(v41, 0);
LABEL_67:
      v9 = v57;
      if ( v11 == v57 )
        goto LABEL_71;
      LODWORD(v7) = (_DWORD)v46;
      v38 = v51;
      continue;
    }
    break;
  }
  MiFreePagesFromMdl((ULONG_PTR)v41, 0, v42);
  ExFreePoolWithTag(v41, 0);
LABEL_70:
  updated = -1073741670;
LABEL_73:
  v31 = (unsigned __int64)v46;
LABEL_74:
  MiFreePartitionTree(v31, &v49, 1, 1);
  return (unsigned int)updated;
}
