/*
 * XREFs of MiRemoveLargeFreeLoaderDescriptors @ 0x140B69ECC
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 */

void __fastcall MiRemoveLargeFreeLoaderDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rbx
  char v5; // dl
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  ULONG_PTR v10; // r14
  ULONG_PTR v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // eax
  ULONG_PTR v20; // r15
  __int64 v21; // rcx
  unsigned __int16 i; // dx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r14
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rdx
  __int64 v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // r10
  unsigned __int64 v40; // rdx
  bool v41; // r8
  unsigned __int64 v42; // rax

  if ( !_bittest64(&KeFeatureBits, 0x25u) )
    return;
  v1 = a1 + 352;
  v2 = *(_QWORD *)(a1 + 352);
  v3 = 0LL;
  v4 = 0LL;
  if ( (*(_BYTE *)(a1 + 360) & 1) == 0 )
    goto LABEL_3;
  if ( v2 )
  {
    v2 ^= v1;
LABEL_3:
    if ( v2 )
    {
      v5 = *(_BYTE *)(a1 + 360) & 1;
      do
      {
        v6 = *(_QWORD *)(v2 + 8);
        v4 = (_QWORD *)v2;
        if ( v5 && v6 )
          v2 ^= v6;
        else
          v2 = *(_QWORD *)(v2 + 8);
      }
      while ( v2 );
    }
    while ( 1 )
    {
LABEL_8:
      if ( !v4 )
        goto LABEL_21;
      v7 = (_QWORD *)*v4;
      v8 = v4;
      v9 = v4;
      if ( *v4 )
      {
        while ( 1 )
        {
          v4 = v7;
          if ( !v7[1] )
            break;
          v7 = (_QWORD *)v7[1];
        }
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)v4[1] == v9 )
            break;
          v9 = v4;
        }
      }
      v10 = v8[5];
      v11 = v8[4];
      if ( v10 < 0x200000 )
        break;
      if ( v11 < 0x100000 )
      {
        v10 += v11 - 0x100000;
        v11 = 0x100000LL;
      }
      v19 = *((_DWORD *)v8 + 6);
      if ( (v19 == 2 || v19 == 24) && v10 )
      {
        do
        {
          v20 = MiRestrictRangeToNode(v11, v10);
          v21 = *((unsigned int *)MiSearchNumaNodeTable(v11) + 2);
          qword_140D82AF0[3 * v21] += v20;
          if ( v20 >= 0x200000 && v20 > qword_140D82AE8[3 * v21] )
          {
            MxBootDeferDescriptors[3 * v21] = v11;
            v3 = -1LL;
            qword_140D82AE8[3 * v21] = v20;
            for ( i = 0; i < 0x40u; ++i )
            {
              v23 = v3;
              v24 = qword_140D82AE8[3 * i];
              if ( v24 < v3 )
              {
                v3 = qword_140D82AE8[3 * i];
                if ( !v24 )
                  break;
              }
              v3 = qword_140D82AE8[3 * i];
              if ( v24 >= v23 )
                v3 = v23;
              if ( i == (unsigned __int16)KeNumberNodes - 1 )
                break;
            }
          }
          v11 += v20;
          v10 -= v20;
        }
        while ( v10 );
      }
    }
    if ( v10 + v11 >= 0x300000 && v10 + v11 >= v3 )
    {
      v14 = v11 & 0xFFFFFFFFFFFC0000uLL;
      if ( v14 >= 0x100000 )
      {
        v15 = *(_QWORD *)v1;
        v16 = v14 - 0x40000;
        if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
        {
          if ( v15 )
            v15 ^= v1;
          else
            v15 = 0LL;
        }
        v4 = 0LL;
        while ( 1 )
        {
          if ( !v15 )
            goto LABEL_8;
          v17 = *(_QWORD *)(v15 + 32);
          if ( v16 >= v17 )
          {
            if ( v16 >= *(_QWORD *)(v15 + 40) + v17 )
            {
              v18 = *(_QWORD *)(v15 + 8);
              goto LABEL_39;
            }
            v4 = (_QWORD *)v15;
          }
          v18 = *(_QWORD *)v15;
LABEL_39:
          if ( (*(_BYTE *)(v1 + 8) & 1) != 0 && v18 )
            v15 ^= v18;
          else
            v15 = v18;
        }
      }
    }
  }
LABEL_21:
  v12 = 0;
  if ( !KeNumberNodes )
    return;
  do
  {
    v13 = qword_140D82AE8[3 * v12];
    if ( !v13 )
      goto LABEL_23;
    v25 = qword_140D82AF0[3 * v12];
    if ( v25 < 0x300000 )
      goto LABEL_23;
    v26 = v25 - 0x100000;
    v27 = *(_QWORD *)v1;
    v28 = MxBootDeferDescriptors[3 * v12];
    if ( (unsigned __int64)(qword_140D82AF0[3 * v12] - v13) >= 0x100000 )
      v26 = qword_140D82AE8[3 * v12];
    if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
    {
      if ( v27 )
        v27 ^= v1;
      else
        v27 = 0LL;
    }
    v29 = 0LL;
    while ( v27 )
    {
      v30 = *(_QWORD *)(v27 + 32);
      if ( v28 >= v30 )
      {
        if ( v28 >= *(_QWORD *)(v27 + 40) + v30 )
        {
          v31 = *(_QWORD *)(v27 + 8);
          goto LABEL_74;
        }
        v29 = v27;
      }
      v31 = *(_QWORD *)v27;
LABEL_74:
      if ( (*(_BYTE *)(v1 + 8) & 1) != 0 && v31 )
        v27 ^= v31;
      else
        v27 = v31;
    }
    v32 = 6LL * v12;
    v33 = (v26 + v28) & 0xFFFFFFFFFFFC0000uLL;
    v34 = (v28 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    LODWORD(qword_140D850F8[v32]) = *(_DWORD *)(v29 + 24);
    v35 = v33 - v34;
    qword_140D850F8[v32 + 2] = v33 - v34;
    qword_140D850F8[v32 + 1] = v34;
    v36 = *(_QWORD *)(v29 + 32);
    v37 = *(_QWORD *)(v29 + 40);
    v38 = v36 + v37;
    if ( v34 == v36 )
    {
      if ( v33 == v38 )
      {
        RtlRbRemoveNode((unsigned __int64 *)v1, v29);
        goto LABEL_23;
      }
      *(_QWORD *)(v29 + 32) = v36 + v35;
LABEL_83:
      *(_QWORD *)(v29 + 40) = v37 - v35;
    }
    else
    {
      if ( v33 == v38 )
        goto LABEL_83;
      v39 = &MxDeferredBootSplitDescriptor[v32];
      *((_DWORD *)v39 + 6) = *(_DWORD *)(v29 + 24);
      v39[4] = *(_QWORD *)(v29 + 32);
      v39[5] = v34 - *(_QWORD *)(v29 + 32);
      *(_QWORD *)(v29 + 40) = *(_QWORD *)(v29 + 32) + *(_QWORD *)(v29 + 40) - v33;
      *(_QWORD *)(v29 + 32) = v33;
      v40 = *(_QWORD *)v1;
      if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
      {
        if ( v40 )
          v40 ^= v1;
        else
          v40 = 0LL;
      }
      v41 = 0;
      if ( v40 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)v39[4] >= *(_QWORD *)(v40 + 32) )
          {
            v42 = *(_QWORD *)(v40 + 8);
            if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
            {
              if ( !v42 )
                goto LABEL_101;
              v42 ^= v40;
            }
            if ( !v42 )
            {
LABEL_101:
              v41 = 1;
              break;
            }
          }
          else
          {
            v42 = *(_QWORD *)v40;
            if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
            {
              if ( !v42 )
                goto LABEL_95;
              v42 ^= v40;
            }
            if ( !v42 )
            {
LABEL_95:
              v41 = 0;
              break;
            }
          }
          v40 = v42;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)v1, v40, v41, (unsigned __int64)&MxDeferredBootSplitDescriptor[v32]);
    }
LABEL_23:
    ++v12;
  }
  while ( v12 < (unsigned __int16)KeNumberNodes );
}
