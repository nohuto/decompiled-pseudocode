/*
 * XREFs of NtQueryInformationCpuPartition @ 0x1409AD630
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumGroupCount @ 0x1402381F0 (KeQueryMaximumGroupCount.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeQueryCpuPartitionAffinity @ 0x1403A8718 (KeQueryCpuPartitionAffinity.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1409AE694 (PspReferenceCpuPartitionByHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryInformationCpuPartition(
        ULONG_PTR BugCheckParameter1,
        int a2,
        volatile void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  void *v8; // rdi
  unsigned int v9; // r14d
  char PreviousMode; // r15
  __int64 v12; // rcx
  int CpuPartitionAffinity; // esi
  USHORT v14; // r12
  USHORT MaximumGroupCount; // si
  void *Pool2; // rax
  unsigned int v17; // [rsp+30h] [rbp-48h] BYREF
  void *v18; // [rsp+38h] [rbp-40h]
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF

  Object[0] = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  v9 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
    return 3221225475LL;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a5;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    ProbeForWrite(a3, a4, 8u);
  }
  CpuPartitionAffinity = PspReferenceCpuPartitionByHandle(BugCheckParameter1, (__int64)Object);
  if ( CpuPartitionAffinity >= 0 )
  {
    if ( a4 < 0x10 || (a4 & 0xF) != 0 )
    {
      CpuPartitionAffinity = -1073741811;
    }
    else
    {
      v14 = (unsigned __int16)a4 >> 4;
      MaximumGroupCount = KeQueryMaximumGroupCount();
      if ( v14 < MaximumGroupCount )
        MaximumGroupCount = v14;
      Pool2 = (void *)ExAllocatePool2(257LL, 16LL * MaximumGroupCount, 1349546832LL);
      v8 = Pool2;
      v18 = Pool2;
      if ( Pool2 )
      {
        LOWORD(v17) = 0;
        CpuPartitionAffinity = KeQueryCpuPartitionAffinity(
                                 (__int64)Object[0],
                                 Pool2,
                                 MaximumGroupCount,
                                 (unsigned __int16 *)&v17);
        v9 = 16 * (unsigned __int16)v17;
        v17 = v9;
        if ( CpuPartitionAffinity >= 0 )
          memmove((void *)a3, v8, v9);
      }
      else
      {
        CpuPartitionAffinity = -1073741670;
      }
    }
  }
  *a5 = v9;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( Object[0] )
  {
    if ( Object[0] != PspSystemCpuPartition )
      ObfDereferenceObjectWithTag(Object[0], 0x50707350u);
  }
  return (unsigned int)CpuPartitionAffinity;
}
