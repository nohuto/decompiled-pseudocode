/*
 * XREFs of KiFatalFilter @ 0x14056A850
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140315620 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
