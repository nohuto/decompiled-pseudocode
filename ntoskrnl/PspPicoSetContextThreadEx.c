/*
 * XREFs of PspPicoSetContextThreadEx @ 0x1409B2BF0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 */

__int64 __fastcall PspPicoSetContextThreadEx(struct _KTHREAD *a1, __int64 a2, char a3, char a4, char a5)
{
  return PspSetContextThreadInternal(a1, a2, a3, a4, a5 != 0);
}
