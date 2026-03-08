/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64_&_ @ 0x1C019ADF0
 * Callers:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AllocateTableEntry@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0065B80 (-AllocateTableEntry@-$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBas.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0069010 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = ExAllocatePool2(**(_QWORD **)a2 | 3LL, *a3, **(unsigned int **)(a2 + 8));
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  return result;
}
