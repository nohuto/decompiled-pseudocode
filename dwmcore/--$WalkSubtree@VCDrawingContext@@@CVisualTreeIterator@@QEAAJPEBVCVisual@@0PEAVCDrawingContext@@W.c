/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18008A870
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008AE70 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18008B318 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18009B870 (--0CTreeData@@IEAA@XZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x1800D588C (-RemoveAt@CPtrArrayBase@@IEAAX_K0@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800E1BE0 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800E20E0 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        struct CThreadContext *a2,
        const void *a3,
        CDrawingContext *a4,
        int a5)
{
  int v5; // esi
  int v8; // eax
  unsigned int v9; // ecx
  struct CThreadContext **v10; // r12
  unsigned __int64 **v11; // rdi
  struct CThreadContext *i; // rbp
  __int64 v13; // rdi
  char v14; // al
  int **v15; // r8
  _QWORD *v16; // rax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // r14
  void *v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rdx
  struct CThreadContext *v25; // r11
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // r10
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // r10
  struct CThreadContext *v35; // rax
  int v36; // r8d
  int v37; // edx
  void *v38; // rax
  int v39; // ecx
  __int64 v40; // rcx
  char v41; // al
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rcx
  _QWORD *v45; // r9
  int *v46; // r9
  __int64 v47; // rax
  _BYTE *v48; // rdx
  __int64 j; // rcx
  int *v50; // rcx
  _QWORD *v51; // rcx
  _QWORD *v52; // rdx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v54; // rcx
  int v55; // eax
  int v56; // eax
  unsigned int v58; // r15d
  int v59; // eax
  unsigned int v60; // ecx
  unsigned __int64 v61; // rax
  void *v62; // rdi
  __int64 v63; // r15
  unsigned int v64; // ecx
  _DWORD **v65; // r10
  struct CTreeData *UnusedTreeData; // r11
  _DWORD *v67; // r10
  unsigned int Slot; // eax
  __int64 v69; // r10
  CTreeData *v70; // rax
  HANDLE ProcessHeap; // rax
  int v72; // edx
  unsigned int v73; // ecx
  int v74; // eax
  unsigned int v75; // ecx
  unsigned int v76; // [rsp+20h] [rbp-78h]
  void *v77[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 **v78; // [rsp+40h] [rbp-58h]
  __int128 v79; // [rsp+48h] [rbp-50h]
  bool v80; // [rsp+A0h] [rbp+8h] BYREF
  struct CThreadContext *v81; // [rsp+A8h] [rbp+10h] BYREF
  const void *v82; // [rsp+B0h] [rbp+18h]

  v82 = a3;
  v81 = a2;
  v5 = 0;
  *(_DWORD *)(a1 + 72) = a5;
  if ( a3 )
  {
    v8 = CThreadContext::RegisterGraphWalkRoot(a3);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v5, 0xD6u, 0LL);
      return (unsigned int)v5;
    }
    a2 = v81;
  }
  v10 = (struct CThreadContext **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  v11 = (unsigned __int64 **)(a1 + 8);
  v78 = (unsigned __int64 **)(a1 + 8);
  for ( i = a2; ; i = (struct CThreadContext *)v28 )
  {
LABEL_5:
    if ( (*((_BYTE *)i + 103) & 1) == 0 && i != a2 )
      goto LABEL_51;
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 184LL))(*(_QWORD *)(a1 + 64));
      v15 = (int **)((char *)i + 232);
      if ( v14 )
      {
        v16 = (_QWORD *)((char *)i + 336);
      }
      else
      {
        v46 = *v15;
        if ( **v15 >= 0 )
          goto LABEL_104;
        v47 = (unsigned int)v46[1];
        v48 = v46 + 2;
        for ( j = 0LL; (unsigned int)j < (unsigned int)v47; ++v48 )
        {
          if ( *v48 == 1 )
            break;
          j = (unsigned int)(j + 1);
        }
        v50 = (unsigned int)j >= (unsigned int)v47
            ? 0LL
            : (int *)((char *)v46 + 8 * j - (((_BYTE)v47 + 15) & 7) + v47 + 15);
        v51 = *(_QWORD **)v50;
        if ( !v51 || (v52 = (_QWORD *)*v51, (_QWORD *)*v51 == v51) )
        {
LABEL_104:
          UnusedTreeData = CVisual::GetUnusedTreeData(i);
          if ( UnusedTreeData )
          {
            v67 = *v65;
            if ( (*v67 & 0x8000000) != 0 )
            {
              *v67 &= ~0x8000000u;
              Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v67, 5LL);
              if ( Slot < *(_DWORD *)(v69 + 4) )
                *(_BYTE *)(Slot + v69 + 8) = 0;
            }
          }
          else
          {
            v70 = (CTreeData *)operator new(0x190uLL);
            if ( v70 )
            {
              CTreeData::CTreeData(v70);
              *((_QWORD *)UnusedTreeData + 49) = 0LL;
              *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
            }
            else
            {
              UnusedTreeData = 0LL;
            }
          }
          (*(void (__fastcall **)(struct CTreeData *, __int64, struct CThreadContext *))(*(_QWORD *)UnusedTreeData + 8LL))(
            UnusedTreeData,
            v13,
            i);
          goto LABEL_10;
        }
        while ( 1 )
        {
          v16 = v52 - 45;
          if ( v52[4] == v13 )
            break;
          v52 = (_QWORD *)*v52;
          if ( v52 == v51 )
            goto LABEL_104;
        }
      }
      if ( v16 )
        goto LABEL_10;
      goto LABEL_104;
    }
LABEL_10:
    v17 = CDrawingContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &v80);
    v5 = v17;
    if ( v17 < 0 )
      break;
    if ( !v80 )
      goto LABEL_35;
    v19 = *((_QWORD *)*v10 + 10);
    if ( (v19 & 2) != 0 )
      v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v19) = v19 & 1;
    if ( !(_DWORD)v19 )
    {
      v5 = 1;
LABEL_35:
      v11 = v78;
      goto LABEL_50;
    }
    v20 = 0LL;
    *(_QWORD *)&v79 = *(_QWORD *)(a1 + 16);
    v5 = 0;
    DWORD2(v79) = *(_DWORD *)(a1 + 24);
    v21 = *(unsigned int *)(a1 + 36);
    v77[0] = 0LL;
    if ( *(_DWORD *)(a1 + 32) == (_DWORD)v21 )
    {
      v58 = 2 * v21;
      if ( (unsigned __int64)(2 * v21) > 0xFFFFFFFF )
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0x64u, 0LL);
        goto LABEL_19;
      }
      if ( v58 <= 0x40 )
        v58 = 64;
      v59 = HrMalloc(0x10uLL, v58, v77);
      v5 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x6Bu, 0LL);
        v20 = v77[0];
        goto LABEL_19;
      }
      v61 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v61 > 0xFFFFFFFF )
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
        v20 = v77[0];
        goto LABEL_19;
      }
      v62 = v77[0];
      v5 = 0;
      memcpy_0(v77[0], *(const void **)(a1 + 48), (unsigned int)v61);
      operator delete(*(void **)(a1 + 48));
      *(_QWORD *)(a1 + 48) = v62;
      v20 = 0LL;
      *(_DWORD *)(a1 + 36) = v58;
    }
    v22 = 2 * *(_DWORD *)(a1 + 32);
    *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 32)) = v79;
    v23 = *(_DWORD *)(a1 + 56);
    if ( v23 <= ++*(_DWORD *)(a1 + 32) )
      v23 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 56) = v23;
LABEL_19:
    if ( v20 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v5, 0x87u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v5, 0x105u, 0LL);
      goto LABEL_83;
    }
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v24 = 0LL;
    else
      v24 = (unsigned int)(v19 - 1);
    *(_DWORD *)(a1 + 24) = v24;
    v25 = *v10;
    v26 = *((_QWORD *)*v10 + 10) & 2LL;
    v27 = *((_QWORD *)*v10 + 10) & 1LL;
    v28 = (unsigned __int64 *)(*((_QWORD *)*v10 + 10) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v26 )
      v29 = *v28;
    else
      v29 = (unsigned int)v27;
    if ( v29 <= (unsigned int)v24 )
      goto LABEL_116;
    if ( v26 )
      v27 = *v28;
    if ( (unsigned int)v24 >= v27 )
    {
LABEL_116:
      v28 = 0LL;
    }
    else if ( v27 != 1 )
    {
      v28 = (unsigned __int64 *)v28[v24 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v25;
    *v10 = (struct CThreadContext *)v28;
    v11 = v78;
    a2 = v81;
    if ( !v28 )
    {
      while ( 1 )
      {
LABEL_51:
        v41 = 1;
        LOBYTE(a5) = 1;
        if ( (*((_BYTE *)i + 103) & 1) != 0 || i == a2 )
        {
          v17 = CDrawingContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), (bool *)&a5);
          v5 = v17;
          if ( v17 < 0 )
          {
            v76 = 290;
            goto LABEL_124;
          }
          v41 = a5;
        }
        i = *(struct CThreadContext **)(a1 + 16);
        if ( v41 )
        {
          if ( !i )
            goto LABEL_62;
          v42 = *(_DWORD *)(a1 + 28);
          if ( v42 != 1 )
            goto LABEL_131;
          v43 = *(_DWORD *)(a1 + 24);
          if ( v43 == -1 )
            goto LABEL_62;
          v44 = *((_QWORD *)i + 10);
          v45 = (_QWORD *)((char *)i + 80);
          if ( (v44 & 2) != 0 )
            v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v44) = v44 & 1;
          if ( v43 + 1 < (unsigned int)v44 )
          {
            v30 = (unsigned int)(v43 + 1);
          }
          else
          {
LABEL_131:
            if ( v42 || (v72 = *(_DWORD *)(a1 + 24)) == 0 )
            {
LABEL_62:
              v5 = 1;
              goto LABEL_46;
            }
            v45 = (_QWORD *)((char *)i + 80);
            v30 = (unsigned int)(v72 - 1);
          }
          v31 = *v45 & 2LL;
          v32 = *v45 & 1LL;
          v33 = (unsigned __int64 *)(*v45 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v31 )
            v34 = *v33;
          else
            v34 = *v45 & 1LL;
          if ( v34 <= (unsigned int)v30 )
            goto LABEL_120;
          if ( v31 )
            v32 = *v33;
          if ( (unsigned int)v30 >= v32 )
          {
LABEL_120:
            v33 = 0LL;
          }
          else if ( v32 != 1 )
          {
            v33 = (unsigned __int64 *)v33[v30 + 2];
          }
          *v11 = v33;
          v5 = 0;
          v35 = *v10;
          *(_DWORD *)(a1 + 24) = v30;
          if ( v35 )
          {
            a2 = v81;
            i = v35;
            goto LABEL_5;
          }
        }
LABEL_46:
        v36 = *(_DWORD *)(a1 + 4);
        if ( !v36 )
          goto LABEL_81;
        v37 = *(_DWORD *)(a1 + 32);
        v38 = 0LL;
        v39 = 0;
        if ( v37 )
        {
          v40 = (unsigned int)(v37 - 1);
          *(_DWORD *)(a1 + 32) = v40;
          *(_OWORD *)v77 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v40);
          v39 = (int)v77[1];
          v38 = v77[0];
        }
        *(_QWORD *)(a1 + 16) = v38;
        *(_DWORD *)(a1 + 4) = v36 - 1;
        *v10 = i;
        *(_DWORD *)(a1 + 24) = v39;
        if ( !i )
        {
LABEL_81:
          if ( v5 == 1 )
            v5 = 0;
          goto LABEL_83;
        }
LABEL_50:
        a2 = v81;
      }
    }
  }
  v76 = 241;
LABEL_124:
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, v76, 0LL);
LABEL_83:
  if ( v82 && (int)CThreadContext::GetCurrent(&v81) >= 0 )
  {
    Count = CPtrArrayBase::GetCount((struct CThreadContext *)((char *)v81 + 24));
    CPtrArrayBase::RemoveAt(v54, Count - 1, 1uLL);
  }
  *v10 = 0LL;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v55 = *(_DWORD *)(a1 + 40);
  if ( v55 == 10 )
  {
    v63 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v63 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v63) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v63) <= *(_DWORD *)(a1 + 36) )
    {
      v81 = 0LL;
      v74 = HrMalloc(0x10uLL, (unsigned int)v63, (void **)&v81);
      if ( v74 >= 0 )
      {
        operator delete(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v81;
        *(_DWORD *)(a1 + 36) = v63;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x116u, 0LL);
      }
    }
    v56 = 0;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v56 = v55 + 1;
  }
  *(_DWORD *)(a1 + 40) = v56;
  return (unsigned int)v5;
}
