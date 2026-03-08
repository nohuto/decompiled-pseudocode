/*
 * XREFs of MiTryDeleteTransitionPte @ 0x14029CB54
 * Callers:
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiDeleteMergedPte @ 0x14029CAD8 (MiDeleteMergedPte.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rax

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 )
    return 1LL;
  v2 = MiLockTransitionLeafPageEx(BugCheckParameter2);
  if ( !v2 )
    return 1LL;
  else
    return MiDeleteTransitionPte(BugCheckParameter2, v2, 0x11u, 1);
}
