/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x1800617BC
 * Callers:
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpMapDllSearchPath @ 0x180060AD0 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180060E90 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180061A48 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpDependencyExist @ 0x180061A04 (LdrpDependencyExist.c)
 */

void __fastcall LdrpLoadContextReplaceModule(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // eax
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // r8
  _QWORD **v12; // rcx
  _QWORD *i; // rdx
  _QWORD **v14; // rax
  int v15; // eax
  _QWORD *v17; // rcx

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 != -1 )
    *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(v4 + 24) = 0;
  v7 = *(_QWORD ***)(v4 + 48);
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      *(_QWORD *)(v4 + 48) = 0LL;
    else
      *v7 = (_QWORD *)*v8;
    LdrpDereferenceModule((char *)a2);
    v9 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    if ( (unsigned __int8)LdrpDependencyExist(v9, v5) )
    {
      v12 = *(_QWORD ***)(v9 + 40);
      for ( i = *v12; i != v11; i = (_QWORD *)*i )
        v12 = (_QWORD **)i;
      *v12 = (_QWORD *)*v11;
      if ( *(_QWORD **)(v9 + 40) == v11 )
      {
        v14 = 0LL;
        if ( v12 != v11 )
          v14 = v12;
        *(_QWORD *)(v9 + 40) = v14;
      }
      v15 = *(_DWORD *)(v5 + 24);
      if ( v15 != -1 )
        *(_DWORD *)(v5 + 24) = v15 - 1;
      RtlFreeHeap(LdrpHeap, 0, v11);
      v11 = 0LL;
    }
    else
    {
      v11[1] = v5;
      v17 = *(_QWORD **)(v5 + 48);
      if ( v17 )
      {
        *v8 = *v17;
        *v17 = v8;
      }
      else
      {
        *v8 = v8;
      }
      *(_QWORD *)(v5 + 48) = v8;
    }
    if ( v10 && (*(int *)(v5 + 56) >= 2 || !v11) && (*(_DWORD *)(v10 + 100))-- == 1 )
    {
      *(_DWORD *)(v9 + 56) = 4;
      LdrpQueueWork(v10);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
