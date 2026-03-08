/*
 * XREFs of KiDebugTrapOrFaultShadow @ 0x140AF3180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiDebugTrapOrFaultShadow(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rax
  unsigned __int64 KernelDirectoryTableBase; // rdx
  char v14; // [rsp-20h] [rbp-20h]
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]

  if ( (v14 & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
  }
  else
  {
    __readmsr(0xC0000101);
    __writemsr(0xC0000101, retaddr);
  }
  v8 = __readcr3();
  KernelDirectoryTableBase = KeGetPcr()->Prcb.KernelDirectoryTableBase;
  if ( v8 != KernelDirectoryTableBase && !_bittest(MK_FP(__GS__, 40984LL), 1u) )
    __writecr3(KernelDirectoryTableBase);
  return KiDebugTrapOrFault(a1, a2, a3, a4, a5, a6, a7, a8);
}
