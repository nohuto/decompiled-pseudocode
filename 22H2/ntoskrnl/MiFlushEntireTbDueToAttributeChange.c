/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14036EF4C
 * Callers:
 *     MiChangePageAttributeContiguous @ 0x14021A6C0 (MiChangePageAttributeContiguous.c)
 *     MiFlushCacheForAttributeChange @ 0x14021ABA4 (MiFlushCacheForAttributeChange.c)
 *     MiChangePageAttributeBatch @ 0x14021C9D4 (MiChangePageAttributeBatch.c)
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     MiValidateInPage @ 0x1402DC480 (MiValidateInPage.c)
 *     MiReferenceIoPages @ 0x140336360 (MiReferenceIoPages.c)
 *     MiCombiningInProgress @ 0x14036EBEC (MiCombiningInProgress.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14061BFF4 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DA40 (MiDeleteStaleCacheMaps.c)
 *     MiMakeIoRangePermanent @ 0x14062E4CC (MiMakeIoRangePermanent.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140B6B46C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     HvcallFastExtended @ 0x1403CBB50 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  _BYTE v1[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v2[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C65C00;
  if ( VslVsmEnabled )
  {
    if ( (HvlEnlightenments & 0x4000000) != 0 )
    {
      v2[0] = 0LL;
      v2[2] = 0LL;
      v2[1] = 531LL;
      HvcallFastExtended(65538, (unsigned int)v2, 24, 0, 0);
    }
    else
    {
      memset(v1, 0, 0x68uLL);
      VslpEnterIumSecureMode(3u, 0, 0, (__int64)v1);
    }
  }
  return KeFlushTb(4u, 2u);
}
