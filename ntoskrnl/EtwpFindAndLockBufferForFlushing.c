__int64 __fastcall EtwpFindAndLockBufferForFlushing(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 80);
  v4 = v3 == a1 + 80;
  v5 = v3 - 56;
  if ( v4 )
    v5 = 0LL;
  if ( !v5 )
    return v5;
  while ( *(_QWORD *)(v5 + 24) != a2 )
  {
    v6 = *(_QWORD *)(v5 + 56);
    v5 = v6 - 56;
    if ( v6 == v2 )
      v5 = 0LL;
    if ( !v5 )
      return 0LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 44), 3, 0) )
    return 0LL;
  if ( *(_QWORD *)(v5 + 24) == a2 )
    return v5;
  _InterlockedExchange((volatile __int32 *)(v5 + 44), 0);
  return 0LL;
}
