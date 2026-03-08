/*
 * XREFs of MiRepointPteAtExtendedStandby @ 0x14064F5DC
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiReleasePageListLock @ 0x140288360 (MiReleasePageListLock.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiRepointPteAtExtendedStandby(
        ULONG_PTR BugCheckParameter2,
        __int16 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  unsigned int v6; // esi
  char v10; // r14
  __int64 v11; // rbx

  v6 = 1;
  v10 = MiUnlinkPageFromListEx(BugCheckParameter2, (unsigned int)(*a4 != 0) + 1);
  MiReleasePageListLock(a3, (__int64)a4);
  if ( (v10 & 3) != 0 )
  {
    MiRestoreTransitionPte(BugCheckParameter2, 0);
    return (v10 & 2) == 0 || (a2 & 0x2004) != 0;
  }
  else
  {
    v11 = 48LL * *(_QWORD *)(a5 + 8) - 0x220000000000LL;
    MiLockNestedPageAtDpcInline(v11);
    MiReplaceTransitionPage(BugCheckParameter2, v11, 6);
    MiInsertPageInList(v11, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a5 + 8) = -1LL;
  }
  return v6;
}
