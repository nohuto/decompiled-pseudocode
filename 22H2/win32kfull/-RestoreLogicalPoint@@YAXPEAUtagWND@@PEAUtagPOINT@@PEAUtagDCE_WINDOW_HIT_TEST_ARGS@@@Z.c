/*
 * XREFs of ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C01673A4
 * Callers:
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C01673A4 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0167424 (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 * Callees:
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006B720 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C01673A4 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     DCEHitTestWindow @ 0x1C01E4674 (DCEHitTestWindow.c)
 */

void __fastcall RestoreLogicalPoint(struct tagWND **a1, struct tagPOINT *a2, struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  struct tagPOINT *v6; // rdx
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v7; // r8

  if ( a1 )
  {
    if ( a1 != (struct tagWND **)GetDesktopWindow((__int64)a1) )
    {
      RestoreLogicalPoint(a1[13], v6, v7);
      if ( a1[27] )
      {
        if ( (*((_DWORD *)a3 + 8) & 4) == 0 && !(unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)a1) )
          DCEHitTestWindow((char *)a1[5] + 88, a1[27], a2, *((_QWORD *)a3 + 5));
      }
    }
  }
}
