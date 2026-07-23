/*
 * XREFs of RtlpInitializeLockAtomTable @ 0x140622DAC
 * Callers:
 *     RtlCreateAtomTableEx @ 0x1402522D0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeLockAtomTable(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = 0LL;
}
