/*
 * XREFs of MiObtainFaultCharges @ 0x140274A90
 * Callers:
 *     MiGetPageForHeader @ 0x14021A4F4 (MiGetPageForHeader.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x1402E1710 (MiPickClusterForMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiPrefetchPagesViable @ 0x14033E3E4 (MiPrefetchPagesViable.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x1402763A0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x1402E6278 (MiChargePartitionResidentAvailable.c)
 *     MiReturnFaultCharges @ 0x14035F870 (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiObtainFaultCharges(void *a1, unsigned __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v8; // zf
  unsigned __int32 v9; // eax
  unsigned __int64 v10; // rbx
  __int64 v12; // r8

  do
  {
    if ( a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( a2 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v9 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                 CachedResidentAvailable - a2,
                 CachedResidentAvailable);
          v8 = (_DWORD)CachedResidentAvailable == v9;
          LODWORD(CachedResidentAvailable) = v9;
          if ( v8 )
            goto LABEL_5;
        }
        while ( a2 <= v9 );
      }
    }
    v12 = 1LL;
    if ( a2 != 1 )
      v12 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, v12) )
      break;
    a2 >>= 1;
  }
  while ( a2 );
LABEL_5:
  if ( !a2 )
  {
    if ( (a3 & 2) == 0 )
      return 0LL;
    a2 = 1LL;
    MiChargeResident(a1, 1LL, 0xFFFFFFFFLL);
  }
  if ( (a3 & 1) == 0 )
    return a2;
  v10 = a2;
  while ( !(unsigned int)MiChargeCommit(a1, v10, 1LL) )
  {
    v10 >>= 1;
    if ( !v10 )
    {
      if ( (a3 & 2) != 0 )
      {
        v10 = 1LL;
        MiChargeCommit(a1, 1LL, 4LL);
      }
      break;
    }
  }
  if ( v10 != a2 )
    MiReturnFaultCharges(a1, a2 - v10, 0LL);
  return v10;
}
