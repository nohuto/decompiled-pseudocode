/*
 * XREFs of KiDecrementKernelShadowStack @ 0x140417790
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x140579720 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_1404177A6 @ 0x1404177A6 (sub_1404177A6.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_1404177A6(*_RDX);
  return sub_1404177A6(v2);
}
