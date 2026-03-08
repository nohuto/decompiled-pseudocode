/*
 * XREFs of MilliSecsToQpcCount @ 0x1C002EAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MilliSecsToQpcCount(__int64 a1)
{
  return gliQpcFreq.QuadPart * a1 / 0x3E8uLL;
}
