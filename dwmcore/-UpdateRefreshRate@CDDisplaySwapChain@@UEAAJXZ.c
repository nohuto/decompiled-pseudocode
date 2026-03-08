/*
 * XREFs of ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x180288760
 * Callers:
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1801E5530 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x180287488 (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetRateForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAUDisplayPresentationRate@3456@@Z @ 0x180292718 (-GetRateForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAUDi.c)
 */

__int64 __fastcall CDDisplaySwapChain::UpdateRefreshRate(struct Windows::Devices::Display::Core::IDisplayTarget **this)
{
  int RateForTarget; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-24h]

  RateForTarget = CDDisplayManager::GetRateForTarget(
                    (CDDisplayManager *)this,
                    this[44],
                    (struct Windows::Devices::Display::Core::DisplayPresentationRate *)&v8);
  v4 = RateForTarget;
  if ( RateForTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, RateForTarget, 0x40Fu, 0LL);
  }
  else
  {
    v5 = v8;
    v6 = v9;
    if ( v8 == -2 && v9 == -2 )
    {
      v5 = 60;
      v6 = 1;
    }
    this[61] = (struct Windows::Devices::Display::Core::IDisplayTarget *)(g_qpcFrequency.QuadPart * v6 / v5);
  }
  return v4;
}
