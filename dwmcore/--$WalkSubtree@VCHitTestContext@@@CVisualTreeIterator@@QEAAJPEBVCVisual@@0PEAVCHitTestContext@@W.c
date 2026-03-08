/*
 * XREFs of ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B254
 * Callers:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x1800321D0 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B524 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVisual@@@@@Z @ 0x18004C328 (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGraph.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x180096EF4 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180096F74 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18009B870 (--0CTreeData@@IEAA@XZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E1BE0 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800E20E0 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CHitTestContext>(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        CHitTestContext *a4,
        bool a5)
{
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned __int64 *i; // rbp
  struct _LIST_ENTRY *v13; // rbx
  struct _LIST_ENTRY **p_Blink; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rsi
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r10
  unsigned __int64 v23; // rcx
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // r9
  bool v26; // al
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rcx
  int v33; // r8d
  CPtrArrayBase *v34; // r9
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  struct CTreeData *UnusedTreeData; // r11
  _DWORD *v41; // r10
  unsigned __int64 v42; // rcx
  unsigned int Slot; // eax
  __int64 v44; // r10
  CTreeData *v45; // rax
  unsigned int Count; // eax
  int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // [rsp+20h] [rbp-58h]
  __int64 v50; // [rsp+30h] [rbp-48h] BYREF
  int v51; // [rsp+38h] [rbp-40h]
  __int128 v52; // [rsp+40h] [rbp-38h]
  bool v53; // [rsp+80h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 72) = 4;
  v9 = CGraphWalker<CVisual>::BeginWalk();
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD6u, 0LL);
    return v11;
  }
  for ( i = *(unsigned __int64 **)(a1 + 8); ; i = v24 )
  {
    if ( (*((_BYTE *)i + 103) & 1) == 0 && i != a2 )
      goto LABEL_27;
    v13 = *(struct _LIST_ENTRY **)(a1 + 64);
    if ( v13 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_QWORD))v13->Flink[11].Blink)(*(_QWORD *)(a1 + 64)) )
      {
        TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)i);
        if ( TreeDataListHead )
        {
          for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
          {
            p_Blink = &j[-23].Blink;
            if ( j[2].Flink == v13 )
              goto LABEL_7;
          }
        }
LABEL_58:
        UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
        if ( UnusedTreeData )
        {
          v41 = (_DWORD *)i[29];
          if ( (*v41 & 0x8000000) != 0 )
          {
            v42 = i[29];
            *v41 &= ~0x8000000u;
            Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v42, 5LL);
            if ( Slot < *(_DWORD *)(v44 + 4) )
              *(_BYTE *)(Slot + v44 + 8) = 0;
          }
        }
        else
        {
          v45 = (CTreeData *)operator new(0x190uLL);
          if ( v45 )
          {
            CTreeData::CTreeData(v45);
            *((_QWORD *)UnusedTreeData + 49) = 0LL;
            *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
          }
          else
          {
            UnusedTreeData = 0LL;
          }
        }
        (*(void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, unsigned __int64 *))(*(_QWORD *)UnusedTreeData
                                                                                             + 8LL))(
          UnusedTreeData,
          v13,
          i);
        goto LABEL_8;
      }
      p_Blink = (struct _LIST_ENTRY **)(i + 42);
LABEL_7:
      if ( !p_Blink )
        goto LABEL_58;
    }
LABEL_8:
    v15 = CHitTestContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &v53);
    v11 = v15;
    if ( v15 < 0 )
      break;
    if ( !v53 )
      goto LABEL_27;
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
    if ( (v17 & 2) != 0 )
      v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v17) = v17 & 1;
    if ( !(_DWORD)v17 )
    {
      v11 = 1;
      goto LABEL_27;
    }
    v50 = *(_QWORD *)(a1 + 16);
    v51 = *(_DWORD *)(a1 + 24);
    v18 = CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Push(a1 + 32, &v50);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x87u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v11, 0x105u, 0LL);
      goto LABEL_37;
    }
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v20 = 0LL;
    else
      v20 = (unsigned int)(v17 - 1);
    *(_DWORD *)(a1 + 24) = v20;
    v21 = *(_QWORD *)(a1 + 8);
    v22 = *(_QWORD *)(v21 + 80) & 2LL;
    v23 = *(_QWORD *)(v21 + 80) & 1LL;
    v24 = (unsigned __int64 *)(*(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v22 )
      v25 = *v24;
    else
      v25 = (unsigned int)v23;
    if ( v25 <= (unsigned int)v20 )
      goto LABEL_67;
    if ( v22 )
      v23 = *v24;
    if ( (unsigned int)v20 >= v23 )
    {
LABEL_67:
      v24 = 0LL;
    }
    else if ( v23 != 1 )
    {
      v24 = (unsigned __int64 *)v24[v20 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v21;
    *(_QWORD *)(a1 + 8) = v24;
    if ( !v24 )
    {
      while ( 1 )
      {
LABEL_27:
        v26 = 1;
        a5 = 1;
        if ( (*((_BYTE *)i + 103) & 1) != 0 || i == a2 )
        {
          v15 = CHitTestContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &a5);
          v11 = v15;
          if ( v15 < 0 )
          {
            v49 = 290;
            goto LABEL_77;
          }
          v26 = a5;
        }
        i = *(unsigned __int64 **)(a1 + 16);
        if ( !v26 )
          goto LABEL_31;
        if ( !i )
          goto LABEL_50;
        v33 = *(_DWORD *)(a1 + 28);
        if ( v33 == 1 )
        {
          if ( *(_DWORD *)(a1 + 24) == -1 )
            goto LABEL_50;
          Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(i + 10));
          if ( v47 + 1 < Count )
            goto LABEL_44;
        }
        if ( !v33 && *(_DWORD *)(a1 + 24) )
        {
          v34 = (CPtrArrayBase *)(i + 10);
LABEL_44:
          v35 = CPtrArrayBase::GetCount(v34);
          if ( v35 <= v36 )
            v24 = 0LL;
          else
            v24 = (unsigned __int64 *)CPtrArrayBase::operator[](v37, v36);
          *(_QWORD *)(a1 + 8) = v24;
          v11 = 0;
          *(_DWORD *)(a1 + 24) = v36;
          if ( *(_QWORD *)(a1 + 8) )
            break;
          goto LABEL_31;
        }
LABEL_50:
        v11 = 1;
LABEL_31:
        v27 = *(_DWORD *)(a1 + 4);
        if ( v27 )
        {
          v28 = *(_DWORD *)(a1 + 32);
          v29 = 0LL;
          v30 = 0;
          if ( v28 )
          {
            v31 = (unsigned int)(v28 - 1);
            *(_DWORD *)(a1 + 32) = v31;
            v52 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v31);
            v30 = DWORD2(v52);
            v29 = v52;
          }
          *(_QWORD *)(a1 + 16) = v29;
          *(_DWORD *)(a1 + 4) = v27 - 1;
          *(_QWORD *)(a1 + 8) = i;
          *(_DWORD *)(a1 + 24) = v30;
          if ( i )
            continue;
        }
        if ( v11 == 1 )
          v11 = 0;
        goto LABEL_37;
      }
    }
  }
  v49 = 241;
LABEL_77:
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v49, 0LL);
LABEL_37:
  CGraphWalker<CVisual>::EndWalk(a1, a3);
  return v11;
}
