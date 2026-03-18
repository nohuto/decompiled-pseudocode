/*
 * XREFs of KiGetThreadHeteroRunningType @ 0x140577308
 * Callers:
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
 *     KiApplyForegroundBoostThread @ 0x14034FED8 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiGetThreadHeteroRunningType(__int64 a1)
{
  unsigned int v1; // edx

  v1 = *(_DWORD *)(a1 + 80);
  if ( v1 <= *(_DWORD *)(a1 + 84) )
    v1 = *(_DWORD *)(a1 + 84);
  return v1 >= KiDynamicHeteroCpuPolicyExpectedCycles;
}
