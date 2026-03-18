/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x140361DF4
 * Callers:
 *     MiSoftFaultMappedView @ 0x140217EB0 (MiSoftFaultMappedView.c)
 *     MiWaitForRotateToComplete @ 0x140633C74 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x140641D10 (MiCheckHoldFaultForHotPatch.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned __int8 v6; // dl

  v5 = *(_QWORD *)a1;
  v6 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
  {
    MiUnlockWorkingSetExclusive(v5, v6, a3, a4);
    *(_BYTE *)(a1 + 13) &= ~1u;
  }
  else
  {
    MiUnlockWorkingSetShared(v5, v6);
  }
}
