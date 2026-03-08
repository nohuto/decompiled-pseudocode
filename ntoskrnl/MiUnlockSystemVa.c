/*
 * XREFs of MiUnlockSystemVa @ 0x1402A2820
 * Callers:
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmCopyMemory @ 0x1402A1CE0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiUnlockStealVm @ 0x1403B7AF8 (MiUnlockStealVm.c)
 * Callees:
 *     MiReleaseFaultState @ 0x1402A2FD4 (MiReleaseFaultState.c)
 */

__int64 __fastcall MiUnlockSystemVa(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(a2) = 17;
    result = MiReleaseFaultState(a1 + 24, a2, 0LL);
    *v2 = 0LL;
  }
  return result;
}
