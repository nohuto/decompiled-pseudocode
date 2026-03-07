signed __int32 __fastcall CmpUnlockKcb(ULONG_PTR a1)
{
  int v2; // esi
  __int64 v3; // rcx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int32 result; // eax

  v2 = *(_DWORD *)(a1 + 8) & 0x80000;
  if ( CmpIsKcbLockedExclusive(a1) )
    *(_QWORD *)(v3 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
  _m_prefetchw((const void *)(v3 + 48));
  v4 = *(_QWORD *)(v3 + 48);
  v5 = v4 - 16;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v5, v4) )
    ExfReleasePushLock((_QWORD *)(a1 + 48));
  result = KeAbPostRelease(a1 + 48);
  if ( v2 )
    return CmpDecommisssionKcb(a1);
  return result;
}
