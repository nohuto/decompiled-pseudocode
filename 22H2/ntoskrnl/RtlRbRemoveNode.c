/*
 * XREFs of RtlRbRemoveNode @ 0x1402C1170
 * Callers:
 *     KiRemoveTimer2 @ 0x14024AD50 (KiRemoveTimer2.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140272350 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140272C9C (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpSegFreeRangeRemove @ 0x140288914 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14028A070 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF820 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1402C0760 (RtlpHpVsFreeChunkRemove.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402E0AD8 (IoStopDiskIoAttributionForContext.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiSetClockInterval @ 0x1402F045C (KiSetClockInterval.c)
 *     RtlpHpVaMgrAlloc @ 0x1402FC8A0 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x1402FDA88 (RtlpHpVaMgrRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x1402FDE04 (RtlpHpLargeFree.c)
 *     PfSnNameRemove @ 0x14030CB04 (PfSnNameRemove.c)
 *     MiRescanPageFileBitmapPortion @ 0x14030F908 (MiRescanPageFileBitmapPortion.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140330EC0 (MiCoalescePageFileBitmapsCache.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140331318 (MiBitmapsCachedEntryLengthChanged.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140333BF0 (MiInvalidatePageFileBitmapsCache.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14035CD9C (KiRemoveSchedulingGroupQueue.c)
 *     HalFreeCommonBufferV3 @ 0x1404C4530 (HalFreeCommonBufferV3.c)
 *     HalFreeCommonBufferThin @ 0x1404CACF0 (HalFreeCommonBufferThin.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1405208D4 (KiSetVirtualHeteroClockIntervalRequest.c)
 *     MiRemoveSlabEntry @ 0x1405532B0 (MiRemoveSlabEntry.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140582280 (PspJobIoRateVolumeEntryRemove.c)
 *     VmpFaultEntryRemove @ 0x1405A31B0 (VmpFaultEntryRemove.c)
 *     VmpMergeMemoryRanges @ 0x1405A4280 (VmpMergeMemoryRanges.c)
 *     VmpRemoveMemoryRange @ 0x1405A4D94 (VmpRemoveMemoryRange.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14067DEA8 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BC01C (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140723F20 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x140873678 (HvpViewMapShrinkStorage.c)
 *     MiDeleteImageHotPatchState @ 0x1408C9B6C (MiDeleteImageHotPatchState.c)
 *     EtwpDeleteSessionDemuxObject @ 0x14093EFA0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbRemoveNode(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  $7D93978C745EB1C2D28075BAF55422B4 v2; // r10
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  _RTL_BALANCED_NODE *v7; // r14
  char v8; // r10
  unsigned __int64 v9; // rax
  _RTL_BALANCED_NODE *v10; // r11
  PRTL_BALANCED_NODE v11; // rdi
  unsigned __int64 v12; // rax
  _BOOL8 v13; // rsi
  unsigned __int64 ParentValue; // r8
  char v15; // r8
  _RTL_BALANCED_NODE *v16; // rcx
  unsigned __int64 Min; // rax
  unsigned __int64 v18; // rax
  _RTL_BALANCED_NODE *v19; // rax
  _RTL_BALANCED_NODE *v20; // rcx
  char v21; // al
  _RTL_BALANCED_NODE *v22; // rax
  _RTL_BALANCED_NODE *v23; // rax
  $F6ED6B8C35E0C59DCCEDB1F15AA1B54B *v24; // r15
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  char v27; // r9
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rax
  char v31; // r10
  unsigned __int64 v32; // rax
  _RTL_BALANCED_NODE *v33; // r8
  char v34; // al
  unsigned __int64 v35; // rax
  char v36; // cl
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  char v41; // r10
  unsigned __int64 v42; // rbp
  __int64 v43; // rax
  PRTL_BALANCED_NODE *v44; // r15
  unsigned __int64 v45; // rax
  PRTL_BALANCED_NODE v46; // rcx
  unsigned __int64 Root; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v48; // cl
  $7D93978C745EB1C2D28075BAF55422B4 v49; // cl
  _RTL_BALANCED_NODE *v50; // rbp
  __int64 v51; // r10
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rdx
  __int64 v54; // r8
  char v55; // cl
  __int64 v56; // r8
  $424C8BBEF8F6C852886B4C6E806B5DB0 v57; // al
  char v58; // cl
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rax
  int v62; // r8d
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  _RTL_BALANCED_NODE **v68; // r9
  unsigned __int64 v69; // rcx
  _RTL_BALANCED_NODE *v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // r15
  unsigned __int64 v73; // rax
  int v74; // r9d
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  _RTL_BALANCED_NODE *v80; // rax
  _RTL_BALANCED_NODE *v81; // rax
  unsigned __int64 v82; // r9
  __int64 v83; // rcx
  unsigned __int64 v84; // rax
  int v85; // r8d
  __int64 *v86; // r15
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rdi
  _RTL_BALANCED_NODE *v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 *v93; // rdi
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rcx
  bool v96; // zf
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rbp
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rax
  _RTL_BALANCED_NODE *v111; // r10
  unsigned __int64 v112; // rax
  _RTL_BALANCED_NODE *v113; // rax
  unsigned __int64 v114; // rcx

  v2 = Tree->0;
  v4 = (unsigned __int64)Node->Children[0];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)Node;
  v5 = (unsigned __int64)Node->Children[1];
  if ( (*(_BYTE *)&v2 & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)Node;
  v6 = v5;
  if ( v4 )
    v6 = v4;
  v7 = 0LL;
  v8 = *(_BYTE *)&v2 & 1;
  v9 = 0LL;
  if ( v4 )
    v9 = v5;
  if ( !v9 )
  {
    v10 = (_RTL_BALANCED_NODE *)(Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v8 && v10 )
      v10 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)v10);
    v11 = Node;
    if ( !v10 )
    {
      if ( v6 )
        *(_QWORD *)(v6 + 16) = 0LL;
      Min = (unsigned __int64)Tree->Min;
      Root = (unsigned __int64)Tree->Root;
      if ( (Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      if ( (PRTL_BALANCED_NODE)Root != Node )
        goto LABEL_322;
      if ( (Min & 1) != 0 )
      {
        v114 = 0LL;
        LOBYTE(Min) = (unsigned __int8)Tree ^ v6;
        if ( v6 )
          v114 = (unsigned __int64)Tree ^ v6;
        Tree->Min = (_RTL_BALANCED_NODE *)v114;
        v48 = ($7D93978C745EB1C2D28075BAF55422B4)(v114 | 1);
        Tree->0 = v48;
      }
      else
      {
        Tree->Min = (_RTL_BALANCED_NODE *)v6;
        v48 = ($7D93978C745EB1C2D28075BAF55422B4)v6;
      }
      if ( (*(_BYTE *)&v48 & 1) != 0 )
      {
        LOBYTE(Min) = (unsigned __int8)Tree ^ v6;
        if ( v6 )
          v7 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v6);
        Tree->Root = v7;
      }
      else
      {
        Tree->Root = (_RTL_BALANCED_NODE *)v6;
      }
      return Min;
    }
    v12 = (unsigned __int64)v10->Children[1];
    if ( v8 && v12 )
      v12 ^= (unsigned __int64)v10;
    if ( (PRTL_BALANCED_NODE)v12 == Node )
    {
      LODWORD(v13) = 1;
    }
    else
    {
      v18 = (unsigned __int64)v10->Children[0];
      if ( v8 && v18 )
        v18 ^= (unsigned __int64)v10;
      if ( (PRTL_BALANCED_NODE)v18 != Node )
        goto LABEL_322;
      v19 = Tree->Min;
      LODWORD(v13) = 0;
      if ( ((unsigned __int8)v19 & 1) != 0 )
      {
        if ( v19 == (_RTL_BALANCED_NODE *)1 )
          v20 = 0LL;
        else
          v20 = (_RTL_BALANCED_NODE *)((unsigned __int64)v19 ^ ((unsigned __int64)Tree | 1));
      }
      else
      {
        v20 = Tree->Min;
      }
      if ( v20 == Node )
      {
        v21 = (unsigned __int8)v19 & 1;
        if ( v6 )
        {
          if ( v21 )
          {
            Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v6);
            Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ v6 | 1);
          }
          else
          {
            Tree->Min = (_RTL_BALANCED_NODE *)v6;
          }
        }
        else if ( v21 )
        {
          Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v10);
          Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)((unsigned __int8)Tree ^ (unsigned __int8)v10 | 1);
        }
        else
        {
          Tree->Min = v10;
        }
      }
    }
    LOBYTE(ParentValue) = Node->0;
    goto LABEL_14;
  }
  v22 = *(_RTL_BALANCED_NODE **)v5;
  v11 = (PRTL_BALANCED_NODE)v5;
  v10 = (_RTL_BALANCED_NODE *)v5;
  LODWORD(v13) = 1;
  if ( *(_QWORD *)v5 )
  {
    LODWORD(v13) = 0;
    do
    {
      v10 = v11;
      if ( v8 && v22 )
        v11 = (PRTL_BALANCED_NODE)((unsigned __int64)v22 ^ (unsigned __int64)v11);
      else
        v11 = v22;
      v22 = v11->Children[0];
    }
    while ( v11->Children[0] );
  }
  if ( v8 && v4 )
    v23 = (_RTL_BALANCED_NODE *)(v4 ^ (unsigned __int64)v11);
  else
    v23 = (_RTL_BALANCED_NODE *)v4;
  v11->Children[0] = v23;
  v24 = ($F6ED6B8C35E0C59DCCEDB1F15AA1B54B *)(v4 + 16);
  v25 = *(_QWORD *)(v4 + 16);
  v26 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
  v27 = *(_BYTE *)&Tree->0 & 1;
  if ( v27 && v26 )
    v26 ^= v4;
  if ( (PRTL_BALANCED_NODE)v26 != Node )
    goto LABEL_322;
  v28 = (unsigned __int64)v11 ^ v4;
  if ( !v27 )
    v28 = (unsigned __int64)v11;
  v24->ParentValue = v25 & 3 | v28;
  v29 = *(_QWORD *)(v5 + 16);
  v30 = v29 & 0xFFFFFFFFFFFFFFFCuLL;
  v31 = *(_BYTE *)&Tree->0 & 1;
  if ( v31 && v30 )
    v30 ^= v5;
  if ( (PRTL_BALANCED_NODE)v30 != Node )
    goto LABEL_322;
  v32 = v5 ^ (unsigned __int64)v11;
  v33 = (_RTL_BALANCED_NODE *)(v5 ^ (unsigned __int64)v11);
  if ( !v31 )
    v32 = (unsigned __int64)v11;
  *(_QWORD *)(v5 + 16) = v29 & 3 | v32;
  v6 = (unsigned __int64)v11->Children[1];
  v34 = *(_BYTE *)&Tree->0 & 1;
  if ( v34 && v6 )
    v6 ^= (unsigned __int64)v11;
  if ( !v34 )
    v33 = (_RTL_BALANCED_NODE *)v5;
  v11->Children[1] = v33;
  ParentValue = v11->ParentValue;
  v35 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  v36 = *(_BYTE *)&Tree->0 & 1;
  if ( v36 && v35 )
    v37 = (unsigned __int64)v11 ^ v35;
  else
    v37 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (_RTL_BALANCED_NODE *)v37 != v10 )
  {
    if ( v36 )
    {
      if ( !v35 )
        goto LABEL_227;
      v35 ^= (unsigned __int64)v11;
    }
    if ( v35 )
      goto LABEL_322;
LABEL_227:
    if ( v11 != v10 )
      goto LABEL_322;
  }
  v38 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v36 )
  {
    if ( v38 )
      v38 ^= (unsigned __int64)Node;
    if ( v38 )
      v38 ^= (unsigned __int64)v11;
  }
  v39 = v38 | ParentValue & 3;
  v11->ParentValue = v39;
  v11->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v39 ^ (v39 ^ *(_BYTE *)&Node->0) & 1);
  v40 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v40 )
  {
    v41 = *(_BYTE *)&Tree->0 & 1;
    if ( v41 )
      v40 ^= (unsigned __int64)Node;
    v42 = *(_QWORD *)(v40 + 8);
    if ( v41 && v42 )
      v42 ^= v40;
    v43 = 0LL;
    if ( (PRTL_BALANCED_NODE)v42 == Node )
      v43 = 8LL;
    v44 = (PRTL_BALANCED_NODE *)(v43 + v40);
    v45 = *(_QWORD *)(v43 + v40);
    if ( v41 && v45 )
      v45 ^= v40;
    if ( (PRTL_BALANCED_NODE)v45 != Node )
      goto LABEL_322;
    v46 = (PRTL_BALANCED_NODE)((unsigned __int64)v11 ^ v40);
    if ( !v41 )
      v46 = v11;
    *v44 = v46;
  }
  else
  {
    v111 = Tree->Min;
    v112 = (unsigned __int64)Tree->Root;
    if ( ((unsigned __int8)v111 & 1) != 0 )
    {
      if ( v112 )
        v112 ^= (unsigned __int64)Tree;
      else
        v112 = 0LL;
    }
    if ( (PRTL_BALANCED_NODE)v112 != Node )
      goto LABEL_322;
    v113 = v11;
    if ( ((unsigned __int8)v111 & 1) != 0 )
      v113 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ (unsigned __int64)v11);
    Tree->Root = v113;
  }
LABEL_14:
  v15 = ParentValue & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v6 )
    v16 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v10);
  else
    v16 = (_RTL_BALANCED_NODE *)v6;
  LOBYTE(Min) = v13;
  v10->Children[v13] = v16;
  if ( v6 )
  {
    Min = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v58 = *(_BYTE *)&Tree->0 & 1;
    if ( v58 && Min )
      Min ^= v6;
    if ( (PRTL_BALANCED_NODE)Min != v11 )
      goto LABEL_322;
    if ( v58 && v10 )
      v10 = (_RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v10);
    *(_QWORD *)(v6 + 16) = v10;
    return Min;
  }
  if ( v15 )
    return Min;
  v49 = Tree->0;
  while ( 1 )
  {
    v50 = v10;
    v51 = !v13;
    v52 = (unsigned __int64)v10->Children[v51];
    if ( (*(_BYTE *)&v49 & 1) != 0 && v52 )
      v53 = (unsigned __int64)v10 ^ v52;
    else
      v53 = (unsigned __int64)v10->Children[v51];
    if ( (*(_BYTE *)(v53 + 16) & 1) == 0 )
      goto LABEL_72;
    v72 = (unsigned __int64)Tree->Root;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( v72 )
        v72 ^= (unsigned __int64)Tree;
      else
        v72 = 0LL;
    }
    v73 = *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v74 = (__int64)Tree->Min & 1;
    if ( ((__int64)Tree->Min & 1) != 0 && v73 )
      v73 ^= v53;
    if ( (_RTL_BALANCED_NODE *)v73 != v10 )
      goto LABEL_322;
    if ( ((__int64)Tree->Min & 1) != 0 && v52 )
      v52 ^= (unsigned __int64)v10;
    if ( v52 != v53 )
      goto LABEL_322;
    v75 = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( ((__int64)Tree->Min & 1) != 0 )
    {
      if ( !v75 )
      {
LABEL_194:
        if ( (_RTL_BALANCED_NODE *)v72 != v10 )
          goto LABEL_322;
        v72 = v53;
        goto LABEL_132;
      }
      v75 ^= (unsigned __int64)v10;
    }
    if ( !v75 )
      goto LABEL_194;
    v76 = *(_QWORD *)(v75 + 8);
    if ( ((__int64)Tree->Min & 1) != 0 && v76 )
      v76 ^= v75;
    if ( (_RTL_BALANCED_NODE *)v76 == v10 )
    {
      v77 = v75 ^ v53;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v77 = v53;
      *(_QWORD *)(v75 + 8) = v77;
    }
    else
    {
      v106 = *(_QWORD *)v75;
      if ( ((__int64)Tree->Min & 1) != 0 && v106 )
        v106 ^= v75;
      if ( (_RTL_BALANCED_NODE *)v106 != v10 )
        goto LABEL_322;
      v107 = v75 ^ v53;
      if ( ((__int64)Tree->Min & 1) == 0 )
        v107 = v53;
      *(_QWORD *)v75 = v107;
    }
LABEL_132:
    if ( v74 && v75 )
      v75 ^= v53;
    *(_QWORD *)(v53 + 16) = v75 | *(_DWORD *)(v53 + 16) & 3;
    v78 = *(_QWORD *)(v53 + 8 * v13);
    if ( !v74 )
      goto LABEL_134;
    if ( v78 )
    {
      v78 ^= v53;
LABEL_134:
      if ( v78 )
      {
        v103 = *(_QWORD *)(v78 + 16);
        v104 = v103 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v74 && v104 )
          v104 ^= v78;
        if ( v104 != v53 )
          goto LABEL_322;
        v105 = v78 ^ (unsigned __int64)v10;
        if ( !v74 )
          v105 = (unsigned __int64)v10;
        *(_QWORD *)(v78 + 16) = v103 & 3 | v105;
      }
    }
    if ( v74 && v78 )
      v78 ^= (unsigned __int64)v10;
    v10->Children[v51] = (_RTL_BALANCED_NODE *)v78;
    v79 = (unsigned __int64)v10 ^ v53;
    v80 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v53);
    if ( !v74 )
    {
      v80 = v10;
      v79 = v53;
    }
    *(_QWORD *)(v53 + 8 * v13) = v80;
    v81 = (_RTL_BALANCED_NODE *)v72;
    v10->ParentValue = *(_DWORD *)&v10->0 & 3 | v79;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      v81 = (_RTL_BALANCED_NODE *)((unsigned __int64)Tree ^ v72);
      if ( !v72 )
        v81 = 0LL;
    }
    Tree->Root = v81;
    *(_BYTE *)(v53 + 16) &= ~1u;
    *(_BYTE *)&v10->0 |= 1u;
    v49 = Tree->0;
    v53 = (unsigned __int64)v10->Children[v51];
    if ( (*(_BYTE *)&v49 & 1) != 0 && v53 )
      v53 ^= (unsigned __int64)v10;
LABEL_72:
    v54 = *(_QWORD *)v53;
    v55 = *(_BYTE *)&v49 & 1;
    if ( *(_QWORD *)v53 )
    {
      if ( v55 )
        v54 ^= v53;
      if ( (*(_BYTE *)(v54 + 16) & 1) != 0 )
        break;
    }
    v56 = *(_QWORD *)(v53 + 8);
    if ( v56 )
    {
      if ( v55 )
        v56 ^= v53;
      if ( (*(_BYTE *)(v56 + 16) & 1) != 0 )
        break;
    }
    v57 = v10->0;
    if ( (*(_BYTE *)&v57 & 1) != 0 )
    {
      LOBYTE(Min) = *(_BYTE *)&v57 & 0xFE;
      v10->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)Min;
      *(_BYTE *)(v53 + 16) |= 1u;
      return Min;
    }
    *(_BYTE *)(v53 + 16) |= 1u;
    v49 = Tree->0;
    Min = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v49 & 1) != 0 && Min )
      v10 = (_RTL_BALANCED_NODE *)(Min ^ (unsigned __int64)v10);
    else
      v10 = (_RTL_BALANCED_NODE *)(v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
    if ( !v10 )
      return Min;
    v71 = (unsigned __int64)v10->Children[1];
    if ( (*(_BYTE *)&v49 & 1) != 0 && v71 )
      v71 ^= (unsigned __int64)v10;
    v13 = v71 == (_QWORD)v50;
  }
  v59 = *(_QWORD *)(v53 + 8 * v51);
  if ( v55 )
  {
    if ( v59 )
    {
      v59 ^= v53;
      goto LABEL_93;
    }
  }
  else
  {
LABEL_93:
    if ( v59 && (*(_BYTE *)(v59 + 16) & 1) != 0 )
      goto LABEL_95;
  }
  v82 = *(_QWORD *)(v53 + 8 * v13);
  if ( v55 && v82 )
    v82 ^= v53;
  *(_BYTE *)(v82 + 16) &= ~1u;
  v83 = (unsigned int)v13 ^ 1;
  v84 = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v85 = *(_BYTE *)&Tree->0 & 1;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v84 )
    v84 ^= v82;
  if ( v84 != v53 )
    goto LABEL_322;
  v86 = (__int64 *)(v53 + 8 * v13);
  v87 = *v86;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v87 )
    v87 ^= v53;
  if ( v87 != v82 )
    goto LABEL_322;
  v88 = (unsigned __int64)v10->Children[v83];
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v88 )
    v88 ^= (unsigned __int64)v10;
  if ( v88 != v53 )
    goto LABEL_322;
  v89 = *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 && v89 )
    v89 ^= v53;
  if ( (_RTL_BALANCED_NODE *)v89 != v10 )
    goto LABEL_322;
  v90 = v82 ^ (unsigned __int64)v10;
  v91 = (_RTL_BALANCED_NODE *)(v82 ^ (unsigned __int64)v10);
  if ( (*(_BYTE *)&Tree->0 & 1) == 0 )
    v91 = (_RTL_BALANCED_NODE *)v82;
  v10->Children[v83] = v91;
  if ( !v85 || !v10 )
    v90 = (unsigned __int64)v10;
  v92 = v90 | *(_DWORD *)(v82 + 16) & 3;
  v93 = (unsigned __int64 *)(v82 + 8 * v83);
  *(_QWORD *)(v82 + 16) = v92;
  v94 = *v93;
  if ( !v85 )
  {
LABEL_158:
    if ( !v94 )
      goto LABEL_159;
    v108 = *(_QWORD *)(v94 + 16);
    v109 = v108 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v85 && v109 )
      v109 ^= v94;
    if ( v109 == v82 )
    {
      v110 = v94 ^ v53;
      if ( !v85 )
        v110 = v53;
      *(_QWORD *)(v94 + 16) = v108 & 3 | v110;
      goto LABEL_159;
    }
    goto LABEL_322;
  }
  if ( v94 )
  {
    v94 ^= v82;
    goto LABEL_158;
  }
LABEL_159:
  if ( v85 && v94 )
    v94 ^= v53;
  *v86 = v94;
  v95 = v53 ^ v82;
  v96 = v85 == 0;
  v97 = v53 ^ v82;
  v59 = v53;
  if ( v96 )
  {
    v97 = v53;
    v95 = v82;
  }
  *v93 = v97;
  *(_QWORD *)(v53 + 16) = *(_DWORD *)(v53 + 16) & 3 | v95;
  v53 = v82;
LABEL_95:
  *(_BYTE *)(v53 + 16) ^= (*(_BYTE *)&v10->0 ^ *(_BYTE *)(v53 + 16)) & 1;
  *(_BYTE *)&v10->0 &= ~1u;
  *(_BYTE *)(v59 + 16) &= ~1u;
  v60 = (unsigned __int64)Tree->Root;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v60 )
      v60 ^= (unsigned __int64)Tree;
    else
      v60 = 0LL;
  }
  v61 = *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v62 = (__int64)Tree->Min & 1;
  if ( ((__int64)Tree->Min & 1) != 0 && v61 )
    v61 ^= v53;
  if ( (_RTL_BALANCED_NODE *)v61 != v10 )
    goto LABEL_322;
  v63 = (unsigned __int64)v10->Children[v51];
  if ( ((__int64)Tree->Min & 1) != 0 && v63 )
    v63 ^= (unsigned __int64)v10;
  if ( v63 != v53 )
LABEL_322:
    __fastfail(0x1Du);
  v64 = v10->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
  if ( ((__int64)Tree->Min & 1) != 0 )
  {
    if ( v64 )
    {
      v64 ^= (unsigned __int64)v10;
      goto LABEL_101;
    }
    goto LABEL_183;
  }
LABEL_101:
  if ( !v64 )
  {
LABEL_183:
    if ( (_RTL_BALANCED_NODE *)v60 != v10 )
      goto LABEL_322;
    v60 = v53;
    goto LABEL_107;
  }
  v65 = *(_QWORD *)(v64 + 8);
  if ( ((__int64)Tree->Min & 1) != 0 && v65 )
    v65 ^= v64;
  if ( (_RTL_BALANCED_NODE *)v65 == v10 )
  {
    v66 = v64 ^ v53;
    if ( ((__int64)Tree->Min & 1) == 0 )
      v66 = v53;
    *(_QWORD *)(v64 + 8) = v66;
  }
  else
  {
    v101 = *(_QWORD *)v64;
    if ( ((__int64)Tree->Min & 1) != 0 && v101 )
      v101 ^= v64;
    if ( (_RTL_BALANCED_NODE *)v101 != v10 )
      goto LABEL_322;
    v102 = v64 ^ v53;
    if ( ((__int64)Tree->Min & 1) == 0 )
      v102 = v53;
    *(_QWORD *)v64 = v102;
  }
LABEL_107:
  if ( v62 && v64 )
    v64 ^= v53;
  *(_QWORD *)(v53 + 16) = v64 | *(_DWORD *)(v53 + 16) & 3;
  v67 = *(_QWORD *)(v53 + 8 * v13);
  v68 = (_RTL_BALANCED_NODE **)(v53 + 8 * v13);
  if ( v62 )
  {
    if ( v67 )
    {
      v67 ^= v53;
      goto LABEL_109;
    }
  }
  else
  {
LABEL_109:
    if ( v67 )
    {
      v98 = *(_QWORD *)(v67 + 16);
      v99 = v98 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v62 && v99 )
        v99 ^= v67;
      if ( v99 != v53 )
        goto LABEL_322;
      v100 = (unsigned __int64)v10 ^ v67;
      if ( !v62 )
        v100 = (unsigned __int64)v10;
      *(_QWORD *)(v67 + 16) = v98 & 3 | v100;
    }
  }
  if ( v62 && v67 )
    v67 ^= (unsigned __int64)v10;
  v10->Children[v51] = (_RTL_BALANCED_NODE *)v67;
  v69 = (unsigned __int64)v10 ^ v53;
  v70 = (_RTL_BALANCED_NODE *)((unsigned __int64)v10 ^ v53);
  if ( !v62 )
  {
    v70 = v10;
    v69 = v53;
  }
  *v68 = v70;
  Min = v60;
  v10->ParentValue = *(_DWORD *)&v10->0 & 3 | v69;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Min = (unsigned __int64)Tree ^ v60;
    if ( !v60 )
      Min = 0LL;
  }
  Tree->Root = (_RTL_BALANCED_NODE *)Min;
  return Min;
}
