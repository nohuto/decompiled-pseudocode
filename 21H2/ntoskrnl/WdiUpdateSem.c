/*
 * XREFs of WdiUpdateSem @ 0x1405A5820
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1405A5840 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14092FCB4 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
