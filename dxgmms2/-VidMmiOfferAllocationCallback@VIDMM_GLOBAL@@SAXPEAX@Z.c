/*
 * XREFs of ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0015940
 * Callers:
 *     VidSchCancelDeviceCommand @ 0x1C003E330 (VidSchCancelDeviceCommand.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00AE880 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiOfferAllocationCallback(_QWORD *a1)
{
  __int64 v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[12] + 8LL), 0xFFFFFFFF) == 1 )
  {
    v2 = a1[12];
    if ( _InterlockedCompareExchange16((volatile signed __int16 *)(v2 + 4), 2, 1) == 1 )
    {
      if ( bTracingEnabled )
      {
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0p_EtwWriteTransfer(v2, &EventCompleteOfferAllocation, 1LL, a1);
      }
    }
  }
}
