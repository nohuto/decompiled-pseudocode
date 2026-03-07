void __fastcall DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock>(
        __int64 a1)
{
  int v2; // ebx
  tagObjLock **v3; // rsi
  int v4; // esi
  __int64 v5; // rbx
  tagDomLock *v6; // rcx

  if ( *(_BYTE *)(a1 + 72) )
  {
    v2 = 1;
    v3 = (tagObjLock **)(a1 + 56);
    do
    {
      if ( *v3 )
        tagObjLock::UnLockExclusive(*v3);
      --v3;
      --v2;
    }
    while ( v2 >= 0 );
    v4 = 1;
    v5 = a1 + 16;
    do
    {
      v6 = *(tagDomLock **)v5;
      if ( *(_QWORD *)v5 )
      {
        if ( *(_BYTE *)(v5 + 8) )
          tagDomLock::UnLockExclusive(v6);
        else
          tagDomLock::UnLockShared(v6);
      }
      v5 -= 16LL;
      --v4;
    }
    while ( v4 >= 0 );
    *(_BYTE *)(a1 + 72) = 0;
  }
}
