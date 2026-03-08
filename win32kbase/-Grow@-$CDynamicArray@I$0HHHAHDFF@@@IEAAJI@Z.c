/*
 * XREFs of ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C02640F0
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C024AB04 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall CDynamicArray<unsigned int,2003858261>::Grow(__int64 a1)
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
  if ( !is_mul_ok(v2, 4uLL) )
    return (unsigned int)-1073741675;
  v4 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                 gpLeakTrackingAllocator,
                 260LL,
                 4LL * v2,
                 0x77707355u);
  v5 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v4, *(const void **)a1, 4LL * *(unsigned int *)(a1 + 8));
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
