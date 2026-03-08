/*
 * XREFs of MiGetPageFileHigh @ 0x140201D10
 * Callers:
 *     MiFreeReservationRun @ 0x1407659CC (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileHigh(unsigned __int64 a1)
{
  if ( qword_140C657C0 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140C657C0;
  return HIDWORD(a1);
}
