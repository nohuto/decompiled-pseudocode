/*
 * XREFs of RtlSetAllBits @ 0x1402934B0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140293144 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14029F380 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E2620 (MiBuildMdlForMappedFileFault.c)
 *     MiExtendPagingFileMaximum @ 0x1405432D0 (MiExtendPagingFileMaximum.c)
 *     MiCaptureImageExceptionValues @ 0x14075E804 (MiCaptureImageExceptionValues.c)
 *     MiReserveDriverPtes @ 0x140760064 (MiReserveDriverPtes.c)
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1407B7770 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x1408AE610 (PnprMmAddRange.c)
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 *     SmcStoreResize @ 0x14092E1D8 (SmcStoreResize.c)
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 *     VfThunkInit @ 0x140A5016C (VfThunkInit.c)
 *     MiCreateBootSlabEntries @ 0x140A508C0 (MiCreateBootSlabEntries.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A66B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitDiscard @ 0x140A6A49C (HalpPowerInitDiscard.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
