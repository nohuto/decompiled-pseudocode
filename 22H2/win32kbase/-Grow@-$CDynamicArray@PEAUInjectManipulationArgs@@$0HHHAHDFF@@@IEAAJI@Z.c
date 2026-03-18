/*
 * XREFs of ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0213314
 * Callers:
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C0212D84 (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?Add@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAJAEBUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@Z @ 0x1C022556C (-Add@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@Q.c)
 *     ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x1C0230EAC (-InsertAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  void *v4; // rax
  void *v5; // rbp

  v2 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return (unsigned int)-1073741675;
  v3 = 0;
  if ( v2 <= *(_DWORD *)(a1 + 12) )
    return v3;
  if ( !is_mul_ok(v2, 8uLL) )
    return (unsigned int)-1073741675;
  v4 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                 gpLeakTrackingAllocator,
                 260LL,
                 8LL * v2,
                 0x77707355u);
  v5 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v4, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      if ( *(_QWORD *)a1 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(char **)a1);
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 12) = v2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
