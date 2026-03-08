/*
 * XREFs of PfpScenCtxWaiterTimedOut @ 0x140580900
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x140A84910 (PfpScenCtxScenarioSet.c)
 *     PfpScenCtxPrefetchWait @ 0x140A9D25C (PfpScenCtxPrefetchWait.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall PfpScenCtxWaiterTimedOut(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = *(_DWORD *)(a1 + 8) & 0xFFFFFFF3 | 8;
  *(_DWORD *)(a1 + 8) = result;
  v2 = *(struct _KEVENT **)(a1 + 40);
  if ( v2 )
    return KeSetEvent(v2, 0, 0);
  return result;
}
