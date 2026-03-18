/*
 * XREFs of IsCurrentDesktopComposed @ 0x1C009D460
 * Callers:
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C009BF80 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetAppCompatFlags @ 0x1C009CB70 (SetAppCompatFlags.c)
 *     NtUserDwmLockScreenUpdates @ 0x1C0120730 (NtUserDwmLockScreenUpdates.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01CE29C (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01D4A20 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsCurrentDesktopComposed()
{
  unsigned int v0; // ecx
  __int64 v1; // rax

  v0 = 0;
  if ( grpdeskRitInput )
  {
    v1 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v1 )
      return *(_DWORD *)(*(_QWORD *)v1 + 64LL) & 1;
  }
  return v0;
}
