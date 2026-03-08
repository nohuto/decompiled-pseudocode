/*
 * XREFs of MiObtainFaultCharges @ 0x14031EEE0
 * Callers:
 *     MiGetPageForHeader @ 0x1402140A4 (MiGetPageForHeader.c)
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x14028B0C0 (MiPickClusterForMappedFileFault.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MiPrefetchPagesViable @ 0x1402FCD14 (MiPrefetchPagesViable.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140348DE8 (MiChargeResident.c)
 *     MiChargePartitionResidentAvailable @ 0x140348ED0 (MiChargePartitionResidentAvailable.c)
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
    MiReturnFaultCharges((__int64)a1, a2 - v10, 0LL);
  return v10;
}
