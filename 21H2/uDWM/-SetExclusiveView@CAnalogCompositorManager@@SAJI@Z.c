/*
 * XREFs of ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800810F0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180016020 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180039BEC (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x180081144 (-SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetExclusiveView(unsigned int a1)
{
  unsigned int v2; // ebx
  CAnalogCompositorManager *Instance; // rax
  int v4; // eax

  v2 = 0;
  Instance = CAnalogCompositorManager::GetInstance();
  if ( Instance )
  {
    v4 = CAnalogCompositorManager::SetExclusiveViewImpl(Instance, a1);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x78u);
  }
  return v2;
}
