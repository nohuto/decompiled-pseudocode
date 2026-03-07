__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactRegions(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  __int64 v7; // r15
  __int64 v8; // rcx
  _WORD *v9; // rax
  int v10; // r13d
  _QWORD *v11; // r14
  int v12; // ebx
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  _DWORD **v16; // rax
  __int64 LeafSibling; // rax
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rbx
  int *v24; // rbx
  int v25; // r9d
  int v26; // r8d
  int v27; // edx
  unsigned int v28; // r10d
  unsigned int v29; // r11d
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // r15
  int v34; // eax
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // r8d
  int *v39; // r15
  int v40; // r12d
  int v41; // eax
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+24h] [rbp-DCh]
  int v45; // [rsp+28h] [rbp-D8h]
  unsigned int v46; // [rsp+2Ch] [rbp-D4h]
  int v47; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v48; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-B8h]
  __int64 v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  _WORD *v52; // [rsp+60h] [rbp-A0h]
  int *v53; // [rsp+68h] [rbp-98h]
  _WORD *v54; // [rsp+70h] [rbp-90h]
  _QWORD v55[22]; // [rsp+80h] [rbp-80h] BYREF

  v7 = a3;
  v51 = a2;
  v49 = a3;
  v43 = a5;
  v50 = a4;
  memset(v55, 0, 0xA8uLL);
  v8 = *(_QWORD *)(a1 + 1032);
  v44 = 0;
  v48 = 0LL;
  v9 = (_WORD *)(v8 + 2LL * a5);
  v54 = (_WORD *)(v8 + 2 * v7);
  v52 = v9;
  if ( v54 == v9 )
    v10 = 0;
  else
    v10 = *v9 & 0x1FFF;
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, *(_QWORD *)(a1 + 760));
  v11 = (_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  **(_DWORD **)(a1 + 760) = (_DWORD)v7 << *(_DWORD *)(a1 + 812);
  v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
          a1 + 64,
          *(_DWORD *)(a1 + 768),
          a1 + 88);
  if ( v12 != -1073741818 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
      (unsigned __int8 **)(a1 + 64),
      (__int64)&v48,
      a1 + 88);
    v13 = v48;
    while ( 1 )
    {
      if ( v44 )
      {
        **(_DWORD **)(a1 + 760) = (_DWORD)v7 << *(_DWORD *)(a1 + 812);
        v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                a1 + 64,
                *(_DWORD *)(a1 + 768),
                a1 + 88);
        if ( v12 == -1073741818 )
          break;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          (__int64 *)&v48,
          (__int64 *)(a1 + 64));
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
          (unsigned __int8 **)(a1 + 64),
          (__int64)&v48,
          a1 + 88);
        v13 = v48;
      }
      if ( !v13 )
      {
LABEL_66:
        v12 = 0;
        break;
      }
      v14 = *((_QWORD *)&v48 + 1) + 4LL;
      v15 = (unsigned __int16)*(_DWORD *)v13 + 4LL;
      *((_QWORD *)&v48 + 1) = v14;
      if ( v14 >= v13 + 4 * v15 )
      {
        if ( a1 == -64 )
          v16 = 0LL;
        else
          v16 = (_DWORD **)(a1 + 80);
        if ( **v16 == -1 )
        {
          LeafSibling = 3358LL;
          if ( **(_DWORD **)((a1 + 80) & -(__int64)(a1 != -64)) == -1 )
            LeafSibling = *(_QWORD *)(v13 + 8);
        }
        else
        {
          LeafSibling = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                          a1 + 64,
                          v13);
          if ( LeafSibling == -1 )
          {
            v14 = -1LL;
            goto LABEL_24;
          }
        }
        if ( LeafSibling )
        {
          v14 = LeafSibling + 16;
          *(_QWORD *)&v48 = LeafSibling;
          *((_QWORD *)&v48 + 1) = LeafSibling + 16;
          v13 = LeafSibling;
        }
        else
        {
          v14 = 0LL;
        }
      }
LABEL_24:
      if ( v14 == -1LL )
        goto LABEL_65;
      if ( !v14 )
        goto LABEL_66;
      v18 = *(_DWORD *)v14;
      v19 = (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)v14 & *(_DWORD *)(a1 + 460)));
      v20 = (unsigned int)(*(_DWORD *)v14 >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v21, v20);
      v47 = v18;
      v22 = *(_DWORD *)(a1 + 808);
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v21 + 192) + 16 * (v20 ^ (unsigned int)(1 << v21)));
      LODWORD(v21) = *(_DWORD *)(a1 + 812);
      v24 = (int *)(*(unsigned int *)(a1 + 472) + v19 + v23);
      v53 = v24;
      v25 = *v24 & v22;
      if ( (unsigned int)*v24 >> v21 != (_DWORD)v7 )
        goto LABEL_66;
      v26 = *(_DWORD *)(a1 + 824);
      v27 = 4096;
      v28 = v43;
      if ( (v24[1] & 0xFFF) != 0 )
        v27 = v24[1] & 0xFFF;
      v46 = (unsigned int)(v27 + v26 + 15) >> 4;
      v29 = v26 + (-*(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) & (v27 + *(_DWORD *)(*(_QWORD *)(a1 + 1016) + 8LL) - 1));
      v30 = v51;
      if ( v43 == (_DWORD)v7 || v46 + (*v52 & 0x1FFF) <= *(_DWORD *)(a1 + 816) )
      {
        v31 = v50;
      }
      else
      {
        v31 = v51;
        v10 = 0;
        v52 = v54;
        v44 = 0;
        v28 = v7;
        v50 = v51;
        v43 = v7;
      }
      if ( v25 != v10 || (_DWORD)v7 != v28 )
      {
        if ( !v31 )
        {
          v12 = -1073741802;
          break;
        }
        memmove((void *)(v31 + (unsigned int)(16 * v10)), (const void *)(v51 + (unsigned int)(16 * v25)), v29);
        ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v24);
        v32 = a1 + 96;
        v33 = a1 + 96;
        v34 = *(_DWORD *)(a1 + 112);
        v35 = v10 | (v43 << *(_DWORD *)(a1 + 812));
        v45 = v35;
        if ( v34 != -1 && v34 )
          v33 = *v11 + 16LL * (unsigned int)(v34 - 1);
        if ( *(_QWORD *)v33 == v13 )
        {
          *(_QWORD *)(v33 + 8) = *((_QWORD *)&v48 + 1);
        }
        else
        {
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (__int64 *)(a1 + 64),
            a1 + 88);
          if ( *(_DWORD *)(a1 + 112) == -1 )
          {
            *(_OWORD *)v33 = v48;
          }
          else
          {
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 64,
              *(_DWORD *)(v13 + 16),
              a1 + 88);
            v36 = *(_DWORD *)(a1 + 112);
            if ( v36 != -1 && v36 )
              v32 = *v11 + 16LL * (unsigned int)(v36 - 1);
            *(_QWORD *)(v32 + 8) = *((_QWORD *)&v48 + 1);
          }
          v35 = v45;
        }
        if ( !v44 )
        {
          **(_DWORD **)(a1 + 760) = v35;
          v37 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
                  a1 + 64,
                  a1 + 88,
                  *(_DWORD *)(a1 + 768));
          if ( v37 )
          {
            if ( v37 == -1 )
            {
LABEL_65:
              v12 = -1073741818;
              break;
            }
            v38 = v47;
            *v53 = v45;
            B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
              a1 + 64,
              a1 + 88,
              v38);
LABEL_58:
            LODWORD(v7) = v49;
            if ( v49 != v43 )
            {
              ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v49, -v46, 1LL);
              ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(a1, v43, v46, 0LL);
            }
            goto LABEL_60;
          }
          v44 = 1;
        }
        v39 = v53;
        **(_DWORD **)(a1 + 760) = *v53;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
          a1 + 64,
          a1 + 88,
          *(_DWORD *)(a1 + 768));
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
          (__int64 *)&v48,
          (__int64 *)(a1 + 64));
        v40 = v47;
        *v39 = v45;
        v47 = v40;
        v55[0] = &v55[5];
        v48 = 0LL;
        v55[1] = 0LL;
        v55[2] = 0LL;
        v55[4] = 0LL;
        v55[3] = 0x800000000LL;
        v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
                a1 + 64,
                (unsigned int *)&v47,
                (__int64)v55);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
          a1 + 64,
          (__int64)v55,
          1);
        if ( v12 < 0 )
        {
          *v39 = **(_DWORD **)(a1 + 760);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
            a1 + 64,
            a1 + 88,
            v40);
          break;
        }
        v41 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDelete(
                a1 + 64,
                *(unsigned int *)(a1 + 768),
                a1 + 88);
        v12 = v41;
        if ( v41 < 0 )
        {
          if ( v41 != -1073741818 )
            NT_ASSERT("(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L)");
          break;
        }
        v13 = v48;
        goto LABEL_58;
      }
LABEL_60:
      v10 += v46;
      if ( a6 && (unsigned int)ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, v30) != 2 )
      {
        v12 = -2147483634;
        break;
      }
    }
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (__int64 *)&v48,
    (__int64 *)(a1 + 64));
  return (unsigned int)v12;
}
