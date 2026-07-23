/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x1409C8E30
 * Callers:
 *     ViInitSystemPhase0 @ 0x140A70AB8 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

void VfDisableCodeIntegrityBreaks()
{
  ViCiDefaultActions = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  qword_140D42148 = ViCiDefaultActions;
}
