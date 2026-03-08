/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C00D1940
 * Callers:
 *     ??1?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ @ 0x1C00D1904 (--1-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CDynamicArray<CInputManager::PointerCaptureInfo *,2003858261>::Reset(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(char **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
