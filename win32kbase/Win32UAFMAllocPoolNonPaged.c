/*
 * XREFs of Win32UAFMAllocPoolNonPaged @ 0x1C017D180
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1C017D47C (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 */

__int64 __fastcall Win32UAFMAllocPoolNonPaged(__int64 a1, unsigned int a2, __int64 a3)
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(68LL, a1, a2, a3);
}
