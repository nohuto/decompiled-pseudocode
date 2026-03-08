/*
 * XREFs of MiMapNewPfns @ 0x140A29C20
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MiLockDynamicMemoryShared @ 0x1402DAC90 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1402DC340 (MiUnlockDynamicMemoryShared.c)
 *     MiGetClosestImplicitNode @ 0x140346FCC (MiGetClosestImplicitNode.c)
 *     MiIncreaseCommitLimits @ 0x140392864 (MiIncreaseCommitLimits.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeConfigureDynamicMemory @ 0x14056C5A8 (KeConfigureDynamicMemory.c)
 *     MiPageToNode @ 0x1406153B0 (MiPageToNode.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MiPhysicalMemoryEverRemoved @ 0x140619824 (MiPhysicalMemoryEverRemoved.c)
 *     MiReduceCommitLimits @ 0x140653F84 (MiReduceCommitLimits.c)
 */

__int64 __fastcall MiMapNewPfns(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 PteAddress; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned int ClosestImplicitNode; // ebx
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // rbp
  void *v18; // rbx
  int v20; // eax
  unsigned int v22; // [rsp+88h] [rbp+20h]

  PteAddress = MiGetPteAddress(48 * BugCheckParameter2 - 0x220000000000LL);
  v10 = MiGetPteAddress(48 * BugCheckParameter3 + v9 - 1);
  v11 = v10;
  v12 = BugCheckParameter3 - BugCheckParameter2;
  if ( BugCheckParameter3 - BugCheckParameter2 >= 0x40000 && qword_140C6F350 >= 0x200000 )
  {
    if ( PteAddress != (PteAddress & 0xFFFFFFFFFFFFF000uLL) )
      PteAddress &= 0xFFFFFFFFFFFFF000uLL;
    v13 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v11 != v13 )
      v11 = v13;
  }
  v14 = MiPageToNode(BugCheckParameter2);
  ClosestImplicitNode = MiGetClosestImplicitNode(v14 + 1);
  v16 = ((a4 & 0x4000 | 0x2A10) >> 4) | 0x100;
  if ( (a4 & 0x8000) == 0 )
    v16 = (a4 & 0x4000 | 0x2A10) >> 4;
  v22 = v16;
  if ( (a4 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
    v16 = v22;
  }
  else
  {
    CurrentThread = 0LL;
  }
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(PteAddress, v11, v16, 4, ClosestImplicitNode) )
  {
    if ( CurrentThread )
      MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
    return 3221225626LL;
  }
  v18 = 0LL;
  if ( (a4 & 2) == 0 )
  {
    if ( (a4 & 0x400) != 0 )
    {
      v18 = (void *)MmMapIoSpaceEx(BugCheckParameter2 << 12, v12 << 12, 4u);
      if ( !v18 )
        return 3221225626LL;
    }
    if ( (a4 & 0x100000) == 0
      && !(unsigned int)MiIncreaseCommitLimits(
                          (__int64)MiSystemPartition,
                          BugCheckParameter3 - BugCheckParameter2,
                          BugCheckParameter3 - BugCheckParameter2,
                          1,
                          0LL) )
    {
      goto LABEL_26;
    }
    if ( a3 != MiSystemPartition
      && (a4 & 0x50080) != 0
      && !(unsigned int)MiIncreaseCommitLimits(
                          (__int64)a3,
                          BugCheckParameter3 - BugCheckParameter2,
                          BugCheckParameter3 - BugCheckParameter2,
                          1,
                          0LL) )
    {
      if ( (a4 & 0x100000) == 0 )
        MiReduceCommitLimits(
          MiSystemPartition,
          BugCheckParameter3 - BugCheckParameter2,
          BugCheckParameter3 - BugCheckParameter2);
LABEL_26:
      if ( v18 )
        MmUnmapIoSpace(v18, v12 << 12);
      return 3221225773LL;
    }
    if ( (a4 & 0x800) == 0 )
    {
      v20 = KeConfigureDynamicMemory(BugCheckParameter2, BugCheckParameter3 - 1, 1LL);
      if ( v20 < 0 )
        KeBugCheckEx(0x1Au, 0x61A00uLL, BugCheckParameter2, BugCheckParameter3, v20);
    }
  }
  if ( !(unsigned int)MiPhysicalMemoryEverRemoved(BugCheckParameter2, BugCheckParameter3 - BugCheckParameter2, 1) )
    a4 |= 0x80000u;
  MiInitializeDynamicPfns(
    BugCheckParameter2,
    BugCheckParameter3 - BugCheckParameter2,
    a3,
    a4,
    a5,
    (unsigned __int16 *)v18);
  if ( CurrentThread )
    MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( v18 )
    MmUnmapIoSpace(v18, v12 << 12);
  return 0LL;
}
