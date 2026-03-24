/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C004AAF0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003B00 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00CDE80 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01D27F0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01D2930 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0048DD0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0048E10 (GreUnlockDwmState.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C004AB60 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

PVOID UserReferenceDwmApiPort()
{
  int v0; // edi
  PVOID v1; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    v0 = 1;
  }
  v1 = g_pDwmApiPort;
  if ( g_pDwmApiPort )
    ObfReferenceObject(g_pDwmApiPort);
  if ( v0 )
    GreUnlockDwmState();
  return v1;
}
