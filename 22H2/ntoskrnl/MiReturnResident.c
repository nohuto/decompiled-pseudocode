/*
 * XREFs of MiReturnResident @ 0x140292CF0
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiRemoveVadCharges @ 0x1406FB4F0 (MiRemoveVadCharges.c)
 *     MiReleaseVadEventBlocks @ 0x1406FB68C (MiReleaseVadEventBlocks.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     MmDeleteProcessAddressSpace @ 0x140705A98 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     MiSessionCreate @ 0x1407A95BC (MiSessionCreate.c)
 *     MiMarkBootGuardPage @ 0x14081FBC8 (MiMarkBootGuardPage.c)
 *     MiReturnSystemImageCommitment @ 0x1408618D0 (MiReturnSystemImageCommitment.c)
 *     MmReturnChargesToLockPagedPool @ 0x140A30A10 (MmReturnChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x140A336B4 (MiChargeLargeProtoSubsection.c)
 *     MiReturnVadCharges @ 0x140A3C514 (MiReturnVadCharges.c)
 *     MiFreePartitionPhysicalPages @ 0x140A44B64 (MiFreePartitionPhysicalPages.c)
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
