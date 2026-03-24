/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C007C9B0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005F0EC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0005FC8 (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0015614 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079C88 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079E00 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A0C8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007D6C0 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00850D0 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0086784 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00871A8 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // r13
  _QWORD *v3; // r9
  unsigned int v4; // ecx
  PSLIST_ENTRY v5; // rbx
  struct _SLIST_ENTRY *v6; // rax
  struct _SLIST_ENTRY *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r8
  PSLIST_ENTRY v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned int v17; // r15d
  struct _SLIST_ENTRY *v18; // r12
  struct _SLIST_ENTRY *v19; // rcx
  __int64 v20; // r14
  struct _SLIST_ENTRY *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  struct _SLIST_ENTRY *v25; // rcx
  __int64 v26; // rbp
  struct _SLIST_ENTRY *v27; // rcx
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rbx
  struct _SLIST_ENTRY *v32; // rcx
  __int64 v33; // rdi
  struct _SLIST_ENTRY *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rax
  PSLIST_ENTRY v42; // rbx
  unsigned int v43; // r14d
  __int64 v45; // r15
  struct _SLIST_ENTRY *v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _SLIST_ENTRY *v52; // rcx
  struct _SLIST_ENTRY *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rax
  struct _SLIST_ENTRY *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r12
  struct _SLIST_ENTRY *v60; // rcx
  struct _SLIST_ENTRY *v61; // r15
  struct _SLIST_ENTRY *v62; // rdi
  __int64 v63; // r14
  struct _SLIST_ENTRY *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbp
  struct _SLIST_ENTRY *v68; // rcx
  __int64 v69; // rbp
  __int64 v70; // rdx
  struct _SLIST_ENTRY *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rbp
  int v76; // eax
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  CCHAR LeastSignificantBit; // al
  __int64 v81; // rax
  struct _SLIST_ENTRY *v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // rcx
  _QWORD *v87; // rax
  __int64 v88; // rcx
  struct _SLIST_ENTRY *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // rax
  _QWORD *v94; // rax
  struct _SLIST_ENTRY *v95; // rsi
  struct _RTL_BALANCED_NODE *v96; // rdi
  struct _RTL_BALANCED_NODE *v97; // rax
  struct VIDMM_RECYCLE_RANGE *v98; // rdi
  _QWORD v99[2]; // [rsp+30h] [rbp-68h] BYREF
  char v100; // [rsp+40h] [rbp-58h]
  unsigned int v101; // [rsp+A0h] [rbp+8h]
  __int64 v102; // [rsp+A8h] [rbp+10h]
  int v103; // [rsp+A8h] [rbp+10h]
  struct _SLIST_ENTRY *v104; // [rsp+B0h] [rbp+18h]
  __int64 v105; // [rsp+B0h] [rbp+18h]
  __int64 v106; // [rsp+B8h] [rbp+20h]

  Next = ListEntry[5].Next;
  v3 = 0LL;
  v4 = *((_DWORD *)&ListEntry[13].Next + 2);
  v5 = 0LL;
  v101 = v4;
  v6 = ListEntry[4].Next;
  v7 = v6[8].Next;
  v8 = *((_QWORD *)&v6[4].Next + 1) + 72LL;
  if ( v7 != (struct _SLIST_ENTRY *)v8 )
    v3 = &v7[-8].Next + 1;
  if ( v3 )
  {
    if ( v4 )
    {
      v9 = v4 - 1;
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == 1 )
        {
          v5 = (PSLIST_ENTRY)v3[19];
        }
        else
        {
          v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
          v10[3] = 270LL;
          v10[4] = 52LL;
          v10[5] = 10LL;
          v10[6] = 0LL;
          v10[7] = 0LL;
          WdLogEvent5_WdCriticalError(v10);
        }
      }
      else
      {
        v5 = (PSLIST_ENTRY)v3[18];
      }
    }
    else
    {
      v5 = (PSLIST_ENTRY)v3[17];
    }
  }
  v11 = *((_QWORD *)&ListEntry[4].Next + 1);
  v12 = 0LL;
  v13 = 0LL;
  v14 = *(_QWORD *)(v11 + 120);
  v15 = *(_QWORD *)(v11 + 72) + 72LL;
  if ( v14 != v15 )
    v12 = (_QWORD *)(v14 - 120);
  if ( v12 )
  {
    v15 = *((unsigned int *)&ListEntry[13].Next + 2);
    if ( (_DWORD)v15 )
    {
      v15 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v15 )
      {
        if ( (_DWORD)v15 == 1 )
        {
          v13 = (PSLIST_ENTRY)v12[19];
        }
        else
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
          v16[3] = 270LL;
          v16[4] = 52LL;
          v16[5] = 10LL;
          v16[6] = 0LL;
          v16[7] = 0LL;
          WdLogEvent5_WdCriticalError(v16);
        }
      }
      else
      {
        v13 = (PSLIST_ENTRY)v12[18];
      }
    }
    else
    {
      v13 = (PSLIST_ENTRY)v12[17];
    }
  }
  if ( v5 )
  {
    if ( v13 )
    {
      v17 = *((_DWORD *)&ListEntry[5].Next + 2);
      v18 = v5[4].Next;
      v106 = *((_QWORD *)&v13[4].Next + 1);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)ListEntry[5].Next[2].Next, v17, (__int64)v5);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)ListEntry[5].Next[2].Next, v17, (__int64)ListEntry);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)ListEntry[5].Next[2].Next, v17, (__int64)v13);
      v19 = v5[6].Next;
      v104 = v5[2].Next;
      v102 = *((_QWORD *)&v13[2].Next + 1);
      v20 = *((_QWORD *)&Next[2].Next->Next + 1);
      if ( v19 )
      {
        ExFreePoolWithTag(v19, 0);
        v5[6].Next = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v5[5].Next, 1, (__int64)v5);
      v21 = v5[5].Next;
      v22 = *((_QWORD *)&v21->Next + 1) - 1LL;
      *((_QWORD *)&v21->Next + 1) = v22;
      if ( !v21->Next && !v22 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v21);
      *((_BYTE *)&v5[14].Next + 8) = 1;
      v5[14].Next = 0LL;
      v23 = *(unsigned int *)(v20 + 1612);
      v24 = *(_QWORD *)(v20 + 1320);
      if ( (unsigned int)v23 >= 4 )
      {
        ++*(_DWORD *)(v24 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v24) < *(_WORD *)(v24 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v24, v5);
        }
        else
        {
          ++*(_DWORD *)(v24 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v24 + 56))(v5, v24);
        }
      }
      else
      {
        *(_QWORD *)(v20 + 8 * v23 + 1648) = v5;
        ++*(_DWORD *)(v20 + 1612);
      }
      --*(_DWORD *)(v20 + 1680);
      v25 = ListEntry[6].Next;
      v26 = *((_QWORD *)&Next[2].Next->Next + 1);
      if ( v25 )
      {
        ExFreePoolWithTag(v25, 0);
        ListEntry[6].Next = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)ListEntry[5].Next, 1, (__int64)ListEntry);
      v27 = ListEntry[5].Next;
      v28 = *((_QWORD *)&v27->Next + 1) - 1LL;
      v29 = v27->Next == 0LL;
      *((_QWORD *)&v27->Next + 1) = v28;
      if ( v29 && !v28 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v27);
      *((_BYTE *)&ListEntry[14].Next + 8) = 1;
      ListEntry[14].Next = 0LL;
      v30 = *(unsigned int *)(v26 + 1612);
      v31 = *(_QWORD *)(v26 + 1320);
      if ( (unsigned int)v30 >= 4 )
      {
        ++*(_DWORD *)(v31 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v31) < *(_WORD *)(v31 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v31, ListEntry);
        }
        else
        {
          ++*(_DWORD *)(v31 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v31 + 56))(ListEntry, v31);
        }
      }
      else
      {
        *(_QWORD *)(v26 + 8 * v30 + 1648) = ListEntry;
        ++*(_DWORD *)(v26 + 1612);
      }
      --*(_DWORD *)(v26 + 1680);
      v32 = v13[6].Next;
      v33 = *((_QWORD *)&Next[2].Next->Next + 1);
      if ( v32 )
      {
        ExFreePoolWithTag(v32, 0);
        v13[6].Next = 0LL;
      }
      VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v13[5].Next, 1, (__int64)v13);
      v34 = v13[5].Next;
      v35 = *((_QWORD *)&v34->Next + 1) - 1LL;
      v29 = v34->Next == 0LL;
      *((_QWORD *)&v34->Next + 1) = v35;
      if ( v29 && !v35 )
        VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v34);
      *((_BYTE *)&v13[14].Next + 8) = 1;
      v13[14].Next = 0LL;
      v36 = *(unsigned int *)(v33 + 1612);
      v37 = *(_QWORD *)(v33 + 1320);
      if ( (unsigned int)v36 >= 4 )
      {
        ++*(_DWORD *)(v37 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v37) < *(_WORD *)(v37 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v37, v13);
        }
        else
        {
          ++*(_DWORD *)(v37 + 32);
          (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v37 + 56))(v13, v37);
        }
      }
      else
      {
        *(_QWORD *)(v33 + 8 * v36 + 1648) = v13;
        ++*(_DWORD *)(v33 + 1612);
      }
      --*(_DWORD *)(v33 + 1680);
      v38 = *((_QWORD *)&Next[2].Next->Next + 1);
      v39 = *(_DWORD *)(v38 + 1612);
      v40 = *(_QWORD *)(v38 + 1320);
      if ( v39 )
      {
        v41 = (unsigned int)(v39 - 1);
        v42 = *(PSLIST_ENTRY *)(v38 + 8 * v41 + 1648);
        *(_QWORD *)(v38 + 8 * v41 + 1648) = 0LL;
        --*(_DWORD *)(v38 + 1612);
      }
      else
      {
        ++*(_DWORD *)(v40 + 20);
        v42 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v40);
        if ( !v42 )
        {
          ++*(_DWORD *)(v40 + 24);
          v42 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v40 + 48))(
                                *(unsigned int *)(v40 + 36),
                                *(unsigned int *)(v40 + 44),
                                *(unsigned int *)(v40 + 40),
                                v40);
        }
      }
      v43 = v101;
      if ( v42 )
      {
        ++*(_DWORD *)(v38 + 1680);
        VIDMM_RECYCLE_MULTIRANGE::Init(v42, v101, Next, v104, v102);
      }
      *((_QWORD *)&v42[4].Next + 1) = v106;
      v42[4].Next = v18;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v42);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(&Next[2].Next->Next, v17, (__int64)v42);
      goto LABEL_149;
    }
    v13 = ListEntry;
  }
  else
  {
    if ( !v13 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)ListEntry;
    v5 = ListEntry;
  }
  v45 = *((int *)&ListEntry[5].Next + 2);
  v103 = *((_DWORD *)&ListEntry[5].Next + 2);
  v46 = ListEntry[5].Next[2].Next;
  v47 = WdLogNewEntry5_WdEvent(v15, v14);
  *(_QWORD *)(v47 + 24) = v5;
  *(_QWORD *)(v47 + 32) = v45;
  WdLogEvent5_WdEvent(v47);
  if ( (_DWORD)v45 )
  {
    if ( (_DWORD)v45 == 1 )
    {
      v52 = (struct _SLIST_ENTRY *)((char *)v46 + 56);
    }
    else
    {
      if ( (_DWORD)v45 != 2 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v45 - 1), v48);
        v49[3] = 270LL;
        v49[4] = 52LL;
        v49[5] = 16LL;
        v49[6] = v45;
        v49[7] = 0LL;
        WdLogEvent5_WdCriticalError(v49);
        goto LABEL_72;
      }
      v52 = v46 + 4;
    }
  }
  else
  {
    v52 = v46 + 3;
  }
  RtlAvlRemoveNode(v52, v5);
LABEL_72:
  *((_DWORD *)&v5[5].Next + 2) = 3;
  v53 = ListEntry[5].Next[2].Next;
  v54 = WdLogNewEntry5_WdEvent(v51, v50);
  *(_QWORD *)(v54 + 24) = v13;
  *(_QWORD *)(v54 + 32) = v45;
  WdLogEvent5_WdEvent(v54);
  if ( (_DWORD)v45 )
  {
    if ( (_DWORD)v45 == 1 )
    {
      v57 = (struct _SLIST_ENTRY *)((char *)v53 + 56);
    }
    else
    {
      if ( (_DWORD)v45 != 2 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v45 - 1), v55);
        v56[3] = 270LL;
        v56[4] = 52LL;
        v56[5] = 16LL;
        v56[6] = v45;
        v56[7] = 0LL;
        WdLogEvent5_WdCriticalError(v56);
        goto LABEL_80;
      }
      v57 = v53 + 4;
    }
  }
  else
  {
    v57 = v53 + 3;
  }
  RtlAvlRemoveNode(v57, v13);
LABEL_80:
  v58 = *((_QWORD *)&v13[4].Next + 1);
  v59 = *((_QWORD *)&v13[2].Next + 1);
  *((_DWORD *)&v13[5].Next + 2) = 3;
  v60 = v5[6].Next;
  v61 = v5[2].Next;
  v62 = v5[4].Next;
  v105 = v58;
  v63 = *((_QWORD *)&Next[2].Next->Next + 1);
  if ( v60 )
  {
    ExFreePoolWithTag(v60, 0);
    v5[6].Next = 0LL;
  }
  VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v5[5].Next, 1, (__int64)v5);
  v64 = v5[5].Next;
  v65 = *((_QWORD *)&v64->Next + 1) - 1LL;
  v29 = v64->Next == 0LL;
  *((_QWORD *)&v64->Next + 1) = v65;
  if ( v29 && !v65 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v64);
  *((_BYTE *)&v5[14].Next + 8) = 1;
  v5[14].Next = 0LL;
  v66 = *(unsigned int *)(v63 + 1612);
  v67 = *(_QWORD *)(v63 + 1320);
  if ( (unsigned int)v66 >= 4 )
  {
    ++*(_DWORD *)(v67 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v67) < *(_WORD *)(v67 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v67, v5);
    }
    else
    {
      ++*(_DWORD *)(v67 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v67 + 56))(v5, v67);
    }
  }
  else
  {
    *(_QWORD *)(v63 + 8 * v66 + 1648) = v5;
    ++*(_DWORD *)(v63 + 1612);
  }
  --*(_DWORD *)(v63 + 1680);
  v68 = v13[6].Next;
  v69 = *((_QWORD *)&Next[2].Next->Next + 1);
  if ( v68 )
  {
    ExFreePoolWithTag(v68, 0);
    v13[6].Next = 0LL;
  }
  VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v13[5].Next, 1, (__int64)v13);
  v71 = v13[5].Next;
  v72 = *((_QWORD *)&v71->Next + 1) - 1LL;
  v29 = v71->Next == 0LL;
  *((_QWORD *)&v71->Next + 1) = v72;
  if ( v29 && !v72 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v71);
  *((_BYTE *)&v13[14].Next + 8) = 1;
  v13[14].Next = 0LL;
  v73 = *(unsigned int *)(v69 + 1612);
  v74 = *(_QWORD *)(v69 + 1320);
  if ( (unsigned int)v73 >= 4 )
  {
    ++*(_DWORD *)(v74 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v74) < *(_WORD *)(v74 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v74, v13);
    }
    else
    {
      ++*(_DWORD *)(v74 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v74 + 56))(v13, v74);
    }
  }
  else
  {
    *(_QWORD *)(v69 + 8 * v73 + 1648) = v13;
    ++*(_DWORD *)(v69 + 1612);
  }
  --*(_DWORD *)(v69 + 1680);
  v75 = *((_QWORD *)&Next[2].Next->Next + 1);
  v76 = *(_DWORD *)(v75 + 1612);
  v77 = *(_QWORD *)(v75 + 1320);
  if ( v76 )
  {
    v78 = (unsigned int)(v76 - 1);
    v42 = *(PSLIST_ENTRY *)(v75 + 8 * v78 + 1648);
    *(_QWORD *)(v75 + 8 * v78 + 1648) = 0LL;
    --*(_DWORD *)(v75 + 1612);
  }
  else
  {
    ++*(_DWORD *)(v77 + 20);
    v42 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v77);
    if ( !v42 )
    {
      ++*(_DWORD *)(v77 + 24);
      v42 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v77 + 48))(
                            *(unsigned int *)(v77 + 36),
                            *(unsigned int *)(v77 + 44),
                            *(unsigned int *)(v77 + 40),
                            v77);
    }
  }
  if ( v42 )
  {
    ++*(_DWORD *)(v75 + 1680);
    v79 = WdLogNewEntry5_WdEvent(v71, v70);
    *(_QWORD *)(v79 + 24) = v42;
    WdLogEvent5_WdEvent(v79);
    v43 = v101;
    v42[2].Next = v61;
    v42[4].Next = 0LL;
    *((_QWORD *)&v42[4].Next + 1) = 0LL;
    LOWORD(v42[8].Next) = 0;
    *((_DWORD *)&v42[1].Next + 2) = 1;
    v42[5].Next = Next;
    *((_QWORD *)&v42[2].Next + 1) = v59;
    v42[3].Next = v61;
    *((_DWORD *)&v42[13].Next + 2) = v101;
    ++*((_QWORD *)&Next->Next + 1);
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v42[2].Next);
    if ( LeastSignificantBit < 0 )
      v81 = 0LL;
    else
      v81 = 1LL << LeastSignificantBit;
    *((_QWORD *)&v42[3].Next + 1) = v81;
    v82 = v42[5].Next;
    *((_QWORD *)&v42[5].Next + 1) = 3LL;
    v42[6].Next = 0LL;
    *((_QWORD *)&v42[6].Next + 1) = 0LL;
    v42[7].Next = 0LL;
    *((_QWORD *)&v42[7].Next + 1) = 0LL;
    BYTE2(v42[8].Next) = 0;
    *((_QWORD *)&v42[8].Next + 1) = 0LL;
    v42[9].Next = 0LL;
    v42[12].Next = 0LL;
    *((_WORD *)&v42[9].Next + 4) = 0;
    v42[10].Next = 0LL;
    *((_QWORD *)&v42[10].Next + 1) = 0LL;
    *((_QWORD *)&v42[11].Next + 1) = 0LL;
    v42[11].Next = 0LL;
    *((_QWORD *)&v42[12].Next + 1) = 0LL;
    v42[13].Next = 0LL;
    *((_BYTE *)&v42[14].Next + 8) = 0;
    v42[14].Next = 0LL;
    v83 = *((_QWORD *)&v82[8].Next + 1);
    if ( v83 )
    {
      v84 = *(_QWORD *)(v83 + 24) + 144LL * *(_QWORD *)(v83 + 32);
      *(_DWORD *)v84 = 0;
      *(_QWORD *)(v84 + 8) = v42;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v84 + 16), 0LL);
      ++*(_QWORD *)(*((_QWORD *)&v82[8].Next + 1) + 32LL);
      v85 = *((_QWORD *)&v82[8].Next + 1);
      if ( *(_QWORD *)(v85 + 32) == *(_QWORD *)(v85 + 48) )
      {
        *(_QWORD *)(v85 + 32) = 0LL;
        *(_BYTE *)(*((_QWORD *)&v82[8].Next + 1) + 40LL) = 1;
      }
    }
  }
  else
  {
    v43 = v101;
  }
  *((_QWORD *)&v42[4].Next + 1) = v105;
  v42[4].Next = v62;
  while ( 1 )
  {
    v86 = *((unsigned int *)&v42[13].Next + 2);
    if ( (_DWORD)v86 )
    {
      v86 = (unsigned int)(v86 - 1);
      if ( (_DWORD)v86 )
      {
        if ( (_DWORD)v86 == 1 )
        {
          *((_QWORD *)&v62[9].Next + 1) = v42;
        }
        else
        {
          v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v86, v70);
          v87[3] = 270LL;
          v87[4] = 52LL;
          v87[5] = 10LL;
          v87[6] = 0LL;
          v87[7] = 0LL;
          WdLogEvent5_WdCriticalError(v87);
        }
      }
      else
      {
        v62[9].Next = v42;
      }
    }
    else
    {
      *((_QWORD *)&v62[8].Next + 1) = v42;
    }
    if ( v62 == *(&v42[4].Next + 1) )
      break;
    v70 = *((_QWORD *)&v62[7].Next + 1);
    v88 = *((_QWORD *)&v62[4].Next + 1);
    v62 = 0LL;
    if ( v70 != v88 + 72 )
      v62 = (struct _SLIST_ENTRY *)(v70 - 120);
  }
  v89 = Next[2].Next;
  v90 = WdLogNewEntry5_WdEvent(v86, v70);
  *(_QWORD *)(v90 + 24) = v42;
  *(_QWORD *)(v90 + 32) = v103;
  WdLogEvent5_WdEvent(v90);
  v93 = *((_QWORD *)&v42[3].Next + 1);
  v99[0] = *((_QWORD *)&v42[2].Next + 1) - (unsigned __int64)v42[2].Next;
  v99[1] = v93;
  v100 = 0;
  switch ( v103 )
  {
    case 0:
      v95 = v89 + 3;
      LOBYTE(v92) = 0;
      v96 = (struct _RTL_BALANCED_NODE *)v89[3].Next;
      if ( v96 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v99, v96) < 0 )
          {
            if ( !v96->Children[0] )
              goto LABEL_146;
            v96 = v96->Children[0];
          }
          if ( !v96->Children[1] )
            break;
          v96 = v96->Children[1];
        }
LABEL_131:
        LOBYTE(v92) = 1;
      }
      goto LABEL_147;
    case 1:
      v95 = (struct _SLIST_ENTRY *)((char *)v89 + 56);
      LOBYTE(v92) = 0;
      v96 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)&v89[3].Next + 1);
      if ( v96 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v99, v96) >= 0 )
          {
            if ( !v96->Children[1] )
              goto LABEL_131;
            v96 = v96->Children[1];
          }
          if ( !v96->Children[0] )
            break;
          v96 = v96->Children[0];
        }
LABEL_146:
        LOBYTE(v92) = 0;
      }
      goto LABEL_147;
    case 2:
      v95 = v89 + 4;
      LOBYTE(v92) = 0;
      v96 = (struct _RTL_BALANCED_NODE *)v89[4].Next;
      if ( v96 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v99, v96) < 0 )
          {
            v97 = v96->Children[0];
            if ( !v96->Children[0] )
              goto LABEL_146;
          }
          else
          {
            v97 = v96->Children[1];
            if ( !v97 )
              goto LABEL_131;
          }
          v96 = v97;
        }
      }
LABEL_147:
      RtlAvlInsertNodeEx(v95, v96, v92, v42);
      goto LABEL_148;
  }
  v94 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v103 - 1), v91);
  v94[3] = 270LL;
  v94[4] = 52LL;
  v94[5] = 15LL;
  v94[6] = v103;
  v94[7] = 0LL;
  WdLogEvent5_WdCriticalError(v94);
LABEL_148:
  *((_DWORD *)&v42[5].Next + 2) = v103;
LABEL_149:
  if ( Next->Next == (struct _SLIST_ENTRY *)1 && !v43 )
  {
    v98 = (struct VIDMM_RECYCLE_RANGE *)v42[4].Next;
    if ( !*((_DWORD *)v98 + 16) )
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)Next[2].Next, 2LL, (__int64)v42);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
        *((VIDMM_RECYCLE_HEAP_MGR **)&Next[2].Next->Next + 1),
        (struct VIDMM_RECYCLE_MULTIRANGE *)v42);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&Next[2].Next->Next + 1), v98);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v42;
}
