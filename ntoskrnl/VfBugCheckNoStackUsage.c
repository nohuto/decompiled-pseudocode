/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1405CD460
 * Callers:
 *     IovCallDriver @ 0x140ABE1D0 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x140ABE9B4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140ACA3D8 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACA5AC (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D70500, xmmword_140D70508, *(&xmmword_140D70508 + 1));
}
