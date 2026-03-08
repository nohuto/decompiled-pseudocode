/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C01B3E6C
 * Callers:
 *     _GetQueueStatus @ 0x1C01B46D8 (_GetQueueStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DomainShared<DLT_THREADINFO>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        __int64 a1,
        tagObjLock *a2)
{
  unsigned int DLT; // eax
  tagObjLock **v5; // r14
  int v6; // esi
  __int64 v7; // rbx
  tagDomLock *v8; // rcx
  int v9; // ebx

  DLT = DLT_THREADINFO::getDLT(a1);
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 0;
  v5 = (tagObjLock **)(a1 + 32);
  *(_QWORD *)(a1 + 16) = gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  if ( a2 == (tagObjLock *)gObjDummyLock )
    a2 = 0LL;
  *v5 = a2;
  if ( !*(_BYTE *)(a1 + 48) )
  {
    v6 = 0;
    v7 = a1;
    do
    {
      v8 = *(tagDomLock **)v7;
      if ( *(_QWORD *)v7 )
      {
        if ( *(_BYTE *)(v7 + 8) )
          tagDomLock::LockExclusive(v8);
        else
          tagDomLock::LockShared(v8);
      }
      ++v6;
      v7 += 16LL;
    }
    while ( !v6 );
    v9 = 0;
    do
    {
      if ( *v5 )
        tagObjLock::LockExclusive(*v5);
      ++v9;
      ++v5;
    }
    while ( !v9 );
    *(_BYTE *)(a1 + 48) = 1;
  }
  return a1;
}
