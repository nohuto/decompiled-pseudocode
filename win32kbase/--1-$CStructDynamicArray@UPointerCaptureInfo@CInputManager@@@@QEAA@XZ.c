/*
 * XREFs of ??1?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAA@XZ @ 0x1C00D1904
 * Callers:
 *     ??1CInputManager@@IEAA@XZ @ 0x1C00D18D0 (--1CInputManager@@IEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Reset@?$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C00D1940 (-Reset@-$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@QEAAX_N@Z.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::~CStructDynamicArray<CInputManager::PointerCaptureInfo>(
        __int64 a1)
{
  __int64 i; // rdi
  char *v4; // rdx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
  {
    v4 = *(char **)(*(_QWORD *)a1 + 8 * i);
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  }
  CDynamicArray<CInputManager::PointerCaptureInfo *,2003858261>::Reset(a1);
  return CDynamicArray<CInputManager::PointerCaptureInfo *,2003858261>::Reset(a1);
}
