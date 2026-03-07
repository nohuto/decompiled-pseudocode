__int64 __fastcall CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        unsigned __int64 a1,
        struct CThreadContext *a2,
        const void *a3,
        CPreComputeContext *a4,
        bool a5)
{
  int v5; // esi
  unsigned __int64 v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // r12
  unsigned __int64 **v10; // rdi
  struct CThreadContext *i; // rbp
  struct _LIST_ENTRY *v12; // rdi
  struct _LIST_ENTRY **p_Blink; // rax
  int v14; // eax
  __int64 v15; // r14
  void *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r8
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // r10
  bool v25; // al
  int v26; // eax
  int v27; // r8d
  int v28; // edx
  _QWORD *v29; // r9
  int v30; // r8d
  int v31; // edx
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // r10
  struct CThreadContext *v37; // rax
  unsigned __int64 Count; // rax
  CPtrArrayBase *v39; // rcx
  int v40; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v43; // r10
  struct _LIST_ENTRY *Flink; // rcx
  struct CTreeData *UnusedTreeData; // r11
  CTreeData *v46; // rax
  __int64 v47; // r14
  _DWORD *v48; // r10
  __int64 v49; // rcx
  unsigned int Slot; // eax
  __int64 v51; // r10
  unsigned int v52; // r15d
  int v53; // eax
  unsigned int v54; // ecx
  unsigned __int64 v55; // rax
  void *v56; // rdi
  unsigned int v57; // ecx
  HANDLE ProcessHeap; // rax
  int v59; // edx
  unsigned int v60; // ecx
  int v61; // eax
  unsigned int v62; // ecx
  void *v63[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 **v64; // [rsp+40h] [rbp-58h]
  __int128 v65; // [rsp+48h] [rbp-50h]
  bool v66; // [rsp+A0h] [rbp+8h] BYREF
  struct CThreadContext *v67; // [rsp+A8h] [rbp+10h] BYREF
  const void *v68; // [rsp+B0h] [rbp+18h]

  v68 = a3;
  v67 = a2;
  v5 = 0;
  *(_DWORD *)(a1 + 72) = 1;
  v7 = a1;
  if ( a3 )
  {
    v8 = CThreadContext::RegisterGraphWalkRoot(a3);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v8, 0x3Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v5, 0xD6u, 0LL);
      return (unsigned int)v5;
    }
    a2 = v67;
  }
  v9 = v7 + 8;
  *(_QWORD *)(v7 + 8) = a2;
  *(_DWORD *)(v7 + 4) = 0;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_DWORD *)(v7 + 24) = 0;
  v10 = (unsigned __int64 **)(v7 + 8);
  v64 = (unsigned __int64 **)(v7 + 8);
  for ( i = a2; ; i = (struct CThreadContext *)v23 )
  {
LABEL_5:
    if ( (*((_BYTE *)i + 103) & 1) == 0 && i != a2 )
      goto LABEL_37;
    v12 = *(struct _LIST_ENTRY **)(v7 + 64);
    if ( v12 )
    {
      if ( ((unsigned __int8 (__fastcall *)(_QWORD))v12->Flink[11].Blink)(*(_QWORD *)(v7 + 64)) )
      {
        p_Blink = (struct _LIST_ENTRY **)((char *)i + 336);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(i);
        v43 = TreeDataListHead;
        if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
        {
LABEL_80:
          UnusedTreeData = CVisual::GetUnusedTreeData(i);
          if ( UnusedTreeData )
          {
            v48 = (_DWORD *)*((_QWORD *)i + 29);
            if ( (*v48 & 0x8000000) != 0 )
            {
              v49 = *((_QWORD *)i + 29);
              *v48 &= ~0x8000000u;
              Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v49, 5LL);
              if ( Slot < *(_DWORD *)(v51 + 4) )
                *(_BYTE *)(Slot + v51 + 8) = 0;
            }
          }
          else
          {
            v46 = (CTreeData *)operator new(0x190uLL);
            if ( v46 )
            {
              CTreeData::CTreeData(v46);
              *((_QWORD *)UnusedTreeData + 49) = 0LL;
              *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
            }
            else
            {
              UnusedTreeData = 0LL;
            }
          }
          (*(void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, struct CThreadContext *))(*(_QWORD *)UnusedTreeData + 8LL))(
            UnusedTreeData,
            v12,
            i);
          goto LABEL_10;
        }
        while ( 1 )
        {
          p_Blink = &Flink[-23].Blink;
          if ( Flink[2].Flink == v12 )
            break;
          Flink = Flink->Flink;
          if ( Flink == v43 )
            goto LABEL_80;
        }
      }
      if ( p_Blink )
        goto LABEL_10;
      goto LABEL_80;
    }
LABEL_10:
    v14 = CPreComputeContext::PreSubgraph(a4, *(const struct CVisualTree **)(v7 + 64), &v66);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v14, 0xF1u, 0LL);
      goto LABEL_70;
    }
    if ( !v66 )
      goto LABEL_35;
    v15 = *(_QWORD *)(*(_QWORD *)v9 + 80LL);
    if ( (v15 & 2) != 0 )
      v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v15) = v15 & 1;
    if ( !(_DWORD)v15 )
    {
      v5 = 1;
LABEL_35:
      v10 = v64;
      goto LABEL_53;
    }
    v16 = 0LL;
    *(_QWORD *)&v65 = *(_QWORD *)(v7 + 16);
    v5 = 0;
    DWORD2(v65) = *(_DWORD *)(v7 + 24);
    v17 = *(unsigned int *)(v7 + 36);
    v63[0] = 0LL;
    if ( *(_DWORD *)(v7 + 32) == (_DWORD)v17 )
    {
      v52 = 2 * v17;
      if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0x64u, 0LL);
        goto LABEL_19;
      }
      if ( v52 <= 0x40 )
        v52 = 64;
      v53 = HrMalloc(0x10uLL, v52, v63);
      v5 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x6Bu, 0LL);
        v16 = v63[0];
        goto LABEL_19;
      }
      v55 = 16LL * *(unsigned int *)(v7 + 32);
      if ( v55 > 0xFFFFFFFF )
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x6Du, 0LL);
        v16 = v63[0];
        goto LABEL_19;
      }
      v56 = v63[0];
      v5 = 0;
      memcpy_0(v63[0], *(const void **)(v7 + 48), (unsigned int)v55);
      operator delete(*(void **)(v7 + 48));
      *(_QWORD *)(v7 + 48) = v56;
      v16 = 0LL;
      *(_DWORD *)(v7 + 36) = v52;
    }
    v18 = 2 * *(_DWORD *)(v7 + 32);
    *(_OWORD *)(*(_QWORD *)(v7 + 48) + 16LL * *(unsigned int *)(v7 + 32)) = v65;
    v19 = *(_DWORD *)(v7 + 56);
    if ( v19 <= ++*(_DWORD *)(v7 + 32) )
      v19 = *(_DWORD *)(v7 + 32);
    *(_DWORD *)(v7 + 56) = v19;
LABEL_19:
    if ( v16 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v16);
    }
    if ( v5 < 0 )
      break;
    if ( *(_DWORD *)(v7 + 28) == 1 )
      v20 = 0LL;
    else
      v20 = (unsigned int)(v15 - 1);
    *(_DWORD *)(v7 + 24) = v20;
    v21 = *(_QWORD *)v9;
    v22 = *(_QWORD *)(*(_QWORD *)v9 + 80LL) & 2LL;
    a1 = *(_QWORD *)(*(_QWORD *)v9 + 80LL) & 1LL;
    v23 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)v9 + 80LL) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v22 )
      v24 = *v23;
    else
      v24 = (unsigned int)a1;
    if ( v24 <= (unsigned int)v20 )
      goto LABEL_106;
    if ( v22 )
      a1 = *v23;
    if ( (unsigned int)v20 >= a1 )
    {
LABEL_106:
      v23 = 0LL;
    }
    else if ( a1 != 1 )
    {
      v23 = (unsigned __int64 *)v23[v20 + 2];
    }
    ++*(_DWORD *)(v7 + 4);
    *(_QWORD *)(v7 + 16) = v21;
    *(_QWORD *)v9 = v23;
    v10 = v64;
    a2 = v67;
    if ( !v23 )
    {
      while ( 1 )
      {
LABEL_37:
        v25 = 1;
        a5 = 1;
        if ( (*((_BYTE *)i + 103) & 1) != 0 || i == a2 )
        {
          v26 = CPreComputeContext::PostSubgraph(a4, *(const struct CVisualTree **)(v7 + 64), &a5);
          v5 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v26, 0x122u, 0LL);
            goto LABEL_70;
          }
          v25 = a5;
        }
        i = *(struct CThreadContext **)(v7 + 16);
        if ( v25 )
        {
          if ( !i )
            goto LABEL_48;
          v27 = *(_DWORD *)(v7 + 28);
          if ( v27 != 1 )
            goto LABEL_120;
          v28 = *(_DWORD *)(v7 + 24);
          if ( v28 == -1 )
            goto LABEL_48;
          a1 = *((_QWORD *)i + 10);
          v29 = (_QWORD *)((char *)i + 80);
          if ( (a1 & 2) != 0 )
            a1 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(a1) = a1 & 1;
          if ( v28 + 1 < (unsigned int)a1 )
          {
            v33 = (unsigned int)(v28 + 1);
          }
          else
          {
LABEL_120:
            if ( v27 || (v59 = *(_DWORD *)(v7 + 24)) == 0 )
            {
LABEL_48:
              v5 = 1;
              goto LABEL_49;
            }
            v29 = (_QWORD *)((char *)i + 80);
            v33 = (unsigned int)(v59 - 1);
          }
          v34 = *v29 & 2LL;
          a1 = *v29 & 1LL;
          v35 = (unsigned __int64 *)(*v29 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v34 )
            v36 = *v35;
          else
            v36 = *v29 & 1LL;
          if ( v36 <= (unsigned int)v33 )
            goto LABEL_110;
          if ( v34 )
            a1 = *v35;
          if ( (unsigned int)v33 >= a1 )
          {
LABEL_110:
            v35 = 0LL;
          }
          else if ( a1 != 1 )
          {
            v35 = (unsigned __int64 *)v35[v33 + 2];
          }
          *v10 = v35;
          v5 = 0;
          v37 = *(struct CThreadContext **)v9;
          *(_DWORD *)(v7 + 24) = v33;
          if ( v37 )
          {
            a2 = v67;
            i = v37;
            goto LABEL_5;
          }
        }
LABEL_49:
        v30 = *(_DWORD *)(v7 + 4);
        if ( !v30 )
          goto LABEL_68;
        v31 = *(_DWORD *)(v7 + 32);
        v32 = 0LL;
        LODWORD(a1) = 0;
        if ( v31 )
        {
          a1 = (unsigned int)(v31 - 1);
          *(_DWORD *)(v7 + 32) = a1;
          *(_OWORD *)v63 = *(_OWORD *)(*(_QWORD *)(v7 + 48) + 16 * a1);
          LODWORD(a1) = v63[1];
          v32 = v63[0];
        }
        *(_QWORD *)(v7 + 16) = v32;
        *(_DWORD *)(v7 + 4) = v30 - 1;
        *(_QWORD *)v9 = i;
        *(_DWORD *)(v7 + 24) = a1;
        if ( !i )
        {
LABEL_68:
          if ( v5 == 1 )
            v5 = 0;
          goto LABEL_70;
        }
LABEL_53:
        a2 = v67;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v5, 0x87u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v5, 0x105u, 0LL);
LABEL_70:
  if ( v68 && (int)CThreadContext::GetCurrent(&v67) >= 0 )
  {
    Count = CPtrArrayBase::GetCount((struct CThreadContext *)((char *)v67 + 24));
    CPtrArrayBase::RemoveAt(v39, Count - 1, 1uLL);
  }
  *(_QWORD *)v9 = 0LL;
  *(_DWORD *)(v7 + 4) = 0;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_DWORD *)(v7 + 32) = 0;
  v40 = *(_DWORD *)(v7 + 40);
  if ( v40 == 10 )
  {
    v47 = 64LL;
    if ( *(_DWORD *)(v7 + 56) > 0x40u )
      v47 = *(unsigned int *)(v7 + 56);
    if ( (unsigned __int64)(3 * v47) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v47) <= *(_DWORD *)(v7 + 36) )
    {
      v67 = 0LL;
      v61 = HrMalloc(0x10uLL, (unsigned int)v47, (void **)&v67);
      if ( v61 >= 0 )
      {
        operator delete(*(void **)(v7 + 48));
        *(_QWORD *)(v7 + 48) = v67;
        *(_DWORD *)(v7 + 36) = v47;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x116u, 0LL);
      }
    }
    *(_DWORD *)(v7 + 56) = 0;
    *(_DWORD *)(v7 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 40) = v40 + 1;
  }
  return (unsigned int)v5;
}
