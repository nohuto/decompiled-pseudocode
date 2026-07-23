/*
 * XREFs of VrpAddNamespaceNodeToList @ 0x1405D33DC
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408829FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     VrpFindExactNamespaceNode @ 0x1405D371C (VrpFindExactNamespaceNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpAddNamespaceNodeToList(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  void *v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r15
  size_t v19; // r13
  SIZE_T v20; // r14
  void *v21; // r12
  PVOID PoolWithTag; // rax
  void *v23; // rsi
  unsigned __int64 v24; // rax
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rbp
  __int64 v27; // r14
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r14
  size_t v30; // r13
  size_t v31; // rbp
  void *v32; // r12
  PVOID v33; // rax
  void *v34; // rsi
  unsigned __int64 v36; // [rsp+70h] [rbp+18h] BYREF

  v36 = 0LL;
  v2 = a2;
  if ( VrpFindExactNamespaceNode(a1, a2, &v36) )
    return 3221225525LL;
  v4 = a1[6];
  v5 = v36;
  v6 = a1[7];
  if ( v36 >= v4 )
  {
    if ( v4 < v6 )
      goto LABEL_35;
    v15 = v4 + 1;
    if ( v4 + 1 <= v6 )
      return 2147942487LL;
    v16 = a1[8] - 1;
    if ( v16 + v15 < v15 )
      return 2147483659LL;
    v17 = a1[5];
    v18 = (v16 + v15) & ~v16;
    v19 = v6 * v17;
    if ( !is_mul_ok(v6, v17) )
    {
      result = 2147483659LL;
      goto LABEL_34;
    }
    v20 = v18 * v17;
    if ( !is_mul_ok(v18, v17) )
    {
      result = 2147483659LL;
LABEL_33:
      v2 = a2;
LABEL_34:
      if ( (_DWORD)result )
        return result;
LABEL_35:
      if ( is_mul_ok(a1[5], v4) )
      {
        v24 = a1[9];
        v25 = (_QWORD *)(v24 + a1[5] * v4);
        if ( (unsigned __int64)v25 >= v24 )
        {
          *v25 = v2;
          goto LABEL_12;
        }
      }
      return 2147483659LL;
    }
    v21 = (void *)a1[9];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x72615452u);
    v23 = PoolWithTag;
    if ( v21 )
    {
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v20);
      if ( !v23 )
        goto LABEL_32;
      if ( v19 >= v20 )
        v19 = v20;
      memmove(v23, v21, v19);
      ExFreePoolWithTag(v21, 0x72615452u);
    }
    else if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v20);
    }
    if ( v23 )
    {
      a1[9] = (unsigned __int64)v23;
      result = 0LL;
      a1[7] = v18;
      goto LABEL_33;
    }
LABEL_32:
    result = 2147942414LL;
    goto LABEL_33;
  }
  if ( v4 < v6 )
  {
LABEL_4:
    v7 = a1[5];
    v8 = v7 * v5;
    if ( is_mul_ok(v7, v5) )
    {
      v10 = a1[9];
      v11 = (_QWORD *)(v10 + v8);
      if ( v10 + v8 >= v10 )
      {
        v12 = v7 * (v5 + 1);
        if ( is_mul_ok(v7, v5 + 1) )
        {
          v13 = (void *)(v10 + v12);
          if ( v10 + v12 >= v10 )
          {
            v14 = a1[6] - v5;
            if ( is_mul_ok(v14, v7) )
            {
              memmove(v13, v11, v14 * v7);
              *v11 = v2;
LABEL_12:
              ++a1[6];
              return 0LL;
            }
          }
        }
      }
    }
    return 2147483659LL;
  }
  v26 = v4 + 1;
  if ( v26 <= v6 )
    return 2147942487LL;
  v27 = a1[8] - 1;
  if ( v27 + v26 < v26 )
    return 2147483659LL;
  v28 = a1[5];
  v29 = (v27 + v26) & ~v27;
  v30 = v6 * v28;
  if ( !is_mul_ok(v6, v28) || (v31 = v29 * v28, !is_mul_ok(v29, v28)) )
  {
    result = 2147483659LL;
    goto LABEL_56;
  }
  v32 = (void *)a1[9];
  v33 = ExAllocatePoolWithTag(PagedPool, v29 * v28, 0x72615452u);
  v34 = v33;
  if ( v32 )
  {
    if ( v33 )
      memset(v33, 0, v31);
    if ( !v34 )
      goto LABEL_55;
    if ( v30 >= v31 )
      v30 = v31;
    memmove(v34, v32, v30);
    ExFreePoolWithTag(v32, 0x72615452u);
  }
  else if ( v33 )
  {
    memset(v33, 0, v31);
  }
  if ( v34 )
  {
    a1[9] = (unsigned __int64)v34;
    result = 0LL;
    a1[7] = v29;
    goto LABEL_56;
  }
LABEL_55:
  result = 2147942414LL;
LABEL_56:
  if ( !(_DWORD)result )
  {
    v2 = a2;
    goto LABEL_4;
  }
  return result;
}
