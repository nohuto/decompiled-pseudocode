/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x18006F468
 * Callers:
 *     LdrpCondenseGraph @ 0x18006F434 (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x18006F468 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCondenseGraphRecurse @ 0x18006F468 (LdrpCondenseGraphRecurse.c)
 *     LdrpDestroyNode @ 0x18006F5B4 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x18006F608 (LdrpMergeNodes.c)
 */

signed __int64 __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, signed __int64 **a3, unsigned __int64 a4)
{
  signed __int64 *v4; // r15
  int v5; // eax
  _QWORD *v9; // r14
  signed __int64 result; // rax
  signed __int64 *v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // eax
  signed __int64 *v14; // r8
  signed __int64 *v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v4 = (signed __int64 *)(a1 + 64);
  v5 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 64) = *a3;
  v9 = *(_QWORD **)(a1 + 40);
  *a3 = (signed __int64 *)(a1 + 64);
  if ( v9 )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)*v9;
      v12 = v9[1];
      if ( *(int *)(v12 + 56) <= 5 )
        break;
LABEL_10:
      if ( v9 == *(_QWORD **)(a1 + 40) )
        goto LABEL_2;
    }
    v13 = *(_DWORD *)(v12 + 72);
    if ( v13 )
    {
      if ( !*(_QWORD *)(v12 + 64) )
      {
LABEL_16:
        if ( *(_DWORD *)(v12 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_10;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v9[1], a2, a3);
      v13 = *(_DWORD *)(v12 + 32);
    }
    if ( *(_DWORD *)(a1 + 32) > v13 )
      *(_DWORD *)(a1 + 32) = v13;
    goto LABEL_16;
  }
LABEL_2:
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
  {
    v11 = *a3;
    if ( *a3 )
      *a3 = (signed __int64 *)*v11;
    result = 0LL;
    if ( v4 != v11 )
    {
      do
      {
        v14 = *a3;
        *v11 = result;
        result = (signed __int64)v11;
        if ( v14 )
          *a3 = (signed __int64 *)*v14;
        v15 = v11;
        v11 = v14;
      }
      while ( v4 != v14 );
      v18 = (_QWORD *)result;
      if ( v15 )
      {
        RtlAcquireSRWLockExclusive(
          (unsigned __int64)&LdrpModuleDatatableLock,
          (unsigned __int64)v14,
          (unsigned __int64)v14,
          a4);
        LdrpMergeNodes(a1, &v18);
        result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v16 = v18;
        while ( v16 )
        {
          v17 = v16;
          v16 = (_QWORD *)*v16;
          result = LdrpDestroyNode(v17 - 8);
        }
      }
    }
    *v4 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
