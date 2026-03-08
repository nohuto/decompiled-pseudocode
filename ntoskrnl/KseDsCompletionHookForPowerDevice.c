/*
 * XREFs of KseDsCompletionHookForPowerDevice @ 0x14057ED60
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDevicePowerCompleted @ 0x14057F2E0 (KsepDsEventDevicePowerCompleted.c)
 */

__int64 __fastcall KseDsCompletionHookForPowerDevice(__int64 a1, __int64 a2)
{
  return KsepDsEventDevicePowerCompleted(*(_QWORD *)(a1 + 8), a1, a2, *(unsigned int *)(a2 + 48));
}
