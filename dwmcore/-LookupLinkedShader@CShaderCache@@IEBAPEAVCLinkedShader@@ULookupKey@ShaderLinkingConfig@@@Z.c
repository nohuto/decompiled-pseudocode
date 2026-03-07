volatile signed __int32 *__fastcall CShaderCache::LookupLinkedShader(int *a1, __int64 a2)
{
  int v2; // r8d
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 i; // r9
  volatile signed __int32 *v7; // rbx

  v2 = 0;
  if ( a1[4] <= 0 )
    return 0LL;
  v4 = a1[4];
  v5 = 0LL;
  for ( i = *(_QWORD *)a1; *(_QWORD *)i != *(_QWORD *)a2 || *(_DWORD *)(i + 8) != *(_DWORD *)(a2 + 8); i += 16LL )
  {
    ++v2;
    if ( ++v5 >= v4 )
      return 0LL;
  }
  if ( v2 == -1 )
    return 0LL;
  v7 = *(volatile signed __int32 **)(*((_QWORD *)a1 + 1) + 8LL * v2);
  if ( v7 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v7);
  }
  return v7;
}
