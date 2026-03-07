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
