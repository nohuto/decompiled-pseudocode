/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0031D34
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0031E00 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     SetVisible @ 0x1C004BD40 (SetVisible.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0072764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SpbCheckPwnd @ 0x1C021A7A4 (SpbCheckPwnd.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  char v3; // cl

  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( a2 )
  {
    if ( (v3 & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0);
      SetVisible(a1);
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckPwnd(a1);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
      SetOrClrWF(1LL, a1, 264LL, 1LL);
    }
  }
  else if ( (v3 & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheckPwnd(a1);
    SetRedrawProp(a1, 1);
    SetVisible(a1);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
}
