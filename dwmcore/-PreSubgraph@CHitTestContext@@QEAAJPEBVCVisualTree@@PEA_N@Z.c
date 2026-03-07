__int64 __fastcall CHitTestContext::PreSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // r13
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v5; // rdi
  __int64 v7; // rax
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int128 *v12; // rax
  int v13; // r15d
  __int64 v14; // rax
  void *v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // eax
  _QWORD *v18; // r15
  _DWORD *v19; // r8
  bool v20; // zf
  char v21; // bl
  bool v22; // al
  __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rcx
  struct _LIST_ENTRY **v25; // rbx
  struct CTreeData *v26; // r13
  _DWORD *v27; // r8
  struct _LIST_ENTRY **v28; // rdx
  CVisual *v29; // r12
  unsigned __int64 v30; // rax
  struct D2D_POINT_2F v31; // rcx
  int v32; // eax
  __int128 v33; // xmm0
  __int64 v34; // r12
  struct CTreeData *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _LIST_ENTRY *v38; // rcx
  struct CTreeData *v39; // rbx
  _DWORD *v40; // r8
  struct _LIST_ENTRY **v41; // rdx
  unsigned __int64 v42; // rax
  float v43; // xmm1_4
  float v44; // xmm1_4
  _DWORD *v45; // r8
  char v46; // r15
  bool v47; // r13
  CGeometry *v48; // rcx
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 i; // rcx
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _BYTE *v56; // rdx
  __int64 m; // rcx
  _QWORD *v58; // rax
  CInteraction *v59; // rax
  struct _LIST_ENTRY *v60; // rax
  struct _LIST_ENTRY v61; // xmm1
  struct _LIST_ENTRY v62; // xmm0
  struct _LIST_ENTRY v63; // xmm1
  int v64; // eax
  int ShapeData; // eax
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // ecx
  __int128 v69; // xmm1
  _BYTE *v70; // r10
  unsigned int j; // r9d
  _QWORD **v72; // rcx
  _QWORD *v73; // rcx
  _BYTE *v74; // r10
  unsigned int k; // r9d
  _QWORD **v76; // rcx
  _QWORD *v77; // rcx
  struct CEffect *EffectInternal; // rbx
  struct CEffect *v79; // rax
  unsigned int v80; // r13d
  int v81; // eax
  unsigned int v82; // ecx
  unsigned __int64 v83; // rax
  struct D2D_POINT_2F v84; // rbx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  HANDLE ProcessHeap; // rax
  struct CTreeData *TreeData; // rax
  struct CInteraction *InteractionInternal; // rbx
  unsigned int v90; // eax
  unsigned int v91; // r13d
  struct _LIST_ENTRY *v92; // rax
  unsigned int v93; // ecx
  struct _LIST_ENTRY *v94; // rax
  struct _LIST_ENTRY *v95; // rcx
  struct _LIST_ENTRY *v96; // rax
  struct _LIST_ENTRY *v97; // rcx
  struct _LIST_ENTRY *v98; // rax
  unsigned int v99; // ecx
  struct _LIST_ENTRY *v100; // rax
  struct _LIST_ENTRY *v101; // rcx
  struct _LIST_ENTRY *v102; // rax
  struct _LIST_ENTRY *v103; // rcx
  CInteraction *v104; // rax
  __int64 v105; // rbx
  _QWORD *BspPolygonList; // rax
  int v107; // eax
  unsigned int v108; // ecx
  bool v109; // [rsp+30h] [rbp-D0h] BYREF
  char v110; // [rsp+31h] [rbp-CFh]
  struct D2D_POINT_2F v111; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+40h] [rbp-C0h]
  bool *v113; // [rsp+48h] [rbp-B8h]
  CGeometry *v114; // [rsp+50h] [rbp-B0h] BYREF
  char v115; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY **v116; // [rsp+60h] [rbp-A0h]
  _OWORD v117[4]; // [rsp+70h] [rbp-90h] BYREF
  int v118; // [rsp+B0h] [rbp-50h]
  _BYTE v119[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v120; // [rsp+100h] [rbp+0h]
  _BYTE v121[64]; // [rsp+110h] [rbp+10h] BYREF
  int v122; // [rsp+150h] [rbp+50h]
  __int128 v123; // [rsp+160h] [rbp+60h]
  __int64 v124; // [rsp+170h] [rbp+70h]
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v3 = *((_QWORD *)this + 3);
  p_Blink = 0LL;
  v5 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)a2;
  v112 = v3;
  v116 = 0LL;
  v10 = 0;
  v113 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v7 + 184))(a2) )
  {
    p_Blink = (struct _LIST_ENTRY **)(v5 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v5);
    if ( !TreeDataListHead )
      goto LABEL_4;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_4;
    while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
    {
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_4;
    }
    p_Blink = &Flink[-23].Blink;
  }
  v116 = p_Blink;
LABEL_4:
  v11 = *((_QWORD *)a2 + 8);
  if ( v5 == v11 )
  {
    if ( v11 )
      v12 = (__int128 *)((char *)a2 + 72);
    else
      v12 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  else
  {
    v12 = (__int128 *)(v5 + 148);
  }
  v123 = *v12;
  v124 = *((_QWORD *)v12 + 2);
  *(_BYTE *)(v5 + 101) &= ~1u;
  *((_BYTE *)p_Blink + 360) = 0;
  *a3 = 1;
  v13 = *(_DWORD *)(v5 + 208);
  if ( v13 == -1 )
    goto LABEL_13;
  v14 = *((unsigned int *)this + 45);
  v15 = 0LL;
  v111 = 0LL;
  if ( *((_DWORD *)this + 44) != (_DWORD)v14 )
    goto LABEL_8;
  v80 = 2 * v14;
  if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x64u, 0LL);
    v3 = v112;
  }
  else
  {
    if ( v80 <= 0x40 )
      v80 = 64;
    v81 = HrMalloc(4uLL, v80, (void **)&v111);
    if ( v81 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0x6Bu, 0LL);
    }
    else
    {
      v83 = 4LL * *((unsigned int *)this + 44);
      if ( v83 <= 0xFFFFFFFF )
      {
        v84 = v111;
        memcpy_0(*(void **)&v111, *((const void **)this + 24), (unsigned int)v83);
        operator delete(*((void **)this + 24));
        *((struct D2D_POINT_2F *)this + 24) = v84;
        v15 = 0LL;
        *((_DWORD *)this + 45) = v80;
        v3 = v112;
LABEL_8:
        *(_DWORD *)(*((_QWORD *)this + 24) + 4LL * *((unsigned int *)this + 44)) = v13;
        v16 = *((_DWORD *)this + 50);
        if ( v16 <= ++*((_DWORD *)this + 44) )
          v16 = *((_DWORD *)this + 44);
        *((_DWORD *)this + 50) = v16;
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
    }
    v15 = (void *)v111;
    v3 = v112;
  }
LABEL_11:
  if ( v15 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v15);
  }
LABEL_13:
  v17 = *((float *)&v124 + 1) <= *(float *)&v124;
  if ( *((float *)&v123 + 2) <= *(float *)&v123 )
    ++v17;
  if ( *((float *)&v123 + 3) <= *((float *)&v123 + 1) )
    ++v17;
  if ( v17 > 1 || (*(_BYTE *)(v5 + 101) & 0x20) != 0 )
    goto LABEL_85;
  if ( !*(_DWORD *)(v5 + 108) && (**(_DWORD **)(v5 + 232) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)v5);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
            EffectInternal,
            187LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
              EffectInternal,
              58LL) )
        goto LABEL_21;
      EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 11);
    }
    if ( EffectInternal )
    {
LABEL_85:
      *v113 = 0;
      return v10;
    }
  }
LABEL_21:
  v18 = (_QWORD *)(v5 + 232);
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    TreeData = CVisual::FindTreeData((CVisual *)v5, a2);
    if ( TreeData )
    {
      if ( *((_QWORD *)TreeData + 32) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)TreeData + 33) + 16LL) + 496LL) )
        goto LABEL_85;
    }
  }
  v19 = (_DWORD *)*v18;
  if ( (*(_DWORD *)*v18 & 0x800000) != 0 )
  {
    v50 = (unsigned int)v19[1];
    v51 = v19 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v50; ++v51 )
    {
      if ( *v51 == 9 )
        break;
      i = (unsigned int)(i + 1);
    }
    v53 = (unsigned int)i >= (unsigned int)v50
        ? 0LL
        : (__int64 *)((char *)v19 + 8 * i - (((_BYTE)v50 + 15) & 7) + v50 + 15);
    v54 = *v53;
    if ( v54 )
    {
      if ( (*(_BYTE *)(v54 + 192) & 8) != 0 )
      {
        InteractionInternal = CVisual::GetInteractionInternal((CVisual *)v5);
        v90 = CHitTestContext::AdjustInputTypeForInteraction(
                (__int64)this,
                *((_DWORD *)this + 24),
                (__int64)InteractionInternal);
        v91 = v90;
        if ( (*((_DWORD *)this + 24) == 2
           || *((_DWORD *)this + 24) == 3
           || *((_DWORD *)this + 24) == 4
           || (unsigned int)(*((_DWORD *)this + 24) - 5) <= 1)
          && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)InteractionInternal + 8) + 80LL))(
               (__int64)InteractionInternal + 64,
               v90,
               0LL)
          && CHitTestContext::InteractionMatchesHitTest((__int64)this, v91, (__int64)InteractionInternal) )
        {
          InputTraceLogging::DWM::InputTransparencyEvaluation(InteractionInternal, 1);
        }
        else
        {
          InputTraceLogging::DWM::InputTransparencyEvaluation(InteractionInternal, 0);
          if ( *((_BYTE *)this + 128) || *((_DWORD *)this + 24) != 2 || (*((_BYTE *)InteractionInternal + 192) & 3) == 0 )
          {
            *v113 = 0;
            return v10;
          }
          if ( !*((_QWORD *)this + 15) )
            *((_QWORD *)this + 15) = v5;
        }
        v3 = v112;
      }
    }
  }
  if ( !*v113 )
    return v10;
  v20 = *(_DWORD *)(v5 + 108) == 1;
  v118 = 0;
  v120 = 0;
  v21 = v20;
  if ( v3 && *(_DWORD *)(v3 + 108) == 1 )
    LOBYTE(v10) = 1;
  v22 = 1;
  if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5) )
  {
    if ( (*(_DWORD *)*v18 & 0x400000) == 0
      || (v79 = CVisual::GetEffectInternal((CVisual *)v5),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v79 + 56LL))(v79, 61LL)) )
    {
      v22 = 0;
    }
  }
  if ( !v21 )
    goto LABEL_33;
  if ( (_BYTE)v10 )
  {
    if ( !v22 )
    {
LABEL_33:
      v110 = 0;
      goto LABEL_34;
    }
  }
  else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v5 + 80)) )
  {
    goto LABEL_33;
  }
  v110 = 1;
LABEL_34:
  v114 = (CGeometry *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 208LL))(v5);
  if ( v114 )
    v111 = (struct D2D_POINT_2F)v119;
  else
    v111 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v25 = (struct _LIST_ENTRY **)(v5 + 336);
  }
  else
  {
    v92 = CVisual::GetTreeDataListHead((CVisual *)v5);
    if ( !v92 )
      goto LABEL_198;
    v24 = v92->Flink;
    if ( v92->Flink == v92 )
      goto LABEL_198;
    while ( 1 )
    {
      v25 = &v24[-23].Blink;
      if ( (const struct CVisualTree *)v24[2].Flink == a2 )
        break;
      v24 = v24->Flink;
      if ( v24 == v92 )
        goto LABEL_198;
    }
  }
  if ( !v25 )
  {
LABEL_198:
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v24, 0LL, 0, -2003292412, 0x6ADu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, -2003292412, 0x89u, 0LL);
    return v10;
  }
  v26 = 0LL;
  LOBYTE(v23) = 0;
  if ( v5 == *((_QWORD *)a2 + 8) )
    goto LABEL_88;
  v27 = (_DWORD *)*v18;
  if ( (*(_DWORD *)*v18 & 0x1000000) != 0 )
  {
    v23 = (unsigned int)v27[1];
    v70 = v27 + 2;
    for ( j = 0; j < (unsigned int)v23; ++v70 )
    {
      if ( *v70 == 8 )
        break;
      ++j;
    }
    if ( j >= (unsigned int)v23 )
    {
      v72 = 0LL;
    }
    else
    {
      v23 += 15LL;
      v72 = (_QWORD **)((char *)v27 + 8LL * j - (v23 & 7) + v23);
    }
    v73 = *v72;
    if ( v73 )
      v26 = (struct CTreeData *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v73 + 184LL))(*v73);
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, __int64))(*(_QWORD *)a2 + 184LL))(a2, v23) )
  {
    v28 = (struct _LIST_ENTRY **)(v5 + 336);
  }
  else
  {
    v94 = CVisual::GetTreeDataListHead((CVisual *)v5);
    if ( !v94 )
      goto LABEL_46;
    v95 = v94->Flink;
    if ( v94->Flink == v94 )
      goto LABEL_46;
    while ( 1 )
    {
      v28 = &v95[-23].Blink;
      if ( (const struct CVisualTree *)v95[2].Flink == a2 )
        break;
      v95 = v95->Flink;
      if ( v95 == v94 )
        goto LABEL_46;
    }
  }
  if ( v28 && v28[32] != v28[33][1].Flink[31].Flink && v26 )
  {
    v26 = CVisual::FindTreeData(v26, a2);
    LOBYTE(v23) = 1;
    goto LABEL_49;
  }
LABEL_46:
  v29 = *(CVisual **)(v5 + 88);
  v26 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v26 = (CVisual *)((char *)v29 + 336);
  }
  else
  {
    v96 = CVisual::GetTreeDataListHead(v29);
    if ( v96 )
    {
      v97 = v96->Flink;
      if ( v96->Flink != v96 )
      {
        while ( (const struct CVisualTree *)v97[2].Flink != a2 )
        {
          v97 = v97->Flink;
          if ( v97 == v96 )
            goto LABEL_48;
        }
        v26 = (struct CTreeData *)&v97[-23].Blink;
      }
    }
  }
LABEL_48:
  LOBYTE(v23) = 0;
LABEL_49:
  if ( v26 )
  {
    v30 = *((_QWORD *)v26 + 31);
    goto LABEL_51;
  }
LABEL_88:
  v30 = 0LL;
  if ( g_pComposition )
    v30 = *((_QWORD *)g_pComposition + 62);
LABEL_51:
  if ( (unsigned __int64)v25[31] < v30 )
    CVisual::UpdateWorldTransform((CVisual *)v5, a2, (struct CTreeData *)v25, v23, v26);
  if ( !v25[31] )
    ModuleFailFastForHRESULT(2291674884LL, retaddr);
  v31 = v111;
  v32 = *((_DWORD *)v25 + 88);
  v117[0] = *((_OWORD *)v25 + 18);
  v118 = v32;
  v33 = *((_OWORD *)v25 + 20);
  v117[1] = *((_OWORD *)v25 + 19);
  v117[2] = v33;
  v117[3] = *((_OWORD *)v25 + 21);
  if ( v111 )
  {
    v60 = v25[34];
    if ( v60 )
    {
      v61 = v60[1];
      *(struct _LIST_ENTRY *)*(_QWORD *)&v111 = *v60;
      v62 = v60[2];
      *(struct _LIST_ENTRY *)(*(_QWORD *)&v31 + 16LL) = v61;
      v63 = v60[3];
      v64 = (int)v60[4].Flink;
    }
    else
    {
      v64 = *((_DWORD *)v25 + 88);
      v69 = *((_OWORD *)v25 + 19);
      *(_OWORD *)*(_QWORD *)&v111 = *((_OWORD *)v25 + 18);
      v62 = (struct _LIST_ENTRY)*((_OWORD *)v25 + 20);
      *(_OWORD *)(*(_QWORD *)&v31 + 16LL) = v69;
      v63 = (struct _LIST_ENTRY)*((_OWORD *)v25 + 21);
    }
    *(struct _LIST_ENTRY *)(*(_QWORD *)&v31 + 32LL) = v62;
    *(struct _LIST_ENTRY *)(*(_QWORD *)&v31 + 48LL) = v63;
    *(_DWORD *)(*(_QWORD *)&v31 + 64LL) = v64;
  }
  v10 = 0;
  if ( v5 != *((_QWORD *)a2 + 8) )
  {
    v34 = *(_QWORD *)(v5 + 88);
    v35 = 0LL;
    v36 = *(_QWORD *)a2;
    v122 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, __int64))(v36 + 184))(a2, v23) )
    {
      v39 = (struct CTreeData *)(v34 + 336);
    }
    else
    {
      v98 = CVisual::GetTreeDataListHead((CVisual *)v34);
      if ( !v98 )
        goto LABEL_215;
      v38 = v98->Flink;
      if ( v98->Flink == v98 )
        goto LABEL_215;
      while ( 1 )
      {
        v39 = (struct CTreeData *)&v38[-23].Blink;
        if ( (const struct CVisualTree *)v38[2].Flink == a2 )
          break;
        v38 = v38->Flink;
        if ( v38 == v98 )
          goto LABEL_215;
      }
    }
    if ( v39 )
    {
      LOBYTE(v37) = 0;
      v109 = 0;
      if ( v34 == *((_QWORD *)a2 + 8) )
        goto LABEL_90;
      v40 = *(_DWORD **)(v34 + 232);
      if ( (*v40 & 0x1000000) != 0 )
      {
        v37 = (unsigned int)v40[1];
        v74 = v40 + 2;
        for ( k = 0; k < (unsigned int)v37; ++v74 )
        {
          if ( *v74 == 8 )
            break;
          ++k;
        }
        if ( k >= (unsigned int)v37 )
        {
          v76 = 0LL;
        }
        else
        {
          v37 += 15LL;
          v76 = (_QWORD **)((char *)v40 + 8LL * k - (v37 & 7) + v37);
        }
        v77 = *v76;
        if ( v77 )
          v35 = (struct CTreeData *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v77 + 184LL))(*v77);
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, __int64))(*(_QWORD *)a2 + 184LL))(a2, v37) )
      {
        v41 = (struct _LIST_ENTRY **)(v34 + 336);
      }
      else
      {
        v100 = CVisual::GetTreeDataListHead((CVisual *)v34);
        if ( !v100 )
          goto LABEL_66;
        v101 = v100->Flink;
        if ( v100->Flink == v100 )
          goto LABEL_66;
        while ( 1 )
        {
          v41 = &v101[-23].Blink;
          if ( (const struct CVisualTree *)v101[2].Flink == a2 )
            break;
          v101 = v101->Flink;
          if ( v101 == v100 )
            goto LABEL_66;
        }
      }
      if ( v41 && v41[32] != v41[33][1].Flink[31].Flink && v35 )
      {
        v35 = CVisual::FindTreeData(v35, a2);
        LOBYTE(v37) = 1;
        goto LABEL_69;
      }
LABEL_66:
      v35 = 0LL;
      v111 = *(struct D2D_POINT_2F *)(v34 + 88);
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      {
        v35 = (struct CTreeData *)(*(_QWORD *)&v111 + 336LL);
      }
      else
      {
        v102 = CVisual::GetTreeDataListHead(*(CVisual **)&v111);
        if ( v102 )
        {
          v103 = v102->Flink;
          if ( v102->Flink != v102 )
          {
            while ( (const struct CVisualTree *)v103[2].Flink != a2 )
            {
              v103 = v103->Flink;
              if ( v103 == v102 )
                goto LABEL_68;
            }
            v35 = (struct CTreeData *)&v103[-23].Blink;
          }
        }
      }
LABEL_68:
      LOBYTE(v37) = 0;
LABEL_69:
      if ( v35 )
      {
        v42 = *((_QWORD *)v35 + 31);
LABEL_71:
        if ( *((_QWORD *)v39 + 31) < v42 )
          CVisual::UpdateWorldTransform((CVisual *)v34, a2, v39, v37, v35);
        CTreeData::GetWorldTransform(v39, (struct CMILMatrix *)v121, &v109, 0LL);
        v10 = 0;
        CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v121);
        goto LABEL_74;
      }
LABEL_90:
      v42 = 0LL;
      if ( g_pComposition )
        v42 = *((_QWORD *)g_pComposition + 62);
      goto LABEL_71;
    }
LABEL_215:
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v38, 0LL, 0, -2003292412, 0x6ADu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, -2003292412, 0x91u, 0LL);
    return v10;
  }
LABEL_74:
  v43 = *((float *)this + 22);
  if ( v43 < *(float *)&v123
    || *((float *)&v123 + 2) <= v43
    || (v44 = *((float *)this + 23), v44 < *((float *)&v123 + 1))
    || *((float *)&v123 + 3) <= v44 )
  {
    if ( v110 )
      return v10;
    goto LABEL_83;
  }
  v45 = (_DWORD *)*v18;
  if ( (*(_DWORD *)*v18 & 0x800000) == 0 )
    goto LABEL_79;
  v55 = (unsigned int)v45[1];
  v56 = v45 + 2;
  for ( m = 0LL; (unsigned int)m < (unsigned int)v55; ++v56 )
  {
    if ( *v56 == 9 )
      break;
    m = (unsigned int)(m + 1);
  }
  v58 = (unsigned int)m >= (unsigned int)v55
      ? 0LL
      : (_QWORD *)((char *)v45 + 8 * m - (((_BYTE)v55 + 15) & 7) + v55 + 15);
  if ( *v58 && *((_QWORD *)CVisual::GetInteractionInternal((CVisual *)v5) + 35) )
    v46 = 1;
  else
LABEL_79:
    v46 = 0;
  v47 = (*((_BYTE *)this + 240) & 2) != 0;
  *(_BYTE *)(v5 + 101) |= 1u;
  v48 = v114;
  if ( !v114 )
  {
    if ( v46
      && v47
      && CHitTestContext::GetPointInLocalSpace(
           (const struct D2D_POINT_2F *)this + 11,
           (const struct CMILMatrix *)v117,
           &v111) )
    {
      v59 = CVisual::GetInteractionInternal((CVisual *)v5);
      CInteraction::PushHoverPointer(v59, &v111);
    }
    goto LABEL_82;
  }
  v114 = 0LL;
  v115 = 0;
  ShapeData = CGeometry::GetShapeData(v48, (const struct D2D_SIZE_F *)(v5 + 140), (struct CShapePtr *)&v114);
  v10 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, ShapeData, 0xA7u, 0LL);
    goto LABEL_233;
  }
  if ( v114
    && CHitTestContext::GetPointInLocalSpace(
         (const struct D2D_POINT_2F *)this + 11,
         (const struct CMILMatrix *)v119,
         &v111) )
  {
    v67 = CShapePtr::FillContainsPoint((CShapePtr *)&v114, &v111, &v109);
    v10 = v67;
    if ( v67 >= 0 )
    {
      *(_BYTE *)(v5 + 101) ^= (*(_BYTE *)(v5 + 101) ^ v109) & 1;
      if ( (*(_BYTE *)(v5 + 101) & 1) != 0 && v46 && v47 )
      {
        v104 = CVisual::GetInteractionInternal((CVisual *)v5);
        CInteraction::PushHoverPointer(v104, &v111);
      }
      goto LABEL_121;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0xAFu, 0LL);
LABEL_233:
    CShapePtr::Release((CShapePtr *)&v114);
    return v10;
  }
LABEL_121:
  CShapePtr::Release((CShapePtr *)&v114);
LABEL_82:
  if ( !v110 )
  {
LABEL_83:
    *v113 = *(_BYTE *)(v5 + 101) & 1;
    return v10;
  }
  if ( CVisual::HasBspPolygonList((CVisual *)v5) && (*(_BYTE *)(v5 + 101) & 1) != 0 )
  {
    v120 = 0;
    v109 = 0;
    CVisual::CalcTransform((CVisual *)v5, a2, 0LL, &v109, (struct CMILMatrix *)v119, 0LL);
    CMatrixStack::Push((CHitTestContext *)((char *)this + 208), (const struct CMILMatrix *)v119, 0);
    *((_BYTE *)v116 + 360) = 1;
    LODWORD(v105) = CVisual::GetBspPolygonListCount((CVisual *)v5);
    if ( (_DWORD)v105 )
    {
      while ( !*((_QWORD *)this + 14) )
      {
        v105 = (unsigned int)(v105 - 1);
        BspPolygonList = (_QWORD *)CVisual::GetBspPolygonList(v5);
        v107 = CHitTestContext::BspHitTest(
                 this,
                 (const struct CMILMatrix *)v117,
                 *(struct CPolygon **)(*BspPolygonList + 8 * v105));
        v10 = v107;
        if ( v107 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v108, 0LL, 0, v107, 0xD6u, 0LL);
          return v10;
        }
        if ( !(_DWORD)v105 )
          break;
      }
    }
  }
  *v113 = 0;
  return v10;
}
