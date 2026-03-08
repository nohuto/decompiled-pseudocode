/*
 * XREFs of Win32AllocPoolWithPriority @ 0x1C017D030
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1C019AEA0 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z.c)
 */

void *__fastcall Win32AllocPoolWithPriority(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2,
        unsigned int a3,
        enum _EX_POOL_PRIORITY a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(a1, (unsigned __int64)a1, a2, a3, a4);
}
