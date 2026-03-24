/*
 * XREFs of RtlSetAllBits @ 0x1403536C0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14023D740 (MiBuildMdlForMappedFileFault.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14032CE00 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14035335C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     MiExtendPagingFileMaximum @ 0x140542FD0 (MiExtendPagingFileMaximum.c)
 *     MiCaptureImageExceptionValues @ 0x14075DE34 (MiCaptureImageExceptionValues.c)
 *     MiReserveDriverPtes @ 0x14075F694 (MiReserveDriverPtes.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AB024 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1407B7A10 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864DE0 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x1408AE500 (PnprMmAddRange.c)
 *     MiPrepareToHotPatchImage @ 0x1408CD688 (MiPrepareToHotPatchImage.c)
 *     SmcStoreResize @ 0x14092E0C8 (SmcStoreResize.c)
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 *     VfThunkInit @ 0x140A4F16C (VfThunkInit.c)
 *     MiCreateBootSlabEntries @ 0x140A4F8C0 (MiCreateBootSlabEntries.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A65B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitDiscard @ 0x140A6949C (HalpPowerInitDiscard.c)
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
