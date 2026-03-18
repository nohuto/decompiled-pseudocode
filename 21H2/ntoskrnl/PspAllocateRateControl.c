/*
 * XREFs of PspAllocateRateControl @ 0x140678B98
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x140679480 (PspAddSchedulingGroupToJobChain.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspSetJobRateControl @ 0x1409B0A5C (PspSetJobRateControl.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     PspGetRateControlSize @ 0x140678C2C (PspGetRateControlSize.c)
 *     PsChargeSharedPoolQuota @ 0x140726494 (PsChargeSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PspAllocateRateControl(__int64 a1)
{
  SIZE_T RateControlSize; // rdi
  POOL_TYPE v2; // r9d
  int v3; // ecx
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rsi

  RateControlSize = PspGetRateControlSize(a1);
  v2 = NonPagedPoolNx;
  if ( v3 != 2 )
    v2 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v2, RateControlSize, 0x624A7350u);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, RateControlSize, 0LL);
    if ( v5 )
    {
      memset(PoolWithTag, 0, RateControlSize);
      *PoolWithTag = v5;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
      return 0LL;
    }
  }
  return PoolWithTag;
}
