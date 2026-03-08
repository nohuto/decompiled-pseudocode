/*
 * XREFs of CmpUnJoinClassOfTrust @ 0x1402BFCE8
 * Callers:
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A13D78 (CmpResolveHiveLoadConflict.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 * Callees:
 *     CmpLockHiveListExclusive @ 0x140731734 (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x140731774 (CmpUnlockHiveList.c)
 */

void __fastcall CmpUnJoinClassOfTrust(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 4120);
  if ( (_QWORD *)*v1 != v1 )
  {
    CmpLockHiveListExclusive();
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    CmpUnlockHiveList();
  }
}
