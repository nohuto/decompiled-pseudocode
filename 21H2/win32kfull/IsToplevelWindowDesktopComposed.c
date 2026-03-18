/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C006FF18
 * Callers:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C00202CC (ComposeWindowIfNeeded.c)
 *     DefSetText @ 0x1C00689C0 (DefSetText.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C0077740 (EditionUpdateCursorOnMouseMove.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A36F0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     DecomposeWindowIfNeeded @ 0x1C00B3750 (DecomposeWindowIfNeeded.c)
 *     xxxDWP_DoNCActivate @ 0x1C00BABE4 (xxxDWP_DoNCActivate.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C8EC0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00CC5FC (xxxGetTitleBarInfoEx.c)
 *     xxxRecreateSmallIcons @ 0x1C0158A28 (xxxRecreateSmallIcons.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C016DFC0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C0205BE8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C023DA38 (xxxDrawAnimatedRects.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    DesktopWindow = GetDesktopWindow(a1);
    if ( v4 == DesktopWindow )
      return (unsigned int)IsWindowDesktopComposed(v3) != 0;
  }
  return v1;
}
