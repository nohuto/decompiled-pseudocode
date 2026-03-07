// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiNmiInterruptShadow(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rax
  unsigned __int64 KernelDirectoryTableBase; // rdx
  unsigned __int64 retaddr; // [rsp+0h] [rbp+0h]

  __readmsr(0xC0000101);
  __writemsr(0xC0000101, retaddr);
  v8 = __readcr3();
  KernelDirectoryTableBase = KeGetPcr()->Prcb.KernelDirectoryTableBase;
  if ( v8 != KernelDirectoryTableBase && !_bittest(MK_FP(__GS__, 40984LL), 1u) )
    __writecr3(KernelDirectoryTableBase);
  return KiNmiInterruptStart(a1, a2, a3, a4, a5, a6, a7, a8);
}
