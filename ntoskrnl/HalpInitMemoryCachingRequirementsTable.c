__int64 __fastcall HalpInitMemoryCachingRequirementsTable(__int64 a1)
{
  __int64 v1; // rax
  const void *v2; // rsi
  __int64 v3; // rbx
  void *v4; // rax

  v1 = *(_QWORD *)(a1 + 240);
  v2 = *(const void **)(v1 + 336);
  if ( !v2 || (v3 = *(unsigned int *)(v1 + 328), !(_DWORD)v3) )
  {
    HalpCachingRequirementsEntryCount = 0;
    HalpCachingRequirements = 0LL;
    return 0LL;
  }
  v4 = (void *)HalpMmAllocCtxAlloc(a1, 24 * v3);
  HalpCachingRequirements = (__int64)v4;
  if ( v4 )
  {
    HalpCachingRequirementsEntryCount = v3;
    memmove(v4, v2, 24 * v3);
    return 0LL;
  }
  return 3221225626LL;
}
