/*
 * XREFs of ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1C0179E7C
 * Callers:
 *     Win32AllocPoolWithPriority @ 0x1C0167210 (Win32AllocPoolWithPriority.c)
 *     Win32UAFMAllocPoolWithPriority @ 0x1C01673C0 (Win32UAFMAllocPoolWithPriority.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___lambda_2acc3c748d9b6116d218aa09d93926be___ @ 0x1C0179A24 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_0557cbb2832d1680ca92e9237d4136.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_0557cbb2832d1680ca92e9237d413628___lambda_2acc3c748d9b6116d218aa09d93926be___(
           (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
           a3,
           a4);
}
