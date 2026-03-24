/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1405A19A8
 * Callers:
 *     IovCallDriver @ 0x1409C4CB4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C54F4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x1409D0E84 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D1078 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D4A038, xmmword_140D4A040, *(&xmmword_140D4A040 + 1));
}
