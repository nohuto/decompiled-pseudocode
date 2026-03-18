/*
 * XREFs of ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C007815C
 * Callers:
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z @ 0x1C000CE00 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C0078448 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAV.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C007E5A0 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

const struct CFlipToken *__fastcall CFlipToken::FromToken(const struct CToken *a1)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a1 + 64LL))(a1) == 1 )
    return a1;
  return (const struct CFlipToken *)v2;
}
