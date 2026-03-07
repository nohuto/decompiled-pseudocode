__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        __int64 a1,
        __int64 a2)
{
  struct _KTHREAD ***v2; // rbx
  int v4; // esi
  struct _KTHREAD **v5; // rcx
  __int64 result; // rax

  v2 = (struct _KTHREAD ***)(a1 + 16);
  *(_QWORD *)a1 = gDomainDummyLock;
  *(_BYTE *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 32) = 0;
  if ( a2 == gObjDummyLock )
    a2 = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  v4 = 0;
  do
  {
    v5 = *v2;
    if ( *v2 )
    {
      if ( KeGetCurrentThread() == v5[1] )
        *v2 = 0LL;
      else
        tagObjLock::LockExclusive((tagObjLock *)v5);
    }
    ++v4;
    ++v2;
  }
  while ( !v4 );
  result = a1;
  *(_BYTE *)(a1 + 32) = 1;
  return result;
}
