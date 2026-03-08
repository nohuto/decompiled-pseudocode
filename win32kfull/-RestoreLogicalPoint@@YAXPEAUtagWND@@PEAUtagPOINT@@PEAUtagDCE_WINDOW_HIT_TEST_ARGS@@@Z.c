/*
 * XREFs of ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00E3758
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00E3758 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0049D3C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00E3758 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01446E8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

void __fastcall RestoreLogicalPoint(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS **a3)
{
  struct tagPOINT *v6; // rdx
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v7; // r8

  if ( a1 )
  {
    if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
    {
      RestoreLogicalPoint(*((struct tagWND **)a1 + 13), v6, v7);
      if ( *((_QWORD *)a1 + 27) )
      {
        if ( ((_DWORD)a3[4] & 4) == 0 && !(unsigned int)IsCompositionInputWindowForHitTest(a1) )
          DCEHitTestWindow(
            (const struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL),
            *((const struct _D3DMATRIX **)a1 + 27),
            a2,
            a3[5]);
      }
    }
  }
}
