/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x140A1C8D8
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntryByIndex(volatile signed __int32 *P, unsigned int a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rcx
  signed __int64 v6; // rtt

  v3 = (signed __int64 *)(*((_QWORD *)P + 206) + 24LL * a2);
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v4 = *v3;
  v5 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v5, v4)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
