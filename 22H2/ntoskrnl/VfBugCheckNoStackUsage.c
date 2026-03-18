/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1405CF910
 * Callers:
 *     IovCallDriver @ 0x140AC21D0 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x140AC29B4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140ACE3D8 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACE5AC (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D70500, xmmword_140D70508, *(&xmmword_140D70508 + 1));
}
