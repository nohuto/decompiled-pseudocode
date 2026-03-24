/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x1402E3CBC
 * Callers:
 *     MiSoftFaultMappedView @ 0x1402E3540 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x14032BD70 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E21C (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1)
{
  unsigned __int8 v1; // dl
  bool v2; // zf
  __int64 v3; // rcx

  v1 = *(_BYTE *)(a1 + 12);
  v2 = (*(_BYTE *)(a1 + 13) & 1) == 0;
  v3 = *(_QWORD *)a1;
  if ( v2 )
    MiUnlockWorkingSetShared(v3, v1);
  else
    MiUnlockWorkingSetExclusive(v3, v1);
}
