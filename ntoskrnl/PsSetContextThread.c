/*
 * XREFs of PsSetContextThread @ 0x1409B1050
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 */

__int64 __fastcall PsSetContextThread(struct _KTHREAD *a1, __int64 a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
