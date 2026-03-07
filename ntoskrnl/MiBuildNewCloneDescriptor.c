_QWORD *__fastcall MiBuildNewCloneDescriptor(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v7; // rdi
  _QWORD *Pool; // rbx
  _OWORD *v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // r14
  void *v13; // rcx
  __int64 VmPartition; // rax

  v4 = 32 * a2;
  v7 = 32 * a2 + 32;
  if ( (int)PsChargeProcessNonPagedPoolQuota(a1, v7) < 0 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x70uLL, 0x64436D4Du);
  if ( !Pool )
  {
    PsReturnProcessNonPagedPoolQuota(a1, v7);
    return 0LL;
  }
  v10 = MiAllocatePool(274, v7, 0x6C436D4Du);
  v11 = (__int64)v10;
  if ( !v10 )
  {
LABEL_6:
    PsReturnProcessNonPagedPoolQuota(a1, v7);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  *v10 = 0LL;
  v10[1] = 0LL;
  v12 = MiAllocatePool(64, 0x20uLL, 0x68436D4Du);
  v13 = (void *)v11;
  if ( !v12 )
  {
LABEL_8:
    ExFreePoolWithTag(v13, 0);
    goto LABEL_6;
  }
  if ( !(unsigned int)MiLockPagedRange(v11, v7) )
  {
    ExFreePoolWithTag(v12, 0);
    v13 = (void *)v11;
    goto LABEL_8;
  }
  VmPartition = MiGetVmPartition((__int64)&a1[1].ActiveProcessors.StaticBitmap[26]);
  *v12 = a2;
  v12[1] = 1LL;
  v12[2] = v11;
  Pool[6] = 0LL;
  Pool[4] = v11 + v4 - 32;
  Pool[3] = v11;
  Pool[5] = a2;
  Pool[7] = v12;
  Pool[8] = v7;
  Pool[12] = a3;
  _InterlockedIncrement64((volatile signed __int64 *)(VmPartition + 1432));
  v12[3] = VmPartition;
  return Pool;
}
