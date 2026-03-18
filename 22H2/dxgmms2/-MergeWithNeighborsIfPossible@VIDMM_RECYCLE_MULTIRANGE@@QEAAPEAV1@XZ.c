/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00A0890
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0005B40 (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0017578 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C009E990 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C00A0740 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00A1368 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00A13F4 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00A1470 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0AB0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B2348 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(_QWORD *Entry)
{
  _QWORD *v1; // r14
  _QWORD *v3; // r9
  int v4; // ecx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // r15d
  __int64 v16; // r12
  __int64 v17; // r13
  void *v18; // rcx
  __int64 v19; // rbp
  VIDMM_RECYCLE_BLOCK *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // rcx
  __int64 v24; // rsi
  VIDMM_RECYCLE_BLOCK *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rcx
  __int64 v29; // rdi
  VIDMM_RECYCLE_BLOCK *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rax
  VIDMM_RECYCLE_MULTIRANGE *v36; // rbx
  int v37; // edi
  bool v38; // zf
  __int64 v40; // rbp
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // r13
  void *v46; // rcx
  __int64 v47; // r15
  _QWORD *v48; // rdi
  __int64 v49; // rbp
  VIDMM_RECYCLE_BLOCK *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  void *v53; // rcx
  __int64 v54; // rsi
  VIDMM_RECYCLE_BLOCK *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rsi
  int v59; // eax
  __int64 v60; // rax
  int v61; // r15d
  CCHAR LeastSignificantBit; // al
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rcx
  int v68; // ecx
  int v69; // ecx
  __int64 v70; // rcx
  _QWORD *v71; // rdi
  __int64 v72; // r8
  __int64 v73; // rax
  _QWORD *v74; // rsi
  struct _RTL_BALANCED_NODE *v75; // rdi
  struct _RTL_BALANCED_NODE *v76; // rax
  struct VIDMM_RECYCLE_RANGE *v77; // rdi
  _QWORD v78[2]; // [rsp+30h] [rbp-58h] BYREF
  char v79; // [rsp+40h] [rbp-48h]
  int v80; // [rsp+90h] [rbp+8h]
  __int64 v81; // [rsp+98h] [rbp+10h]
  int v82; // [rsp+98h] [rbp+10h]
  __int64 v83; // [rsp+A0h] [rbp+18h]

  v1 = (_QWORD *)Entry[10];
  v3 = 0LL;
  v4 = *((_DWORD *)Entry + 54);
  v5 = 0LL;
  v80 = v4;
  v6 = Entry[8];
  v7 = *(_QWORD *)(v6 + 128);
  if ( v7 != *(_QWORD *)(v6 + 72) + 72LL )
    v3 = (_QWORD *)(v7 - 120);
  if ( v3 )
  {
    if ( v4 )
    {
      v8 = v4 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v5 = (_QWORD *)v3[19];
        }
        else
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
        }
      }
      else
      {
        v5 = (_QWORD *)v3[18];
      }
    }
    else
    {
      v5 = (_QWORD *)v3[17];
    }
  }
  v9 = Entry[9];
  v10 = 0LL;
  v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 120);
  if ( v12 != *(_QWORD *)(v9 + 72) + 72LL )
    v10 = (_QWORD *)(v12 - 120);
  if ( v10 )
  {
    v13 = *((_DWORD *)Entry + 54);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v11 = (_QWORD *)v10[19];
        }
        else
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
        }
      }
      else
      {
        v11 = (_QWORD *)v10[18];
      }
    }
    else
    {
      v11 = (_QWORD *)v10[17];
    }
  }
  if ( v5 )
  {
    if ( v11 )
    {
      v15 = *((_DWORD *)Entry + 22);
      v16 = v5[8];
      v17 = v11[9];
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(Entry[10] + 32LL), v15, v5);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(Entry[10] + 32LL), v15, Entry);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(Entry[10] + 32LL), v15, v11);
      v18 = (void *)v5[12];
      v83 = v5[4];
      v81 = v11[5];
      v19 = *(_QWORD *)(v1[4] + 8LL);
      if ( v18 )
      {
        ExFreePoolWithTag(v18, 0);
        v5[12] = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v5[10], 1, (__int64)v5);
      v20 = (VIDMM_RECYCLE_BLOCK *)v5[10];
      v21 = *((_QWORD *)v20 + 1) - 1LL;
      v38 = *(_QWORD *)v20 == 0LL;
      *((_QWORD *)v20 + 1) = v21;
      if ( v38 && !v21 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v20);
      *((_BYTE *)v5 + 232) = 1;
      v5[28] = 0LL;
      v22 = *(unsigned int *)(v19 + 1620);
      if ( (unsigned int)v22 >= 4 )
      {
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v19 + 1320), v5);
      }
      else
      {
        *(_QWORD *)(v19 + 8 * v22 + 1656) = v5;
        ++*(_DWORD *)(v19 + 1620);
      }
      --*(_DWORD *)(v19 + 1688);
      v23 = (void *)Entry[12];
      v24 = *(_QWORD *)(v1[4] + 8LL);
      if ( v23 )
      {
        ExFreePoolWithTag(v23, 0);
        Entry[12] = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(Entry[10], 1, (__int64)Entry);
      v25 = (VIDMM_RECYCLE_BLOCK *)Entry[10];
      v26 = *((_QWORD *)v25 + 1) - 1LL;
      v38 = *(_QWORD *)v25 == 0LL;
      *((_QWORD *)v25 + 1) = v26;
      if ( v38 && !v26 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v25);
      *((_BYTE *)Entry + 232) = 1;
      Entry[28] = 0LL;
      v27 = *(unsigned int *)(v24 + 1620);
      if ( (unsigned int)v27 >= 4 )
      {
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v24 + 1320), Entry);
      }
      else
      {
        *(_QWORD *)(v24 + 8 * v27 + 1656) = Entry;
        ++*(_DWORD *)(v24 + 1620);
      }
      --*(_DWORD *)(v24 + 1688);
      v28 = (void *)v11[12];
      v29 = *(_QWORD *)(v1[4] + 8LL);
      if ( v28 )
      {
        ExFreePoolWithTag(v28, 0);
        v11[12] = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v11[10], 1, (__int64)v11);
      v30 = (VIDMM_RECYCLE_BLOCK *)v11[10];
      v31 = *((_QWORD *)v30 + 1) - 1LL;
      v38 = *(_QWORD *)v30 == 0LL;
      *((_QWORD *)v30 + 1) = v31;
      if ( v38 && !v31 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v30);
      *((_BYTE *)v11 + 232) = 1;
      v11[28] = 0LL;
      v32 = *(unsigned int *)(v29 + 1620);
      if ( (unsigned int)v32 >= 4 )
      {
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v29 + 1320), v11);
      }
      else
      {
        *(_QWORD *)(v29 + 8 * v32 + 1656) = v11;
        ++*(_DWORD *)(v29 + 1620);
      }
      --*(_DWORD *)(v29 + 1688);
      v33 = *(_QWORD *)(v1[4] + 8LL);
      v34 = *(_DWORD *)(v33 + 1620);
      if ( v34 )
      {
        v35 = (unsigned int)(v34 - 1);
        v36 = *(VIDMM_RECYCLE_MULTIRANGE **)(v33 + 8 * v35 + 1656);
        *(_QWORD *)(v33 + 8 * v35 + 1656) = 0LL;
        --*(_DWORD *)(v33 + 1620);
      }
      else
      {
        v36 = (VIDMM_RECYCLE_MULTIRANGE *)ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v33 + 1320));
      }
      if ( v36 )
      {
        ++*(_DWORD *)(v33 + 1688);
        v37 = v80;
        VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v36, v80, (__int64)v1, v83, v81);
      }
      else
      {
        v37 = v80;
      }
      *((_QWORD *)v36 + 8) = v16;
      *((_QWORD *)v36 + 9) = v17;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(v36);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v1[4], v15, v36);
      if ( *v1 != 1LL )
        return v36;
      v38 = v37 == 0;
      goto LABEL_140;
    }
    v11 = Entry;
  }
  else
  {
    if ( !v11 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)Entry;
    v5 = Entry;
  }
  v82 = *((_DWORD *)Entry + 22);
  v40 = *(_QWORD *)(Entry[10] + 32LL);
  WdLogSingleEntry2(4LL, v5, v82);
  if ( v82 )
  {
    if ( v82 == 1 )
    {
      v41 = v40 + 56;
    }
    else
    {
      if ( v82 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v82, 0LL);
        goto LABEL_67;
      }
      v41 = v40 + 64;
    }
  }
  else
  {
    v41 = v40 + 48;
  }
  RtlAvlRemoveNode(v41, v5);
LABEL_67:
  *((_DWORD *)v5 + 22) = 3;
  v42 = *(_QWORD *)(Entry[10] + 32LL);
  WdLogSingleEntry2(4LL, v11, v82);
  if ( v82 )
  {
    if ( v82 == 1 )
    {
      v43 = v42 + 56;
    }
    else
    {
      if ( v82 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v82, 0LL);
        goto LABEL_75;
      }
      v43 = v42 + 64;
    }
  }
  else
  {
    v43 = v42 + 48;
  }
  RtlAvlRemoveNode(v43, v11);
LABEL_75:
  v44 = v11[5];
  v45 = v11[9];
  *((_DWORD *)v11 + 22) = 3;
  v46 = (void *)v5[12];
  v47 = v5[4];
  v48 = (_QWORD *)v5[8];
  v49 = *(_QWORD *)(v1[4] + 8LL);
  if ( v46 )
  {
    ExFreePoolWithTag(v46, 0);
    v5[12] = 0LL;
  }
  VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v5[10], 1, (__int64)v5);
  v50 = (VIDMM_RECYCLE_BLOCK *)v5[10];
  v51 = *((_QWORD *)v50 + 1) - 1LL;
  v38 = *(_QWORD *)v50 == 0LL;
  *((_QWORD *)v50 + 1) = v51;
  if ( v38 && !v51 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v50);
  *((_BYTE *)v5 + 232) = 1;
  v5[28] = 0LL;
  v52 = *(unsigned int *)(v49 + 1620);
  if ( (unsigned int)v52 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v49 + 1320), v5);
  }
  else
  {
    *(_QWORD *)(v49 + 8 * v52 + 1656) = v5;
    ++*(_DWORD *)(v49 + 1620);
  }
  --*(_DWORD *)(v49 + 1688);
  v53 = (void *)v11[12];
  v54 = *(_QWORD *)(v1[4] + 8LL);
  if ( v53 )
  {
    ExFreePoolWithTag(v53, 0);
    v11[12] = 0LL;
  }
  VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v11[10], 1, (__int64)v11);
  v55 = (VIDMM_RECYCLE_BLOCK *)v11[10];
  v56 = *((_QWORD *)v55 + 1) - 1LL;
  v38 = *(_QWORD *)v55 == 0LL;
  *((_QWORD *)v55 + 1) = v56;
  if ( v38 && !v56 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v55);
  *((_BYTE *)v11 + 232) = 1;
  v11[28] = 0LL;
  v57 = *(unsigned int *)(v54 + 1620);
  if ( (unsigned int)v57 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v54 + 1320), v11);
  }
  else
  {
    *(_QWORD *)(v54 + 8 * v57 + 1656) = v11;
    ++*(_DWORD *)(v54 + 1620);
  }
  --*(_DWORD *)(v54 + 1688);
  v58 = *(_QWORD *)(v1[4] + 8LL);
  v59 = *(_DWORD *)(v58 + 1620);
  if ( v59 )
  {
    v60 = (unsigned int)(v59 - 1);
    v36 = *(VIDMM_RECYCLE_MULTIRANGE **)(v58 + 8 * v60 + 1656);
    *(_QWORD *)(v58 + 8 * v60 + 1656) = 0LL;
    --*(_DWORD *)(v58 + 1620);
  }
  else
  {
    v36 = (VIDMM_RECYCLE_MULTIRANGE *)ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v58 + 1320));
  }
  if ( v36 )
  {
    ++*(_DWORD *)(v58 + 1688);
    WdLogSingleEntry1(4LL, v36);
    *((_QWORD *)v36 + 4) = v47;
    *((_QWORD *)v36 + 6) = v47;
    v61 = v80;
    *((_DWORD *)v36 + 54) = v80;
    *((_DWORD *)v36 + 6) = 1;
    *((_QWORD *)v36 + 8) = 0LL;
    *((_QWORD *)v36 + 9) = 0LL;
    *((_QWORD *)v36 + 10) = v1;
    *((_QWORD *)v36 + 5) = v44;
    *((_WORD *)v36 + 64) = 0;
    ++v1[1];
    LeastSignificantBit = RtlFindLeastSignificantBit(*((_QWORD *)v36 + 4));
    if ( LeastSignificantBit < 0 )
      v63 = 0LL;
    else
      v63 = 1LL << LeastSignificantBit;
    *((_QWORD *)v36 + 7) = v63;
    v64 = *((_QWORD *)v36 + 10);
    *((_QWORD *)v36 + 11) = 3LL;
    *((_QWORD *)v36 + 12) = 0LL;
    *((_QWORD *)v36 + 13) = 0LL;
    *((_QWORD *)v36 + 14) = 0LL;
    *((_QWORD *)v36 + 15) = 0LL;
    *((_BYTE *)v36 + 130) = 0;
    *((_QWORD *)v36 + 17) = 0LL;
    *((_QWORD *)v36 + 18) = 0LL;
    *((_QWORD *)v36 + 24) = 0LL;
    *((_WORD *)v36 + 76) = 0;
    *((_QWORD *)v36 + 20) = 0LL;
    *((_QWORD *)v36 + 21) = 0LL;
    *((_QWORD *)v36 + 23) = 0LL;
    *((_QWORD *)v36 + 22) = 0LL;
    *((_QWORD *)v36 + 25) = 0LL;
    *((_QWORD *)v36 + 26) = 0LL;
    *((_BYTE *)v36 + 232) = 0;
    *((_QWORD *)v36 + 28) = 0LL;
    v65 = *(_QWORD *)(v64 + 136);
    if ( v65 )
    {
      v66 = *(_QWORD *)(v65 + 24) + 144LL * *(_QWORD *)(v65 + 32);
      *(_DWORD *)v66 = 0;
      *(_QWORD *)(v66 + 8) = v36;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v66 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v64 + 136) + 32LL);
      v67 = *(_QWORD *)(v64 + 136);
      if ( *(_QWORD *)(v67 + 32) == *(_QWORD *)(v67 + 48) )
      {
        *(_QWORD *)(v67 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v64 + 136) + 40LL) = 1;
      }
    }
  }
  else
  {
    v61 = v80;
  }
  *((_QWORD *)v36 + 8) = v48;
  *((_QWORD *)v36 + 9) = v45;
  while ( 1 )
  {
    v68 = *((_DWORD *)v36 + 54);
    if ( v68 )
    {
      v69 = v68 - 1;
      if ( v69 )
      {
        if ( v69 == 1 )
        {
          v48[19] = v36;
        }
        else
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
        }
      }
      else
      {
        v48[18] = v36;
      }
    }
    else
    {
      v48[17] = v36;
    }
    if ( v48 == *((_QWORD **)v36 + 9) )
      break;
    v70 = v48[15];
    if ( v70 == v48[9] + 72LL )
      v48 = 0LL;
    else
      v48 = (_QWORD *)(v70 - 120);
  }
  v71 = (_QWORD *)v1[4];
  WdLogSingleEntry2(4LL, v36, v82);
  v73 = *((_QWORD *)v36 + 7);
  v78[0] = *((_QWORD *)v36 + 5) - *((_QWORD *)v36 + 4);
  v78[1] = v73;
  v79 = 0;
  if ( v82 )
  {
    if ( v82 == 1 )
    {
      v74 = v71 + 7;
      LOBYTE(v72) = 0;
      v75 = (struct _RTL_BALANCED_NODE *)v71[7];
      if ( v75 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v78, v75) >= 0 )
          {
            if ( !v75->Children[1] )
              goto LABEL_121;
            v75 = v75->Children[1];
          }
          if ( !v75->Children[0] )
            break;
          v75 = v75->Children[0];
        }
LABEL_136:
        LOBYTE(v72) = 0;
      }
    }
    else
    {
      if ( v82 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v82, 0LL);
        goto LABEL_138;
      }
      v74 = v71 + 8;
      LOBYTE(v72) = 0;
      v75 = (struct _RTL_BALANCED_NODE *)v71[8];
      if ( v75 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v78, v75) < 0 )
          {
            v76 = v75->Children[0];
            if ( !v75->Children[0] )
              goto LABEL_136;
          }
          else
          {
            v76 = v75->Children[1];
            if ( !v76 )
              goto LABEL_121;
          }
          v75 = v76;
        }
      }
    }
  }
  else
  {
    v74 = v71 + 6;
    LOBYTE(v72) = 0;
    v75 = (struct _RTL_BALANCED_NODE *)v71[6];
    if ( v75 )
    {
      while ( 1 )
      {
        while ( (int)VidMmCompareForInsertAlignedRange(v78, v75) < 0 )
        {
          if ( !v75->Children[0] )
            goto LABEL_136;
          v75 = v75->Children[0];
        }
        if ( !v75->Children[1] )
          break;
        v75 = v75->Children[1];
      }
LABEL_121:
      LOBYTE(v72) = 1;
    }
  }
  RtlAvlInsertNodeEx(v74, v75, v72, v36);
LABEL_138:
  *((_DWORD *)v36 + 22) = v82;
  if ( *v1 == 1LL )
  {
    v38 = v61 == 0;
LABEL_140:
    if ( v38 )
    {
      v77 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v36 + 8);
      if ( !*((_DWORD *)v77 + 16) )
      {
        VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v1[4], 2LL, v36);
        VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v1[4] + 8LL), v36);
        VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v1[4] + 8LL), v77);
      }
    }
  }
  return v36;
}
