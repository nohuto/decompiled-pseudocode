/*
 * XREFs of PspAllocateRateControl @ 0x14065CBDC
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14065C6DC (PspAddSchedulingGroupToJobChain.c)
 *     PspSetJobRateControl @ 0x140909700 (PspSetJobRateControl.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     PspGetRateControlSize @ 0x14065CC70 (PspGetRateControlSize.c)
 *     PsChargeSharedPoolQuota @ 0x1406D90F8 (PsChargeSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
