/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C010ADC8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     SpbCheckPwnd @ 0x1C0004DF4 (SpbCheckPwnd.c)
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C010AE8C (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  char v3; // al

  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( a2 )
  {
    if ( (v3 & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0);
      SetVisible(a1, 1u);
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckPwnd(a1);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      SetOrClrWF(1, a1, 0x108u, 1);
    }
  }
  else if ( (v3 & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheckPwnd(a1);
    SetRedrawProp(a1, 1);
    SetVisible(a1, 2 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1));
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
}
