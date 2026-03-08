/*
 * XREFs of DxgkGetSharedAllocationObjectType @ 0x1C01C7AB0
 * Callers:
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1C000CB28 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     ?GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C000CBE0 (-GetSwapChainRealizationInfo@CFlipExBuffer@@UEBAJ_NPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C007E4A4 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C0084BC4 (-Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAV.c)
 *     ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C0084E28 (-CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedAllocationObjectType()
{
  return g_pDxgkSharedAllocationObjectType;
}
