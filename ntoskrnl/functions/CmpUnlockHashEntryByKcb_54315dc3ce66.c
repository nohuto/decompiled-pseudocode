__int64 __fastcall CmpUnlockHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rdx
  __int64 v8; // rtt
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9));
  *(_QWORD *)(*(_QWORD *)(v1 + 1648)
            + 24 * ((unsigned int)(*(_DWORD *)(v1 + 1656) - 1) & (v2 ^ ((unsigned __int64)v2 >> 9)))
            + 8) = 0LL;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9)));
  v5 = (__int64 *)(*(_QWORD *)(v3 + 1648)
                 + 24 * ((unsigned int)(*(_DWORD *)(v3 + 1656) - 1) & (v4 ^ ((unsigned __int64)(unsigned int)v4 >> 9))));
  _m_prefetchw(v5);
  v6 = *v5;
  v7 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (v6 & 2) != 0 || (v8 = *v5, v8 != _InterlockedCompareExchange64(v5, v7, v6)) )
    ExfReleasePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4232), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)v1);
  return result;
}
