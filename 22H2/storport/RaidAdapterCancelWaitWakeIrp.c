/*
 * XREFs of RaidAdapterCancelWaitWakeIrp @ 0x1C003EA1C
 * Callers:
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C0040820 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C0040C60 (StorPortAdapterPoFxD0Completion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterCancelWaitWakeIrp(__int64 a1)
{
  __int64 v1; // rdx
  BOOLEAN result; // al
  IRP *v4; // rcx

  v1 = *(_QWORD *)(a1 + 5088);
  result = 1;
  if ( v1 )
  {
    v4 = *(IRP **)(v1 + 72);
    if ( v4 )
    {
      result = IoCancelIrp(v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 5088) + 72LL) = 0LL;
    }
  }
  return result;
}
