/*
 * XREFs of UpdateSprite @ 0x1C0020D60
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C0020688 (_SetLayeredWindowAttributes.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     OffsetWindow @ 0x1C0084A28 (OffsetWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 *     UpdateSpriteArea @ 0x1C010C8C8 (UpdateSpriteArea.c)
 *     xxxCompositedPaint @ 0x1C0239C94 (xxxCompositedPaint.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0020E98 (GreUpdateSprite.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0020F78 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall UpdateSprite(
        HDEV a1,
        const struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  int v14; // eax
  _BYTE v17[144]; // [rsp+90h] [rbp-D8h] BYREF

  memset(v17, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v17);
  v14 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreUpdateSprite(
                         a1,
                         *(HWND *)a2,
                         0LL,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         (struct tagMINIWINDOWINFO *)v17,
                         v14,
                         0) == 0
       ? 0x803F0001
       : 0;
}
