/*
 * XREFs of HUBDSM_AckingPdoPreStart @ 0x1C001EFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_AckingPdoPreStart(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  KeSetEvent((PRKEVENT)(v1 + 1608), 0, 0);
  **(_BYTE **)(v1 + 16) = 0;
  return 4077LL;
}
