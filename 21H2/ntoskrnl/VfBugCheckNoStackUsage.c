/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1405A1BD8
 * Callers:
 *     IovCallDriver @ 0x1409C5CB4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C64F4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x1409D1E84 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D2078 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D4A038, xmmword_140D4A040, *(&xmmword_140D4A040 + 1));
}
