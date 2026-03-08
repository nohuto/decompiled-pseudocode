/*
 * XREFs of VrpAddNamespaceNodeToList @ 0x140737050
 * Callers:
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140736B44 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A6F45C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VrpFindExactNamespaceNode @ 0x140737324 (VrpFindExactNamespaceNode.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpAddNamespaceNodeToList(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  void *v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r14
  size_t v20; // r13
  size_t v21; // r15
  void *v22; // r12
  PVOID PoolWithTag; // rax
  void *v24; // rbp
  unsigned __int64 v25; // rax
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 v28; // r14
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r14
  size_t v31; // r13
  size_t v32; // rbp
  void *v33; // r12
  PVOID v34; // rax
  void *v35; // rsi
  unsigned __int64 v37; // [rsp+70h] [rbp+18h] BYREF

  v37 = 0LL;
  v2 = a2;
  if ( VrpFindExactNamespaceNode(a1, a2, &v37) )
    return 3221225525LL;
  v4 = a1[6];
  v5 = v37;
  v6 = a1[7];
  if ( v37 >= v4 )
  {
    if ( v4 < v6 )
    {
LABEL_33:
      if ( is_mul_ok(a1[5], v4) )
      {
        v25 = a1[9];
        v26 = (_QWORD *)(v25 + a1[5] * v4);
        if ( (unsigned __int64)v26 >= v25 )
        {
          *v26 = v2;
          goto LABEL_12;
        }
      }
      return 3221225621LL;
    }
    v16 = v4 + 1;
    if ( v4 + 1 <= v6 )
      return 3221225485LL;
    v17 = a1[8] - 1;
    if ( v17 + v16 < v16 )
      return 3221225621LL;
    v18 = a1[5];
    v19 = (v17 + v16) & ~v17;
    v20 = v6 * v18;
    if ( !is_mul_ok(v6, v18) || (v21 = v19 * v18, !is_mul_ok(v19, v18)) )
    {
      result = 3221225621LL;
LABEL_32:
      if ( (_DWORD)result )
        return result;
      goto LABEL_33;
    }
    v22 = (void *)a1[9];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19 * v18, 0x72615452u);
    v24 = PoolWithTag;
    if ( v22 )
    {
      if ( !PoolWithTag )
      {
LABEL_24:
        result = 3221225495LL;
LABEL_25:
        v2 = a2;
        goto LABEL_32;
      }
      memset(PoolWithTag, 0, v21);
      if ( v20 >= v21 )
        v20 = v21;
      memmove(v24, v22, v20);
      ExFreePoolWithTag(v22, 0x72615452u);
    }
    else
    {
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v21);
      if ( !v24 )
        goto LABEL_24;
    }
    a1[9] = (unsigned __int64)v24;
    result = 0LL;
    a1[7] = v19;
    goto LABEL_25;
  }
  if ( v4 < v6 )
    goto LABEL_4;
  v27 = v4 + 1;
  if ( v27 <= v6 )
    return 3221225485LL;
  v28 = a1[8] - 1;
  if ( v28 + v27 < v27 )
    return 3221225621LL;
  v29 = a1[5];
  v30 = (v28 + v27) & ~v28;
  v31 = v6 * v29;
  if ( is_mul_ok(v6, v29) )
  {
    v32 = v30 * v29;
    if ( is_mul_ok(v30, v29) )
    {
      v33 = (void *)a1[9];
      v34 = ExAllocatePoolWithTag(PagedPool, v30 * v29, 0x72615452u);
      v35 = v34;
      if ( v33 )
      {
        if ( !v34 )
        {
LABEL_44:
          result = 3221225495LL;
LABEL_45:
          v2 = a2;
          goto LABEL_54;
        }
        memset(v34, 0, v32);
        if ( v31 >= v32 )
          v31 = v32;
        memmove(v35, v33, v31);
        ExFreePoolWithTag(v33, 0x72615452u);
      }
      else
      {
        if ( v34 )
          memset(v34, 0, v32);
        if ( !v35 )
          goto LABEL_44;
      }
      a1[9] = (unsigned __int64)v35;
      result = 0LL;
      a1[7] = v30;
      goto LABEL_45;
    }
    v2 = a2;
  }
  result = 3221225621LL;
LABEL_54:
  if ( (_DWORD)result )
    return result;
LABEL_4:
  v7 = a1[5];
  v8 = v7 * v5;
  if ( !is_mul_ok(v7, v5) )
    return 3221225621LL;
  v10 = a1[9];
  v11 = (_QWORD *)(v10 + v8);
  if ( v10 + v8 < v10 )
    return 3221225621LL;
  v12 = v7 * (v5 + 1);
  if ( !is_mul_ok(v7, v5 + 1) )
    return 3221225621LL;
  v13 = a1[9];
  v14 = (void *)(v13 + v12);
  if ( v13 + v12 < v13 )
    return 3221225621LL;
  v15 = a1[6] - v5;
  if ( is_mul_ok(v15, v7) )
  {
    memmove(v14, v11, v15 * v7);
    *v11 = v2;
LABEL_12:
    ++a1[6];
    return 0LL;
  }
  return 2147483659LL;
}
