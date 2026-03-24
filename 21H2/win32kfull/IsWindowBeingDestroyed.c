/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C00388DC
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C0003A40 (xxxRegisterGhostWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserSetWindowFNID @ 0x1C0035690 (NtUserSetWindowFNID.c)
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C003B5B0 (_GhostWindowFromHungWindow.c)
 *     _HungWindowFromGhostWindow @ 0x1C0041508 (_HungWindowFromGhostWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00731F0 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D7200 (NtUserSetBrokeredForeground.c)
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00ECB68 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00F2F58 (UserDetachQueueFromInputWindow.c)
 *     xxxCreateCaret @ 0x1C0113DC4 (xxxCreateCaret.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01277DC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C015EBB8 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0161A40 (UserRemoveWindowedSwapChain.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E646C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01F7B40 (NtUserDisableImmersiveOwner.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209E5C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209F58 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C020A160 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C020A1B4 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C020A2E0 (xxxRegisterSiblingFrostWindow.c)
 *     xxxMNMouseMove @ 0x1C02396FC (xxxMNMouseMove.c)
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
