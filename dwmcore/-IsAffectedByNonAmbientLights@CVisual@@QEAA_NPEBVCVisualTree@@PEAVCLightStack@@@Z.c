/*
 * XREFs of ?IsAffectedByNonAmbientLights@CVisual@@QEAA_NPEBVCVisualTree@@PEAVCLightStack@@@Z @ 0x18020DE70
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x18012A01C (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 */

bool __fastcall CVisual::IsAffectedByNonAmbientLights(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CLightStack *a3)
{
  return (unsigned int)CLightStack::GetActiveLightCount(a3, this, a2, 0LL) != 0;
}
