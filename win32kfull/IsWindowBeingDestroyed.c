/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C0039B60
 * Callers:
 *     xxxCreateCaret @ 0x1C000F3B4 (xxxCreateCaret.c)
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00255DC (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     NtUserSetWindowFNID @ 0x1C0039DB0 (NtUserSetWindowFNID.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C007D680 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00961D0 (NtUserSetBrokeredForeground.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00A1FC8 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00E05B8 (UserDetachQueueFromInputWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01CF6A0 (NtUserDisableImmersiveOwner.c)
 *     ?_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z @ 0x1C01F5350 (-_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F53A4 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F54A0 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x1C01F55FC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1C01F5880 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F62F4 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F65C4 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 *     UserRemoveWindowedSwapChain @ 0x1C021EEC0 (UserRemoveWindowedSwapChain.c)
 *     UserSetWindowedSwapChain @ 0x1C021EFC8 (UserSetWindowedSwapChain.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0222698 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowBeingDestroyed(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  if ( *(char *)(v1 + 19) < 0 )
    return 1;
  if ( *(char *)(v1 + 20) < 0 )
    return 1;
  if ( *(__int16 *)(v1 + 42) < 0 )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 488) & 1) != 0 )
      return 1;
  }
  return v2;
}
