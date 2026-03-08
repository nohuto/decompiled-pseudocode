/*
 * XREFs of AMLIGetNSObjectContext @ 0x1C0048364
 * Callers:
 *     IsNsobjPciBus @ 0x1C008A678 (IsNsobjPciBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectContext(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 104LL);
}
