/*
 * XREFs of PspPicoGetContextThreadEx @ 0x14090C460
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 */

int __fastcall PspPicoGetContextThreadEx(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  return PspGetContextThreadInternal(a1, a2, a3, a4, a5 != 0);
}
