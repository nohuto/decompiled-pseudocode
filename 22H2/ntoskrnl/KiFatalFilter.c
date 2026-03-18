/*
 * XREFs of KiFatalFilter @ 0x14056CCF0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E6F0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
