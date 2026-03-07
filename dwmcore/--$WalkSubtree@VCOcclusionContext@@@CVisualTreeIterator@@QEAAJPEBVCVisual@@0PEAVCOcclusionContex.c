__int64 CVisualTreeIterator::WalkSubtree<COcclusionContext>(unsigned __int64 a1, ...)
{
  struct CThreadContext *v1; // rdx
  const void *v2; // r8
  COcclusionContext *v3; // r9
  int v4; // esi
  COcclusionContext *v5; // r14
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // r15
  unsigned __int64 **v9; // rdi
  struct CThreadContext *i; // rbp
  __int64 v11; // rdi
  char v12; // al
  int **v13; // r8
  _BYTE *v14; // rax
  int v15; // eax
  __int64 v16; // r14
  void *v17; // r12
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned __int64 v21; // r8
  __int64 v22; // r10
  __int64 v23; // rdx
  struct CThreadContext *v24; // rax
  unsigned __int64 v25; // r9
  __int64 *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // r10
  struct CThreadContext *v32; // rax
  int v33; // r8d
  int v34; // edx
  void *v35; // rax
  char v36; // al
  int v37; // edx
  int *v38; // r9
  __int64 v39; // rax
  _BYTE *v40; // rdx
  __int64 j; // rcx
  int *v42; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // rcx
  struct CTreeData *UnusedTreeData; // rsi
  unsigned int **v46; // r10
  unsigned int *v47; // r11
  unsigned int v48; // ecx
  unsigned int Slot; // eax
  __int64 v50; // r11
  unsigned __int64 v51; // rax
  CPtrArrayBase *v52; // rcx
  int v53; // eax
  __int64 v55; // r12
  CTreeData *v56; // rax
  unsigned int v57; // r13d
  int v58; // eax
  unsigned int v59; // ecx
  unsigned __int64 v60; // rax
  void *v61; // rdi
  unsigned int v62; // ecx
  HANDLE ProcessHeap; // rax
  unsigned int Count; // eax
  int v65; // r9d
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // ecx
  unsigned int v69; // [rsp+20h] [rbp-88h]
  void *v70[2]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 **v71; // [rsp+40h] [rbp-68h]
  __int128 v72; // [rsp+48h] [rbp-60h]
  bool v73; // [rsp+B0h] [rbp+8h] BYREF
  struct CThreadContext *v74; // [rsp+B8h] [rbp+10h] BYREF
  va_list va; // [rsp+B8h] [rbp+10h]
  const void *v76; // [rsp+C0h] [rbp+18h]
  COcclusionContext *v77; // [rsp+C8h] [rbp+20h]
  __int64 v78; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  va_list va2; // [rsp+D8h] [rbp+30h] BYREF

  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v74 = va_arg(va1, struct CThreadContext *);
  v1 = v74;
  v76 = va_arg(va1, const void *);
  v2 = v76;
  v77 = va_arg(va1, COcclusionContext *);
  v3 = v77;
  va_copy(va2, va1);
  v78 = va_arg(va2, _QWORD);
  v4 = 0;
  *(_DWORD *)(a1 + 72) = 2;
  v5 = v3;
  v6 = a1;
  if ( v2 )
  {
    v7 = CThreadContext::RegisterGraphWalkRoot(v2);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v7, 0x3Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v4, 0xD6u, 0LL);
      return (unsigned int)v4;
    }
    v1 = v74;
  }
  v8 = v6 + 8;
  *(_QWORD *)(v6 + 8) = v1;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_DWORD *)(v6 + 24) = 0;
  v9 = (unsigned __int64 **)(v6 + 8);
  v71 = (unsigned __int64 **)(v6 + 8);
  for ( i = v1; ; i = v24 )
  {
LABEL_5:
    if ( (*((_BYTE *)i + 103) & 1) == 0 && i != v1 )
      goto LABEL_51;
    v11 = *(_QWORD *)(v6 + 64);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 184LL))(*(_QWORD *)(v6 + 64));
      v13 = (int **)((char *)i + 232);
      if ( v12 )
      {
        v14 = (char *)i + 336;
      }
      else
      {
        v38 = *v13;
        if ( **v13 >= 0 )
          goto LABEL_76;
        v39 = (unsigned int)v38[1];
        v40 = v38 + 2;
        for ( j = 0LL; (unsigned int)j < (unsigned int)v39; ++v40 )
        {
          if ( *v40 == 1 )
            break;
          j = (unsigned int)(j + 1);
        }
        v42 = (unsigned int)j >= (unsigned int)v39
            ? 0LL
            : (int *)((char *)v38 + 8 * j - (((_BYTE)v39 + 15) & 7) + v39 + 15);
        v43 = *(_QWORD **)v42;
        if ( !v43 || (v44 = (_QWORD *)*v43, (_QWORD *)*v43 == v43) )
        {
LABEL_76:
          UnusedTreeData = CVisual::GetUnusedTreeData(i);
          if ( UnusedTreeData )
          {
            v47 = *v46;
            v48 = **v46;
            if ( (v48 & 0x8000000) != 0 )
            {
              *v47 = v48 & 0xF7FFFFFF;
              Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v47, 5LL);
              if ( Slot < *(_DWORD *)(v50 + 4) )
                *(_BYTE *)(Slot + v50 + 8) = 0;
            }
          }
          else
          {
            v56 = (CTreeData *)operator new(0x190uLL);
            UnusedTreeData = v56;
            if ( v56 )
            {
              CTreeData::CTreeData(v56);
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
            v11,
            i);
          goto LABEL_10;
        }
        while ( 1 )
        {
          v14 = v44 - 45;
          if ( v44[4] == v11 )
            break;
          v44 = (_QWORD *)*v44;
          if ( v44 == v43 )
            goto LABEL_76;
        }
      }
      if ( v14 )
        goto LABEL_10;
      goto LABEL_76;
    }
LABEL_10:
    v15 = COcclusionContext::PreSubgraph(v5, *(const struct CVisualTree **)(v6 + 64), &v73);
    v4 = v15;
    if ( v15 < 0 )
      break;
    if ( !v73 )
      goto LABEL_35;
    v16 = *(_QWORD *)(*(_QWORD *)v8 + 80LL);
    if ( (v16 & 2) != 0 )
      v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v16) = v16 & 1;
    if ( !(_DWORD)v16 )
    {
      v5 = v77;
      v4 = 1;
LABEL_35:
      v9 = v71;
      goto LABEL_50;
    }
    v4 = 0;
    *(_QWORD *)&v72 = *(_QWORD *)(v6 + 16);
    v17 = 0LL;
    DWORD2(v72) = *(_DWORD *)(v6 + 24);
    v18 = *(unsigned int *)(v6 + 36);
    v70[0] = 0LL;
    if ( *(_DWORD *)(v6 + 32) == (_DWORD)v18 )
    {
      v57 = 2 * v18;
      if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0x64u, 0LL);
        goto LABEL_19;
      }
      if ( v57 <= 0x40 )
        v57 = 64;
      v58 = HrMalloc(0x10uLL, v57, v70);
      v4 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x6Bu, 0LL);
        v17 = v70[0];
        goto LABEL_19;
      }
      v60 = 16LL * *(unsigned int *)(v6 + 32);
      if ( v60 > 0xFFFFFFFF )
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, -2147024362, 0x6Du, 0LL);
        v17 = v70[0];
        goto LABEL_19;
      }
      v61 = v70[0];
      v4 = 0;
      memcpy_0(v70[0], *(const void **)(v6 + 48), (unsigned int)v60);
      operator delete(*(void **)(v6 + 48));
      *(_DWORD *)(v6 + 36) = v57;
      v17 = 0LL;
      *(_QWORD *)(v6 + 48) = v61;
    }
    v19 = 2 * *(_DWORD *)(v6 + 32);
    *(_OWORD *)(*(_QWORD *)(v6 + 48) + 16LL * *(unsigned int *)(v6 + 32)) = v72;
    v20 = *(_DWORD *)(v6 + 56);
    if ( v20 <= ++*(_DWORD *)(v6 + 32) )
      v20 = *(_DWORD *)(v6 + 32);
    *(_DWORD *)(v6 + 56) = v20;
LABEL_19:
    if ( v17 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v17);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v4, 0x87u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v4, 0x105u, 0LL);
      goto LABEL_83;
    }
    if ( *(_DWORD *)(v6 + 28) == 1 )
      v21 = 0LL;
    else
      v21 = (unsigned int)(v16 - 1);
    *(_DWORD *)(v6 + 24) = v21;
    v22 = *(_QWORD *)v8;
    v23 = *(_QWORD *)(*(_QWORD *)v8 + 80LL) & 2LL;
    a1 = *(_QWORD *)(*(_QWORD *)v8 + 80LL) & 1LL;
    v24 = (struct CThreadContext *)(*(_QWORD *)(*(_QWORD *)v8 + 80LL) & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v23 )
      v25 = *(_QWORD *)v24;
    else
      v25 = (unsigned int)a1;
    if ( v25 <= v21 )
      goto LABEL_112;
    if ( v23 )
      a1 = *(_QWORD *)v24;
    if ( v21 >= a1 )
    {
LABEL_112:
      v24 = 0LL;
    }
    else if ( a1 != 1 )
    {
      v24 = (struct CThreadContext *)*((_QWORD *)v24 + v21 + 2);
    }
    ++*(_DWORD *)(v6 + 4);
    *(_QWORD *)(v6 + 16) = v22;
    *(_QWORD *)v8 = v24;
    v5 = v77;
    v9 = v71;
    v1 = v74;
    if ( !v24 )
    {
      while ( 1 )
      {
LABEL_51:
        v36 = 1;
        LOBYTE(v78) = 1;
        if ( (*((_BYTE *)i + 103) & 1) != 0 || i == v1 )
        {
          v15 = COcclusionContext::PostSubgraph(v5, *(const struct CVisualTree **)(v6 + 64), (bool *)va1);
          v4 = v15;
          if ( v15 < 0 )
          {
            v69 = 290;
            goto LABEL_121;
          }
          v36 = v78;
        }
        i = *(struct CThreadContext **)(v6 + 16);
        if ( v36 )
        {
          if ( !i )
            goto LABEL_59;
          v37 = *(_DWORD *)(v6 + 28);
          if ( v37 != 1 )
            goto LABEL_128;
          if ( *(_DWORD *)(v6 + 24) == -1 )
            goto LABEL_59;
          Count = CPtrArrayBase::GetCount((struct CThreadContext *)((char *)i + 80));
          LODWORD(a1) = v65 + 1;
          if ( v65 + 1 < Count )
          {
            v27 = (unsigned int)(v65 + 1);
          }
          else
          {
LABEL_128:
            if ( v37 || (LODWORD(a1) = *(_DWORD *)(v6 + 24), !(_DWORD)a1) )
            {
LABEL_59:
              v4 = 1;
              goto LABEL_46;
            }
            v26 = (__int64 *)((char *)i + 80);
            v27 = (unsigned int)(a1 - 1);
          }
          v28 = *v26;
          v29 = *v26 & 2;
          a1 = v28 & 1;
          v30 = (unsigned __int64 *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v29 )
            v31 = *v30;
          else
            v31 = a1;
          if ( v31 <= (unsigned int)v27 )
            goto LABEL_117;
          if ( v29 )
            a1 = *v30;
          if ( (unsigned int)v27 >= a1 )
          {
LABEL_117:
            v30 = 0LL;
          }
          else if ( a1 != 1 )
          {
            v30 = (unsigned __int64 *)v30[v27 + 2];
          }
          *v9 = v30;
          v4 = 0;
          v32 = *(struct CThreadContext **)v8;
          *(_DWORD *)(v6 + 24) = v27;
          if ( v32 )
          {
            v1 = v74;
            i = v32;
            goto LABEL_5;
          }
        }
LABEL_46:
        v33 = *(_DWORD *)(v6 + 4);
        if ( !v33 )
          goto LABEL_81;
        v34 = *(_DWORD *)(v6 + 32);
        v35 = 0LL;
        LODWORD(a1) = 0;
        if ( v34 )
        {
          a1 = (unsigned int)(v34 - 1);
          *(_DWORD *)(v6 + 32) = a1;
          *(_OWORD *)v70 = *(_OWORD *)(*(_QWORD *)(v6 + 48) + 16 * a1);
          LODWORD(a1) = v70[1];
          v35 = v70[0];
        }
        *(_QWORD *)(v6 + 16) = v35;
        *(_DWORD *)(v6 + 4) = v33 - 1;
        *(_QWORD *)v8 = i;
        *(_DWORD *)(v6 + 24) = a1;
        if ( !i )
        {
LABEL_81:
          if ( v4 == 1 )
            v4 = 0;
          goto LABEL_83;
        }
LABEL_50:
        v1 = v74;
      }
    }
  }
  v69 = 241;
LABEL_121:
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v15, v69, 0LL);
LABEL_83:
  if ( v76 && (int)CThreadContext::GetCurrent((struct CThreadContext **)va) >= 0 )
  {
    v51 = CPtrArrayBase::GetCount((struct CThreadContext *)((char *)v74 + 24));
    CPtrArrayBase::RemoveAt(v52, v51 - 1, 1uLL);
  }
  *(_QWORD *)v8 = 0LL;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_DWORD *)(v6 + 32) = 0;
  v53 = *(_DWORD *)(v6 + 40);
  if ( v53 == 10 )
  {
    v55 = 64LL;
    if ( *(_DWORD *)(v6 + 56) > 0x40u )
      v55 = *(unsigned int *)(v6 + 56);
    if ( (unsigned __int64)(3 * v55) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v55) <= *(_DWORD *)(v6 + 36) )
    {
      v74 = 0LL;
      v67 = HrMalloc(0x10uLL, (unsigned int)v55, (void **)va);
      if ( v67 >= 0 )
      {
        operator delete(*(void **)(v6 + 48));
        *(_QWORD *)(v6 + 48) = v74;
        *(_DWORD *)(v6 + 36) = v55;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x116u, 0LL);
      }
    }
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(v6 + 40) = v53 + 1;
  }
  return (unsigned int)v4;
}
