/*
 * XREFs of MiDeleteMergedPte @ 0x14029CAD8
 * Callers:
 *     MiDecrementCloneBlock @ 0x14029DC04 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiTryDeleteTransitionPte @ 0x14029CB54 (MiTryDeleteTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
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
    v5 = MiLockProtoPoolPage(a2, &v8);
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
