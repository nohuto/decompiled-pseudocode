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

void __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  int v4; // eax
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // eax
  _QWORD *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  _QWORD *v17; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v8 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v8 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      v11 = v8[1];
      if ( *(int *)(v11 + 56) <= 5 )
        break;
LABEL_10:
      if ( v8 == *(_QWORD **)(a1 + 40) )
        goto LABEL_2;
    }
    v12 = *(_DWORD *)(v11 + 72);
    if ( v12 )
    {
      if ( !*(_QWORD *)(v11 + 64) )
      {
LABEL_16:
        if ( *(_DWORD *)(v11 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_10;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v8[1], a2, a3);
      v12 = *(_DWORD *)(v11 + 32);
    }
    if ( *(_DWORD *)(a1 + 32) > v12 )
      *(_DWORD *)(a1 + 32) = v12;
    goto LABEL_16;
  }
LABEL_2:
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 72) )
  {
    v9 = (_QWORD *)*a3;
    if ( *a3 )
      *a3 = *v9;
    v10 = 0LL;
    if ( v3 != v9 )
    {
      do
      {
        v13 = (_QWORD *)*a3;
        *v9 = v10;
        v10 = v9;
        if ( v13 )
          *a3 = *v13;
        v14 = v9;
        v9 = v13;
      }
      while ( v3 != v13 );
      v17 = v10;
      if ( v14 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        LdrpMergeNodes(a1, &v17);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v15 = v17;
        while ( v15 )
        {
          v16 = v15;
          v15 = (_QWORD *)*v15;
          LdrpDestroyNode(v16 - 8);
        }
      }
    }
    *v3 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
}
