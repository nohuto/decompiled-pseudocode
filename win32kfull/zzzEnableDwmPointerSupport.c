/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C007F1FC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     SetPointerMetaVisibility @ 0x1C007B75C (SetPointerMetaVisibility.c)
 *     zzzDecomposeDesktop @ 0x1C007CC0C (zzzDecomposeDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C007CEC8 (zzzDwmStartRedirection.c)
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001DD64 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C00219A0 (SetPointer.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     GreDwmHasSoftwareCursor @ 0x1C007F36C (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C007F458 (GreDwmEnableSoftwareCursorRendering.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzEnableDwmPointerSupport(unsigned int a1, int a2)
{
  int HasSoftwareCursor; // eax
  __int64 v5; // rcx
  int v6; // edi

  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreLockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  HasSoftwareCursor = GreDwmHasSoftwareCursor(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
  if ( !a2 || HasSoftwareCursor || a1 )
  {
    if ( HasSoftwareCursor == a1 )
    {
      v6 = 0;
    }
    else
    {
      SetPointer(0LL);
      LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
      v6 = 1;
    }
    GreDwmEnableSoftwareCursorRendering(v5, a1);
    if ( v6 )
    {
      LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !a2 )
        zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 2, 0);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
