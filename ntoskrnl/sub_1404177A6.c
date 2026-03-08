/*
 * XREFs of sub_1404177A6 @ 0x1404177A6
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x140417790 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1404177A6(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}
