/*
 * XREFs of zzzEnableDwmPointerSupport @ 0x1C005B13C
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C003DA0C (SetPointerMetaVisibility.c)
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C00588D8 (zzzDwmStartRedirection.c)
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0025058 (zzzEndDeferWinEventNotify.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C005AFF4 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreDwmHasSoftwareCursor @ 0x1C005B2AC (GreDwmHasSoftwareCursor.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C005B484 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C005CFA0 (SetPointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzEnableDwmPointerSupport(int a1, int a2)
{
  int HasSoftwareCursor; // eax
  Gre::Base *v5; // rcx
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
      LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
      v6 = 1;
    }
    GreDwmEnableSoftwareCursorRendering(v5, a1);
    if ( v6 )
    {
      LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = gSoftwareCursorCount > 0;
      SetPointer(1LL);
      if ( !a2 )
        zzzInternalSetCursorPos(*(unsigned int *)(gpsi + 4960LL), *(unsigned int *)(gpsi + 4964LL), 2LL, 0LL);
    }
  }
  GreUnlockSprite(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockPointer(*(_QWORD *)(gpDispInfo + 40LL));
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzEndDeferWinEventNotify();
}
