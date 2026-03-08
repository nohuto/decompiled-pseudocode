/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x1402B39C0
 * Callers:
 *     MmAllocatePagesForMdlEx @ 0x1402B3960 (MmAllocatePagesForMdlEx.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x14038CE84 (HalpAllocateCommonBufferDmaThin.c)
 *     MmAllocateNodePagesForMdlEx @ 0x1403BE0E0 (MmAllocateNodePagesForMdlEx.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050D000 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14050FF60 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405116E8 (HalpAllocateCommonBufferDmarThin.c)
 *     EtwpAllocatePartitionMemory @ 0x1405FEEF0 (EtwpAllocatePartitionMemory.c)
 *     MmAllocateSecureKernelPages @ 0x1406551DC (MmAllocateSecureKernelPages.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094A8B4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     KiComputeNumaCosts @ 0x140B727C4 (KiComputeNumaCosts.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140236884 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        void **BugCheckParameter2)
{
  int v9; // ebx
  int v12; // r14d
  int v13; // ebp
  void ***v14; // rax
  void ***v15; // r15
  __int64 PagesForMdl; // rbx
  _BYTE v18[16]; // [rsp+50h] [rbp-38h] BYREF

  v18[0] = 0;
  v9 = a3;
  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v12 = a5;
  if ( a5 == -1 || a5 > 2 )
    v12 = 3;
  v13 = a7;
  if ( (a7 & 0xFFFFF800) != 0 )
    return 0LL;
  if ( (a7 & 0x60) == 0x20 )
  {
    v13 = a7 | 0x10;
    if ( a3 )
    {
      if ( ((a3 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v13 = a7 | 0x14;
    }
  }
  if ( (v13 & 0x100) != 0 && ((v13 & 4) != 0 || KeGetCurrentIrql()) )
    return 0LL;
  v14 = MiPartitionObjectToPartition(BugCheckParameter2, 0, v18);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  PagesForMdl = MiAllocatePagesForMdl(
                  (_DWORD)v14,
                  a1,
                  a2,
                  v9,
                  a4,
                  v12,
                  a6,
                  v13,
                  (__int64)KeGetCurrentThread()->ApcState.Process,
                  0LL);
  if ( v18[0] )
    PsDereferencePartition((__int64)v15[25]);
  return PagesForMdl;
}
