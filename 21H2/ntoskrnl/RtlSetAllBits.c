/*
 * XREFs of RtlSetAllBits @ 0x140262CA0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140262938 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     MiBuildMdlForMappedFileFault @ 0x140313DE0 (MiBuildMdlForMappedFileFault.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14037717C (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiExtendPagingFileMaximum @ 0x14059BFB0 (MiExtendPagingFileMaximum.c)
 *     MiCaptureImageExceptionValues @ 0x140761188 (MiCaptureImageExceptionValues.c)
 *     MiReserveDriverPtes @ 0x1407621C0 (MiReserveDriverPtes.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x140952F10 (PnprMmAddRange.c)
 *     MiPrepareToHotPatchImage @ 0x140976880 (MiPrepareToHotPatchImage.c)
 *     SmcStoreResize @ 0x1409D8588 (SmcStoreResize.c)
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     MiCreateBootSlabEntries @ 0x140B04E44 (MiCreateBootSlabEntries.c)
 *     VfInitBootDriversLoaded @ 0x140B0DBD4 (VfInitBootDriversLoaded.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B1D9DC (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitDiscard @ 0x140B236AC (HalpPowerInitDiscard.c)
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
