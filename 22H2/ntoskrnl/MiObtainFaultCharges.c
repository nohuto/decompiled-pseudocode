/*
 * XREFs of MiObtainFaultCharges @ 0x14021BA50
 * Callers:
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x14029A300 (MiPickClusterForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiGetPageForHeader @ 0x14033763C (MiGetPageForHeader.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140259EB8 (MiChargeResident.c)
 *     MiReturnFaultCharges @ 0x1402E4184 (MiReturnFaultCharges.c)
 *     MiChargePartitionResidentAvailable @ 0x140308418 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiObtainFaultCharges(ULONG_PTR *a1, unsigned int a2, char a3)
{
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  unsigned __int32 v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // r8

  while ( 1 )
  {
    v6 = a2;
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
          v10 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - a2,
                  CachedResidentAvailable);
          v9 = (_DWORD)CachedResidentAvailable == v10;
          LODWORD(CachedResidentAvailable) = v10;
          if ( v9 )
            goto LABEL_5;
        }
        while ( a2 <= (unsigned __int64)v10 );
      }
    }
    v13 = 1LL;
    if ( a2 != 1 )
      v13 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, v13, a2) )
      break;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_22;
  }
LABEL_5:
  if ( a2 )
    goto LABEL_6;
LABEL_22:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1;
  MiChargeResident(a1, 1LL, 0xFFFFFFFFLL, v6);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v11 = a2;
  while ( (unsigned int)MiChargeCommit((__int64)a1, v11, 1u) != 1 )
  {
    v11 >>= 1;
    if ( !v11 )
    {
      if ( (a3 & 2) != 0 )
      {
        v11 = 1;
        MiChargeCommit((__int64)a1, 1uLL, 4u);
      }
      break;
    }
  }
  if ( v11 != a2 )
    MiReturnFaultCharges(a1, a2 - v11, 0LL);
  return v11;
}
