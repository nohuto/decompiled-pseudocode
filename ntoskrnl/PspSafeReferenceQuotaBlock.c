__int64 __fastcall PspSafeReferenceQuotaBlock(__int64 a1)
{
  signed __int32 v1; // edx
  bool v2; // zf
  signed __int32 v3; // eax

  _m_prefetchw((const void *)(a1 + 512));
  v1 = *(_DWORD *)(a1 + 512);
  if ( !v1 )
    return 0LL;
  while ( 1 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), v1 + 1, v1);
    v2 = v1 == v3;
    v1 = v3;
    if ( v2 )
      break;
    if ( !v3 )
      return 0LL;
  }
  return 1LL;
}
