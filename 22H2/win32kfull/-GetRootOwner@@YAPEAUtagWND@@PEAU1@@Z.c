/*
 * XREFs of ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00952FC
 * Callers:
 *     SetWindowGroupBand @ 0x1C002567C (SetWindowGroupBand.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0025CC8 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C00951EC (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C00AE74C (_anonymous_namespace_--EligibleWindow.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021EBEC (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00261E4 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetRootOwner(struct tagWND *a1)
{
  struct tagWND *RealOwner; // rax
  __int64 v3; // r8

  while ( 1 )
  {
    RealOwner = GetRealOwner(a1);
    if ( !RealOwner || *(char *)(*((_QWORD *)RealOwner + 5) + 19LL) < 0 )
      break;
    a1 = RealOwner;
  }
  return (struct tagWND *)v3;
}
