/*
 * XREFs of RtlRbInsertNodeEx @ 0x1402C0B10
 * Callers:
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140272350 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402726C0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140272C9C (KiAbEntryUpdateWaiterTreePosition.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14028AFE0 (RtlpHpSegFreeRangeInsert.c)
 *     PfSnGetFileInformation @ 0x14029C120 (PfSnGetFileInformation.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF820 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1402C08D0 (RtlpHpVsFreeChunkInsert.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402E0190 (IoStartDiskIoAttributionForContext.c)
 *     KiSetClockInterval @ 0x1402F045C (KiSetClockInterval.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1402F05B0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     RtlpHpVaMgrFree @ 0x1402FD9F0 (RtlpHpVaMgrFree.c)
 *     RtlpHpLargeAlloc @ 0x1402FDFBC (RtlpHpLargeAlloc.c)
 *     MiRescanPageFileBitmapPortion @ 0x14030F908 (MiRescanPageFileBitmapPortion.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140331318 (MiBitmapsCachedEntryLengthChanged.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140333BF0 (MiInvalidatePageFileBitmapsCache.c)
 *     KiInsertSchedulingGroupQueue @ 0x14035D35C (KiInsertSchedulingGroupQueue.c)
 *     MiInsertSlabEntry @ 0x1403999CC (MiInsertSlabEntry.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0AF4 (HalpAllocateDomainCommonBufferInternal.c)
 *     MiInitializePagefileBitmapsCache @ 0x1403BF7D4 (MiInitializePagefileBitmapsCache.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB230 (HalpAllocateCommonBufferThin.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x14058202C (PspJobIoRateVolumeEntryInsert.c)
 *     VmpFaultEntryInsert @ 0x1405A2FF8 (VmpFaultEntryInsert.c)
 *     VmpInsertMemoryRange @ 0x1405A38C0 (VmpInsertMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405A5084 (VmpSplitMemoryRange.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BC01C (EtwpSetProviderTraitsCommon.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140722968 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140723F20 (HvpViewMapPromoteRangeToMapping.c)
 *     KiGetSystemServiceTraceTable @ 0x1408BCFD0 (KiGetSystemServiceTraceTable.c)
 *     MiGetHotPatchEntry @ 0x1408CA03C (MiGetHotPatchEntry.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 *     KeInitializeClock @ 0x140A4B7CC (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlRbInsertNodeEx(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Parent, BOOLEAN Right, PRTL_BALANCED_NODE Node)
{
  unsigned __int8 v4; // r11
  $7D93978C745EB1C2D28075BAF55422B4 v6; // cl
  unsigned __int64 Min; // rax
  _RTL_BALANCED_NODE *v8; // rcx
  unsigned __int64 v9; // rcx
  $7D93978C745EB1C2D28075BAF55422B4 v10; // si
  _RTL_BALANCED_NODE *v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rbx
  _BOOL8 v14; // rbp
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  int v18; // r11d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  _RTL_BALANCED_NODE **v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 Root; // rsi
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  int v31; // r9d
  __int64 v32; // r11
  _RTL_BALANCED_NODE **v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  _RTL_BALANCED_NODE *v40; // rax
  _RTL_BALANCED_NODE *v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax

  v4 = Right;
  Node->Children[0] = 0LL;
  Node->Children[1] = 0LL;
  v6 = Tree->0;
  LOBYTE(Min) = *(_BYTE *)&v6 & 1;
  if ( !Parent )
  {
    v42 = (unsigned __int64)Tree ^ (unsigned __int64)Node;
    if ( (_BYTE)Min )
      Tree->Root = (_RTL_BALANCED_NODE *)v42;
    else
      Tree->Root = Node;
    if ( (*(_BYTE *)&v6 & 1) != 0 )
    {
      Tree->Min = (_RTL_BALANCED_NODE *)v42;
      Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)(v42 | 1);
    }
    else
    {
      Tree->Min = Node;
    }
    Node->ParentValue = 0LL;
    return Min;
  }
  v8 = Node;
  if ( (_BYTE)Min )
    v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Parent);
  Parent->Children[Right] = v8;
  v9 = (unsigned __int64)Parent;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    v9 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
  Node->ParentValue = v9 | 1;
  if ( !Right )
  {
    Min = (unsigned __int64)Tree->Min;
    if ( (Min & 1) != 0 )
      v41 = Min == 1 ? 0LL : (_RTL_BALANCED_NODE *)(Min ^ ((unsigned __int64)Tree | 1));
    else
      v41 = Tree->Min;
    if ( Parent == v41 )
    {
      if ( (Min & 1) != 0 )
      {
        Tree->Min = (_RTL_BALANCED_NODE *)((unsigned __int64)Node ^ (unsigned __int64)Tree);
        LOBYTE(Min) = (unsigned __int8)Node ^ (unsigned __int8)Tree | 1;
        Tree->0 = ($7D93978C745EB1C2D28075BAF55422B4)Min;
      }
      else
      {
        Tree->Min = Node;
      }
    }
  }
  if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
  {
    v10 = Tree->0;
    while ( 1 )
    {
      v11 = (_RTL_BALANCED_NODE *)(Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      v12 = *(_BYTE *)&v10 & 1;
      if ( (*(_BYTE *)&v10 & 1) != 0 && v11 )
        v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)Parent ^ (unsigned __int64)v11);
      v13 = (unsigned __int64)v11->Children[0];
      if ( v12 && v13 )
        v13 ^= (unsigned __int64)v11;
      Min = v13 != (_QWORD)Parent;
      v14 = v13 == (_QWORD)Parent;
      v15 = Min;
      v16 = (unsigned __int64)v11->Children[v14];
      if ( v12 )
      {
        if ( !v16 )
          break;
        v16 ^= (unsigned __int64)v11;
      }
      if ( !v16 || (*(_BYTE *)(v16 + 16) & 1) == 0 )
        break;
      *(_BYTE *)&Parent->0 &= ~1u;
      Node = v11;
      *(_BYTE *)(v16 + 16) &= ~1u;
      Parent = (PRTL_BALANCED_NODE)(v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
      {
        if ( !Parent )
          return Min;
        Parent = (PRTL_BALANCED_NODE)((unsigned __int64)v11 ^ (unsigned __int64)Parent);
      }
      if ( Parent )
      {
        v11->0 = ($424C8BBEF8F6C852886B4C6E806B5DB0)(v11->ParentValue | 1);
        v10 = Tree->0;
        Min = (unsigned __int64)Parent->Children[0];
        if ( (*(_BYTE *)&v10 & 1) != 0 && Min )
          Min ^= (unsigned __int64)Parent;
        v4 = v11 != (_RTL_BALANCED_NODE *)Min;
        if ( (*(_BYTE *)&Parent->0 & 1) != 0 )
          continue;
      }
      return Min;
    }
    if ( v4 == (_DWORD)Min )
    {
LABEL_37:
      Root = (unsigned __int64)Tree->Root;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( Root )
          Root ^= (unsigned __int64)Tree;
        else
          Root = 0LL;
      }
      v29 = (unsigned int)v15 ^ 1;
      v30 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      v31 = (__int64)Tree->Min & 1;
      if ( ((__int64)Tree->Min & 1) != 0 && v30 )
        v30 ^= (unsigned __int64)Parent;
      if ( (_RTL_BALANCED_NODE *)v30 != v11 )
        goto LABEL_138;
      v32 = (unsigned int)v29;
      v33 = &v11->Children[(unsigned int)v29 ^ 1LL];
      v34 = (unsigned __int64)*v33;
      if ( ((__int64)Tree->Min & 1) != 0 && v34 )
        v34 ^= (unsigned __int64)v11;
      if ( (PRTL_BALANCED_NODE)v34 != Parent )
        goto LABEL_138;
      v35 = v11->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( ((__int64)Tree->Min & 1) != 0 )
      {
        if ( !v35 )
          goto LABEL_83;
        v35 ^= (unsigned __int64)v11;
      }
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 8);
        if ( ((__int64)Tree->Min & 1) != 0 && v36 )
          v36 ^= v35;
        if ( (_RTL_BALANCED_NODE *)v36 == v11 )
        {
          v37 = v35 ^ (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v37 = (unsigned __int64)Parent;
          *(_QWORD *)(v35 + 8) = v37;
        }
        else
        {
          v46 = *(_QWORD *)v35;
          if ( ((__int64)Tree->Min & 1) != 0 && v46 )
            v46 ^= v35;
          if ( (_RTL_BALANCED_NODE *)v46 != v11 )
            goto LABEL_138;
          v47 = v35 ^ (unsigned __int64)Parent;
          if ( ((__int64)Tree->Min & 1) == 0 )
            v47 = (unsigned __int64)Parent;
          *(_QWORD *)v35 = v47;
        }
        goto LABEL_49;
      }
LABEL_83:
      if ( (_RTL_BALANCED_NODE *)Root != v11 )
        goto LABEL_138;
      Root = (unsigned __int64)Parent;
LABEL_49:
      if ( v31 && v35 )
        v35 ^= (unsigned __int64)Parent;
      Parent->ParentValue = v35 | *(_DWORD *)&Parent->0 & 3;
      v38 = (unsigned __int64)Parent->Children[v29];
      if ( v31 )
      {
        if ( !v38 )
        {
LABEL_52:
          if ( v31 && v38 )
            v38 ^= (unsigned __int64)v11;
          *v33 = (_RTL_BALANCED_NODE *)v38;
          v39 = (unsigned __int64)v11 ^ (unsigned __int64)Parent;
          v40 = (_RTL_BALANCED_NODE *)((unsigned __int64)v11 ^ (unsigned __int64)Parent);
          if ( !v31 )
          {
            v40 = v11;
            v39 = (unsigned __int64)Parent;
          }
          Parent->Children[v32] = v40;
          Min = Root;
          v11->ParentValue = *(_DWORD *)&v11->0 & 3 | v39;
          if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
          {
            Min = (unsigned __int64)Tree ^ Root;
            if ( !Root )
              Min = 0LL;
          }
          Tree->Root = (_RTL_BALANCED_NODE *)Min;
          *(_BYTE *)&v11->0 |= 1u;
          *(_BYTE *)&Parent->0 &= ~1u;
          return Min;
        }
        v38 ^= (unsigned __int64)Parent;
      }
      if ( !v38 )
        goto LABEL_52;
      v43 = *(_QWORD *)(v38 + 16);
      v44 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v31 && v44 )
        v44 ^= v38;
      if ( (PRTL_BALANCED_NODE)v44 == Parent )
      {
        v45 = v38 ^ (unsigned __int64)v11;
        if ( !v31 )
          v45 = (unsigned __int64)v11;
        *(_QWORD *)(v38 + 16) = v43 & 3 | v45;
        goto LABEL_52;
      }
LABEL_138:
      __fastfail(0x1Du);
    }
    v17 = Node->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    v18 = *(_BYTE *)&v10 & 1;
    if ( (*(_BYTE *)&v10 & 1) != 0 && v17 )
      v17 ^= (unsigned __int64)Node;
    if ( (PRTL_BALANCED_NODE)v17 != Parent )
      goto LABEL_138;
    v19 = (unsigned __int64)Parent->Children[v14];
    if ( (*(_BYTE *)&v10 & 1) != 0 && v19 )
      v19 ^= (unsigned __int64)Parent;
    if ( (PRTL_BALANCED_NODE)v19 != Node )
      goto LABEL_138;
    v20 = (unsigned __int64)v11->Children[v15];
    if ( (*(_BYTE *)&v10 & 1) != 0 && v20 )
      v20 ^= (unsigned __int64)v11;
    if ( (PRTL_BALANCED_NODE)v20 != Parent )
      goto LABEL_138;
    v21 = Parent->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*(_BYTE *)&v10 & 1) != 0 && v21 )
      v21 ^= (unsigned __int64)Parent;
    if ( (_RTL_BALANCED_NODE *)v21 != v11 )
      goto LABEL_138;
    v22 = &Node->Children[v15];
    v23 = (unsigned __int64)v11 ^ (unsigned __int64)Node;
    v24 = (unsigned __int64)v11 ^ (unsigned __int64)Node;
    if ( !v18 )
    {
      v24 = (unsigned __int64)Node;
      v23 = (unsigned __int64)v11;
    }
    v11->Children[v15] = (_RTL_BALANCED_NODE *)v24;
    Node->ParentValue = *(_DWORD *)&Node->0 & 3 | v23;
    v25 = (unsigned __int64)*v22;
    if ( v18 )
    {
      if ( !v25 )
      {
LABEL_33:
        if ( v18 && v25 )
          v25 ^= (unsigned __int64)Parent;
        Parent->Children[v14] = (_RTL_BALANCED_NODE *)v25;
        v26 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
        v27 = (unsigned __int64)Node ^ (unsigned __int64)Parent;
        if ( !v18 )
        {
          v27 = (unsigned __int64)Parent;
          v26 = (unsigned __int64)Node;
        }
        *v22 = (_RTL_BALANCED_NODE *)v27;
        Parent->ParentValue = *(_DWORD *)&Parent->0 & 3 | v26;
        Parent = Node;
        goto LABEL_37;
      }
      v25 ^= (unsigned __int64)Node;
    }
    if ( v25 )
    {
      v48 = *(_QWORD *)(v25 + 16);
      v49 = v48 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v18 && v49 )
        v49 ^= v25;
      if ( (PRTL_BALANCED_NODE)v49 != Node )
        goto LABEL_138;
      v50 = (unsigned __int64)Parent ^ v25;
      if ( !v18 )
        v50 = (unsigned __int64)Parent;
      *(_QWORD *)(v25 + 16) = v48 & 3 | v50;
    }
    goto LABEL_33;
  }
  return Min;
}
