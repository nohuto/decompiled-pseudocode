/*
 * XREFs of AMLIGetNSObjectContext @ 0x1C0048384
 * Callers:
 *     IsNsobjPciBus @ 0x1C008A688 (IsNsobjPciBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectContext(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 104LL);
}
