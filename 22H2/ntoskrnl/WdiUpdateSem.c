/*
 * XREFs of WdiUpdateSem @ 0x1405FB878
 * Callers:
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1405FB898 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1409DD9EC (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}
