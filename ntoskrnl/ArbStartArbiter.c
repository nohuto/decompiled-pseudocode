/*
 * XREFs of ArbStartArbiter @ 0x140933B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlFreeRangeList @ 0x140820250 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbStartArbiter(__int64 a1, __int64 a2)
{
  RtlFreeRangeList(*(_QWORD *)(a1 + 40));
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a1 + 280))(
           a1,
           *(unsigned int *)(a2 + 16),
           a2 + 20,
           *(_QWORD *)(a1 + 40));
}
