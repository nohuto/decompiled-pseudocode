/*
 * XREFs of CmpUnlockDeletedHashEntryByKcb @ 0x14074B268
 * Callers:
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407AF820 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockDeletedHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rdx
  __int64 v7; // rtt
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(*(_QWORD *)(v1 + 1664)
            + 24
            * ((unsigned int)(*(_DWORD *)(v1 + 1672) - 1) & ((unsigned int)(101027
                                                                          * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) >> 9)))
            + 8) = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9)));
  v4 = (__int64 *)(*(_QWORD *)(v2 + 1664)
                 + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1672) - 1) & (v3 ^ ((unsigned __int64)(unsigned int)v3 >> 9))));
  _m_prefetchw(v4);
  v5 = *v4;
  v6 = *v4 - 16;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (v5 & 2) != 0 || (v7 = *v4, v7 != _InterlockedCompareExchange64(v4, v6, v5)) )
    ExfReleasePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4232), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)v1);
  return result;
}
