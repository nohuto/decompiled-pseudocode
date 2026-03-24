/*
 * XREFs of RtlpInternHashBucketsFree @ 0x1407D4284
 * Callers:
 *     RtlInternTableIntern @ 0x14067C6E0 (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpInternHashBucketsFree(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 16) + 8LL))(a2, a1);
}
