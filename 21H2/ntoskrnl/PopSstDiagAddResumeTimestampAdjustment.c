/*
 * XREFs of PopSstDiagAddResumeTimestampAdjustment @ 0x140A47CE8
 * Callers:
 *     PoNotifySystemTimeSet @ 0x1403B65EC (PoNotifySystemTimeSet.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSstDiagAddResumeTimestampAdjustment(__int64 a1)
{
  qword_140C1D010 += a1;
}
