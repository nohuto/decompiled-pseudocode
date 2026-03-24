/*
 * XREFs of RIMMilliSecsToQpcCount @ 0x1C00B0470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __fastcall RIMMilliSecsToQpcCount(unsigned int a1)
{
  return gliQpcFreq.QuadPart * a1 / 1000;
}
