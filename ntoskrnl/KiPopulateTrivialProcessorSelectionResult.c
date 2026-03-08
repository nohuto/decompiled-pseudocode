/*
 * XREFs of KiPopulateTrivialProcessorSelectionResult @ 0x140575224
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402C9000 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x14057C470 (KiIsIsolationUnitIdleByHandle.c)
 */

__int64 __fastcall KiPopulateTrivialProcessorSelectionResult(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax

  KiAcquirePrcbLocksForPreemptionAttempt(a3, (*(_DWORD *)(a2 + 120) >> 1) & 1, a1);
  result = KiIsIsolationUnitIdleByHandle(a1, v4, v5, v6);
  a1[1] = (unsigned int)result;
  return result;
}
