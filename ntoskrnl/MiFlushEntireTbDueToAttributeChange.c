/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14036D020
 * Callers:
 *     MiChangePageAttributeBatch @ 0x140211998 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     MiFlushCacheForAttributeChange @ 0x140214754 (MiFlushCacheForAttributeChange.c)
 *     MiValidateInPage @ 0x140287570 (MiValidateInPage.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiCombiningInProgress @ 0x14036CCC0 (MiCombiningInProgress.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x140619B48 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x14062B5C0 (MiDeleteStaleCacheMaps.c)
 *     MiMakeIoRangePermanent @ 0x14062C04C (MiMakeIoRangePermanent.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  _BYTE v1[112]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v2[4]; // [rsp+B0h] [rbp-38h] BYREF

  ++dword_140C65780;
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
  return KeFlushTb(4LL, 2u);
}
