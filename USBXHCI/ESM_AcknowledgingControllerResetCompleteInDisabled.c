/*
 * XREFs of ESM_AcknowledgingControllerResetCompleteInDisabled @ 0x1C0051550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_AcknowledgingControllerResetCompleteInDisabled(__int64 a1)
{
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 960) + 40LL), 0, 0);
  return 29LL;
}
