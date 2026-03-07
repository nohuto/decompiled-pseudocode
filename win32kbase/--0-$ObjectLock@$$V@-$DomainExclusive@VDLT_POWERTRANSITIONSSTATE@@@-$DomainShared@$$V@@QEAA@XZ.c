__int64 __fastcall DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // esi
  PERESOURCE *v4; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(13);
  v2 = a1;
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = &gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  v3 = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v4 = *(PERESOURCE **)v2;
    if ( *(_QWORD *)v2 )
    {
      if ( *(_BYTE *)(v2 + 8) )
        tagDomLock::LockExclusive(v4);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*v4);
    }
    ++v3;
    v2 += 16LL;
  }
  while ( !v3 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
