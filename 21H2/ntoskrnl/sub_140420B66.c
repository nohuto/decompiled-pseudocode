/*
 * XREFs of sub_140420B66 @ 0x140420B66
 * Callers:
 *     KiDecrementKernelShadowStack @ 0x140420B50 (KiDecrementKernelShadowStack.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_140420B66(__int64 _RCX, __int64 _RDX)
{
  __asm { wrssq   qword ptr [rdx-8], rcx }
}
