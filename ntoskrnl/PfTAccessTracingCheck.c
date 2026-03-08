/*
 * XREFs of PfTAccessTracingCheck @ 0x1402B8A04
 * Callers:
 *     PfpLogScenarioEvent @ 0x14073A758 (PfpLogScenarioEvent.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfTAccessTracingCheck(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) & 1;
}
