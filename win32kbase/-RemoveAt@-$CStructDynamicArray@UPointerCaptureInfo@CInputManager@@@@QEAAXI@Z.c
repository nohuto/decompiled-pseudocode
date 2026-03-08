/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C027009C
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C005B490 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C02700FC (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  char *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = a2;
  v4 = *(char **)(*(_QWORD *)a1 + 8LL * a2);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
  for ( *(_DWORD *)(a1 + 8) = result; v3 < *(_DWORD *)(a1 + 8); *(_QWORD *)(*(_QWORD *)a1 + 8 * v6) = result )
  {
    v6 = v3++;
    result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3);
  }
  return result;
}
