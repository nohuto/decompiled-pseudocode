/*
 * XREFs of DirectComposition::Memory::Allocate_1 @ 0x1C00EA21C
 * Callers:
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A8F60 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::Memory::Allocate_1(NSInstrumentation::CLeakTrackingAllocator *a1)
{
  return NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(a1, 260LL, (__int64)a1, 1835352900);
}
