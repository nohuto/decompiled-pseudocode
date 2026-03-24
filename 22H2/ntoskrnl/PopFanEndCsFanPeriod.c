/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1408F1710
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407C1028 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408F17C0 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14057101C (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140C23588;
  if ( qword_140C23588 < (unsigned __int64)qword_140C23590 )
    v0 = qword_140C23590;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140C23590) / 0x989680uLL);
}
