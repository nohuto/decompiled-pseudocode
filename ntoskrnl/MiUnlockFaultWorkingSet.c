/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x1402F7444
 * Callers:
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x1406317E4 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14063F8B0 (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // dl

  v2 = *(_QWORD *)a1;
  v3 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
  {
    MiUnlockWorkingSetExclusive(v2, v3);
    *(_BYTE *)(a1 + 13) &= ~1u;
  }
  else
  {
    MiUnlockWorkingSetShared(v2, v3);
  }
}
