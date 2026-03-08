/*
 * XREFs of WdiUpdateSem @ 0x1405F93D8
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1405F93F8 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1409DAB4C (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
