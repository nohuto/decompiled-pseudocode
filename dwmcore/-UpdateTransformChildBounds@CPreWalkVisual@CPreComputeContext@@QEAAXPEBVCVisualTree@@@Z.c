/*
 * XREFs of ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180088C20
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000B790 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180012054 (--$uninitialized_copy@V-$move_iterator@PEAPEAVIDeviceResource@@@std@@V-$checked_array_iterator@P.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800148F4 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18001B368 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x180039DEC (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18004A400 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x180089430 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expans.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008957C (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18008A44C (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x18008A560 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180098C6C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800E4358 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B026C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

void __fastcall CPreComputeContext::CPreWalkVisual::UpdateTransformChildBounds(
        CVisual **this,
        const struct CVisualTree *a2)
{
  CVisual *v3; // rcx
  const struct CVisualTree *v4; // r12
  __int64 v5; // rbx
  __int128 *Bounds; // rax
  CVisual *v7; // rbx
  _DWORD *v8; // r8
  __int64 v9; // rdi
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 v11; // rax
  CVisual *v12; // r13
  struct CTreeData *v13; // rax
  detail::liberal_expansion_policy *v14; // rcx
  struct CComposition *v15; // r11
  _BYTE *v16; // rbx
  detail::liberal_expansion_policy **v17; // r8
  char *v18; // rdx
  __int64 v19; // r15
  CVisual *v20; // r14
  unsigned __int64 v21; // rsi
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  detail::liberal_expansion_policy **v24; // r10
  __int64 v25; // rcx
  __int64 v26; // r11
  detail::liberal_expansion_policy **v27; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  bool v33; // si
  __int64 **TreeData; // rbx
  _DWORD *v35; // r8
  struct _LIST_ENTRY **v36; // rdx
  CVisual *v37; // rdi
  __int64 *v38; // rax
  struct CTreeData *v39; // rdi
  __int64 v40; // rax
  void *v41; // rcx
  bool v42; // zf
  __int64 v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rax
  struct _LIST_ENTRY *v46; // rax
  struct _LIST_ENTRY *v47; // rcx
  struct _LIST_ENTRY *v48; // rax
  struct _LIST_ENTRY *v49; // rdx
  unsigned __int64 v50; // rdi
  char *v51; // rbx
  void *v52; // rcx
  __int64 v53; // rcx
  _BYTE *v54; // rdx
  unsigned int i; // eax
  _QWORD **v56; // rcx
  _QWORD *v57; // rcx
  __int64 v58; // rcx
  _BYTE *v59; // rdx
  unsigned int j; // eax
  _QWORD **v61; // rcx
  _QWORD *v62; // rcx
  float v63; // xmm2_4
  float v64; // xmm3_4
  float v65; // xmm6_4
  float v66; // xmm7_4
  float v67; // xmm1_4
  float v68; // xmm4_4
  float v69; // xmm5_4
  float v70; // xmm1_4
  float v71; // xmm0_4
  bool v72; // r15
  char v73; // bl
  __int64 v74; // rax
  struct CTreeData *v75; // [rsp+20h] [rbp-E0h]
  __int64 v76; // [rsp+28h] [rbp-D8h]
  __int64 v77; // [rsp+30h] [rbp-D0h] BYREF
  const struct CVisualTree *v78; // [rsp+38h] [rbp-C8h]
  struct CTreeData *v79; // [rsp+40h] [rbp-C0h]
  __int64 v80; // [rsp+48h] [rbp-B8h]
  CVisual **v81; // [rsp+50h] [rbp-B0h]
  struct D2D_VECTOR_3F v82; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v83[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v84[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v85[24]; // [rsp+B0h] [rbp-50h] BYREF
  char *v86; // [rsp+C8h] [rbp-38h]
  detail::liberal_expansion_policy **v87; // [rsp+D0h] [rbp-30h]
  char *v88; // [rsp+D8h] [rbp-28h]
  _BYTE v89[256]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v90; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE *v91; // [rsp+1E8h] [rbp+E8h]
  __int64 *v92; // [rsp+1F0h] [rbp+F0h]
  _BYTE v93[256]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v94; // [rsp+2F8h] [rbp+1F8h] BYREF

  v81 = this;
  v3 = *this;
  v4 = a2;
  v78 = a2;
  if ( !CVisual::GetTransformParent(v3, a2, 0LL) )
    return;
  v5 = (__int64)*this;
  if ( (*(_BYTE *)(v5 + 96) & 1) != 0 )
    return;
  Bounds = CVisual::GetBounds(v5, (__int64)v4);
  if ( TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)Bounds) )
    return;
  v90 = v93;
  v91 = v93;
  v92 = &v94;
  v7 = *(CVisual **)(v5 + 88);
  if ( v7 )
  {
    while ( 1 )
    {
      *(_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::reserve_region(
                   &v90,
                   (v91 - v90) >> 3) = v7;
      if ( v7 == *((CVisual **)v4 + 8) )
        break;
      v8 = (_DWORD *)*((_QWORD *)v7 + 29);
      v9 = 0LL;
      if ( (*v8 & 0x1000000) != 0 )
      {
        v53 = (unsigned int)v8[1];
        v54 = v8 + 2;
        for ( i = 0; i < (unsigned int)v53; ++v54 )
        {
          if ( *v54 == 8 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v53 )
          v56 = 0LL;
        else
          v56 = (_QWORD **)((char *)v8 + 8LL * i - (((_BYTE)v53 + 15) & 7) + v53 + 15);
        v57 = *v56;
        if ( v57 )
          v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v57 + 184LL))(*v57);
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v4 + 184LL))(v4) )
      {
        p_Blink = (struct _LIST_ENTRY **)((char *)v7 + 336);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v7);
        if ( !TreeDataListHead )
          goto LABEL_13;
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink == TreeDataListHead )
          goto LABEL_13;
        while ( 1 )
        {
          p_Blink = &Flink[-23].Blink;
          if ( (const struct CVisualTree *)Flink[2].Flink == v4 )
            break;
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_13;
        }
      }
      if ( p_Blink && p_Blink[32] != p_Blink[33][1].Flink[31].Flink && v9 )
      {
        v7 = (CVisual *)v9;
      }
      else
      {
LABEL_13:
        v7 = (CVisual *)*((_QWORD *)v7 + 11);
        if ( !v7 )
          break;
      }
    }
  }
  v11 = (v91 - v90) >> 3;
  if ( (int)v11 <= 0 )
    goto LABEL_53;
  v11 = (int)v11;
  while ( 2 )
  {
    v80 = v11 - 1;
    v12 = *(CVisual **)&v90[8 * v11 - 8];
    v13 = CVisual::EnsureTreeData(v12, v4);
    v15 = g_pComposition;
    v16 = v89;
    v79 = v13;
    v17 = (detail::liberal_expansion_policy **)v89;
    v86 = v89;
    v18 = (char *)&v90;
    v87 = (detail::liberal_expansion_policy **)v89;
    v19 = 0LL;
    v88 = (char *)&v90;
    if ( g_pComposition )
      v19 = *((_QWORD *)g_pComposition + 62);
    v20 = v12;
    if ( v12 )
    {
      while ( *((_QWORD *)v20 + 41) != v19 )
      {
        v21 = ((char *)v17 - v16) >> 3;
        if ( !((v18 - (char *)v17) >> 3) )
        {
          if ( v21 + 1 < v21 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_137:
            _invalid_parameter_noinfo_noreturn();
          }
          v50 = detail::liberal_expansion_policy::expand(v14, (v18 - v16) >> 3, v21 + 1);
          v51 = (char *)operator new(saturated_mul(v50, 8uLL));
          v83[0] = (__int64)v51;
          v83[1] = v21;
          v83[2] = 0LL;
          std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
            (__int64)v85,
            v86,
            (__int64)v87,
            v83);
          v52 = v86;
          v42 = v86 == v89;
          v86 = v51;
          if ( v42 )
            v52 = 0LL;
          operator delete(v52);
          v16 = v86;
          v17 = (detail::liberal_expansion_policy **)&v86[8 * v21];
          v88 = &v86[8 * v50];
          v87 = v17;
        }
        v22 = ((char *)v17 - v16) >> 3;
        v23 = v22 - v21;
        v24 = (detail::liberal_expansion_policy **)&v16[8 * v22];
        if ( !v24 )
          goto LABEL_137;
        v25 = (((char *)v17 - v16) >> 3) - v21;
        v26 = 1LL;
        if ( v23 > 1 )
          v25 = 1LL;
        v14 = (detail::liberal_expansion_policy *)(8 * v25);
        v27 = (detail::liberal_expansion_policy **)((char *)v17 - (char *)v14);
        if ( v17 != (detail::liberal_expansion_policy **)((char *)v17 - (char *)v14) )
        {
          do
          {
            --v17;
            if ( !v26 )
              goto LABEL_137;
            if ( --v26 )
              goto LABEL_137;
            v14 = *v17;
            *v24 = *v17;
          }
          while ( v17 != v27 );
          v17 = v87;
        }
        if ( v23 > 1 )
        {
          if ( v22 && (!v16 || v22 < 0) )
            goto LABEL_137;
          v84[1] = v22;
          v84[2] = v22;
          v84[0] = v16;
          std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
            v85,
            &v16[8 * v21],
            &v16[8 * v22 - 8],
            v84,
            v75,
            v76,
            v77);
          v17 = v87;
        }
        v87 = v17 + 1;
        *(_QWORD *)&v16[8 * v21] = v20;
        v20 = (CVisual *)*((_QWORD *)v20 + 11);
        v17 = v87;
        v16 = v86;
        if ( !v20 )
          break;
        v18 = v88;
      }
      v15 = g_pComposition;
    }
    v30 = ((char *)v17 - v16) >> 3;
    v31 = (int)v30;
    if ( (int)v30 <= 0 )
      goto LABEL_34;
    do
    {
      v43 = *(_QWORD *)&v16[8 * v31 - 8];
      v44 = 0LL;
      if ( v15 )
        v44 = *((_QWORD *)v15 + 62);
      if ( *(_QWORD *)(v43 + 328) != v44 )
      {
        v45 = *(_QWORD *)(v43 + 88);
        if ( !v45 || (*(_BYTE *)(v45 + 96) & 1) != 0 )
        {
          v63 = 0.0;
          v64 = 0.0;
          v65 = *(float *)(v43 + 140);
          v66 = *(float *)(v43 + 144);
          if ( v45 )
          {
            v63 = *(float *)(v45 + 140);
            v64 = *(float *)(v45 + 144);
          }
          CVisual::GetRelativeOffsetInternal(*(CVisual **)&v16[8 * v31 - 8], &v82);
          v67 = (float)(v82.x * v63) + *(float *)(v43 + 112);
          *(float *)(v43 + 128) = (float)(v82.y * v64) + *(float *)(v43 + 116);
          *(float *)(v43 + 124) = v67;
          CVisual::GetRelativeLayoutSizeInternal((CVisual *)v43, &v77);
          v70 = (float)(*(float *)&v77 * v63) + *(float *)(v43 + 132);
          v71 = (float)(*((float *)&v77 + 1) * v64) + *(float *)(v43 + 136);
          *(float *)(v43 + 140) = v70;
          *(float *)(v43 + 144) = v71;
          if ( v70 < 0.0 )
          {
            *(_DWORD *)(v43 + 140) = 0;
            v70 = 0.0;
          }
          if ( v71 < 0.0 )
          {
            *(_DWORD *)(v43 + 144) = 0;
            v71 = 0.0;
          }
          v72 = v68 != *(float *)(v43 + 124) || v69 != *(float *)(v43 + 128);
          if ( v65 == v70 && v66 == v71 )
          {
            v73 = 0;
          }
          else
          {
            v74 = *(_QWORD *)(v43 + 248);
            v73 = 1;
            if ( v74 && *(_BYTE *)(v74 + 136) )
              CVisual::OnClipChanged((CVisual *)v43);
            CVisual::OnLayoutChanged((CVisual *)v43);
            v15 = g_pComposition;
          }
          if ( v72 )
          {
            CVisual::OnOuterTransformChanged((CVisual *)v43);
          }
          else if ( !v73 )
          {
LABEL_131:
            *(_QWORD *)(v43 + 328) = v44;
            v16 = v86;
            goto LABEL_63;
          }
          *(_BYTE *)(v43 + 96) |= 1u;
          goto LABEL_131;
        }
      }
LABEL_63:
      --v31;
    }
    while ( v31 > 0 );
    v4 = v78;
    v17 = v87;
LABEL_34:
    v32 = ((char *)v17 - v16) >> 3;
    if ( v32 )
      v87 = &v17[-v32];
    v86 = 0LL;
    if ( v16 == v89 )
      v16 = 0LL;
    operator delete(v16);
    v33 = 0;
    TreeData = 0LL;
    if ( v12 == *((CVisual **)v4 + 8) )
      goto LABEL_73;
    v35 = (_DWORD *)*((_QWORD *)v12 + 29);
    if ( (*v35 & 0x1000000) != 0 )
    {
      v58 = (unsigned int)v35[1];
      v59 = v35 + 2;
      for ( j = 0; j < (unsigned int)v58; ++v59 )
      {
        if ( *v59 == 8 )
          break;
        ++j;
      }
      if ( j >= (unsigned int)v58 )
        v61 = 0LL;
      else
        v61 = (_QWORD **)((char *)v35 + 8LL * j - (((_BYTE)v58 + 15) & 7) + v58 + 15);
      v62 = *v61;
      if ( v62 )
        TreeData = (__int64 **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v62 + 184LL))(*v62);
    }
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v4 + 184LL))(v4) )
    {
      v36 = (struct _LIST_ENTRY **)((char *)v12 + 336);
      goto LABEL_42;
    }
    v46 = CVisual::GetTreeDataListHead(v12);
    if ( !v46 )
      goto LABEL_140;
    v47 = v46->Flink;
    if ( v46->Flink == v46 )
      goto LABEL_140;
    while ( 1 )
    {
      v36 = &v47[-23].Blink;
      if ( (const struct CVisualTree *)v47[2].Flink == v4 )
        break;
      v47 = v47->Flink;
      if ( v47 == v46 )
        goto LABEL_45;
    }
LABEL_42:
    if ( v36 && v36[32] != v36[33][1].Flink[31].Flink && TreeData )
    {
      TreeData = CVisual::FindTreeData((CVisual *)TreeData, v4);
      v33 = 1;
    }
    else
    {
LABEL_140:
    {
LABEL_45:
      v37 = (CVisual *)*((_QWORD *)v12 + 11);
      TreeData = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v4 + 184LL))(v4) )
      {
        TreeData = (__int64 **)((char *)v37 + 336);
      }
      else
      {
        v48 = CVisual::GetTreeDataListHead(v37);
        if ( v48 )
        {
          v49 = v48->Flink;
          if ( v48->Flink != v48 )
          {
            while ( (const struct CVisualTree *)v49[2].Flink != v4 )
            {
              v49 = v49->Flink;
              if ( v49 == v48 )
                goto LABEL_47;
            }
            TreeData = (__int64 **)&v49[-23].Blink;
          }
        }
      }
    }
    }
LABEL_47:
    if ( !TreeData )
    {
LABEL_73:
      v38 = 0LL;
      if ( g_pComposition )
        v38 = (__int64 *)*((_QWORD *)g_pComposition + 62);
    }
    else
    {
      v38 = TreeData[31];
    }
    v39 = v79;
    if ( *((_QWORD *)v79 + 31) < (unsigned __int64)v38 )
      CVisual::UpdateWorldTransform(v12, v4, v79, v33, (const struct CTreeData *)TreeData);
    if ( *((_QWORD *)v39 + 31) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 33) + 16LL) + 496LL) )
    {
      v11 = v80;
      if ( v80 <= 0 )
        goto LABEL_53;
      continue;
    }
    break;
  }
  CVisual::PropagateFlags(*v81, 1LL);
LABEL_53:
  v40 = (v91 - v90) >> 3;
  if ( v40 )
    v91 -= 8 * v40;
  v41 = v90;
  v42 = v90 == v93;
  v90 = 0LL;
  if ( v42 )
    v41 = 0LL;
  operator delete(v41);
}
