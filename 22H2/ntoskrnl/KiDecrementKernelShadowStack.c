/*
 * XREFs of KiDecrementKernelShadowStack @ 0x14041FB20
 * Callers:
 *     KiFixupControlProtectionKernelModeReturnMismatch @ 0x14057BC30 (KiFixupControlProtectionKernelModeReturnMismatch.c)
 * Callees:
 *     sub_14041FB36 @ 0x14041FB36 (sub_14041FB36.c)
 */

__int64 KiDecrementKernelShadowStack()
{
  __int64 v2; // rcx

  __asm { rdsspq  rdx }
  _R8 = 0LL;
  __asm { wrssq   qword ptr [rdx], r8 }
  sub_14041FB36(*_RDX);
  return sub_14041FB36(v2);
}
