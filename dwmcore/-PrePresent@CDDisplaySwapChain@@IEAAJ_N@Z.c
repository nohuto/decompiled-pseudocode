/*
 * XREFs of ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180287F70
 * Callers:
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180287FC0 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180288130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x180285D80 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CDDisplaySwapChain::PrePresent(CDDisplaySwapChain *this, char a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  if ( !a2 )
  {
    v3 = CDDisplaySwapChain::CopyFrontToBackBuffer(this);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xEFu, 0LL);
  }
  return v2;
}
