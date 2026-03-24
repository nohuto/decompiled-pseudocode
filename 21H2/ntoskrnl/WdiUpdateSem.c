/*
 * XREFs of WdiUpdateSem @ 0x1405A55F0
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1405A5610 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x14092FB54 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
