/*
 * XREFs of FsRtlInitializeBaseMcbEx @ 0x1402DFC90
 * Callers:
 *     FsRtlInitializeLargeMcb @ 0x1402DFC20 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcb @ 0x14053A710 (FsRtlInitializeBaseMcb.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 */

BOOLEAN __stdcall FsRtlInitializeBaseMcbEx(PBASE_MCB Mcb, POOL_TYPE PoolType, USHORT Flags)
{
  char v3; // di
  PVOID v5; // rax

  Mcb->PairCount = 0;
  v3 = Flags;
  Mcb->PoolType = PoolType;
  Mcb->Flags = Flags;
  if ( PoolType == PagedPool )
    v5 = ExAllocateFromNPagedLookasideList(&FsRtlFirstPagedMappingLookasideList);
  else
    v5 = ExAllocateFromNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList);
  Mcb->Mapping = v5;
  if ( v5 )
  {
    Mcb->MaximumPairCount = 15;
    return 1;
  }
  else
  {
    if ( (v3 & 1) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0;
  }
}
