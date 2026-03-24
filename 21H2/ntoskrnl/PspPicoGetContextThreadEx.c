/*
 * XREFs of PspPicoGetContextThreadEx @ 0x14090C300
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PspPicoGetContextThreadEx(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  return PspGetContextThreadInternal(a1, a2, a3, a4, a5 != 0);
}
