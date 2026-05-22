/*
 * XREFs of ?Display3DCursor@MPCHeadProcessor@@UEAA_NXZ @ 0x180197D70
 * Callers:
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180197DE0 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

bool __fastcall MPCHeadProcessor::Display3DCursor(MPCHeadProcessor *this)
{
  return *((_DWORD *)MPCHolographicInputManager::GetInstance() + 590) != 512;
}
