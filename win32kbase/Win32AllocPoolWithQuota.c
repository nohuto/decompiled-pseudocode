/*
 * XREFs of Win32AllocPoolWithQuota @ 0x1C017D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall Win32AllocPoolWithQuota(NSInstrumentation::CLeakTrackingAllocator *a1, unsigned int a2)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(a1, 260LL, (unsigned __int64)a1, a2);
}
