/*
 * XREFs of UninitRotationManager @ 0x1C0122870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void UninitRotationManager()
{
  if ( qword_1C0335C70 )
    ExFreePoolWithTag(qword_1C0335C70, 0x6D747255u);
  qword_1C0335C70 = 0LL;
}
