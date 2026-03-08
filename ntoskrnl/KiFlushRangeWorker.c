/*
 * XREFs of KiFlushRangeWorker @ 0x140387BD0
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushRangeTb @ 0x140387C18 (KiFlushRangeTb.c)
 */

__int64 __fastcall KiFlushRangeWorker(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v5; // rsi
  __int64 result; // rax

  v3 = *(_QWORD **)a1;
  v5 = *(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8);
  do
    result = KiFlushRangeTb(*v3++, *(unsigned int *)(a1 + 12), a3);
  while ( (unsigned __int64)v3 < v5 );
  return result;
}
