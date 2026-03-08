/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x1402EAA68
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x140249050 (RtlpHpVsContextFreeList.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapDestroy @ 0x1405B4210 (RtlpHpHeapDestroy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2, unsigned int a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
           *(_QWORD *)(a1 + 128) ^ a1,
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           a3);
}
