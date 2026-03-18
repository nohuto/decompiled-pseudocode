/*
 * XREFs of zzzDecomposeDesktop @ 0x1C0097998
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0098410 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C0098F14 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004A690 (GreUpdateSpriteVisRgn.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C0097498 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0097B14 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0097B44 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C0097BB8 (GreTransferDwmStateToSpriteState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 *     MagpDecomposeDesktop @ 0x1C00982AC (MagpDecomposeDesktop.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  int v5; // eax

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) & 1) != 0 )
  {
    MagpDecomposeDesktop(gMagnContext, a1);
    v2 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v2 + gSharedInfo[1] + 24) == 1 )
      {
        v4 = *(_QWORD *)(gpKernelHandleTable + 24 * v2);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v4, a1) )
        {
          LOBYTE(v5) = IsDesktopWindow(v4);
          if ( !v5 && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v4 + 16),
              *(struct tagQ **)(*(_QWORD *)(v4 + 16) + 432LL),
              0x10u,
              (struct tagWND *)v4,
              0,
              0LL,
              0LL,
              0LL);
          ComposeWindow((struct tagWND *)v4);
        }
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(HDEV *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
