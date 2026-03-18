/*
 * XREFs of sub_14041FB36 @ 0x14041FB36
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x14041FB20 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_14041FB36(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}
