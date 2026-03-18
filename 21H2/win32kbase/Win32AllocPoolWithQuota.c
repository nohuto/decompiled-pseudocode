/*
 * XREFs of Win32AllocPoolWithQuota @ 0x1C0085F60
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C022AB30 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall Win32AllocPoolWithQuota(NSInstrumentation::CLeakTrackingAllocator *a1, int a2)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(a1, 260LL, (__int64)a1, a2);
}
