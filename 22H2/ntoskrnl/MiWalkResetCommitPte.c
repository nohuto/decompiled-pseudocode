/*
 * XREFs of MiWalkResetCommitPte @ 0x1406197B0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPageEx @ 0x1403477B8 (MiLockTransitionLeafPageEx.c)
 *     MiDiscardTransitionPteEx @ 0x140650694 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiWalkResetCommitPte(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rbx

  if ( !a3 && (MI_READ_PTE_LOCK_FREE(a2) & 0xC01) == 0x800 )
  {
    v5 = MiLockTransitionLeafPageEx(a2, 0LL, 0);
    v6 = v5;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 34) & 0x10) == 0 && (*(_DWORD *)(v5 + 16) & 4) == 0 && !*(_WORD *)(v5 + 32) )
      {
        MiUnlinkPageFromListEx(v5, 0LL);
        MiDiscardTransitionPteEx(v6, 0LL);
        ++**(_QWORD **)(a1 + 168);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
