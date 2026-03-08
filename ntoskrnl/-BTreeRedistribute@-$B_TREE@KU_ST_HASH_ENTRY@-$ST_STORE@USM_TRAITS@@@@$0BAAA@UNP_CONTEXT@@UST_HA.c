/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BA138
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B78F4 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1405B8894 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405BBC3C (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12
  size_t *v3; // r8
  unsigned int v4; // r13d
  __int64 v5; // r11
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  size_t *p_Size; // rdi
  void **v9; // r9
  struct NP_CONTEXT::NP_CTX *v10; // rcx
  size_t v11; // rax
  unsigned __int64 v12; // r12
  size_t v13; // r15
  size_t v14; // r9
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  size_t v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // esi
  size_t v22; // rbx
  size_t v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rdx
  size_t v28; // rbp
  size_t v29; // r11
  char *v30; // r11
  char *v31; // rbp
  size_t v32; // r8
  unsigned int v33; // eax
  size_t v34; // rcx
  int v35; // eax
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v41; // [rsp+20h] [rbp-58h]
  size_t v42; // [rsp+80h] [rbp+8h] BYREF
  size_t Size; // [rsp+88h] [rbp+10h] BYREF
  __int64 v44; // [rsp+90h] [rbp+18h]
  void *v45; // [rsp+98h] [rbp+20h]

  v42 = 0LL;
  Size = 0LL;
  v2 = 1LL;
  v3 = (size_t *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v4 = 16;
  v5 = *(v3 - 2);
  v6 = (_DWORD *)*(v3 - 1);
  v7 = *(_BYTE *)(*v3 + 3) != 0 ? 1020 : 255;
  if ( v6 == (_DWORD *)(v5 + 16 * ((unsigned __int16)*(_DWORD *)v5 + 1LL)) )
  {
    v6 -= 4;
    Size = *v3;
    p_Size = &v42;
    v9 = (void **)(v6 - 2);
    if ( (unsigned __int64)v6 <= v5 + 16 )
      v9 = (void **)(v5 + 8);
  }
  else
  {
    v42 = *v3;
    v9 = (void **)(v6 + 2);
    p_Size = &Size;
    v2 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v5 + 2) != 2 )
  {
    v11 = (size_t)*v9;
    *p_Size = (size_t)*v9;
  }
  else
  {
    v10 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v10 == -1 )
      v11 = (size_t)*v9;
    else
      v11 = (size_t)NP_CONTEXT::NpLeafRefInternal(v10, v9, 0);
    *p_Size = v11;
    if ( !v11 )
      return 0LL;
  }
  v13 = Size;
  v12 = v11 | v2;
  v14 = v42;
  v15 = (unsigned __int16)*(_DWORD *)Size;
  v16 = (unsigned __int16)*(_DWORD *)v42;
  v17 = v16 + v15;
  if ( v16 + v15 >= v7 && v17 < 2 * v7 - 1 )
  {
    v18 = v17 >> 1;
    v19 = v42;
    if ( v16 <= v15 )
    {
      v22 = Size;
      v21 = v18 - v16;
      v23 = v42;
      v20 = (unsigned __int16)*(_DWORD *)v42;
    }
    else
    {
      v20 = 0;
      v21 = v16 - v18;
      v22 = v42;
      v23 = Size;
    }
    v24 = v15 < v16 ? v18 : 0;
    v25 = 16LL * v20;
    v26 = *(_BYTE *)(v22 + 3) == 0;
    v27 = v24;
    v41 = v24;
    v44 = v25;
    if ( v26 )
    {
      v19 = v42;
      v29 = v25 + v23;
      v28 = v22 + 16LL * v24;
    }
    else
    {
      v4 = 4;
      v44 = 16LL * v20;
      v28 = v22 + 4LL * v24;
      v29 = v23 + 4LL * v20;
    }
    v30 = (char *)(v29 + 16);
    v31 = (char *)(v28 + 16);
    v45 = v30;
    if ( v22 == v19 )
    {
      v32 = v4 * (unsigned __int16)*(_DWORD *)v23;
      Size = v4 * v21;
      memmove(&v30[Size], v30, v32);
      v14 = v42;
      v30 = (char *)v45;
      v27 = v41;
      v33 = Size;
      v25 = v44;
    }
    else
    {
      v33 = v4 * v21;
      Size = v4 * v21;
    }
    if ( *(_BYTE *)(v22 + 3) )
    {
      v42 = v33;
      memmove(v30, v31, v33);
      v34 = v42;
    }
    else
    {
      v35 = *v6;
      v36 = v21 - 1;
      if ( v22 == v14 )
      {
        v37 = 2LL * v36;
        *(_DWORD *)(v23 + 8 * v37 + 16) = v35;
        *(_QWORD *)(v23 + 8 * v37 + 24) = *(_QWORD *)(v23 + 8);
        v38 = v4;
      }
      else
      {
        *(_DWORD *)(v25 + v23 + 16) = v35;
        *(_QWORD *)(v25 + v23 + 24) = *(_QWORD *)(v22 + 8);
        v38 = v4;
        v30 += v4;
      }
      if ( v22 == v14 )
      {
        v39 = 2 * v27;
        v31 += v38;
        *v6 = *(_DWORD *)(v22 + 8 * v39 + 16);
        *(_QWORD *)(v23 + 8) = *(_QWORD *)(v22 + 8 * v39 + 24);
      }
      else
      {
        *v6 = *(_DWORD *)(v22 + 16LL * v36 + 16);
        *(_QWORD *)(v22 + 8) = *(_QWORD *)(v22 + 16LL * v36 + 24);
      }
      memmove(v30, v31, v4 * v36);
      v34 = (unsigned int)Size;
    }
    *(_WORD *)v23 += v21;
    *(_WORD *)v22 -= v21;
    if ( v22 == v13 )
      memmove(v31, &v31[v34], v4 * (unsigned __int16)*(_DWORD *)v22);
    if ( *(_BYTE *)(v13 + 3) )
      *v6 = *(_DWORD *)(v13 + 16);
  }
  return v12;
}
