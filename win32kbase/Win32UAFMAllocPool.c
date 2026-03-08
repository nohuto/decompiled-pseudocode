/*
 * XREFs of Win32UAFMAllocPool @ 0x1C017D150
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1C017D47C (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

__int64 __fastcall Win32UAFMAllocPool(__int64 a1, unsigned int a2, __int64 a3)
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(260LL, a1, a2, a3);
}
