/*
 * XREFs of ?DwmSyncLPCAllowed@@YAJXZ @ 0x1C001D800
 * Callers:
 *     DwmSyncCaptureSurfaceBits @ 0x1C00086A0 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C000B84C (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0012AFC (DwmSyncNotifyMinimizing.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C0012F60 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncDesktopSwitch @ 0x1C001D718 (DwmSyncDesktopSwitch.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C0270960 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncFlushWindowChanges @ 0x1C0270A50 (DwmSyncFlushWindowChanges.c)
 *     DwmSyncHitTestQuery @ 0x1C0270AE0 (DwmSyncHitTestQuery.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0270C10 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     DwmSyncSignalGhost @ 0x1C0270E20 (DwmSyncSignalGhost.c)
 * Callees:
 *     <none>
 */

__int64 DwmSyncLPCAllowed(void)
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (unsigned __int8)UserIsInVideoPnpCallout() )
    return (unsigned int)-1073741823;
  return v0;
}
