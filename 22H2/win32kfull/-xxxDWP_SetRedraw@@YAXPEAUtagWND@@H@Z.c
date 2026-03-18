/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00C5F30
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 * Callees:
 *     SpbCheckPwnd @ 0x1C001390C (SpbCheckPwnd.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetRedrawProp @ 0x1C00C638C (SetRedrawProp.c)
 *     SetVisible @ 0x1C00EBC94 (SetVisible.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a1 + 5);
  if ( a2 )
  {
    if ( (*(_BYTE *)(v2 + 31) & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0LL);
      SetVisible(a1);
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckPwnd(a1);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      SetOrClrWF(1LL, a1, 264LL, 1LL);
    }
  }
  else if ( (*(_BYTE *)(v2 + 31) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheckPwnd(a1);
    SetRedrawProp(a1, 1LL);
    SetVisible(a1);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
}
