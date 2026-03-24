/*
 * XREFs of zzzDecomposeDesktop @ 0x1C00EAD8C
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     zzzDwmStartRedirection @ 0x1C00E977C (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00E9970 (xxxDwmStopRedirection.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C002979C (zzzEnableDwmPointerSupport.c)
 *     ComposeWindow @ 0x1C00353BC (ComposeWindow.c)
 *     IsDesktopWindow @ 0x1C004C5F0 (IsDesktopWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00731F0 (GreUpdateSpriteVisRgn.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00EAF08 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00EAF38 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00EAF9C (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00EB0D4 (GreRemoveDisplayDriverRealizations.c)
 *     MagpDecomposeDesktop @ 0x1C00EB5D4 (MagpDecomposeDesktop.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 v6; // rbx
  char v7; // r14
  int v8; // eax

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) & 1) != 0 )
  {
    v3 = a2 != 0 ? 0x10 : 0;
    MagpDecomposeDesktop(*(_QWORD *)&gMagnContext, a1);
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
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(gpDispInfo + 40LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
