__int64 __fastcall CDrawingContext::PostSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  bool *v4; // rbp
  unsigned int v5; // esi
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  int v17; // eax
  unsigned int v18; // ecx
  _QWORD *v19; // r10
  _QWORD *v20; // r11
  char **v21; // r13
  struct _LIST_ENTRY *v22; // r15
  struct _LIST_ENTRY **p_Blink; // r11
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *v25; // rax
  __int64 v26; // rax
  char *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  _BYTE *v31; // rdx
  __int64 i; // rcx
  _QWORD **v33; // rcx
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  char *v37; // rdx
  struct _LIST_ENTRY *v38; // r8
  __int64 v39; // r8
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  unsigned int v45; // ecx
  void *DirtyRegionVisualizationData; // rbp

  v4 = a3;
  v5 = 0;
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  *v4 = 1;
  v8 = *((_QWORD *)this + 25);
  if ( !v8 )
  {
LABEL_2:
    if ( (*(_BYTE *)(v7 + 102) & 2) != 0 || (*(_DWORD *)(v7 + 96) & 0x100) == 0 )
      goto LABEL_19;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      goto LABEL_5;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      v36 = v7 + 336;
    }
    else
    {
      v29 = *(_QWORD *)(v7 + 232);
      if ( *(int *)v29 >= 0 )
        goto LABEL_5;
      v30 = *(unsigned int *)(v29 + 4);
      v31 = (_BYTE *)(v29 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v30; ++v31 )
      {
        if ( *v31 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v33 = (unsigned int)i >= (unsigned int)v30 ? 0LL : (_QWORD **)(v30 + 15 + v29 + 8 * i - (((_BYTE)v30 + 15) & 7));
      v34 = *v33;
      if ( !v34 || (v35 = (_QWORD *)*v34, (_QWORD *)*v34 == v34) )
      {
LABEL_5:
        if ( *((_BYTE *)this + 8172) )
        {
          v9 = *((_DWORD *)this + 820);
          if ( v9 )
          {
            if ( *(_BYTE *)((unsigned int)(v9 - 1) + *((_QWORD *)this + 412)) )
              CVisual::RenderProjectedShadows(v7, this, 0);
          }
        }
        if ( (*(_BYTE *)(v7 + 101) & 0x18) != 0 )
        {
          v42 = *((_DWORD *)g_pComposition + 278);
          if ( v42 )
            *((_DWORD *)g_pComposition + 278) = v42 - 1;
        }
        while ( 1 )
        {
          v10 = *((_DWORD *)this + 92);
          if ( !v10
            || _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 48) + 16LL * (unsigned int)(v10 - 1)), 8).m128i_u64[0] != v7 )
          {
            break;
          }
          v17 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 96LL))((char *)this + 16);
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xDF0u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v5, 0x1809u, 0LL);
            goto LABEL_19;
          }
        }
        v11 = *((_DWORD *)this + 848);
        v12 = 0LL;
        v13 = (unsigned int)(v11 - 1);
        if ( v11 )
          v12 = (_QWORD *)(*((_QWORD *)this + 426) + 16LL * (unsigned int)v13);
        v14 = (unsigned int)v13;
        if ( *v12 == v7 && v11 )
          *((_DWORD *)this + 848) = v13;
        if ( (*(_BYTE *)(v7 + 101) & 2) == 0 )
          goto LABEL_16;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1007) + 184LL))(
               *((_QWORD *)this + 1007),
               v13,
               (unsigned int)v13) )
        {
          v44 = CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(this);
          v5 = v44;
          if ( v44 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x1815u, 0LL);
            goto LABEL_19;
          }
          goto LABEL_17;
        }
        if ( (*(_BYTE *)(v7 + 101) & 2) == 0 )
        {
LABEL_16:
          if ( (**(_DWORD **)(v7 + 232) & 0x80000) != 0 )
          {
            DirtyRegionVisualizationData = (void *)CVisual::GetDirtyRegionVisualizationData(v7, v13, v14);
            std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Tidy(DirtyRegionVisualizationData);
            if ( DirtyRegionVisualizationData )
            {
              std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::~deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>(DirtyRegionVisualizationData);
              operator delete(DirtyRegionVisualizationData, 0x28uLL);
            }
            CVisual::SetDirtyRegionVisualizationData(v7, 0LL);
            v4 = a3;
          }
        }
LABEL_17:
        if ( *((_BYTE *)this + 193) )
          *v4 = 0;
        goto LABEL_19;
      }
      while ( 1 )
      {
        v36 = (__int64)(v35 - 45);
        if ( (const struct CVisualTree *)v35[4] == a2 )
          break;
        v35 = (_QWORD *)*v35;
        if ( v35 == v34 )
          goto LABEL_5;
      }
    }
    if ( v36 && *(_QWORD *)(v36 + 256) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 264) + 16LL) + 496LL) )
      goto LABEL_19;
    goto LABEL_5;
  }
  v19 = *(_QWORD **)(v8 + 1960);
  v20 = *(_QWORD **)(v8 + 1968);
  v21 = (char **)*((_QWORD *)this + 1010);
  if ( v19 != v20 )
  {
    while ( 1 )
    {
      if ( v7 == *v19 )
      {
        v27 = (char *)v19[1];
        if ( (((v19[2] - (_QWORD)v27) ^ (v21[1] - *v21)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          break;
      }
LABEL_26:
      v19 += 8;
      if ( v19 == v20 )
        goto LABEL_27;
    }
    v28 = *v21 - v27;
    while ( &v27[v28] != v21[1] )
    {
      if ( *(_QWORD *)&v27[v28] != *(_QWORD *)v27 || *(_QWORD *)&v27[v28 + 8] != *((_QWORD *)v27 + 1) )
        goto LABEL_26;
      v27 += 16;
    }
    if ( !*((_BYTE *)this + 193) )
    {
      v5 = -2147221184;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v27, 0LL, 0, -2147221184, 0x17D7u, 0LL);
      goto LABEL_19;
    }
  }
LABEL_27:
  v22 = (struct _LIST_ENTRY *)*((_QWORD *)v21[1] - 1);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v22->Flink[11].Blink)(v22) )
  {
    p_Blink = (struct _LIST_ENTRY **)(v7 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v7);
    if ( !TreeDataListHead )
      goto LABEL_74;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_74;
    while ( 1 )
    {
      p_Blink = &Flink[-23].Blink;
      if ( Flink[2].Flink == v22 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_74;
    }
  }
  if ( !p_Blink )
  {
LABEL_74:
    v25 = 0LL;
    goto LABEL_34;
  }
  for ( j = p_Blink[21]; ; j = (struct _LIST_ENTRY *)((char *)j + 8) )
  {
    if ( j == p_Blink[22] )
    {
      v25 = 0LL;
      goto LABEL_33;
    }
    v37 = *v21;
    v38 = j->Flink[112].Flink;
    if ( (((v21[1] - *v21) ^ ((char *)j->Flink[112].Blink - (char *)v38)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      break;
LABEL_77:
    ;
  }
  v39 = (char *)v38 - v37;
  while ( &v37[v39] != (char *)j->Flink[112].Blink )
  {
    if ( *(_QWORD *)&v37[v39] != *(_QWORD *)v37 || *(_QWORD *)&v37[v39 + 8] != *((_QWORD *)v37 + 1) )
      goto LABEL_77;
    v37 += 16;
  }
  j->Flink[124].Flink = p_Blink[33][1].Flink[31].Flink;
  v25 = j->Flink;
LABEL_33:
  v4 = a3;
LABEL_34:
  if ( v25 != *((struct _LIST_ENTRY **)this + 25) )
    goto LABEL_2;
  v26 = *((_QWORD *)this + 26);
  *v4 = 0;
  if ( v26 )
    *(_BYTE *)(v26 + 193) = 1;
LABEL_19:
  v15 = *((_DWORD *)this + 820);
  if ( v15 )
    *((_DWORD *)this + 820) = v15 - 1;
  return v5;
}
