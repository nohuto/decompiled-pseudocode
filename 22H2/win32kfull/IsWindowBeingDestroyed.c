/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C003883C
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0003A40 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserSetWindowFNID @ 0x1C00355F0 (NtUserSetWindowFNID.c)
 *     xxxSetLayeredWindow @ 0x1C0035D20 (xxxSetLayeredWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C003B510 (_GhostWindowFromHungWindow.c)
 *     _HungWindowFromGhostWindow @ 0x1C0041468 (_HungWindowFromGhostWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0073150 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D6EB0 (NtUserSetBrokeredForeground.c)
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00EC818 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00F2C08 (UserDetachQueueFromInputWindow.c)
 *     xxxCreateCaret @ 0x1C0113A44 (xxxCreateCaret.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C012745C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C015E408 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0161270 (UserRemoveWindowedSwapChain.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5EAC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01F7580 (NtUserDisableImmersiveOwner.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C020989C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209998 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C0209BA0 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C0209BF4 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C0209D20 (xxxRegisterSiblingFrostWindow.c)
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
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
