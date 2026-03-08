/*
 * XREFs of MiAddPhysicalMemoryChunks @ 0x140A2919C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 *     MmAddPhysicalMemory @ 0x140A2A460 (MmAddPhysicalMemory.c)
 *     MiHotAddBootDescriptor @ 0x140B962B0 (MiHotAddBootDescriptor.c)
 * Callees:
 *     MiGetLargestPageIndex @ 0x14027DE94 (MiGetLargestPageIndex.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x1402F2A0C (MiGetAvailablePagesExcludeSlists.c)
 *     MiGetClosestImplicitNode @ 0x140346FCC (MiGetClosestImplicitNode.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 *     MiNodeAvailablePages @ 0x140464746 (MiNodeAvailablePages.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14054EC60 (IoUpdateDumpPhysicalRanges.c)
 *     MiPageToNode @ 0x1406153B0 (MiPageToNode.c)
 *     MiNodeLargeFreeZeroPages2 @ 0x14064D5BC (MiNodeLargeFreeZeroPages2.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 */

__int64 __fastcall MiAddPhysicalMemoryChunks(
        unsigned __int16 *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r12
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // r13
  ULONG_PTR v12; // rsi
  __int64 v13; // rsi
  int v14; // edi
  ULONG_PTR v15; // r13
  int v16; // r15d
  unsigned __int64 v17; // rsi
  int v18; // eax
  int ClosestImplicitNode; // eax
  int v20; // ecx
  _QWORD *v21; // r10
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // r12
  __int64 *v26; // r9
  unsigned __int64 v27; // rdx
  unsigned __int64 AvailablePagesExcludeSlists; // rcx
  __int64 v29; // r8
  unsigned __int16 *v30; // r10
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rdx
  unsigned int v39; // [rsp+30h] [rbp-38h]
  __int64 v40; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-20h]
  _QWORD *v43; // [rsp+50h] [rbp-18h]
  unsigned __int64 v44; // [rsp+58h] [rbp-10h]
  int v46; // [rsp+B8h] [rbp+50h]
  int v49; // [rsp+D0h] [rbp+68h]
  unsigned int v50; // [rsp+D0h] [rbp+68h]

  v6 = a5;
  v39 = 1;
  v42 = 512LL;
  v7 = 512LL;
  if ( a4 )
  {
    v7 = 0x40000LL;
    v6 = a5 | 0x400000;
    if ( a4 != 0x40000 )
      v7 = 512LL;
    v39 = a4 != 0x40000;
    v42 = v7;
  }
  v9 = *a3;
  v10 = 0LL;
  v11 = *a2;
  v12 = (unsigned __int64)*a3 >> 12;
  v41 = *a2;
  v40 = v9;
  if ( (v6 & 0x10000) != 0 )
  {
    v6 |= 0x406000u;
    v13 = v12 << 12;
    while ( 1 )
    {
      v40 = v13;
      v14 = MiAddPhysicalMemory(a1, (__int64 *)&v41, &v40, v6, 0LL);
      if ( v14 >= 0 )
      {
        *a3 = v40;
        goto LABEL_110;
      }
      if ( (v6 & 0x4000) == 0 )
        break;
      v6 &= ~0x4000u;
    }
    *a3 = 0LL;
    return (unsigned int)v14;
  }
  v44 = 0LL;
  v49 = 0;
  v15 = v11 >> 12;
  v16 = MiSystemPartition != a1 ? 2 : 0;
  v46 = v16;
  v17 = MiRestrictRangeToNode(v15, v12);
  while ( v17 >= a4 )
  {
    if ( v15 < 0x100000 && v17 + v15 > 0x100000 )
      v17 = 0x100000 - v15;
    v18 = MiPageToNode(v15);
    ClosestImplicitNode = MiGetClosestImplicitNode(v18 + 1);
    v20 = v49;
    v21 = (_QWORD *)(qword_140C6B0D0 + 25408LL * (unsigned int)(ClosestImplicitNode - 1));
    v43 = v21;
    if ( v49 < 0 )
    {
      v17 = v44;
      if ( v44 > v7 )
      {
        if ( a1 == MiSystemPartition )
        {
          v17 = v7;
        }
        else
        {
          v17 = (v44 >> 1) & ~(v7 - 1);
          if ( v17 < v7 )
            v17 = v7;
        }
      }
      switch ( v46 )
      {
        case 0:
          if ( v44 <= v7 )
            v16 = (v15 < 0x100000) + 1;
          else
            v16 = 0;
          break;
        case 1:
          v16 = 2 - (v7 < v44);
          break;
        case 2:
          if ( a1 == MiSystemPartition )
            v16 = 3;
          else
            v16 = v7 < v44 ? 2 : 4;
          break;
        case 3:
          goto LABEL_45;
        case 4:
          if ( v44 <= v7 )
            goto LABEL_107;
LABEL_45:
          v16 = 4;
          break;
      }
    }
    else
    {
      v16 = 0;
      LODWORD(v22) = 1;
      if ( a1 != MiSystemPartition )
        v16 = v46;
      if ( (v15 & 0x1FF) != 0 )
      {
LABEL_24:
        if ( v17 > MiLargePageSizes[(unsigned int)v22] - v15 % MiLargePageSizes[(unsigned int)v22] )
          v17 = MiLargePageSizes[(unsigned int)v22] - v15 % MiLargePageSizes[(unsigned int)v22];
      }
      else
      {
        v23 = 512LL;
        while ( v17 >= v23 )
        {
          v17 &= ~(v23 - 1);
          if ( !(_DWORD)v22 )
            break;
          v22 = (unsigned int)(v22 - 1);
          v23 = MiLargePageSizes[v22];
          if ( v15 % v23 )
            goto LABEL_24;
        }
      }
    }
    v24 = 0;
    v25 = 1LL;
    v50 = 0;
    v26 = MiLargePageSizes;
    while ( v15 % *v26 || v17 % *v26 )
    {
      ++v24;
      ++v26;
      v50 = v24;
      if ( v24 > 1 )
        goto LABEL_52;
    }
    v25 = *v26;
LABEL_52:
    v27 = v42;
    v6 &= 0xFFFF4FFF;
    if ( v17 < v42 )
      goto LABEL_86;
    if ( !v16 )
    {
      AvailablePagesExcludeSlists = MiNodeLargeFreeZeroPages2((__int64)v21, 0);
      if ( !AvailablePagesExcludeSlists )
      {
        if ( v17 + v15 > 0x100000 && v17 > v42 )
        {
          v17 = v42;
          v50 = v39;
          v25 = v42;
        }
        v16 = 1;
LABEL_61:
        AvailablePagesExcludeSlists = MiNodeLargeFreeZeroPages2((__int64)v43, 1);
      }
      LODWORD(v29) = v50;
      v27 = v42;
      goto LABEL_63;
    }
    v50 = v24;
    if ( v16 == 3 )
      goto LABEL_83;
    if ( v16 == 1 )
      goto LABEL_61;
    if ( a1 == MiSystemPartition )
    {
LABEL_83:
      v33 = v27;
      if ( v17 == v27 )
        v33 = v17;
      v17 = v33;
LABEL_86:
      v30 = a1;
      goto LABEL_87;
    }
    if ( v16 == 2 )
    {
      AvailablePagesExcludeSlists = MiNodeAvailablePages(v21);
      if ( AvailablePagesExcludeSlists < 6 )
      {
        v31 = 0LL;
        v46 = 4;
        v49 = 0;
        goto LABEL_99;
      }
      LODWORD(v29) = v50;
      goto LABEL_64;
    }
    AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)MiSystemPartition);
LABEL_63:
    if ( !AvailablePagesExcludeSlists )
      goto LABEL_83;
LABEL_64:
    if ( AvailablePagesExcludeSlists >= (unsigned __int64)(48 * v25) >> 12 )
    {
LABEL_67:
      if ( v25 != 1 )
      {
        v30 = a1;
        if ( a1 == MiSystemPartition )
          v6 |= 0x8000u;
        goto LABEL_78;
      }
    }
    else
    {
      while ( (unsigned int)v29 < v39 )
      {
        v29 = (unsigned int)(v29 + 1);
        v25 = MiLargePageSizes[v29];
        if ( AvailablePagesExcludeSlists >= (unsigned __int64)(48 * v25) >> 12 )
          goto LABEL_67;
      }
      v25 = 1LL;
    }
    v30 = a1;
LABEL_78:
    v32 = ~(v25 - 1) & ((AvailablePagesExcludeSlists << 12) / 0x30);
    if ( a4 )
    {
      v32 &= ~(a4 - 1);
      if ( v32 < a4 )
        v32 = a4;
    }
    if ( v17 > v32 )
      v17 = v32;
LABEL_87:
    if ( (v6 & 0x80u) == 0 && (v15 & 0x1FF) == 0 && (v17 & 0x1FF) == 0 )
    {
      if ( MiGetLargestPageIndex() || (v15 & 0x3FFFF) != 0 || (v17 & 0x3FFFF) != 0 )
        v6 |= 0x1000u;
      else
        v6 |= 0x2000u;
    }
    v44 = v17;
    v34 = v6 & 0xFFFFBFFF;
    v46 = v16;
    v6 |= 0x4000u;
    if ( v16 > 2 )
      v6 = v34;
    v40 = v17 << 12;
    v35 = MiAddPhysicalMemory(v30, (__int64 *)&v41, &v40, v6, 0LL);
    v49 = v35;
    if ( v35 >= 0 )
    {
      v31 = v40;
LABEL_99:
      v10 += v31;
      v36 = v31 + v41;
      v37 = v9 - v10;
      v41 += v31;
      v40 = v9 - v10;
      if ( v9 == v10 )
      {
        v20 = v49;
        goto LABEL_107;
      }
      goto LABEL_104;
    }
    if ( v35 != -1073741670 && v35 != -1073741523 )
    {
      v20 = v35;
      goto LABEL_107;
    }
    v36 = v41;
    v37 = v40;
LABEL_104:
    v15 = v36 >> 12;
    v17 = MiRestrictRangeToNode(v15, v37 >> 12);
    v7 = v42;
  }
  v20 = -1073741800;
LABEL_107:
  v14 = 0;
  if ( !v10 )
    v14 = v20;
  *a3 = v10;
LABEL_110:
  if ( !a6 && v14 >= 0 && (v6 & 2) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v14;
}
