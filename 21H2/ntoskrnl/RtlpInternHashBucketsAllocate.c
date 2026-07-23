/*
 * XREFs of RtlpInternHashBucketsAllocate @ 0x1407D3E54
 * Callers:
 *     RtlInternTableIntern @ 0x1405F6FB8 (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpInternHashBucketsAllocate(__int64 a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(__int64, __int64))(a2 + 16))(a2, a1);
}
