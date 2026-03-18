/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C023C584
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0080410 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C023C5E0 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  char *v4; // rdx
  __int64 v5; // rcx

  v3 = a2;
  v4 = *(char **)(*(_QWORD *)a1 + 8LL * a2);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
  if ( v3 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v5 = v3++;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3);
    }
    while ( v3 < *(_DWORD *)(a1 + 8) );
  }
}
