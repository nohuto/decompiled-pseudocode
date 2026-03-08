/*
 * XREFs of IvtFlushTb @ 0x14052A210
 * Callers:
 *     <none>
 * Callees:
 *     IvtFlushTbInternal @ 0x1403ABA60 (IvtFlushTbInternal.c)
 */

void __fastcall IvtFlushTb(__int64 a1, int a2, __int64 a3, __int64 a4, _QWORD *a5, unsigned int a6, __int64 a7)
{
  IvtFlushTbInternal(a1, a2, 0LL, 0, a4, a5, a6, a7);
}
