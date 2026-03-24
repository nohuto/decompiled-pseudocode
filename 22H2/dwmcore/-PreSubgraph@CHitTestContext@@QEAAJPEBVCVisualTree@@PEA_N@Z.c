/*
 * XREFs of ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009E540
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18009DED0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 * Callees:
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18003F508 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800421E0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180068FB8 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007AA60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x1800818F0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180087AD0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18009F93C (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800A0088 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800A0248 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A0360 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A8340 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800BA3C0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800C13A8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800C64BC (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C7068 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C876C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z @ 0x1800CEE78 (-PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x1801AD654 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801ADD30 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x18022897C (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  struct _LIST_ENTRY *v5; // rbx
  __int64 v7; // rax
  __int64 v9; // rsi
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r15d
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  void *v21; // rbx
  unsigned int v22; // eax
  struct CTreeData *v23; // r15
  unsigned int v24; // eax
  struct CEffect *EffectInternal; // rbx
  struct CTreeData *TreeData; // rax
  __int64 v27; // rdx
  int v28; // r14d
  bool v29; // bl
  void *v30; // rbx
  HANDLE ProcessHeap; // rax
  struct CEffect *v32; // rax
  bool v33; // al
  CGeometry *v34; // rax
  __int64 v35; // rcx
  _OWORD *v36; // r13
  int v37; // r14d
  unsigned __int8 (__fastcall *v38)(__int64); // rax
  struct _LIST_ENTRY *v39; // rcx
  struct _LIST_ENTRY *v40; // rbx
  struct _LIST_ENTRY *v41; // rcx
  unsigned int Slot; // eax
  __int64 v43; // r10
  __int64 v44; // rcx
  _QWORD **v45; // rdx
  struct _LIST_ENTRY *v46; // rax
  CVisual *v47; // rax
  CVisual *v48; // r13
  struct _LIST_ENTRY *v49; // rax
  unsigned __int64 v50; // rax
  int updated; // eax
  __int128 v52; // xmm1
  __int128 v53; // xmm1
  struct _LIST_ENTRY *v54; // rax
  struct _LIST_ENTRY v55; // xmm1
  struct _LIST_ENTRY v56; // xmm0
  struct _LIST_ENTRY v57; // xmm1
  int v58; // eax
  int v59; // eax
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // rcx
  unsigned int ShapeData; // ebx
  __int64 result; // rax
  __int64 v66; // rax
  CVisual **v67; // r13
  int v68; // r14d
  struct _LIST_ENTRY *v69; // rcx
  struct _LIST_ENTRY *v70; // rbx
  struct _LIST_ENTRY *v71; // rcx
  unsigned int v72; // eax
  __int64 v73; // r10
  __int64 v74; // rcx
  _QWORD **v75; // rdx
  struct _LIST_ENTRY *v76; // rax
  CVisual *v77; // rax
  CVisual *v78; // r13
  struct _LIST_ENTRY *v79; // rax
  unsigned __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rcx
  float v83; // xmm1_4
  float v84; // xmm1_4
  unsigned int v85; // eax
  __int64 v86; // r10
  __int64 v87; // rcx
  _QWORD *v88; // rdx
  bool v89; // r15
  int v90; // r14d
  int v91; // r14d
  CGeometry *v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  CInteraction *v95; // rax
  CInteraction *InteractionInternal; // rax
  char v97; // r14
  _QWORD *BspPolygonList; // rax
  int v99; // eax
  __int64 v100; // rcx
  bool *v101; // rcx
  bool v102; // [rsp+40h] [rbp-C0h] BYREF
  char v103; // [rsp+41h] [rbp-BFh]
  void *lpMem; // [rsp+48h] [rbp-B8h] BYREF
  bool *v105; // [rsp+50h] [rbp-B0h]
  CGeometry *v106; // [rsp+58h] [rbp-A8h] BYREF
  char v107; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *v108; // [rsp+68h] [rbp-98h]
  _OWORD v109[4]; // [rsp+80h] [rbp-80h] BYREF
  int Blink; // [rsp+C0h] [rbp-40h]
  _OWORD v111[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v112; // [rsp+110h] [rbp+10h]
  _BYTE v113[64]; // [rsp+120h] [rbp+20h] BYREF
  int v114; // [rsp+160h] [rbp+60h]
  __int128 v115; // [rsp+170h] [rbp+70h] BYREF
  __int64 v116; // [rsp+180h] [rbp+80h]

  v3 = *((_QWORD *)this + 2);
  v4 = *((_QWORD *)this + 3);
  v5 = 0LL;
  v108 = 0LL;
  v7 = *(_QWORD *)a2;
  v105 = a3;
  v9 = (__int64)a2;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v7 + 200))(a2) )
  {
    v5 = (struct _LIST_ENTRY *)(v3 + 320);
LABEL_9:
    v108 = v5;
    goto LABEL_10;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
  if ( TreeDataListHead )
  {
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink != TreeDataListHead )
    {
      while ( Flink[2].Flink != (struct _LIST_ENTRY *)v9 )
      {
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_10;
      }
      v5 = Flink - 18;
      goto LABEL_9;
    }
  }
LABEL_10:
  v12 = v9 + 64;
  v13 = 0xFFFFFFFFLL;
  if ( v3 != *(_QWORD *)(v9 + 56) )
    v12 = v3 + 140;
  v115 = *(_OWORD *)v12;
  v116 = *(_QWORD *)(v12 + 16);
  *(_BYTE *)(v3 + 93) &= ~4u;
  LOBYTE(v5[18].Flink) &= ~1u;
  *a3 = 1;
  v14 = *(_DWORD *)(v3 + 200);
  if ( v14 == -1 )
    goto LABEL_23;
  v15 = *((unsigned int *)this + 37);
  v16 = *((_DWORD *)this + 36);
  lpMem = 0LL;
  if ( v16 != (_DWORD)v15 )
    goto LABEL_20;
  v17 = 2LL * (unsigned int)v15;
  if ( v17 <= 0xFFFFFFFF )
  {
    if ( (unsigned int)v17 <= 0x40 )
      LODWORD(v17) = 64;
    v18 = HrMalloc(4uLL, (unsigned int)v17, &lpMem);
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x53u, 0LL);
    }
    else
    {
      v20 = 4LL * *((unsigned int *)this + 36);
      if ( v20 <= 0xFFFFFFFF )
      {
        v21 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 20), (unsigned int)v20);
        operator delete(*((void **)this + 20));
        v16 = *((_DWORD *)this + 36);
        *((_QWORD *)this + 20) = v21;
        *((_DWORD *)this + 37) = v17;
LABEL_20:
        *(_DWORD *)(*((_QWORD *)this + 20) + 4LL * v16) = v14;
        v22 = *((_DWORD *)this + 42);
        if ( v22 <= ++*((_DWORD *)this + 36) )
          v22 = *((_DWORD *)this + 36);
        *((_DWORD *)this + 42) = v22;
LABEL_23:
        v23 = 0LL;
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v30 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v30);
    }
    goto LABEL_23;
  }
  v23 = 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_24:
  v24 = *((float *)&v116 + 1) <= *(float *)&v116;
  if ( *((float *)&v115 + 2) <= *(float *)&v115 )
    ++v24;
  if ( *((float *)&v115 + 3) <= *((float *)&v115 + 1) )
    ++v24;
  if ( v24 > 1 || *(char *)(v3 + 93) < 0 )
    goto LABEL_198;
  if ( !*(_DWORD *)(v3 + 100) && (**(_DWORD **)(v3 + 224) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)v3);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
            EffectInternal,
            186LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
              EffectInternal,
              56LL) )
        goto LABEL_36;
      EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 10);
    }
    if ( EffectInternal )
    {
LABEL_198:
      result = 0LL;
      *v105 = 0;
      return result;
    }
  }
LABEL_36:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 200LL))(v9, v13) )
  {
    TreeData = CVisual::FindTreeData((CVisual *)v3, (const struct CVisualTree *)v9);
    if ( TreeData )
    {
      v27 = 0LL;
      if ( g_pComposition )
        v27 = *((_QWORD *)g_pComposition + 44);
      if ( *((_BYTE *)TreeData + 18) && *((_QWORD *)TreeData + 35) == v27 )
        goto LABEL_198;
    }
  }
  v28 = *(_DWORD *)(v3 + 100);
  Blink = 0;
  v114 = 0;
  v29 = v4 && *(_DWORD *)(v4 + 100) == 1;
  v33 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 232LL))(v3) )
  {
    if ( (**(_DWORD **)(v3 + 224) & 0x400000) == 0
      || (v32 = CVisual::GetEffectInternal((CVisual *)v3),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v32 + 56LL))(v32, 59LL)) )
    {
      v33 = 0;
    }
  }
  if ( v28 != 1 )
    goto LABEL_59;
  if ( v29 )
  {
    if ( !v33 )
      goto LABEL_59;
  }
  else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 72)) )
  {
LABEL_59:
    v103 = 0;
    goto LABEL_60;
  }
  v103 = 1;
LABEL_60:
  v34 = (CGeometry *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 224LL))(v3);
  v35 = *(_QWORD *)v9;
  v36 = v113;
  v106 = v34;
  v37 = -2003292412;
  if ( !v34 )
    v36 = 0LL;
  v38 = *(unsigned __int8 (__fastcall **)(__int64))(v35 + 200);
  lpMem = v36;
  if ( v38(v9) )
  {
    v40 = (struct _LIST_ENTRY *)(v3 + 320);
  }
  else
  {
    v46 = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( !v46 )
      goto LABEL_111;
    v39 = v46->Flink;
    if ( v46->Flink == v46 )
      goto LABEL_111;
    while ( 1 )
    {
      v40 = v39 - 18;
      if ( v39[2].Flink == (struct _LIST_ENTRY *)v9 )
        break;
      v39 = v39->Flink;
      if ( v39 == v46 )
        goto LABEL_111;
    }
  }
  if ( !v40 )
    goto LABEL_111;
  v37 = 0;
  v102 = 0;
  if ( v3 == *(_QWORD *)(v9 + 56) )
    goto LABEL_95;
  v41 = 0LL;
  if ( g_pComposition )
    v41 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
  if ( (!BYTE2(v40[1].Flink) || v40[17].Blink != v41)
    && (**(_DWORD **)(v3 + 224) & 0x1000000) != 0
    && ((Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v3 + 224), 8LL),
         v44 = *(unsigned int *)(v43 + 4),
         Slot >= (unsigned int)v44)
      ? (v45 = 0LL)
      : (v45 = (_QWORD **)(v44 + 15 + v43 + 8LL * Slot - (((_BYTE)v44 + 15) & 7))),
        *v45 && (v47 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v45 + 200LL))(**v45)) != 0LL) )
  {
    v102 = 1;
    v23 = CVisual::FindTreeData(v47, (const struct CVisualTree *)v9);
  }
  else
  {
    v48 = *(CVisual **)(v3 + 80);
    v23 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 200LL))(v9) )
    {
      v23 = (CVisual *)((char *)v48 + 320);
    }
    else
    {
      v49 = CVisual::GetTreeDataListHead(v48);
      if ( v49 )
      {
        v39 = v49->Flink;
        if ( v49->Flink != v49 )
        {
          while ( v39[2].Flink != (struct _LIST_ENTRY *)v9 )
          {
            v39 = v39->Flink;
            if ( v39 == v49 )
              goto LABEL_92;
          }
          v23 = (struct CTreeData *)&v39[-18];
        }
      }
    }
LABEL_92:
    v36 = lpMem;
  }
  if ( !v23 )
LABEL_95:
    v50 = 1LL;
  else
    v50 = *((_QWORD *)v23 + 15);
  if ( v40[7].Blink >= (struct _LIST_ENTRY *)v50 )
  {
    v23 = 0LL;
  }
  else
  {
    updated = CVisual::UpdateWorldTransform(
                (CVisual *)v3,
                (const struct CVisualTree *)v9,
                (struct CTreeData *)v40,
                v102,
                v23);
    v23 = 0LL;
    v37 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, updated, 0x7B0u, 0LL);
  }
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, v37, 0x6FAu, 0LL);
  }
  else
  {
    if ( !v40[7].Blink )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, -2003292412, 0x69u, 0LL);
      v37 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, -2003292412, 0x6FFu, 0LL);
      ShapeData = -2003292412;
LABEL_108:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v39, 0LL, 0, v37, 0x61u, 0LL);
      return ShapeData;
    }
    Blink = (int)v40[6].Blink;
    v52 = *(_OWORD *)&v40[3].Blink;
    v109[0] = *(struct _LIST_ENTRY *)((char *)v40 + 40);
    v109[1] = v52;
    v53 = *(_OWORD *)&v40[5].Blink;
    v109[2] = *(struct _LIST_ENTRY *)((char *)v40 + 72);
    v109[3] = v53;
    if ( v36 )
    {
      v54 = v40[7].Flink;
      if ( v54 )
      {
        v37 = 0;
        v55 = v54[1];
        *v36 = *v54;
        v56 = v54[2];
        v36[1] = v55;
        v57 = v54[3];
        v58 = (int)v54[4].Flink;
        v36[2] = v56;
        v36[3] = v57;
        *((_DWORD *)v36 + 16) = v58;
        goto LABEL_111;
      }
      v59 = (int)v40[6].Blink;
      v60 = *(_OWORD *)&v40[3].Blink;
      *v36 = *(_OWORD *)&v40[2].Blink;
      v61 = *(_OWORD *)&v40[4].Blink;
      v36[1] = v60;
      v62 = *(_OWORD *)&v40[5].Blink;
      v36[2] = v61;
      v36[3] = v62;
      *((_DWORD *)v36 + 16) = v59;
    }
    v37 = 0;
  }
LABEL_111:
  ShapeData = v37;
  if ( v37 < 0 )
    goto LABEL_108;
  if ( v3 != *(_QWORD *)(v9 + 56) )
  {
    v66 = *(_QWORD *)v9;
    v67 = *(CVisual ***)(v3 + 80);
    v68 = -2003292412;
    v112 = 0;
    lpMem = v67;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(v66 + 200))(v9) )
    {
      v70 = (struct _LIST_ENTRY *)(v67 + 40);
    }
    else
    {
      v76 = CVisual::GetTreeDataListHead((CVisual *)v67);
      if ( !v76 )
        goto LABEL_154;
      v69 = v76->Flink;
      if ( v76->Flink == v76 )
        goto LABEL_154;
      while ( 1 )
      {
        v70 = v69 - 18;
        if ( v69[2].Flink == (struct _LIST_ENTRY *)v9 )
          break;
        v69 = v69->Flink;
        if ( v69 == v76 )
          goto LABEL_154;
      }
    }
    if ( v70 )
    {
      v68 = 0;
      v102 = 0;
      if ( v67 == *(CVisual ***)(v9 + 56) )
        goto LABEL_144;
      v71 = 0LL;
      if ( g_pComposition )
        v71 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
      if ( (!BYTE2(v70[1].Flink) || v70[17].Blink != v71)
        && (*(_DWORD *)v67[28] & 0x1000000) != 0
        && ((v72 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v67[28], 8LL),
             v74 = *(unsigned int *)(v73 + 4),
             v72 >= (unsigned int)v74)
          ? (v75 = 0LL)
          : (v75 = (_QWORD **)(v74 + 15 + v73 + 8LL * v72 - (((_BYTE)v74 + 15) & 7))),
            *v75 && (v77 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v75 + 200LL))(**v75)) != 0LL) )
      {
        v102 = 1;
        v23 = CVisual::FindTreeData(v77, (const struct CVisualTree *)v9);
      }
      else
      {
        v78 = v67[10];
        v23 = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 200LL))(v9) )
        {
          v23 = (CVisual *)((char *)v78 + 320);
        }
        else
        {
          v79 = CVisual::GetTreeDataListHead(v78);
          if ( v79 )
          {
            v69 = v79->Flink;
            if ( v79->Flink != v79 )
            {
              while ( v69[2].Flink != (struct _LIST_ENTRY *)v9 )
              {
                v69 = v69->Flink;
                if ( v69 == v79 )
                  goto LABEL_141;
              }
              v23 = (struct CTreeData *)&v69[-18];
            }
          }
        }
LABEL_141:
        v67 = (CVisual **)lpMem;
      }
      if ( !v23 )
LABEL_144:
        v80 = 1LL;
      else
        v80 = *((_QWORD *)v23 + 15);
      if ( v70[7].Blink < (struct _LIST_ENTRY *)v80 )
      {
        v81 = CVisual::UpdateWorldTransform(
                (CVisual *)v67,
                (const struct CVisualTree *)v9,
                (struct CTreeData *)v70,
                v102,
                v23);
        v68 = v81;
        if ( v81 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v69, 0LL, 0, v81, 0x7B0u, 0LL);
      }
      if ( v68 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v69, 0LL, 0, v68, 0x6FAu, 0LL);
      }
      else
      {
        if ( !v70[7].Blink )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v69, 0LL, 0, -2003292412, 0x69u, 0LL);
          v68 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, -2003292412, 0x6FFu, 0LL);
          ShapeData = -2003292412;
          goto LABEL_152;
        }
        v68 = 0;
        v111[0] = *(struct _LIST_ENTRY *)((char *)v70 + 40);
        v111[1] = *(struct _LIST_ENTRY *)((char *)v70 + 56);
        v111[2] = *(struct _LIST_ENTRY *)((char *)v70 + 72);
        v111[3] = *(struct _LIST_ENTRY *)((char *)v70 + 88);
        v112 = (int)v70[6].Blink;
      }
    }
LABEL_154:
    ShapeData = v68;
    if ( v68 >= 0 )
    {
      CMILMatrix::Transform3DBoundsHelper<1>(v111, &v115, &v115);
      goto LABEL_156;
    }
LABEL_152:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v69, 0LL, 0, v68, 0x69u, 0LL);
    return ShapeData;
  }
LABEL_156:
  v83 = *((float *)this + 22);
  if ( v83 < *(float *)&v115
    || *((float *)&v115 + 2) <= v83
    || (v84 = *((float *)this + 23), v84 < *((float *)&v115 + 1))
    || *((float *)&v115 + 3) <= v84 )
  {
    v101 = v105;
    v97 = v103;
    goto LABEL_195;
  }
  v89 = 0;
  if ( (**(_DWORD **)(v3 + 224) & 0x800000) != 0 )
  {
    v85 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v3 + 224), 9LL);
    v87 = *(unsigned int *)(v86 + 4);
    v88 = v85 >= (unsigned int)v87 ? 0LL : (_QWORD *)(v87 + 15 + v86 + 8LL * v85 - (((_BYTE)v87 + 15) & 7));
    if ( *v88 && *((_QWORD *)CVisual::GetInteractionInternal((CVisual *)v3) + 34) )
      v89 = 1;
  }
  v90 = *((_DWORD *)this + 52);
  *(_BYTE *)(v3 + 93) |= 4u;
  v91 = v90 & 2;
  v92 = v106;
  if ( !v106 )
  {
    if ( v89
      && v91
      && CHitTestContext::GetPointInLocalSpace(
           (const struct D2D_POINT_2F *)this + 11,
           (const struct CMILMatrix *)v109,
           (struct D2D_POINT_2F *)&lpMem) )
    {
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v3);
      CInteraction::PushHoverPointer(InteractionInternal, (const struct D2D_POINT_2F *)&lpMem);
    }
    goto LABEL_185;
  }
  v106 = 0LL;
  v107 = 0;
  ShapeData = CGeometry::GetShapeData(v92, (const struct D2D_SIZE_F *)(v3 + 132), (struct CShapePtr *)&v106);
  if ( (ShapeData & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, ShapeData, 0x7Fu, 0LL);
    goto LABEL_180;
  }
  if ( v106
    && CHitTestContext::GetPointInLocalSpace(
         (const struct D2D_POINT_2F *)this + 11,
         (const struct CMILMatrix *)v113,
         (struct D2D_POINT_2F *)&lpMem) )
  {
    ShapeData = CShapePtr::FillContainsPoint(&v106, (const struct D2D_POINT_2F *)&lpMem, &v102);
    if ( (ShapeData & 0x80000000) == 0 )
    {
      *(_BYTE *)(v3 + 93) ^= (*(_BYTE *)(v3 + 93) ^ (4 * v102)) & 4;
      if ( (*(_BYTE *)(v3 + 93) & 4) != 0 && v89 && v91 )
      {
        v95 = CVisual::GetInteractionInternal((CVisual *)v3);
        CInteraction::PushHoverPointer(v95, (const struct D2D_POINT_2F *)&lpMem);
      }
      goto LABEL_177;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, ShapeData, 0x87u, 0LL);
LABEL_180:
    CShapePtr::Release((CShapePtr *)&v106);
    return ShapeData;
  }
LABEL_177:
  CShapePtr::Release((CShapePtr *)&v106);
LABEL_185:
  v97 = v103;
  if ( v103 )
  {
    if ( CVisual::HasBspPolygonList((CVisual *)v3) && (*(_BYTE *)(v3 + 93) & 4) != 0 )
    {
      v114 = 0;
      v102 = 0;
      CVisual::CalcCpuClippingTransform(v3, 5, v9, 0LL, &v102, (CMILMatrix *)v113, 0LL);
      CMatrixStack::Push((CHitTestContext *)((char *)this + 176), (const struct CMILMatrix *)v113, 0);
      LOBYTE(v108[18].Flink) |= 1u;
      LODWORD(v9) = CVisual::GetBspPolygonListCount((CVisual *)v3);
      if ( (_DWORD)v9 )
      {
        while ( !*((_QWORD *)this + 14) )
        {
          v9 = (unsigned int)(v9 - 1);
          BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v3);
          v99 = CHitTestContext::BspHitTest(
                  this,
                  (const struct CMILMatrix *)v109,
                  *(struct CPolygon **)(*BspPolygonList + 8 * v9));
          ShapeData = v99;
          if ( v99 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v100, 0LL, 0, v99, 0xAEu, 0LL);
            return ShapeData;
          }
          if ( !(_DWORD)v9 )
            break;
        }
      }
    }
    v101 = v105;
    *v105 = 0;
LABEL_195:
    if ( !v97 )
    {
      *v101 = (*(_BYTE *)(v3 + 93) & 4) != 0;
      return ShapeData;
    }
    return ShapeData;
  }
  *v105 = (*(_BYTE *)(v3 + 93) & 4) != 0;
  return ShapeData;
}
