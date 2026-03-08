/*
 * XREFs of ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x180269718
 * Callers:
 *     ?SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x180256CA0 (-SortVisuals@CDepthSortedVisualCollection@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVis.c)
 * Callees:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008BB8 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ??$_Destroy_range@V?$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@QEAU1@AEAV?$allocator@UDepthGraphNode@@@0@@Z @ 0x180269160 (--$_Destroy_range@V-$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@QEAU1@AEAV-$a.c)
 *     ??$_Emplace_reallocate@AEBQEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAPEAPEAUDepthGraphNode@@QEAPEAU2@AEBQEAU2@@Z @ 0x1802691BC (--$_Emplace_reallocate@AEBQEAUDepthGraphNode@@@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDep.c)
 *     ??$_Emplace_reallocate@PEAUDepthGraphNode@@@?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAAPEAPEAUDepthGraphNode@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1802693A4 (--$_Emplace_reallocate@PEAUDepthGraphNode@@@-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDepthG.c)
 *     ??$_Emplace_reallocate@PEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1802694A0 (--$_Emplace_reallocate@PEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ??1?$vector@PEAUDepthGraphNode@@V?$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAA@XZ @ 0x18026959C (--1-$vector@PEAUDepthGraphNode@@V-$allocator@PEAUDepthGraphNode@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_nonzero@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_K@Z @ 0x180269ADC (-_Buy_nonzero@-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_K@Z.c)
 *     ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x180269BAC (-_Tidy@-$vector@UDepthGraphNode@@V-$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ.c)
 */

char __fastcall CDepthSortingLayer::SortVisuals(unsigned int **a1, __int64 *a2, _QWORD *a3)
{
  unsigned int *v3; // rax
  _QWORD *v4; // r10
  __int64 *v5; // r13
  _QWORD *v6; // r8
  __int64 v7; // r15
  _BYTE *v8; // rdx
  _QWORD *v9; // r8
  char v11; // bl
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rsi
  _BYTE *v16; // rdi
  _BYTE *v17; // r14
  unsigned int v18; // edx
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned int v27; // r14d
  __int64 v28; // r12
  int RelativeOrder; // eax
  _BYTE *v30; // rdx
  _QWORD *v31; // rcx
  unsigned int v32; // r15d
  __int64 v33; // r12
  _BYTE *v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // [rsp+28h] [rbp-59h] BYREF
  __int64 v44; // [rsp+30h] [rbp-51h] BYREF
  _BYTE *v45; // [rsp+38h] [rbp-49h]
  _BYTE *v46; // [rsp+40h] [rbp-41h]
  unsigned int v47; // [rsp+48h] [rbp-39h]
  __int64 v48; // [rsp+50h] [rbp-31h]
  _BYTE *v49; // [rsp+58h] [rbp-29h]
  __int64 v50; // [rsp+60h] [rbp-21h]
  __int128 v51; // [rsp+68h] [rbp-19h] BYREF
  __int64 v52; // [rsp+78h] [rbp-9h]
  __int64 v53; // [rsp+80h] [rbp-1h]
  __int64 v54; // [rsp+88h] [rbp+7h]
  _QWORD *v55; // [rsp+E8h] [rbp+67h] BYREF
  __int64 *v56; // [rsp+F0h] [rbp+6Fh]
  _QWORD *v57; // [rsp+F8h] [rbp+77h]
  __int64 v58; // [rsp+100h] [rbp+7Fh] BYREF

  v57 = a3;
  v56 = a2;
  v55 = a1;
  v3 = *a1;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = a1[1] - *a1;
  v54 = v7;
  if ( (_DWORD)v7 == 1 )
  {
    v8 = (_BYTE *)a2[1];
    v9 = *(_QWORD **)(176LL * *v3 + *v4);
    v55 = v9;
    if ( v8 == (_BYTE *)v5[2] )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual *>(v5, v8, &v55);
    }
    else
    {
      *(_QWORD *)v8 = v9;
      v5[1] += 8LL;
    }
    return 1;
  }
  v11 = 0;
  v12 = (unsigned int)v7;
  v52 = 0LL;
  v51 = 0LL;
  if ( (_DWORD)v7 )
  {
    std::vector<DepthGraphNode>::_Buy_nonzero(&v51, (unsigned int)v7, a1);
    v13 = v51 + 40;
    v14 = (_QWORD *)(v51 + 56LL * (unsigned int)v7);
    do
    {
      *(_QWORD *)(v13 - 16) = 0LL;
      *(_QWORD *)(v13 - 8) = 0LL;
      *(_QWORD *)v13 = 0LL;
      *(_BYTE *)(v13 - 24) = 1;
      *(_DWORD *)(v13 + 8) = 0;
      v13 += 56LL;
      --v12;
    }
    while ( v12 );
    std::_Destroy_range<std::allocator<DepthGraphNode>>(v14, v14);
    v6 = v55;
    v4 = v57;
    *((_QWORD *)&v51 + 1) = v14;
  }
  v44 = 0LL;
  v15 = 0LL;
  v45 = 0LL;
  v16 = 0LL;
  v49 = 0LL;
  v17 = 0LL;
  v46 = 0LL;
  v18 = 0;
  LODWORD(v58) = 0;
  if ( (_DWORD)v7 )
  {
    v19 = v51;
    v20 = 0LL;
    v50 = 0LL;
    v21 = v51 + 32;
    while ( 1 )
    {
      v22 = *(unsigned int *)(v20 + *v6);
      v23 = v18 + 1;
      v47 = v18 + 1;
      v24 = *v4 + 176 * v22;
      *(_DWORD *)(v21 - 32) = v18;
      v53 = v24;
      *(_QWORD *)(v21 - 24) = v24;
      LODWORD(v43) = v23;
      if ( (unsigned int)v23 >= (unsigned int)v7 )
        goto LABEL_25;
      v25 = (unsigned int)v58;
      v26 = 4 * v23;
      v27 = v43;
      v48 = 4 * v23;
      v28 = 56 * v23 + v19 + 32;
      do
      {
        RelativeOrder = CVisualDepthGeometry::GetRelativeOrder(v24, *v4 + 176LL * *(unsigned int *)(v26 + *v6));
        if ( RelativeOrder )
        {
          if ( RelativeOrder != 1 )
            goto LABEL_23;
          *(_BYTE *)(v28 - 16) = 0;
          ++*(_DWORD *)(v28 + 16);
          v30 = *(_BYTE **)v21;
          v43 = v19 + 56LL * v27;
          if ( v30 != *(_BYTE **)(v21 + 8) )
          {
            *(_QWORD *)v30 = v19 + 56LL * v27;
            *(_QWORD *)v21 += 8LL;
            goto LABEL_23;
          }
          v31 = (_QWORD *)(v21 - 8);
        }
        else
        {
          *(_BYTE *)(v21 - 16) = 0;
          ++*(_DWORD *)(v21 + 16);
          v30 = *(_BYTE **)v28;
          v43 = v19 + 56 * v25;
          if ( v30 != *(_BYTE **)(v28 + 8) )
          {
            *(_QWORD *)v30 = v19 + 56 * v25;
            *(_QWORD *)v28 += 8LL;
            goto LABEL_23;
          }
          v31 = (_QWORD *)(v28 - 8);
        }
        std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode *>(v31, v30, &v43);
LABEL_23:
        ++v27;
        v6 = v55;
        v26 = v48 + 4;
        v24 = v53;
        v28 += 56LL;
        v4 = v57;
        v48 += 4LL;
      }
      while ( v27 < (unsigned int)v7 );
      v16 = v45;
      v17 = v49;
      v18 = v58;
      v20 = v50;
LABEL_25:
      if ( *(_BYTE *)(v21 - 16) )
      {
        v58 = v19 + 56LL * v18;
        if ( v16 == v17 )
        {
          std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode *>(&v44, v16, &v58);
          v17 = v46;
          v16 = v45;
          v49 = v46;
        }
        else
        {
          *(_QWORD *)v16 = v19 + 56LL * v18;
          v16 += 8;
          v45 = v16;
        }
      }
      v18 = v47;
      v20 += 4LL;
      v6 = v55;
      v21 += 56LL;
      v4 = v57;
      LODWORD(v58) = v47;
      v50 = v20;
      if ( v47 >= (unsigned int)v7 )
      {
        v15 = v44;
        v5 = v56;
        break;
      }
    }
  }
  v32 = 0;
  while ( (_BYTE *)v15 != v16 )
  {
    v33 = *(_QWORD *)v15;
    v34 = (_BYTE *)v5[1];
    v35 = **(_QWORD ***)(*(_QWORD *)v15 + 8LL);
    v55 = v35;
    if ( v34 == (_BYTE *)v5[2] )
    {
      std::vector<CVisual *>::_Emplace_reallocate<CVisual *>(v5, v34, &v55);
    }
    else
    {
      *(_QWORD *)v34 = v35;
      v5[1] += 8LL;
    }
    memmove_0((void *)v15, (const void *)(v15 + 8), (size_t)&v16[-v15 - 8]);
    v36 = *(_QWORD *)(v33 + 24);
    v16 -= 8;
    ++v32;
    v37 = *(_QWORD *)(v33 + 32) - v36;
    v45 = v16;
    v38 = 0;
    LODWORD(v55) = 0;
    if ( v37 >> 3 )
    {
      v39 = 0LL;
      do
      {
        v40 = *(_QWORD *)(v36 + 8 * v39);
        v58 = v40;
        if ( (*(_DWORD *)(v40 + 48))-- == 1 )
        {
          if ( v16 == v17 )
          {
            std::vector<DepthGraphNode *>::_Emplace_reallocate<DepthGraphNode * const &>(&v44, v16, &v58);
            v38 = (unsigned int)v55;
            v17 = v46;
            v16 = v45;
          }
          else
          {
            *(_QWORD *)v16 = v40;
            v16 += 8;
            v45 = v16;
          }
        }
        v36 = *(_QWORD *)(v33 + 24);
        v39 = ++v38;
        v42 = (*(_QWORD *)(v33 + 32) - v36) >> 3;
        LODWORD(v55) = v38;
      }
      while ( v38 < v42 );
      v15 = v44;
    }
  }
  LODWORD(v55) = v32;
  if ( v32 >= (unsigned int)v54 )
  {
    if ( v15 )
      std::_Deallocate<16,0>((void *)v15, (unsigned __int64)&v17[-v15] & 0xFFFFFFFFFFFFFFF8uLL);
    v11 = 1;
  }
  else
  {
    std::vector<DepthGraphNode *>::~vector<DepthGraphNode *>((__int64)&v44);
  }
  std::vector<DepthGraphNode>::_Tidy(&v51);
  return v11;
}
