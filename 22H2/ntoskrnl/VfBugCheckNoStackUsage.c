/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1405A18E8
 * Callers:
 *     IovCallDriver @ 0x1409C4CC4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C5504 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x1409D0E94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D1088 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D4A038, xmmword_140D4A040, *(&xmmword_140D4A040 + 1));
}
