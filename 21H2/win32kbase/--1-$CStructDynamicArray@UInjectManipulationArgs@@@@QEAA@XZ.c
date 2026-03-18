/*
 * XREFs of ??1?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAA@XZ @ 0x1C0213F24
 * Callers:
 *     ??_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0214510 (--_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Reset@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0214C78 (-Reset@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z.c)
 */

__int64 __fastcall CStructDynamicArray<InjectManipulationArgs>::~CStructDynamicArray<InjectManipulationArgs>(
        __int64 a1)
{
  __int64 i; // rdi
  char *v3; // rdx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(char **)(*(_QWORD *)a1 + 8 * i);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v3);
  }
  CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(a1);
  return CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(a1);
}
