/*
 * XREFs of ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C008557C
 * Callers:
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1C000D490 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMod.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1C000D7EC (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1C000E9D0 (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKerne.c)
 *     ??$AddProperty@M@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1C0011EEC (--$AddProperty@M@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@.c)
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x1C00CB2B0 (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMo.c)
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x1C00CB364 (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMo.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1C022B820 (--$AddProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall CDynamicArray<unsigned char,2003858261>::Grow(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  void *v5; // rax
  void *v6; // rbp

  v3 = a2 + *(_DWORD *)(a1 + 8);
  if ( v3 < a2 )
    return (unsigned int)-1073741675;
  v4 = 0;
  if ( v3 <= *(_DWORD *)(a1 + 12) )
    return v4;
  if ( !is_mul_ok(v3, 1uLL) )
    return (unsigned int)-1073741675;
  v5 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                 (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                 260LL,
                 v3,
                 2003858261);
  v6 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)a1 )
    {
      memmove(v5, *(const void **)a1, *(unsigned int *)(a1 + 8));
      if ( *(_QWORD *)a1 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          *(void **)a1);
    }
    *(_QWORD *)a1 = v6;
    *(_DWORD *)(a1 + 12) = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
