/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C005C93C
 * Callers:
 *     IOCPDispatcher_Destroy @ 0x1C005A7F0 (IOCPDispatcher_Destroy.c)
 *     KSTIOCPDispatcher_Destroy @ 0x1C005A820 (KSTIOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C005CC08 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0059DF0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

HANDLE *__fastcall IOCPDispatcher::`scalar deleting destructor'(HANDLE *this)
{
  *this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    this);
  return this;
}
