/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1405FF5A0
 * Callers:
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x140A80B3C (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140A8CA78 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140A8CC6C (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D57540, xmmword_140D57548, *(&xmmword_140D57548 + 1));
}
