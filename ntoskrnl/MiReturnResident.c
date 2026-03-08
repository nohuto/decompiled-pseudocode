/*
 * XREFs of MiReturnResident @ 0x1402A52C8
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 *     MiRemoveVadCharges @ 0x1406ECCF0 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406ECE8C (MiReleaseVadEventBlocks.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiMarkBootGuardPage @ 0x14080B0BC (MiMarkBootGuardPage.c)
 *     MiReturnSystemImageCommitment @ 0x14085DA60 (MiReturnSystemImageCommitment.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A2DCE0 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x140A30984 (MiChargeLargeProtoSubsection.c)
 *     MiReturnVadCharges @ 0x140A39830 (MiReturnVadCharges.c)
 *     MiFreePartitionPhysicalPages @ 0x140A41E90 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnResident(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedResidentAvailable; // r8
  bool v5; // zf

  result = (unsigned __int64)&MiSystemPartition;
  if ( (_UNKNOWN *)a1 != &MiSystemPartition
    || (CurrentPrcb = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_8:
    if ( a2 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), a2);
    return result;
  }
  result = a2 + CachedResidentAvailable;
  if ( a2 + CachedResidentAvailable > 0x100 || a2 >= 0x80000 )
  {
LABEL_7:
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        a2 += (int)result;
      }
    }
    goto LABEL_8;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + a2,
                             CachedResidentAvailable);
    v5 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v5 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = a2 + (int)result;
      if ( a2 + CachedResidentAvailable <= 0x100 )
        continue;
    }
    goto LABEL_7;
  }
}
