/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x180102A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTraceDatabaseUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 40) = 0LL;
  return RtlLeaveCriticalSection(a1 + 48, a2, a3);
}
