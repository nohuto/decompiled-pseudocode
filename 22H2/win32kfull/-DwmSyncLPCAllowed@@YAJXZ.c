/*
 * XREFs of ?DwmSyncLPCAllowed@@YAJXZ @ 0x1C006EA5C
 * Callers:
 *     DwmSyncCaptureSurfaceBits @ 0x1C000887C (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C000C49C (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncNotifyMinimizing @ 0x1C001383C (DwmSyncNotifyMinimizing.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C0013CA0 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncDesktopSwitch @ 0x1C006E974 (DwmSyncDesktopSwitch.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C026DEB0 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncFlushWindowChanges @ 0x1C026DFA0 (DwmSyncFlushWindowChanges.c)
 *     DwmSyncHitTestQuery @ 0x1C026E030 (DwmSyncHitTestQuery.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C026E160 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     DwmSyncSignalGhost @ 0x1C026E370 (DwmSyncSignalGhost.c)
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
