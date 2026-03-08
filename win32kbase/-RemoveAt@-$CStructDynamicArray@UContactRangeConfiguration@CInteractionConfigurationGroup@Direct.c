/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C00A2DAC
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00A2458 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
        __int64 a1,
        unsigned int a2)
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
