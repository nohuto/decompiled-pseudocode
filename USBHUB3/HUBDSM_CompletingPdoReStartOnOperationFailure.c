/*
 * XREFs of HUBDSM_CompletingPdoReStartOnOperationFailure @ 0x1C001F490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CompletingPdoReStartOnOperationFailure(__int64 a1)
{
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 960) + 1608LL), 0, 0);
  return 4077LL;
}
