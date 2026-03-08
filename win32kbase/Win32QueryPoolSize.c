/*
 * XREFs of Win32QueryPoolSize @ 0x1C017D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z @ 0x1C019B744 (-QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z.c)
 */

unsigned __int64 __fastcall Win32QueryPoolSize(NSInstrumentation::CLeakTrackingAllocator *a1, unsigned int a2)
{
  return NSInstrumentation::CLeakTrackingAllocator::QueryPoolSize(a1, a1, a2);
}
