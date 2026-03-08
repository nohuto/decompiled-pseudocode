/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C0068700
 * Callers:
 *     NtUserToUnicodeEx @ 0x1C00019F0 (NtUserToUnicodeEx.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0065460 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     AllocAce @ 0x1C0065880 (AllocAce.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C0065BF8 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0068600 (Win32AllocPoolWithQuotaZInit.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___ @ 0x1C0068680 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba12.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0068ED0 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     CreateSecurityDescriptor @ 0x1C0069170 (CreateSecurityDescriptor.c)
 *     AllocateWindowManagerSid @ 0x1C00692F0 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0069440 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0069814 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 result; // rax

  result = ExAllocatePool2(**(_QWORD **)a2 & 0xFFFFFFFFFFFFFFFCuLL | 1, *a3, **(unsigned int **)(a2 + 8));
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 112));
  return result;
}
