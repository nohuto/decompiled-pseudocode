/*
 * XREFs of Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage @ 0x1C0027E3C
 * Callers:
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x1C0076DC0 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0076E84 (-Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z.c)
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C008339C (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0083570 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledFallback @ 0x1C0027E74 (Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CompTexturesNoRedirectionFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CompTexturesNoRedirectionFix__private_featureState & 1;
  else
    return Feature_Servicing_CompTexturesNoRedirectionFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CompTexturesNoRedirectionFix__private_featureState,
             3LL);
}
