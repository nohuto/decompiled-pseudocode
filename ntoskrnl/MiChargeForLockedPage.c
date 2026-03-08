/*
 * XREFs of MiChargeForLockedPage @ 0x140287410
 * Callers:
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14028BD60 (MiFinishMdlForMappedFileFault.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiMakeFaultPfnActive @ 0x1402CD4A0 (MiMakeFaultPfnActive.c)
 * Callees:
 *     MiIsPfnCommitNotCharged @ 0x140286190 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x140348ED0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  __int64 v2; // r10
  int v3; // edx
  __int64 v4; // rbx
  unsigned int v5; // r11d
  char v6; // si
  void *v7; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v10; // ett
  unsigned int v11; // ebx
  __int64 v13; // r8

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2 & 1;
  v4 = (unsigned int)-(v3 != 0);
  v5 = 4 * (v3 ^ 1) + 4;
  if ( v2 < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 || (unsigned int)MiIsPfnCommitNotCharged(a1) )
  {
    v6 = 1;
    v7 = *(void **)(qword_140C67048 + 8 * (((unsigned __int64)v2 >> 43) & 0x3FF));
    if ( !(unsigned int)MiChargeCommit(v7, 1LL, v5) )
      return 0LL;
  }
  else
  {
    v6 = 0;
    v7 = *(void **)(qword_140C67048 + 8 * (((unsigned __int64)v2 >> 43) & 0x3FF));
  }
  if ( v7 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      while ( CachedResidentAvailable != -1 )
      {
        v10 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v10 == CachedResidentAvailable )
          return 1;
        if ( !CachedResidentAvailable )
          break;
      }
    }
  }
  v11 = MiChargePartitionResidentAvailable(v7, 1LL, v4);
  if ( !v11 )
  {
    if ( v6 )
      MiReturnCommit((__int64)v7, 1LL, v13);
  }
  return v11;
}
