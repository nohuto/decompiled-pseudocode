/*
 * XREFs of CmpGlobalUnlockKeyForWrite @ 0x140A19124
 * Callers:
 *     CmpFreeSiloKeyLockEntry @ 0x140A190DC (CmpFreeSiloKeyLockEntry.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x140846294 (CmpUnlockGlobalKeyLockTracker.c)
 *     CmpLockGlobalKeyLockTrackerExclusive @ 0x140846350 (CmpLockGlobalKeyLockTrackerExclusive.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

void __fastcall CmpGlobalUnlockKeyForWrite(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 i; // rdx
  signed __int64 v6; // rtt
  signed __int64 v7; // rax
  bool v8; // cc
  signed __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax

  _m_prefetchw(a2 + 2);
  v4 = a2[2];
  for ( i = v4 - 1; i > 0; i = v4 - 1 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(a2 + 2, i, v4);
    if ( v6 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  CmpLockKcbExclusive(a1);
  CmpLockGlobalKeyLockTrackerExclusive();
  v7 = _InterlockedExchangeAdd64(a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v8 = v7 <= 1;
  v9 = v7 - 1;
  if ( v8 )
  {
    if ( v9 )
      __fastfail(0xEu);
    v10 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v11 = (_QWORD *)a2[1], (_QWORD *)*v11 != a2) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    CmpUnlockGlobalKeyLockTracker();
    *(_WORD *)(a1 + 8) &= ~0x80u;
    CmpUnlockKcb(a1);
    CmpDereferenceKeyControlBlock(a2[3]);
    CmpFreeTransientPoolWithTag(a2, 0x33374D43u);
  }
  else
  {
    CmpUnlockGlobalKeyLockTracker();
    CmpUnlockKcb(a1);
  }
}
