/*
 * XREFs of zzzDecomposeDesktop @ 0x1C007CC0C
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C007B850 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C007CEC8 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 * Callees:
 *     GreRemoveDisplayDriverRealizations @ 0x1C001B31C (GreRemoveDisplayDriverRealizations.c)
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     IsDesktopWindow @ 0x1C002C460 (IsDesktopWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C007CD8C (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C007CDBC (GreTransferDwmStateToSpriteState.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C007ECB0 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1C007ED24 (GreUpdateSpriteVisRgn.c)
 *     MagpDecomposeDesktop @ 0x1C007F098 (MagpDecomposeDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1C007F1FC (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 v6; // rbx
  char v7; // bp
  int v8; // eax

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) & 1) != 0 )
  {
    v3 = a2 != 0 ? 0x10 : 0;
    MagpDecomposeDesktop(gMagnContext, a1);
    v4 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v4 + gSharedInfo[1] + 24) == 1 )
      {
        v6 = *(_QWORD *)(gpKernelHandleTable + 24 * v4);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v6, a1) )
        {
          v7 = v3 + 2;
          LOBYTE(v8) = IsDesktopWindow(v6);
          if ( v8 )
          {
            v7 |= 4u;
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 1) != 0 )
          {
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v6 + 16),
              *(struct tagQ **)(*(_QWORD *)(v6 + 16) + 432LL),
              0x10u,
              (struct tagWND *)v6,
              0,
              0LL,
              0LL,
              0LL);
          }
          ComposeWindow((struct tagWND *)v6, v7);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= giheLast );
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(gpDispInfo + 40LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
