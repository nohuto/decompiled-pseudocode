/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BA45C
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B7B8C (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1405B8B78 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        size_t a1,
        __int64 a2)
{
  __int64 v2; // r12
  size_t *v3; // rcx
  _DWORD *v4; // r8
  _DWORD *v5; // rdi
  unsigned int v6; // edx
  size_t *v7; // rax
  bool v8; // cc
  size_t *p_Size; // rcx
  size_t *v10; // r8
  size_t v11; // rax
  __int64 v12; // r12
  size_t v13; // r15
  _DWORD *v14; // r13
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  size_t v19; // rbx
  unsigned int v20; // ebp
  size_t v21; // rsi
  char v22; // dl
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  _DWORD *v27; // rax
  unsigned int v28; // r11d
  char *v29; // r10
  unsigned int v30; // r9d
  char *v31; // r14
  __int64 v32; // r13
  int v33; // eax
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // r8
  char *v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+30h] [rbp-58h]
  size_t Size; // [rsp+90h] [rbp+8h] BYREF
  _DWORD *v42; // [rsp+98h] [rbp+10h] BYREF
  _DWORD *v43; // [rsp+A0h] [rbp+18h]
  _DWORD *v44; // [rsp+A8h] [rbp+20h]

  Size = a1;
  v2 = 1LL;
  v3 = (size_t *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v4 = (_DWORD *)*(v3 - 2);
  v5 = (_DWORD *)*(v3 - 1);
  v6 = (unsigned __int8)-(*(_BYTE *)(*v3 + 3) != 0) + 255;
  if ( v5 == &v4[4 * (unsigned __int16)*v4 + 4] )
  {
    Size = *v3;
    v5 -= 4;
    v7 = (size_t *)(v4 + 2);
    v8 = v5 <= v4 + 4;
    p_Size = (size_t *)&v42;
    v10 = (size_t *)(v5 - 2);
    if ( v8 )
      v10 = v7;
  }
  else
  {
    v42 = (_DWORD *)*v3;
    v10 = (size_t *)(v5 + 2);
    p_Size = &Size;
    v2 = 0LL;
  }
  v11 = *v10;
  *p_Size = *v10;
  v12 = v11 | v2;
  v13 = Size;
  v14 = v42;
  v15 = (unsigned __int16)*(_DWORD *)Size;
  v16 = (unsigned __int16)*v42;
  v17 = v16 + v15;
  if ( v16 + v15 >= v6 && v17 < 2 * v6 - 1 )
  {
    v18 = v17 >> 1;
    if ( v16 <= v15 )
    {
      v43 = v42;
      v20 = v18 - v16;
      v44 = v42;
      v19 = Size;
      v21 = (size_t)v42;
    }
    else
    {
      v19 = (size_t)v42;
      v20 = v16 - v18;
      v43 = v42;
      v44 = v42;
      v21 = Size;
    }
    v22 = *(_BYTE *)(v19 + 3);
    v23 = v15 < v16 ? v18 : 0;
    v24 = 0;
    v40 = v23;
    if ( v16 <= v15 )
      v24 = v16;
    v25 = v24;
    v39 = v25;
    v26 = (-(__int64)(v22 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 16;
    v27 = v43;
    v28 = v22 != 0 ? 8 : 16;
    v29 = (char *)(v21 + v26 * (unsigned int)v25 + 16);
    LODWORD(v42) = v28;
    v30 = v20 * v28;
    v38 = v29;
    v31 = (char *)(v19 + v26 * v23 + 16);
    LODWORD(Size) = v20 * v28;
    if ( !v22 )
      v27 = v44;
    if ( (_DWORD *)v19 == v27 )
    {
      memmove(&v29[v30], (const void *)(v21 + v26 * (unsigned int)v25 + 16), v28 * (unsigned __int16)*(_DWORD *)v21);
      v30 = Size;
      v29 = v38;
      v28 = (unsigned int)v42;
      v25 = v39;
    }
    else
    {
      LODWORD(Size) = v20 * v28;
    }
    if ( *(_BYTE *)(v19 + 3) )
    {
      v32 = v30;
      memmove(v29, v31, v30);
    }
    else
    {
      v33 = *v5;
      if ( (_DWORD *)v19 == v14 )
      {
        v34 = v20 - 1;
        v35 = 2LL * (v20 - 1);
        *(_DWORD *)(v21 + 8 * v35 + 16) = v33;
        *(_QWORD *)(v21 + 8 * v35 + 24) = *(_QWORD *)(v21 + 8);
      }
      else
      {
        v36 = 2 * v25;
        v29 += v28;
        *(_DWORD *)(v21 + 8 * v36 + 16) = v33;
        *(_QWORD *)(v21 + 8 * v36 + 24) = *(_QWORD *)(v19 + 8);
        v34 = v20 - 1;
      }
      if ( (_DWORD *)v19 == v14 )
      {
        v31 += v28;
        *v5 = *(_DWORD *)(v19 + 16 * v40 + 16);
        *(_QWORD *)(v21 + 8) = *(_QWORD *)(v19 + 16 * v40 + 24);
      }
      else
      {
        *v5 = *(_DWORD *)(v19 + 16LL * v34 + 16);
        *(_QWORD *)(v19 + 8) = *(_QWORD *)(v19 + 16LL * v34 + 24);
      }
      memmove(v29, v31, v28 * v34);
      v32 = (unsigned int)Size;
    }
    *(_WORD *)v21 += v20;
    *(_WORD *)v19 -= v20;
    if ( v19 == v13 )
      memmove(v31, &v31[v32], (unsigned int)v42 * (unsigned __int16)*(_DWORD *)v19);
    if ( *(_BYTE *)(v13 + 3) )
      *v5 = *(_DWORD *)(v13 + 16);
  }
  return v12;
}
