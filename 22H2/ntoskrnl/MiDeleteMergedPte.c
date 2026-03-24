/*
 * XREFs of MiDeleteMergedPte @ 0x140366798
 * Callers:
 *     MiDecrementCombinedPte @ 0x140366814 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x140559DC8 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTryDeleteTransitionPte @ 0x140363C98 (MiTryDeleteTransitionPte.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, (__int64)&v8);
    v6 = MiTryDeleteTransitionPte(a2);
    if ( v6 == 1 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v7, 1LL);
    }
    MiUnlockProtoPoolPage(v5, v8);
    return v6;
  }
  return result;
}
