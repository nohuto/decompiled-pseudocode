/*
 * XREFs of EvalMethodComplete @ 0x1C0054940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall EvalMethodComplete(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)a3 = a2;
  return KeSetEvent((PRKEVENT)(a3 + 16), 0, 0);
}
