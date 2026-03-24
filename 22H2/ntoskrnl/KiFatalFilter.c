/*
 * XREFs of KiFatalFilter @ 0x140514A70
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA680 (KeExpandKernelStackAndCalloutInternal.c)
 *     NtReleaseSemaphore @ 0x1406618B0 (NtReleaseSemaphore.c)
 *     KiInitializeKernel @ 0x14099CCF0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
