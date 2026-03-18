/*
 * XREFs of VfMiscKeSynchronizeExecution_Entry @ 0x140AE10C0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckKeRaiseIrql @ 0x140AE23AC (ViMiscCheckKeRaiseIrql.c)
 */

__int64 __fastcall VfMiscKeSynchronizeExecution_Entry(__int64 a1)
{
  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 92LL);
  return ViMiscCheckKeRaiseIrql(a1);
}
